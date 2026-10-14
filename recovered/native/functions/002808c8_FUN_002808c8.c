/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002808c8 FUN_002808c8 */

void FUN_002808c8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = sqlite3_value_int(*param_3);
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  iVar1 = FUN_0026599c(param_1,(int)((ulonglong)uVar3 >> 0x20),iVar2,iVar2 >> 0x1f);
  if (iVar1 != 0) {
    sqlite3_randomness(iVar2,iVar1);
    sqlite3_result_blob(param_1,iVar1,iVar2,*(undefined4 *)(DAT_00280900 + 0x2808f8));
  }
  return;
}


