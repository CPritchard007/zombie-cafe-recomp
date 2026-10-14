/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002627dc FUN_002627dc */

int FUN_002627dc(int param_1)

{
  int iVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar1 = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 0x4c) = iVar1;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    iVar1 = *(int *)(param_1 + (bVar2 + 6) * 4 + 4);
  }
  return iVar1;
}


