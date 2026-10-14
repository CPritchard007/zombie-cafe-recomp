/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f534 GameStateRaid::startColorShift */

/* GameStateRaid::startColorShift(CafeObject*) */

void __thiscall GameStateRaid::startColorShift(GameStateRaid *this,CafeObject *param_1)

{
  int iVar1;
  _func_void_void_ptr_CafeObject_ptr *p_Var2;
  undefined4 *puVar3;
  
  stopColorShift(this);
  iVar1 = DAT_0017f564;
  puVar3 = *(undefined4 **)(DAT_0017f560 + 0x17f548);
  *(CafeObject **)(this + 0x84) = param_1;
  p_Var2 = *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + 0x17f552);
  *(undefined4 *)(param_1 + 0x28) = *puVar3;
  CafeObject::addRemoveListener(*(CafeObject **)(this + 0x84),p_Var2,this);
  return;
}


