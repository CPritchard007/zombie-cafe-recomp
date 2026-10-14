/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278a42 FUN_00278a42 */

void FUN_00278a42(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 local_dc;
  undefined1 local_d8 [8];
  undefined1 *local_d0;
  undefined1 *local_cc;
  undefined1 local_a8 [8];
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined1 local_78 [8];
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  local_a0 = &local_48;
  local_dc = 0;
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  local_3c = puVar1[3];
  uStack_38 = puVar1[4];
  uStack_34 = puVar1[5];
  local_30 = puVar1[6];
  uStack_2c = puVar1[7];
  uStack_28 = puVar1[8];
  local_24 = puVar1[9];
  uStack_20 = puVar1[10];
  uStack_1c = puVar1[0xb];
  local_d8[0] = 0x45;
  local_d0 = local_a8;
  local_cc = local_78;
  local_a8[0] = 0x50;
  local_9c = **(undefined4 **)(*(int *)(param_2 + 0x10) + 8);
  local_78[0] = 0x4e;
  local_6c = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 8) + 0x14);
  local_70 = local_a0;
  local_30 = FUN_002786c2(param_1,local_a0,&local_dc);
  local_48 = CONCAT31(local_48._1_3_,0x84);
  if (param_4 == 0) {
    FUN_00278ac2(param_1,local_d8,param_3,param_5);
  }
  else {
    FUN_002788a0();
  }
  FUN_002627fe(param_1,local_dc);
  return;
}


