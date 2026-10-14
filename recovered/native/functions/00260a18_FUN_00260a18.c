/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260a18 FUN_00260a18 */

undefined8 FUN_00260a18(byte *param_1,uint *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *local_18;
  uint *local_14;
  undefined4 uStack_10;
  
  bVar1 = param_1[1];
  local_18 = param_1;
  if ((bVar1 & 0x80) == 0) {
    *param_2 = (uint)bVar1 | (*param_1 & 0x7f) << 7;
    uVar2 = 2;
  }
  else if ((param_1[2] & 0x80) == 0) {
    uVar2 = 3;
    *param_2 = ((uint)*param_1 << 0xe | (uint)param_1[2]) & DAT_00260a68 | (bVar1 & 0x7f) << 7;
  }
  else {
    local_14 = param_2;
    uStack_10 = param_3;
    uVar2 = FUN_0025b924(param_1,&local_18);
    pbVar3 = local_18;
    if (local_14 != (uint *)0x0) {
      pbVar3 = (byte *)0xffffffff;
    }
    *param_2 = (uint)pbVar3;
  }
  return CONCAT44(local_18,uVar2);
}


