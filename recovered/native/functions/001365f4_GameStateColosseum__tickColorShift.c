/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001365f4 GameStateColosseum::tickColorShift */

/* GameStateColosseum::tickColorShift(long) */

void __thiscall GameStateColosseum::tickColorShift(GameStateColosseum *this,long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0xac);
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x28))) {
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) - param_1;
  }
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x118) + 1; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar2 * 4 + *(int *)(this + 0x11c));
    iVar3 = *(int *)(iVar1 + 0x28);
    if (0 < iVar3) {
      *(int *)(iVar1 + 0x28) = iVar3 - param_1;
    }
  }
  return;
}


