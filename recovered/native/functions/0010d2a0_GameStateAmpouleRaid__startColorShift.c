/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d2a0 GameStateAmpouleRaid::startColorShift */

/* GameStateAmpouleRaid::startColorShift(CafeObject*) */

void __thiscall
GameStateAmpouleRaid::startColorShift(GameStateAmpouleRaid *this,CafeObject *param_1)

{
  int iVar1;
  _func_void_void_ptr_CafeObject_ptr *p_Var2;
  undefined4 *puVar3;
  
  stopColorShift(this);
  iVar1 = DAT_0010d2d0;
  puVar3 = *(undefined4 **)(DAT_0010d2cc + 0x10d2b4);
  *(CafeObject **)(this + 0xa0) = param_1;
  p_Var2 = *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + 0x10d2be);
  *(undefined4 *)(param_1 + 0x28) = *puVar3;
  CafeObject::addRemoveListener(*(CafeObject **)(this + 0xa0),p_Var2,this);
  return;
}


