/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274ed0 FUN_00274ed0 */

int FUN_00274ed0(undefined4 *param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_1c [2];
  
  iVar1 = FUN_0025c29c();
  iVar2 = FUN_00274878(*param_1,iVar1,local_1c,0);
  if (iVar2 == 0) {
    iVar1 = (param_2 - iVar1) * 5;
    iVar2 = *(int *)(local_1c[0] + 4);
    iVar4 = iVar1 + -5;
    if (iVar4 < 0) {
      FUN_002749b4(local_1c[0]);
      uVar3 = DAT_00274f40;
    }
    else {
      *param_3 = *(byte *)(iVar2 + iVar4);
      if (param_4 != (undefined4 *)0x0) {
        uVar3 = FUN_0025ba30(iVar2 + iVar1 + -4);
        *param_4 = uVar3;
      }
      FUN_002749b4(local_1c[0]);
      uVar3 = DAT_00274f44;
      if (*param_3 - 1 < 5) {
        return 0;
      }
    }
    iVar2 = FUN_0026b4e4(uVar3);
  }
  return iVar2;
}


