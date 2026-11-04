import pe,capstone
md=capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64)
md.detail=False
def dis(start,end=None,count=None):
    if end is None:
        b=pe.bounds(start); end=b[1] if b else start+200
    code=pe.rd(start,end-start)
    out=[]
    n=0
    for i in md.disasm(code,start):
        out.append("%x: %-28s %s %s"%(i.address,i.bytes.hex(),i.mnemonic,i.op_str))
        n+=1
        if count and n>=count: break
    return "\n".join(out)
