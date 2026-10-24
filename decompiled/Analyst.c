/* Decompiled by Ghidra 12.1.4 | program: Analyst.dll
   image base: 140a40000 | functions: 130 */


/* public: class CTickAnalyst & __ptr64 __cdecl CTickAnalyst::operator=(class CTickAnalyst const & __ptr64) __ptr64 */

CTickAnalyst * __thiscall CTickAnalyst::operator=(CTickAnalyst *this,CTickAnalyst *param_1)

{
                    /* 0x1000  5  ??4CTickAnalyst@@QEAAAEAV0@AEBV0@@Z */
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  return this;
}




/* public: __cdecl IAnalyst::IAnalyst(void) __ptr64 */

IAnalyst * __thiscall IAnalyst::IAnalyst(IAnalyst *this)

{
                    /* 0x1020  3  ??0IAnalyst@@QEAA@XZ */
  *(undefined ***)this = vftable;
  return this;
}




/* public: __cdecl IAnalyst::IAnalyst(class IAnalyst const & __ptr64) __ptr64 */

IAnalyst * __thiscall IAnalyst::IAnalyst(IAnalyst *this,IAnalyst *param_1)

{
                    /* 0x1030  2  ??0IAnalyst@@QEAA@AEBV0@@Z */
  *(undefined ***)this = vftable;
  return this;
}




/* public: class IAnalyst & __ptr64 __cdecl IAnalyst::operator=(class IAnalyst const & __ptr64) __ptr64 */

IAnalyst * __thiscall IAnalyst::operator=(IAnalyst *this,IAnalyst *param_1)

{
                    /* 0x1040  6  ??4IAnalyst@@QEAAAEAV0@AEBV0@@Z */
  return this;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a41050(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  __uint64 _Var1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_7c8 [32];
  char local_7a8 [8];
  undefined8 local_7a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_798 [48];
  char local_768;
  undefined1 local_767 [1854];
  undefined1 local_29;
  ulonglong local_28;
  
  local_7a0 = 0xfffffffffffffffe;
  local_28 = DAT_140a45070 ^ (ulonglong)auStack_7c8;
  local_768 = '\0';
  local_res18 = param_3;
  local_res20 = param_4;
  memset(local_767,0,0x73f);
  _vsnprintf(&local_768,0x740,param_2,(va_list)&local_res18);
  local_29 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_798,param_1);
  local_7a8[0] = '/';
  _Var1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find(local_798,local_7a8,0,1);
  if (*(__uint64 *)npos_exref == _Var1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_798);
  }
  else {
    tq::log_Save(param_1,&local_768,1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_798);
  }
  return;
}




undefined4 * FUN_140a41150(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 6));
  return param_1;
}




void FUN_140a41190(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140a411aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  return;
}




void FUN_140a411c0(undefined8 *param_1)

{
  *param_1 = CAnalyst::vftable;
  _eh_vector_destructor_iterator_(param_1 + 2,0x40,0x100,FUN_140a41190);
  return;
}




ulonglong FUN_140a41200(longlong param_1,uint param_2,undefined4 param_3,char *param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong extraout_RAX;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  
  if (((param_2 < 0x100) && (param_4 != (char *)0x0)) && (*param_4 != '\0')) {
    lVar1 = (longlong)(int)param_2 * 0x40;
    if (*(int *)(lVar1 + 0x10 + param_1) == 0) {
      *(undefined4 *)(lVar1 + 0x10 + param_1) = param_3;
      pbVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar1 + 0x28 + param_1),param_4);
      if (*(int *)(param_1 + 8) < (int)(param_2 + 1)) {
        *(uint *)(param_1 + 8) = param_2 + 1;
      }
      return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
    }
    log_InlineLogERROR("Duplicate stat index %d",(ulonglong)param_2);
    in_RAX = extraout_RAX;
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_140a41280(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,undefined4 *param_5)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  longlong lVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 8))) {
    lVar2 = (longlong)param_2 * 0x40;
    if (param_3 != (undefined8 *)0x0) {
      in_RAX = *(ulonglong *)(lVar2 + 0x20 + param_1);
      *param_3 = in_RAX;
    }
    if (param_4 != (undefined8 *)0x0) {
      in_RAX = *(ulonglong *)(lVar2 + 0x18 + param_1);
      *param_4 = in_RAX;
    }
    if (param_5 != (undefined4 *)0x0) {
      uVar1 = *(uint *)(lVar2 + 0x14 + param_1);
      in_RAX = (ulonglong)uVar1;
      *param_5 = uVar1;
    }
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  log_InlineLogERROR("GetInfoByIdx failed for index %d");
  return extraout_RAX & 0xffffffffffffff00;
}




