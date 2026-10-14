/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ecb8 GameStateEventRaid::tickColorShift */

/* GameStateEventRaid::tickColorShift(long) */

void __thiscall GameStateEventRaid::tickColorShift(GameStateEventRaid *this,long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x9c);
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x28))) {
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) - param_1;
  }
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x100) + 1; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar2 * 4 + *(int *)(this + 0x104));
    iVar3 = *(int *)(iVar1 + 0x28);
    if (0 < iVar3) {
      *(int *)(iVar1 + 0x28) = iVar3 - param_1;
    }
  }
  return;
}


