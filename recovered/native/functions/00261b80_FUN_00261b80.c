/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261b80 FUN_00261b80 */

int FUN_00261b80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  if (((((int)(uint)*(byte *)(param_1 + 0x10) < param_2) ||
       (iVar1 = 0, *(byte *)(param_1 + 0x10) == 5)) &&
      (pcVar2 = *(code **)(**(int **)(param_1 + 0x3c) + 0x1c),
      iVar1 = (*pcVar2)(*(int **)(param_1 + 0x3c),param_2,param_3,pcVar2,param_4), iVar1 == 0)) &&
     ((param_2 == 4 || (*(char *)(param_1 + 0x10) != '\x05')))) {
    *(char *)(param_1 + 0x10) = (char)param_2;
  }
  return iVar1;
}


