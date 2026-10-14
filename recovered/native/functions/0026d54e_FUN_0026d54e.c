/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d54e FUN_0026d54e */

int FUN_0026d54e(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = *(undefined4 *)(*(int *)(param_4 + 0x20) + param_5 * 4);
  iVar5 = 0;
  while( true ) {
    if (*param_2 <= iVar5) {
      return -1;
    }
    pcVar3 = *(char **)(iVar5 * 0x14 + param_2[2]);
    if ((((*pcVar3 == -0x68) &&
         ((int)*(short *)(pcVar3 + 0x1c) == *(int *)(*(int *)(param_4 + 4) + param_5 * 4))) &&
        (*(int *)(pcVar3 + 0x18) == param_3)) &&
       ((puVar1 = (undefined4 *)FUN_0026cf38(param_1), puVar1 != (undefined4 *)0x0 &&
        (iVar2 = sqlite3_stricmp(*puVar1,uVar4), iVar2 == 0)))) break;
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}


