/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c5dc CFColor::interpolate */

/* CFColor::interpolate(long, long, int, int) */

uint CFColor::interpolate(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = CapcomMath::interpolate((uint)param_1 >> 0x18,(uint)param_2 >> 0x18,param_3,param_4);
  if (0x100 < (int)local_24) {
    local_24 = 0x100;
  }
  local_28 = CapcomMath::interpolate(param_1 >> 0x10 & 0xff,param_2 >> 0x10 & 0xff,param_3,param_4);
  if (0x100 < (int)local_28) {
    local_28 = 0x100;
  }
  local_20 = CapcomMath::interpolate(param_1 >> 8 & 0xff,param_2 >> 8 & 0xff,param_3,param_4);
  if (0x100 < (int)local_20) {
    local_20 = 0x100;
  }
  uVar1 = CapcomMath::interpolate(param_1 & 0xff,param_2 & 0xff,param_3,param_4);
  if ((int)uVar1 < 0x101) {
    uVar1 = uVar1 & (int)~uVar1 >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 0xff | ((int)~local_24 >> 0x1f & local_24) << 0x18 |
         ((int)~local_28 >> 0x1f & local_28 & 0xff) << 0x10 |
         (((int)~local_20 >> 0x1f & local_20) << 0x18) >> 0x10;
}


