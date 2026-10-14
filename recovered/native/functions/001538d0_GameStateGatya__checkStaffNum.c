/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001538d0 GameStateGatya::checkStaffNum */

/* GameStateGatya::checkStaffNum() */

undefined4 __thiscall GameStateGatya::checkStaffNum(GameStateGatya *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (((int)*(short *)((*(int *)(iVar1 + 0x680) + -1) * 2 + **(int **)(DAT_00153924 + 0x1538ea)) <=
       *(int *)(iVar1 + DAT_00153920 + 4) + 1) &&
     (*(int *)(iVar1 + 0x5b8) <= *(int *)(iVar1 + 0x5a4) + 1)) {
    printf((char *)(DAT_00153928 + 0x15390e));
    return 0;
  }
  printf((char *)(DAT_0015392c + 0x15391a));
  return 1;
}


