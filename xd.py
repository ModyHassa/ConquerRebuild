import pe,capstone,sys
md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64); md.detail=False
def dis(start,count=60):
    b=pe.bounds(start); end=b[1] if b else start+400
    code=pe.rd(start,end-start)
    for i in md.disasm(code,start):
        print("%x: %-30s %s %s"%(i.address,i.bytes.hex(),i.mnemonic,i.op_str))
        count-=1
        if count<=0: break
if __name__=='__main__':
    dis(int(sys.argv[1],16), int(sys.argv[2]) if len(sys.argv)>2 else 60)
