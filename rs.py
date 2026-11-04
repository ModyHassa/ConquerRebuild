import pe
def s(va,n=120):
    o=pe.va2off(va)
    e=pe.F.index(b'\0',o)
    return pe.F[o:o+min(n,e-o)].decode('latin1')
def ctx(va,before=24,after=64):
    o=pe.va2off(va)
    return pe.F[o-before:o+after]
