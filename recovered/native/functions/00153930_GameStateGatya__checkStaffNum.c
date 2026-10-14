/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00153930 GameStateGatya::checkStaffNum */

/* GameStateGatya::checkStaffNum(int) */

bool __thiscall GameStateGatya::checkStaffNum(GameStateGatya *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  iVar1 = *(int *)(iVar2 + DAT_00153980 + 4) + *(int *)(iVar2 + 0x5a4) + 2 + param_1;
  iVar2 = (int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_00153984 + 0x153956))
          + *(int *)(iVar2 + 0x5b8);
  if (iVar2 < iVar1) {
    printf((char *)(DAT_0015398c + 0x15397a));
  }
  else {
    printf((char *)(DAT_00153988 + 0x15396e));
  }
  return iVar1 <= iVar2;
}


