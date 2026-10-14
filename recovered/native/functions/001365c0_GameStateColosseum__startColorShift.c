/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001365c0 GameStateColosseum::startColorShift */

/* GameStateColosseum::startColorShift(CafeObject*) */

void __thiscall GameStateColosseum::startColorShift(GameStateColosseum *this,CafeObject *param_1)

{
  int iVar1;
  _func_void_void_ptr_CafeObject_ptr *p_Var2;
  undefined4 *puVar3;
  
  stopColorShift(this);
  iVar1 = DAT_001365f0;
  puVar3 = *(undefined4 **)(DAT_001365ec + 0x1365d4);
  *(CafeObject **)(this + 0xac) = param_1;
  p_Var2 = *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + 0x1365de);
  *(undefined4 *)(param_1 + 0x28) = *puVar3;
  CafeObject::addRemoveListener(*(CafeObject **)(this + 0xac),p_Var2,this);
  return;
}


