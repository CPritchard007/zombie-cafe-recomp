/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b32dc FUN_002b32dc */

void FUN_002b32dc(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_002b32fc;
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x84) = 1;
  piVar3 = (int *)(iVar2 + 0x88);
  *piVar3 = *piVar3 + -1;
  puts((char *)(iVar1 + 0x2b32f2));
  return;
}


