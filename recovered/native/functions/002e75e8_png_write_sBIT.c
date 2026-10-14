/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e75e8 png_write_sBIT */

undefined8 png_write_sBIT(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  byte local_14 [4];
  
  local_14[0] = (byte)param_2;
  local_14[1] = (byte)((uint)param_2 >> 8);
  local_14[2] = (byte)((uint)param_2 >> 0x10);
  local_14[3] = (byte)((uint)param_2 >> 0x18);
  if (param_3 << 0x1e < 0) {
    bVar5 = 8;
    if (param_3 != 3) {
      bVar5 = *(byte *)(param_1 + DAT_002e7670);
    }
    bVar1 = *param_2;
    if ((bVar1 != 0) && (bVar1 <= bVar5)) {
      bVar2 = param_2[1];
      if ((bVar2 != 0) && (bVar2 <= bVar5)) {
        bVar3 = param_2[2];
        if ((bVar3 != 0) && (bVar3 <= bVar5)) {
          iVar4 = 3;
          local_14[0] = bVar1;
          local_14[1] = bVar2;
          local_14[2] = bVar3;
          goto LAB_002e7642;
        }
      }
    }
    iVar4 = DAT_002e7674 + 0x2e761c;
  }
  else {
    bVar5 = param_2[3];
    if ((bVar5 != 0) && (bVar5 <= *(byte *)(param_1 + DAT_002e7670))) {
      iVar4 = 1;
      local_14[0] = bVar5;
LAB_002e7642:
      if (param_3 << 0x1d < 0) {
        bVar5 = param_2[4];
        if ((bVar5 == 0) || (*(byte *)(param_1 + DAT_002e7670) < bVar5)) {
          iVar4 = DAT_002e767c + 0x2e765a;
          goto LAB_002e7658;
        }
        local_14[iVar4] = bVar5;
        iVar4 = iVar4 + 1;
      }
      FUN_002e6ea0(param_1,DAT_002e7680,local_14,iVar4);
      goto LAB_002e766c;
    }
    iVar4 = DAT_002e7678 + 0x2e763c;
  }
LAB_002e7658:
  png_warning(param_1,iVar4);
LAB_002e766c:
  return CONCAT17(local_14[3],
                  CONCAT16(local_14[2],CONCAT15(local_14[1],CONCAT14(local_14[0],param_1))));
}


