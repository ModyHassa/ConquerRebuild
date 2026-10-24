import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.*;
import java.io.*;

public class BulkDecompile extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = args.length > 0 ? args[0] : "/tmp/decomp_out.c";
        DecompInterface ifc = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxWidth(160);
        ifc.setOptions(opts);
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(true);
        ifc.setSimplificationStyle("decompile");
        ifc.openProgram(currentProgram);
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(outPath), 1 << 20));
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        long total = currentProgram.getFunctionManager().getFunctionCount();
        long done = 0, failed = 0;
        pw.println("/* Decompiled by Ghidra 12.1.4 | program: " + currentProgram.getName());
        pw.println("   image base: " + currentProgram.getImageBase() + " | functions: " + total + " */\n");
        while (it.hasNext()) {
            if (monitor.isCancelled()) break;
            Function f = it.next();
            if (f.isThunk() || f.isExternal()) continue;
            done++;
            try {
                DecompileResults res = ifc.decompileFunction(f, 45, monitor);
                if (res != null && res.getDecompiledFunction() != null) {
                    String c = res.getDecompiledFunction().getC();
                    if (c != null) { pw.println(c); pw.println(); continue; }
                }
                failed++;
            } catch (Exception e) { failed++; }
            if (done % 2000 == 0) {
                pw.flush();
                println("progress " + done + "/" + total);
            }
        }
        pw.println("\n/* DONE: decompiled=" + (done - failed) + " failed=" + failed + " total=" + total + " */");
        pw.close();
        ifc.dispose();
        println("BULKDECOMPILE_COMPLETE wrote " + outPath);
    }
}