void FUN_140a412e0(undefined8 param_1,undefined4 param_2)

{
  FUN_140a41690(param_2);
  return;
}




void FUN_140a412f0(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140a41050(param_2,"f:\\version\\cqserver-78.0.11-1204\\analyst\\analyst.cpp",param_3,param_4);
  FUN_140a41650();
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a41310(longlong param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 auStack_498 [32];
  int local_478;
  int local_470;
  double local_468;
  undefined4 local_460;
  char local_458;
  undefined1 local_457 [1023];
  ulonglong local_58;
  
  local_58 = DAT_140a45070 ^ (ulonglong)auStack_498;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    do {
      if (*(int *)(puVar4 + -4) != 0) {
        uVar2 = FUN_140a41690((int)puVar4[-3]);
        iVar3 = FUN_140a41690((int)puVar4[-2]);
        iVar1 = *(int *)((longlong)puVar4 + -0x1c);
        fVar8 = 0.0;
        if (0 < iVar1) {
          fVar8 = (float)iVar3 / (float)iVar1;
        }
        local_458 = '\0';
        memset(local_457,0,0x3ff);
        puVar7 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar7 = (undefined8 *)*puVar4;
        }
        pcVar6 = "%s, cnt=%ld, tot=%dms, avg=%.2fms, max=%dms";
        local_468 = (double)fVar8;
        local_478 = iVar1;
        local_470 = iVar3;
        local_460 = uVar2;
        _snprintf(&local_458,0x3ff,"%s, cnt=%ld, tot=%dms, avg=%.2fms, max=%dms");
        FUN_140a41050(param_2,&local_458,pcVar6,puVar7);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 8;
    } while (iVar5 < *(int *)(param_1 + 8));
  }
  return;
}




void FUN_140a41460(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    do {
      *(undefined4 *)((longlong)puVar1 + -4) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}




void FUN_140a41490(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 8) <= param_2)) {
    log_InlineLogERROR("TicksAdd failed for index %d");
  }
  else {
    lVar3 = (longlong)param_2 * 0x40;
    piVar1 = (int *)(lVar3 + 0x14 + param_1);
    *piVar1 = *piVar1 + 1;
    plVar2 = (longlong *)(lVar3 + 0x20 + param_1);
    *plVar2 = *plVar2 + param_3;
    if (*(longlong *)(lVar3 + 0x18 + param_1) < param_3) {
      *(longlong *)(lVar3 + 0x18 + param_1) = param_3;
      return;
    }
  }
  return;
}




undefined8 * FUN_140a414d0(undefined8 *param_1)

{
  *param_1 = CAnalyst::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  _eh_vector_constructor_iterator_(param_1 + 2,0x40,0x100,FUN_140a41150,FUN_140a41190);
  return param_1;
}




undefined8 * FUN_140a41530(undefined8 *param_1,uint param_2)

{
  *param_1 = CAnalyst::vftable;
  _eh_vector_destructor_iterator_(param_1 + 2,0x40,0x100,FUN_140a41190);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140a415a0(void)

{
  if ((DAT_140a490a0 & 1) == 0) {
    DAT_140a490a0 = DAT_140a490a0 | 1;
    _DAT_140a45090 = CAnalyst::vftable;
    _DAT_140a45098 = 0;
    _eh_vector_constructor_iterator_(&DAT_140a450a0,0x40,0x100,FUN_140a41150,FUN_140a41190);
    atexit(FUN_140a426e0);
  }
  return &DAT_140a45090;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class IAnalyst * __ptr64 __cdecl Analyst(void) */

IAnalyst * __cdecl Analyst(void)

{
  if ((DAT_140a490a0 & 1) == 0) {
    DAT_140a490a0 = DAT_140a490a0 | 1;
    _DAT_140a45090 = CAnalyst::vftable;
    _DAT_140a45098 = 0;
    _eh_vector_constructor_iterator_(&DAT_140a450a0,0x40,0x100,FUN_140a41150,FUN_140a41190);
    atexit(FUN_140a426e0);
  }
  return (IAnalyst *)&DAT_140a45090;
}




uint FUN_140a41650(void)

{
  DAT_140a490a4 = tq::TimeGet(0);
  return DAT_140a490a4 & 0xffffff00;
}




longlong FUN_140a41670(void)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return (ulonglong)uVar1 - (ulonglong)DAT_140a490a4;
}




undefined4 FUN_140a41690(undefined4 param_1)

{
  return param_1;
}




int FUN_140a416a0(void)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return uVar1 - DAT_140a490a4;
}




