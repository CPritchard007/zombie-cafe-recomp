/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e282c png_do_read_interlace */

void png_do_read_interlace(uint *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *__dest;
  byte *local_48;
  void *local_44;
  uint local_40;
  int local_38;
  undefined1 auStack_24 [8];
  int local_1c;
  
  piVar7 = *(int **)(DAT_002e2b1c + 0x2e283a);
  local_1c = *piVar7;
  if ((param_2 != 0) && (param_1 != (uint *)0x0)) {
    uVar10 = *param_1;
    uVar8 = *(uint *)(DAT_002e2b20 + param_3 * 4 + 0x2e28ae);
    uVar4 = uVar10 - 1;
    uVar12 = uVar8 * uVar10;
    bVar1 = *(byte *)((int)param_1 + 0xb);
    if (bVar1 == 2) {
      local_48 = (byte *)(param_2 + (uVar4 >> 2));
      pbVar3 = (byte *)(param_2 + (uVar12 - 1 >> 2));
      uVar10 = uVar10 + 3;
      if ((param_4 & 0x10000) == 0) {
        uVar10 = ~uVar10;
        uVar4 = ~(uVar12 + 3);
        uVar6 = 6;
        iVar9 = 2;
        uVar2 = 0;
      }
      else {
        uVar4 = uVar12 + 3;
        iVar9 = -2;
        uVar6 = 0;
        uVar2 = 6;
      }
      uVar11 = (uVar10 & 3) << 1;
      uVar10 = (uVar4 & 3) << 1;
      for (local_40 = 0; local_40 < *param_1; local_40 = local_40 + 1) {
        bVar1 = *local_48;
        for (iVar5 = 0; iVar5 < (int)uVar8; iVar5 = iVar5 + 1) {
          *pbVar3 = (byte)(((int)(uint)bVar1 >> (uVar11 & 0xff) & 3U) << (uVar10 & 0xff)) |
                    (byte)(DAT_002e2b28 >> (6 - uVar10 & 0xff)) & *pbVar3;
          if (uVar10 == uVar6) {
            pbVar3 = pbVar3 + -1;
            uVar10 = uVar2;
          }
          else {
            uVar10 = uVar10 + iVar9;
          }
        }
        if (uVar11 == uVar6) {
          local_48 = local_48 + -1;
          uVar11 = uVar2;
        }
        else {
          uVar11 = uVar11 + iVar9;
        }
      }
    }
    else if (bVar1 == 4) {
      local_48 = (byte *)(param_2 + (uVar4 >> 1));
      pbVar3 = (byte *)(param_2 + (uVar12 - 1 >> 1));
      uVar10 = uVar10 + 1 & 1;
      if ((param_4 & 0x10000) == 0) {
        uVar10 = (uint)(uVar10 == 0) * 4;
        uVar4 = 4;
        uVar2 = uVar4;
        if ((uVar12 + 1 & 1) == 0) {
          uVar6 = 4;
          uVar11 = 0;
        }
        else {
          uVar6 = 0;
          uVar11 = 0;
        }
      }
      else {
        uVar10 = uVar10 << 2;
        uVar6 = (uVar12 + 1 & 1) << 2;
        uVar4 = 0xfffffffc;
        uVar11 = 4;
        uVar2 = 0;
      }
      for (local_44 = (void *)0x0; local_44 < *param_1; local_44 = (void *)((int)local_44 + 1)) {
        bVar1 = *local_48;
        for (local_40 = 0; (int)local_40 < (int)uVar8; local_40 = local_40 + 1) {
          *pbVar3 = (byte)(((int)(uint)bVar1 >> (uVar10 & 0xff) & 0xfU) << (uVar6 & 0xff)) |
                    (byte)(DAT_002e2b2c >> (4 - uVar6 & 0xff)) & *pbVar3;
          if (uVar6 == uVar2) {
            pbVar3 = pbVar3 + -1;
            uVar6 = uVar11;
          }
          else {
            uVar6 = uVar6 + uVar4;
          }
        }
        if (uVar10 == uVar2) {
          local_48 = local_48 + -1;
          uVar10 = uVar11;
        }
        else {
          uVar10 = uVar10 + uVar4;
        }
      }
    }
    else if (bVar1 == 1) {
      local_48 = (byte *)(param_2 + (uVar4 >> 3));
      pbVar3 = (byte *)(param_2 + (uVar12 - 1 >> 3));
      uVar10 = uVar10 + 7;
      uVar4 = 7;
      if ((param_4 & 0x10000) == 0) {
        uVar10 = ~uVar10;
        local_44 = (void *)0x7;
        uVar2 = ~(uVar12 + 7);
        iVar9 = 1;
        uVar4 = 0;
      }
      else {
        uVar2 = uVar12 + 7;
        iVar9 = -1;
        local_44 = (void *)0x0;
      }
      uVar10 = uVar10 & 7;
      uVar2 = uVar2 & 7;
      for (local_40 = 0; local_40 < *param_1; local_40 = local_40 + 1) {
        bVar1 = *local_48;
        for (iVar5 = 0; iVar5 < (int)uVar8; iVar5 = iVar5 + 1) {
          *pbVar3 = (byte)(((int)(uint)bVar1 >> (uVar10 & 0xff) & 1U) << (uVar2 & 0xff)) |
                    (byte)(DAT_002e2b24 >> (7 - uVar2 & 0xff)) & *pbVar3;
          if ((void *)uVar2 == local_44) {
            pbVar3 = pbVar3 + -1;
            uVar2 = uVar4;
          }
          else {
            uVar2 = uVar2 + iVar9;
          }
        }
        if ((void *)uVar10 == local_44) {
          local_48 = local_48 + -1;
          uVar10 = uVar4;
        }
        else {
          uVar10 = uVar10 + iVar9;
        }
      }
    }
    else {
      uVar10 = (uint)(bVar1 >> 3);
      local_44 = (void *)(param_2 + uVar10 * (uVar12 - 1));
      local_48 = (byte *)(param_2 + uVar10 * uVar4);
      for (local_40 = 0; local_40 < *param_1; local_40 = local_40 + 1) {
        memcpy(auStack_24,local_48,uVar10);
        __dest = local_44;
        for (local_38 = 0; local_38 < (int)uVar8; local_38 = local_38 + 1) {
          memcpy(__dest,auStack_24,uVar10);
          __dest = (void *)((int)__dest - uVar10);
        }
        local_44 = (void *)((int)local_44 - uVar10 * (uVar8 & (int)~uVar8 >> 0x1f));
        local_48 = (byte *)((int)local_48 - uVar10);
      }
    }
    bVar1 = *(byte *)((int)param_1 + 0xb);
    *param_1 = uVar12;
    if (bVar1 < 8) {
      uVar12 = uVar12 * bVar1 + 7 >> 3;
    }
    else {
      uVar12 = uVar12 * (bVar1 >> 3);
    }
    param_1[1] = uVar12;
  }
  if (local_1c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


