import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import java.io.*;

public class TargetedDecompile extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = args[0];
        long start = Long.parseLong(args[1].replace("0x", ""), 16);
        long end   = Long.parseLong(args[2].replace("0x", ""), 16);
        DecompInterface ifc = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxWidth(160);
        ifc.setOptions(opts);
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(true);
        ifc.setSimplificationStyle("decompile");
        ifc.openProgram(currentProgram);
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(outPath), 1 << 20));
        pw.println("/* Targeted decompile " + currentProgram.getName()
                 + " window [" + Long.toHexString(start) + "," + Long.toHexString(end) + ") */\n");
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int done = 0, failed = 0;
        while (it.hasNext()) {
            if (monitor.isCancelled()) break;
            Function f = it.next();
            long ea = f.getEntryPoint().getOffset();
            if (ea < start || ea >= end) continue;
            if (f.isThunk() || f.isExternal()) continue;
            done++;
            try {
                DecompileResults res = ifc.decompileFunction(f, 90, monitor);
                if (res != null && res.getDecompiledFunction() != null) {
                    String c = res.getDecompiledFunction().getC();
                    if (c != null) { pw.println(c); pw.println(); continue; }
                }
                failed++;
                pw.println("/* FAILED: " + f.getName() + " @ " + f.getEntryPoint() + " */");
            } catch (Exception e) { failed++; }
        }
        pw.flush(); pw.close();
        println("TARGETED_DONE wrote " + outPath + " funcs=" + done + " failed=" + failed);
    }
}