/* public: void __cdecl CTickAnalyst::Finish(void) __ptr64 */

void __thiscall CTickAnalyst::Finish(CTickAnalyst *this)

{
  ulong uVar1;
  
                    /* 0x16c0  9  ?Finish@CTickAnalyst@@QEAAXXZ */
  uVar1 = tq::TimeGet(0);
  *(ulonglong *)(this + 8) = (ulonglong)uVar1 - (ulonglong)DAT_140a490a4;
  return;
}




/* public: __int64 __cdecl CTickAnalyst::GetUsedTicks(void)const __ptr64 */

__int64 __thiscall CTickAnalyst::GetUsedTicks(CTickAnalyst *this)

{
                    /* 0x16f0  11  ?GetUsedTicks@CTickAnalyst@@QEBA_JXZ */
  return *(longlong *)(this + 8) - *(longlong *)(this + 0x10);
}




/* public: void __cdecl CTickAnalyst::Start(void) __ptr64 */

void __thiscall CTickAnalyst::Start(CTickAnalyst *this)

{
  ulong uVar1;
  
                    /* 0x1700  12  ?Start@CTickAnalyst@@QEAAXXZ */
  uVar1 = tq::TimeGet(0);
  *(ulonglong *)(this + 0x10) = (ulonglong)uVar1 - (ulonglong)DAT_140a490a4;
  return;
}




/* public: __cdecl CTickAnalyst::CTickAnalyst(int) __ptr64 */

CTickAnalyst * __thiscall CTickAnalyst::CTickAnalyst(CTickAnalyst *this,int param_1)

{
  ulong uVar1;
  
                    /* 0x1730  1  ??0CTickAnalyst@@QEAA@H@Z */
  *(int *)this = param_1;
  uVar1 = tq::TimeGet(0);
  *(ulonglong *)(this + 0x10) = (ulonglong)uVar1 - (ulonglong)DAT_140a490a4;
  return this;
}




/* public: __cdecl CTickAnalyst::~CTickAnalyst(void) __ptr64 */

void __thiscall CTickAnalyst::~CTickAnalyst(CTickAnalyst *this)

{
  ulong uVar1;
  IAnalyst *pIVar2;
  
                    /* 0x1760  4  ??1CTickAnalyst@@QEAA@XZ */
  uVar1 = tq::TimeGet(0);
  *(ulonglong *)(this + 8) = (ulonglong)uVar1 - (ulonglong)DAT_140a490a4;
  pIVar2 = Analyst();
  if (pIVar2 != (IAnalyst *)0x0) {
    (**(code **)(*(longlong *)pIVar2 + 0x20))(pIVar2,*(undefined4 *)this,*(longlong *)(this + 8) - *(longlong *)(this + 0x10));
  }
  return;
}




/* public: int __cdecl CTickAnalyst::GetUsedMS(void)const __ptr64 */

int __thiscall CTickAnalyst::GetUsedMS(CTickAnalyst *this)

{
                    /* 0x17b0  10  ?GetUsedMS@CTickAnalyst@@QEBAHXZ */
  return *(int *)(this + 8) - *(int *)(this + 0x10);
}




/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl exception::`vector deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl std::exception::`vector deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl logic_error::`vector deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl type_info::`vector deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2008 Release */

