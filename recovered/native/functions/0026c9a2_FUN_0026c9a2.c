/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c9a2 FUN_0026c9a2 */

undefined8 FUN_0026c9a2(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  
  uVar4 = *param_3;
  iVar1 = sqlite3_aggregate_context(param_1,0x28);
  local_1c = param_2;
  if (iVar1 == 0) goto LAB_0026ca02;
  iVar2 = sqlite3_value_type(*param_3);
  if (iVar2 == 5) {
    if (*(short *)(iVar1 + 0x1c) == 0) goto LAB_0026ca02;
LAB_0026c9f4:
    *(undefined4 *)(param_1 + 0x3c) = 1;
  }
  else {
    if (*(short *)(iVar1 + 0x1c) != 0) {
      local_1c = *(undefined4 *)(param_1 + 0x34);
      iVar2 = sqlite3_user_data(param_1);
      iVar3 = FUN_0026c800(iVar1,uVar4,local_1c);
      if (((iVar2 == 0) || (-1 < iVar3)) && ((iVar2 != 0 || (iVar3 < 1)))) goto LAB_0026c9f4;
    }
    FUN_00265734(iVar1,uVar4);
  }
LAB_0026ca02:
  return CONCAT44(local_1c,param_1);
}


