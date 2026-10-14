/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011aa84 GameStateCafe::tickColorShift */

/* GameStateCafe::tickColorShift(long) */

void __thiscall GameStateCafe::tickColorShift(GameStateCafe *this,long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x58);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x28))) {
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) - param_1;
  }
  return;
}