type_info * FID_conflict__vector_deleting_destructor_(type_info *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    type_info::_type_info_dtor_internal_method(param_1);
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_(param_1,0x18,*(int *)(param_1 + -8),type_info::_type_info_dtor_internal_method);
    if ((param_2 & 1) != 0) {
      operator_delete(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}




undefined8 FUN_140a41870(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  uVar1 = *(uint *)(lVar2 + 4);
  uVar3 = uVar1 & 2;
  if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
    uVar3 = uVar1 & 1;
  }
  if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return 1;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140a45070) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 FUN_140a4193c(undefined8 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}




/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl __ArrayUnwind(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl _eh_vector_destructor_iterator_(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  pvVar1 = (void *)(uVar3 * param_2 + (longlong)param_1);
  while( true ) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release */

longlong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = (ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar2 + 3) & 0xf) != 0) {
    lVar1 = (longlong)(int)(*(byte *)(lVar2 + 3) & 0xfffffff0);
  }
  return lVar1;
}




/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release */

undefined8 __GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}




/* Library Function - Single Match
    void __cdecl `eh vector constructor iterator'(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64),void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl _eh_vector_constructor_iterator_(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4,_func_void_void_ptr *param_5)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    (*param_4)(param_1);
    param_1 = (void *)((longlong)param_1 + param_2);
  }
  return;
}




/* Library Function - Single Match
    _onexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  undefined8 uVar2;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = _decode_pointer(DAT_140a49650);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140a49650);
    local_res18[0] = _decode_pointer(DAT_140a49648);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140a49650 = _encode_pointer(local_res10);
    DAT_140a49648 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}




/* Library Function - Single Match
    atexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




bool FUN_140a41bd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140a49648 = _encode_pointer(puVar1);
  DAT_140a49650 = DAT_140a49648;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140a42188();
    atexit(FUN_140a421c0);
    atexit((_func_5014 *)&LAB_140a4217c);
  }
  return puVar1 == (undefined8 *)0x0;
}




/* Library Function - Single Match
    _CRT_INIT
   
   Library: Visual Studio 2008 Release */

undefined8 _CRT_INIT(undefined8 param_1,int param_2,undefined8 param_3)

{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  BOOL BVar5;
  void *pvVar6;
  longlong *_Memory;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
  pvVar1 = StackBase;
  bVar2 = false;
  if (param_2 == 0) {
    if (DAT_140a490a8 < 1) {
      return 0;
    }
    DAT_140a490a8 = DAT_140a490a8 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140a49638 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140a49638;
        pvVar3 = DAT_140a49638;
      }
      DAT_140a49638 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140a41caa;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140a41caa:
    if (DAT_140a49630 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140a49650);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140a49648);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140a49650);
            plVar12 = (longlong *)_decode_pointer(DAT_140a49648);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140a49648 = _encoded_null();
        DAT_140a49650 = DAT_140a49648;
      }
      DAT_140a49630 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140a49638 = (void *)0x0;
        UNLOCK();
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  else if (param_2 == 1) {
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140a49638 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140a49638;
        pvVar3 = DAT_140a49638;
      }
      DAT_140a49638 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140a41dd3;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140a41dd3:
    if (DAT_140a49630 == 0) {
      DAT_140a49630 = 1;
      iVar4 = _initterm_e(&DAT_140a431b0,&DAT_140a431c0);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140a431a0,&DAT_140a431a8);
      DAT_140a49630 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140a49638 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140a49640 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140a49640), BVar5 != 0)) {
      (*DAT_140a49640)(param_1,2,param_3);
    }
    DAT_140a490a8 = DAT_140a490a8 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140a41f4c) */
