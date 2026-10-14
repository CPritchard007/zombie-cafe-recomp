/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a99fc GameStateEventRaid2::startColorShift */

/* GameStateEventRaid2::startColorShift(CafeObject*) */

void __thiscall GameStateEventRaid2::startColorShift(GameStateEventRaid2 *this,CafeObject *param_1)

{
  int iVar1;
  _func_void_void_ptr_CafeObject_ptr *p_Var2;
  undefined4 *puVar3;
  
  stopColorShift(this);
  iVar1 = DAT_001a9a2c;
  puVar3 = *(undefined4 **)(DAT_001a9a28 + 0x1a9a10);
  *(CafeObject **)(this + 0xb8) = param_1;
  p_Var2 = *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + 0x1a9a1a);
  *(undefined4 *)(param_1 + 0x28) = *puVar3;
  CafeObject::addRemoveListener(*(CafeObject **)(this + 0xb8),p_Var2,this);
  return;
}


