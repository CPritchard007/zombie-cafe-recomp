/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00276050 FUN_00276050 */

undefined8 FUN_00276050(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_2 + 0x10);
  do {
    if (iVar3 == 0) {
      return CONCAT44(param_3,param_1);
    }
    iVar4 = 0;
    if (param_3 == 0) {
LAB_00276080:
      uVar2 = FUN_0025d12c(*param_1,*(undefined4 *)(param_2 + 0x44));
      FUN_00275f2c(param_1,0,uVar2);
      FUN_00270900(param_1,iVar3,0xffffffff);
    }
    else {
      for (; iVar4 < *(int *)(iVar3 + 0x24); iVar4 = iVar4 + 1) {
        iVar1 = sqlite3_stricmp(*(undefined4 *)(iVar4 * 4 + *(int *)(iVar3 + 0x20)),param_3);
        if (iVar1 == 0) goto LAB_00276080;
      }
    }
    iVar3 = *(int *)(iVar3 + 0x14);
  } while( true );
}