/* WARNING: Removing unreachable block (ram,0x000140a41ee3) */
/* WARNING: Removing unreachable block (ram,0x000140a41f87) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(HMODULE param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140a490a8 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140a45084 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140a45084 = 0xffffffff;
      return 0;
    }
    uVar1 = DllMain(param_1,param_2);
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      DllMain(param_1,0);
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140a45084 = 0xffffffff;
  return uVar2;
}




void entry(HMODULE param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  __DllMainCRTStartup(param_1,param_2,param_3,param_4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_gsfailure
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  HANDLE hProcess;
  DWORD64 unaff_retaddr;
  uintptr_t local_res8 [4];
  PVOID local_48;
  ulonglong local_40;
  PRUNTIME_FUNCTION local_38;
  DWORD64 local_30;
  DWORD64 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res8[0] = _StackCookie;
  RtlCaptureContext(&DAT_140a49150);
  local_30 = DAT_140a49248;
  local_38 = RtlLookupFunctionEntry(DAT_140a49248,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140a491e8 = local_res8;
    DAT_140a49248 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140a49150,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140a490c0 = DAT_140a49248;
  _DAT_140a491d0 = local_res8[0];
  _DAT_140a490b0 = 0xc0000409;
  _DAT_140a490b4 = 1;
  local_20 = DAT_140a45070;
  local_18 = DAT_140a45078;
  DAT_140a49148 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140a43568);
  if (DAT_140a49148 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_140a42188(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140a43760; puVar1 < &DAT_140a43760; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140a421c0(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140a43770; puVar1 < &DAT_140a43770; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* Library Function - Single Match
    _ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x20b);
  }
  return uVar1;
}




/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)(pImageBase + (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) && (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}




/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  uint uVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  IMAGE_DOS_HEADER *pImageBase;
  
  pImageBase = &IMAGE_DOS_HEADER_140a40000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140a40000);
  uVar2 = 0;
  if (BVar1 != 0) {
    p_Var3 = _FindPESection((PBYTE)pImageBase,(longlong)pTarget - (longlong)pImageBase);
    uVar2 = 0;
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = ~(p_Var3->Characteristics >> 0x1f) & 1;
    }
  }
  return uVar2;
}




/* Library Function - Single Match
    DllMain
   
   Library: Visual Studio 2008 Release */

undefined8 DllMain(HMODULE param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls(param_1);
  }
  return 1;
}




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __security_init_cookie(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  if (DAT_140a45070 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140a45070 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140a45070 == 0x2b992ddfa232) {
      DAT_140a45070 = 0x2b992ddfa233;
    }
  }
  DAT_140a45078 = ~DAT_140a45070;
  return;
}




void Unwind_140a42430(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x30));
  return;
}




void Unwind_140a42450(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a42470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a42490(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(*(longlong *)(param_2 + 0x40) + 0x10),0x40,0x100,FUN_140a41190);
  return;
}




void Unwind_140a424c0(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(*(longlong *)(param_2 + 0x50) + 0x10),0x40,0x100,FUN_140a41190);
  return;
}




void Unwind_140a424f0(undefined8 param_1,longlong param_2)

{
  _eh_vector_destructor_iterator_((void *)(*(longlong *)(param_2 + 0x40) + 0x10),0x40,0x100,FUN_140a41190);
  return;
}




void Unwind_140a42520(void)

{
  DAT_140a490a0 = DAT_140a490a0 & 0xfffffffe;
  return;
}




void Unwind_140a42540(void)

{
  _eh_vector_destructor_iterator_(&DAT_140a450a0,0x40,0x100,FUN_140a41190);
  return;
}




void Unwind_140a42580(void)

{
  _eh_vector_destructor_iterator_(&DAT_140a450a0,0x40,0x100,FUN_140a41190);
  return;
}




/* Library Function - Single Match
    int `void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))'::`1'::filt$0
   
   Library: Visual Studio 2005 Release */

undefined4 `void___cdecl___ArrayUnwind(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::__l1::filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x28) = param_1;
  *(undefined8 *)(param_2 + 0x30) = **(undefined8 **)(param_2 + 0x28);
  if (**(int **)(param_2 + 0x30) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}




/* Library Function - Single Match
    int `void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))'::`1'::fin$0
   
   Library: Visual Studio 2005 Release */

void `void___cdecl_`eh_vector_destructor_iterator'(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::__l1::fin_0
               (undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x20) == 0) {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),*(int *)(param_2 + 0x70),*(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}




void FUN_140a4261a(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x20) == 0) {
    __ArrayUnwind(*(void **)(param_2 + 0x50),*(__uint64 *)(param_2 + 0x58),*(int *)(param_2 + 0x24),*(_func_void_void_ptr **)(param_2 + 0x70));
  }
  return;
}




void FUN_140a42647(void)

{
  _unlock(8);
  return;
}




void FUN_140a42660(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a42690(void)

{
  _DAT_140a45084 = 0xffffffff;
  return;
}




bool FUN_140a426b0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a426e0(void)

{
  _DAT_140a45090 = CAnalyst::vftable;
  _eh_vector_destructor_iterator_(&DAT_140a450a0,0x40,0x100,FUN_140a41190);
  return;
}




/* DONE: decompiled=69 failed=0 total=130 */
