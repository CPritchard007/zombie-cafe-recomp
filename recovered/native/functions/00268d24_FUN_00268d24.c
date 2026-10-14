/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268d24 FUN_00268d24 */

int FUN_00268d24(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *param_1;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x10) + 0x1c);
  iVar4 = 0;
  if (*(int *)(param_2 + 0x44) != iVar3) {
    puVar1 = (undefined4 *)FUN_00264860();
    iVar4 = DAT_00268da8 + 0x268d48;
    iVar5 = 0;
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[8]) {
      iVar2 = iVar5;
      if (puVar1[5] == iVar3) {
        if (iVar5 == 0) {
          iVar2 = FUN_0026877c(iVar6,DAT_00268dac + 0x268d62,*puVar1);
        }
        else {
          iVar2 = FUN_0026877c(iVar6,iVar4,iVar5);
          FUN_0025fbda(iVar6,iVar5);
        }
      }
      iVar5 = iVar2;
    }
    iVar4 = iVar5;
    if (iVar5 != 0) {
      iVar4 = FUN_0026877c(*param_1,DAT_00268db0 + 0x268d92,iVar5);
      FUN_0025fbda(*param_1,iVar5);
    }
  }
  return iVar4;
}


