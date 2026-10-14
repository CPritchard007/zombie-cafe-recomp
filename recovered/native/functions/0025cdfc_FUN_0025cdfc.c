/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025cdfc FUN_0025cdfc */

int FUN_0025cdfc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 * 4 + param_1);
  while ((iVar2 != 0 &&
         ((iVar1 = sqlite3_strnicmp(*(undefined4 *)(iVar2 + 0x18),param_3,param_4), iVar1 != 0 ||
          (*(char *)(*(int *)(iVar2 + 0x18) + param_4) != '\0'))))) {
    iVar2 = *(int *)(iVar2 + 0x1c);
  }
  return iVar2;
}


