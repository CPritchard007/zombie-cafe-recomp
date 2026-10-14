/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c994 FUN_0027c994 */

int FUN_0027c994(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = *(int *)(*(int *)(iVar2 + 0x10) + 0x14);
  if (iVar1 != 0) {
    if ((*(char *)(iVar2 + 0x34) == '\0') || (*(char *)(iVar1 + 8) != '\0')) {
      FUN_00268e48(param_1,DAT_0027c9d4 + 0x27c9b6,*(char *)(iVar2 + 0x34),iVar1,param_4);
      iVar1 = 1;
    }
    else {
      FUN_0027c61c(iVar1);
      *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x14) = 0;
      FUN_00262044(iVar2);
      iVar1 = 0;
    }
  }
  return iVar1;
}


