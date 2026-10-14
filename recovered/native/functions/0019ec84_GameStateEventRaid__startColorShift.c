/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ec84 GameStateEventRaid::startColorShift */

/* GameStateEventRaid::startColorShift(CafeObject*) */

void __thiscall GameStateEventRaid::startColorShift(GameStateEventRaid *this,CafeObject *param_1)

{
  int iVar1;
  _func_void_void_ptr_CafeObject_ptr *p_Var2;
  undefined4 *puVar3;
  
  stopColorShift(this);
  iVar1 = DAT_0019ecb4;
  puVar3 = *(undefined4 **)(DAT_0019ecb0 + 0x19ec98);
  *(CafeObject **)(this + 0x9c) = param_1;
  p_Var2 = *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + 0x19eca2);
  *(undefined4 *)(param_1 + 0x28) = *puVar3;
  CafeObject::addRemoveListener(*(CafeObject **)(this + 0x9c),p_Var2,this);
  return;
}


