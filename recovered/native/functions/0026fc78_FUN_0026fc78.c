/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026fc78 FUN_0026fc78 */

void FUN_0026fc78(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_1c [2];
  
  iVar1 = sqlite3_context_db_handle();
  iVar2 = sqlite3_value_text(*param_3);
  iVar3 = sqlite3_value_text(param_3[1]);
  iVar4 = sqlite3_value_bytes(*param_3);
  if (*(int *)(iVar1 + 0x6c) < iVar4) {
    iVar1 = DAT_0026fd10 + 0x26fcaa;
LAB_0026fcd0:
    sqlite3_result_error(param_1,iVar1,0xffffffff);
  }
  else {
    uVar6 = 0;
    if (param_2 == 3) {
      iVar1 = sqlite3_value_text(param_3[2]);
      if (iVar1 == 0) {
        return;
      }
      local_1c[0] = iVar1;
      iVar4 = FUN_0025b0f4(iVar1,0xffffffff);
      if (iVar4 != 1) {
        iVar1 = DAT_0026fd14 + 0x26fcd2;
        goto LAB_0026fcd0;
      }
      uVar6 = FUN_0025b09c(iVar1,local_1c);
    }
    if ((iVar2 != 0) && (iVar3 != 0)) {
      uVar5 = sqlite3_user_data(param_1);
      uVar6 = FUN_0025ce74(iVar2,iVar3,uVar5,uVar6);
      sqlite3_result_int(param_1,uVar6);
    }
  }
  return;
}


