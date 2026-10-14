/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026ca04 FUN_0026ca04 */

void FUN_0026ca04(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_28;
  uint local_24;
  
  iVar1 = sqlite3_user_data();
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = 0xffffffff;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  iVar1 = sqlite3_value_type(*param_3);
  if (iVar1 != 5) {
    local_28 = 0;
    for (iVar1 = 1; iVar1 < param_2; iVar1 = iVar1 + 1) {
      iVar2 = sqlite3_value_type(param_3[iVar1]);
      if (iVar2 == 5) {
        return;
      }
      uVar3 = FUN_0026c800(param_3[local_28],param_3[iVar1],uVar4);
      if (-1 < (int)(uVar3 ^ local_24)) {
        local_28 = iVar1;
      }
    }
    sqlite3_result_value(param_1,param_3[local_28]);
  }
  return;
}


