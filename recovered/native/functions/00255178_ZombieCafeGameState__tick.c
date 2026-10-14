/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00255178 ZombieCafeGameState::tick */

/* ZombieCafeGameState::tick(long) */

void ZombieCafeGameState::tick(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + DAT_00255194) = 0;
    *(undefined4 *)(iVar1 + 0x4b8) = 0;
    *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + -1;
  }
  return;
}


