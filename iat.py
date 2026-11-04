import pe,struct
def imp(va):
    """given address of IAT slot (target of call qword ptr [rip+x]), return imported name"""
    slot=va-0x140000000
    o=pe.rva2off(slot)
    name_rva=struct.unpack_from('<I',pe.F,o)[0]
    no=pe.rva2off(name_rva)
    s=pe.F[no:no+64].split(b'\0')[0].decode('latin1')
    hint=struct.unpack_from('<H',pe.F,no-2)[0]
    return s
def call_target(insn_addr,insn_len,disp):
    return insn_addr+insn_len+disp
