/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b924 FUN_0025b924 */

undefined8 FUN_0025b924(byte *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *local_20;
  
  uVar3 = (uint)*param_1;
  local_20 = param_1;
  if ((*param_1 & 0x80) == 0) {
    *param_2 = uVar3;
    param_2[1] = uVar3 & 0x80;
    uVar2 = 1;
  }
  else {
    uVar4 = (uint)param_1[1];
    if ((param_1[1] & 0x80) == 0) {
      *param_2 = uVar4 | (uVar3 & 0x7f) << 7;
      param_2[1] = uVar4 & 0x80;
      uVar2 = 2;
    }
    else {
      bVar1 = param_1[2];
      uVar3 = (uVar3 << 0xe | (uint)bVar1) & DAT_0025ba28;
      if ((bVar1 & 0x80) == 0) {
        *param_2 = uVar3 | (uVar4 & 0x7f) << 7;
        param_2[1] = bVar1 & 0x80;
        uVar2 = 3;
      }
      else {
        bVar1 = param_1[3];
        uVar4 = (uVar4 << 0xe | (uint)bVar1) & DAT_0025ba28;
        if ((bVar1 & 0x80) == 0) {
          *param_2 = uVar4 | uVar3 << 7;
          param_2[1] = bVar1 & 0x80;
          uVar2 = 4;
        }
        else {
          local_20 = (byte *)(uint)param_1[4];
          uVar5 = uVar3 << 0xe | (uint)local_20;
          if ((param_1[4] & 0x80) == 0) {
            *param_2 = uVar5 | uVar4 << 7;
            param_2[1] = uVar3 >> 0x12;
            uVar2 = 5;
          }
          else {
            uVar3 = uVar3 << 7 | uVar4;
            uVar4 = (uint)param_1[5] | uVar4 << 0xe;
            if ((param_1[5] & 0x80) == 0) {
              *param_2 = uVar4 | (DAT_0025ba28 & uVar5) << 7;
              param_2[1] = uVar3 >> 0x12;
              uVar2 = 6;
            }
            else {
              uVar5 = (uint)param_1[6] | uVar5 << 0xe;
              if ((param_1[6] & 0x80) == 0) {
                *param_2 = uVar5 & DAT_0025ba2c | (uVar4 & DAT_0025ba28) << 7;
                param_2[1] = uVar3 >> 0xb;
                uVar2 = 7;
              }
              else {
                uVar5 = uVar5 & DAT_0025ba28;
                uVar4 = (uint)param_1[7] | uVar4 << 0xe;
                if ((param_1[7] & 0x80) == 0) {
                  *param_2 = uVar4 & DAT_0025ba2c | uVar5 << 7;
                  param_2[1] = uVar3 >> 4;
                  uVar2 = 8;
                }
                else {
                  *param_2 = uVar5 << 0xf | (uVar4 & DAT_0025ba28) << 8 | (uint)param_1[8];
                  param_2[1] = uVar3 << 4 | (uint)((int)local_20 << 0x19) >> 0x1c;
                  uVar2 = 9;
                }
              }
            }
          }
        }
      }
    }
  }
  return CONCAT44(local_20,uVar2);
}


