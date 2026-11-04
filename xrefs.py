import pe,capstone,struct,json,sys,os
md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
md.detail=True
txt=[s for s in pe.SECS if s[0]=='.text'][0]
START=0x140000000+txt[1]; END=START+txt[3]
CACHE='xref_cache.json'
def build():
    xr={}
    code=pe.F[txt[3]:txt[3]+0]
    off=pe.va2off(START)
    data=pe.F[off:off+(END-START)]
    for i in md.disasm(data,START):
        try:
            for op in i.operands:
                if op.type==capstone.x86.X86_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                    t=i.address+i.size+op.mem.disp
                    xr.setdefault(hex(t),[]).append((i.address,i.mnemonic+" "+i.op_str))
        except Exception: pass
    json.dump(xr,open(CACHE,'w'))
    return xr
def get():
    if os.path.exists(CACHE): return {k:v for k,v in json.load(open(CACHE)).items()}
    return build()
if __name__=='__main__':
    xr=build()
    print('refs',len(xr))
