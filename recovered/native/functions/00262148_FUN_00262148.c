/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262148 FUN_00262148 */

undefined8 FUN_00262148(uint param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint local_20;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  FUN_00261f68();
  local_20 = param_1;
  if ((int)((uint)*(ushort *)((int)puVar1 + 0x16) << 0x1e) < 0) {
    FUN_00262002(param_1);
    uVar2 = 8;
  }
  else {
    if ((int)param_3 < 0) {
      param_3 = puVar1[8] - puVar1[9];
    }
    if (param_2 + DAT_002621c4 < 0xfe01) {
      local_20 = param_2 - 1 & param_2;
      if (local_20 == 0) {
        puVar1[8] = param_2;
        FUN_0025f6b8(puVar1[0x14]);
        puVar1[0x14] = 0;
      }
    }
    uVar2 = FUN_002619f0(*puVar1,puVar1 + 8,param_3);
    puVar1[9] = puVar1[8] - (param_3 & 0xffff);
    if (param_4 != 0) {
      *(ushort *)((int)puVar1 + 0x16) = *(ushort *)((int)puVar1 + 0x16) | 2;
    }
    FUN_00262002(param_1);
  }
  return CONCAT44(local_20,uVar2);
}


