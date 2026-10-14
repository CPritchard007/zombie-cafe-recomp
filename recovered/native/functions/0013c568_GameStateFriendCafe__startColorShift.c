/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c568 GameStateFriendCafe::startColorShift */

/* GameStateFriendCafe::startColorShift(CafeObject*) */

void __thiscall GameStateFriendCafe::startColorShift(GameStateFriendCafe *this,CafeObject *param_1)

{
  int iVar1;
  _func_void_void_ptr_CafeObject_ptr *p_Var2;
  undefined4 *puVar3;
  
  stopColorShift(this);
  iVar1 = DAT_0013c598;
  puVar3 = *(undefined4 **)(DAT_0013c594 + 0x13c57c);
  *(CafeObject **)(this + 200) = param_1;
  p_Var2 = *(_func_void_void_ptr_CafeObject_ptr **)(iVar1 + 0x13c586);
  *(undefined4 *)(param_1 + 0x28) = *puVar3;
  CafeObject::addRemoveListener(*(CafeObject **)(this + 200),p_Var2,this);
  return;
}


