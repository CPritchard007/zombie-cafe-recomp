/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b414 sqlite3_status */

int sqlite3_status(uint param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 10) {
    iVar2 = DAT_0026b444 + 0x26b42c;
    uVar3 = *(undefined4 *)(param_1 * 4 + iVar2);
    *param_2 = uVar3;
    iVar1 = (param_1 + 10) * 4;
    *param_3 = *(undefined4 *)(iVar1 + iVar2);
    if (param_4 != 0) {
      *(undefined4 *)(iVar1 + iVar2) = uVar3;
      param_4 = 0;
    }
  }
  else {
    param_4 = FUN_0026adf0(DAT_0026b440);
  }
  return param_4;
}


