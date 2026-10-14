/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011aa54 GameStateCafe::startColorShift */

/* GameStateCafe::startColorShift(CafeObject*) */

void __thiscall GameStateCafe::startColorShift(GameStateCafe *this,CafeObject *param_1)

{
  int iVar1;
  int iVar2;
  _func_void_void_ptr_CafeObject_ptr *p_Var3;
  
  stopColorShift(this);
  iVar2 = DAT_0011aa80;
  iVar1 = DAT_0011aa7c;
  *(CafeObject **)(this + 0x58) = param_1;
  p_Var3 = *(_func_void_void_ptr_CafeObject_ptr **)(iVar2 + 0x11aa6c);
  *(undefined4 *)(param_1 + 0x28) = **(undefined4 **)(iVar1 + 0x11aa68);
  CafeObject::addRemoveListener(*(CafeObject **)(this + 0x58),p_Var3,this);
  return;
}


