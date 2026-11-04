import struct
IMG=0x140000000
F=open('conquer_source/Source/MsgServer.exe','rb').read()
pe=struct.unpack_from('<I',F,0x3c)[0]
nsec=struct.unpack_from('<H',F,pe+6)[0]
opt=struct.unpack_from('<H',F,pe+20)[0]
SECS=[]
for i in range(nsec):
    o=pe+24+opt+i*40
    name=F[o:o+8].rstrip(b'\0').decode()
    vs,va,rs,ra=struct.unpack_from('<IIII',F,o+8)
    SECS.append((name,va,vs,ra,rs))
def rva2off(rva):
    for n,va,vs,ra,rs in SECS:
        if va<=rva<va+max(vs,rs): return ra+(rva-va)
    raise KeyError(hex(rva))
def off2rva(off):
    for n,va,vs,ra,rs in SECS:
        if ra<=off<ra+rs: return va+(off-ra)
    raise KeyError(hex(off))
def va2off(va): return rva2off(va-IMG)
def off2va(off): return IMG+off2rva(off)
def rd(va,n): o=va2off(va); return F[o:o+n]
def u32(va): return struct.unpack_from('<I',F,va2off(va))[0]
def u64(va): return struct.unpack_from('<Q',F,va2off(va))[0]

# .pdata function table: RUNTIME_FUNCTION {Begin,End,Unwind}
pd=[s for s in SECS if s[0]=='.pdata'][0]
n=(pd[4])//12
FUNCS=[]
base=pd[3]
for i in range(n):
    b,e,u=struct.unpack_from('<III',F,base+i*12)
    FUNCS.append((IMG+b,IMG+e,u))
FUNCS.sort()
def bounds(va):
    import bisect
    i=bisect.bisect_right([f[0] for f in FUNCS],va)-1
    if i>=0 and FUNCS[i][0]<=va<FUNCS[i][1]: return FUNCS[i][0],FUNCS[i][1]
    return None
