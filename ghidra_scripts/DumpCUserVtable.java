import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.mem.*;
import java.io.*;
import java.util.*;

public class DumpCUserVtable extends GhidraScript {
    DecompInterface dec;
    PrintWriter out;

    String decomp(Function f, int max) {
        try {
            DecompileResults r = dec.decompileFunction(f, 30, monitor);
            if (r != null && r.decompileCompleted()) {
                String s = r.getDecompiledFunction().getC();
                if (s.length() > max) s = s.substring(0, max);
                return s;
            }
        } catch (Exception e) {}
        return "// decompile failed";
    }

    void dumpVtable(Symbol vt, int maxEntries) {
        out.println("\n===== VTABLE " + vt.getName() + " @ " + vt.getAddress() + " =====");
        Address a = vt.getAddress();
        Memory mem = currentProgram.getMemory();
        for (int i = 0; i < maxEntries; i++) {
            try {
                long p = mem.getLong(a.add(i * 8L));
                if (p == 0) { out.println("slot " + i + ": 0"); continue; }
                Address fa = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(p);
                Function f = getFunctionContaining(fa);
                if (f == null) { out.println("slot " + i + " (+" + Integer.toHexString(i*8) + "): " + fa + " not-a-function"); continue; }
                String body = decomp(f, 250).replace("\n", " | ");
                out.println("slot " + i + " (+" + Integer.toHexString(i*8) + "): " + f.getName() + " @ " + fa);
                out.println("    " + body);
            } catch (Exception e) {
                out.println("slot " + i + ": read error " + e);
            }
        }
    }

    @Override
    public void run() throws Exception {
        dec = new DecompInterface();
        dec.openProgram(currentProgram);
        String outPath = getScriptArgs().length > 0 ? getScriptArgs()[0] : "/tmp/cuser_vtable.txt";
        out = new PrintWriter(new BufferedWriter(new FileWriter(outPath)));

        SymbolTable st = currentProgram.getSymbolTable();
        // dump every vtable whose name contains CUser, CNpc, or CFamily etc
        SymbolIterator it = st.getSymbolIterator();
        List<Symbol> userVt = new ArrayList<>();
        while (it.hasNext()) {
            Symbol s = it.next();
            String n = s.getName();
            if (n.startsWith("CUser::vftable") || n.startsWith("`vftable'")) continue;
            if (n.contains("CUser::vftable")) userVt.add(s);
        }
        // also search namespace-based: vftable symbols often named "vftable" under class namespace
        SymbolIterator it2 = st.getSymbolIterator("*vftable*", true);
        while (it2.hasNext()) {
            Symbol s = it2.next();
            String n = s.getName();
            String ns = s.getParentNamespace() != null ? s.getParentNamespace().getName() : "";
            out.println("# candidate vtable: " + ns + "::" + n + " @ " + s.getAddress());
            if (ns.contains("CUser")) userVt.add(s);
        }
        for (Symbol s : userVt) {
            if (monitor.isCancelled()) break;
            dumpVtable(s, 0x300);
        }
        if (userVt.isEmpty()) {
            out.println("!! no CUser vftable symbols found - listing all vftable names:");
            SymbolIterator it3 = st.getSymbolIterator("*vftable*", true);
            int c = 0;
            while (it3.hasNext() && c < 500) { Symbol s = it3.next(); out.println("  " + s.getParentNamespace().getName() + "::" + s.getName()); c++; }
        }
        out.close();
        dec.dispose();
        println("done -> " + outPath);
    }
}
