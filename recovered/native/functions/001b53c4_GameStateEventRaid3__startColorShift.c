/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b53c4 GameStateEventRaid3::startColorShift */

/* GameStateEventRaid3::startColorShift(CafeObject*) */

void __thiscall GameStateEventRaid3::startColorShift(GameStateEventRaid3 *this,CafeObject *param_1)

{
  int iVar1;
  _func_void_void_ptr_CafeObject_ptr *p_Var2;
  undefined4 *puVar3;
  
  stopColorShift(this);
  iVar1 = DAT_001b53f4;
  puVar3 = *(undefined4 **)(DAT_001b53f0 + 0x1b53d8);
  *(CafeObject **)(this + 0xbc) = param_1;
  p_Var2 = *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + 0x1b53e2);
  *(undefined4 *)(param_1 + 0x28) = *puVar3;
  CafeObject::addRemoveListener(*(CafeObject **)(this + 0xbc),p_Var2,this);
  return;
}


