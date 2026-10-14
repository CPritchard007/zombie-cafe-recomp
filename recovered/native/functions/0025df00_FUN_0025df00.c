/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025df00 FUN_0025df00 */

void FUN_0025df00(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_2c;
  int local_28;
  undefined4 local_1c;
  
  if (param_2 != (int *)0x0) {
    puVar3 = (undefined4 *)param_2[2];
    iVar2 = DAT_0025df44 + 0x25df14;
    for (iVar4 = 0; iVar4 < *param_2; iVar4 = iVar4 + 1) {
      uVar1 = *puVar3;
      memset(&local_2c,0,0x14);
      local_28 = DAT_0025df48 + 0x25df2c;
      local_2c = iVar2;
      local_1c = param_1;
      FUN_0025c882(&local_2c,uVar1);
      puVar3 = puVar3 + 5;
    }
  }
  return;
}


