/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e80ec png_do_write_interlace */

void png_do_write_interlace(uint *param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *local_28;
  uint local_24;
  
  iVar8 = DAT_002e82c0;
  if (5 < param_3) {
    return;
  }
  bVar1 = *(byte *)((int)param_1 + 0xb);
  uVar7 = *param_1;
  puVar2 = param_2;
  if (bVar1 == 2) {
    iVar8 = DAT_002e82ac + 0x2e819b;
    uVar6 = 0;
    uVar5 = 6;
    for (uVar3 = (uint)*(byte *)(DAT_002e82b0 + param_3 + 0x2e8196); uVar4 = (undefined1)uVar6,
        uVar3 < uVar7; uVar3 = uVar3 + *(byte *)(iVar8 + param_3)) {
      uVar6 = uVar6 | ((int)(uint)(byte)param_2[uVar3 >> 2] >> ((~uVar3 & 3) << 1) & 3U) <<
                      (uVar5 & 0xff);
      if (uVar5 == 0) {
        *puVar2 = (char)uVar6;
        puVar2 = puVar2 + 1;
        uVar5 = 6;
        uVar6 = 0;
      }
      else {
        uVar5 = uVar5 - 2;
      }
    }
    if (uVar5 == 6) goto LAB_002e826e;
  }
  else if (bVar1 == 4) {
    iVar8 = DAT_002e82b8 + 0x2e81fb;
    uVar3 = 0;
    uVar6 = 4;
    for (uVar5 = (uint)*(byte *)(DAT_002e82b4 + param_3 + 0x2e81f0); uVar4 = (undefined1)uVar3,
        uVar5 < uVar7; uVar5 = uVar5 + *(byte *)(iVar8 + param_3)) {
      uVar3 = uVar3 | ((int)(uint)(byte)param_2[uVar5 >> 1] >> ((uVar5 & 1) == 0) * '\x04' & 0xfU)
                      << (uVar6 & 0xff);
      if (uVar6 == 0) {
        *puVar2 = (char)uVar3;
        puVar2 = puVar2 + 1;
        uVar6 = 4;
        uVar3 = 0;
      }
      else {
        uVar6 = uVar6 - 4;
      }
    }
    if (uVar6 == 4) goto LAB_002e826e;
  }
  else {
    if (bVar1 != 1) {
      uVar6 = (uint)(bVar1 >> 3);
      local_28 = param_2;
      for (local_24 = (uint)*(byte *)(DAT_002e82bc + param_3 + 0x2e8254); local_24 < uVar7;
          local_24 = local_24 + *(byte *)(iVar8 + 0x2e8263 + param_3)) {
        if (local_28 != param_2 + local_24 * uVar6) {
          memcpy(local_28,param_2 + local_24 * uVar6,uVar6);
        }
        local_28 = local_28 + uVar6;
      }
      goto LAB_002e826e;
    }
    iVar8 = DAT_002e82a8 + 0x2e8149;
    uVar6 = 0;
    uVar5 = 7;
    for (uVar3 = (uint)*(byte *)(DAT_002e82a4 + param_3 + 0x2e813e); uVar4 = (undefined1)uVar6,
        uVar3 < uVar7; uVar3 = uVar3 + *(byte *)(iVar8 + param_3)) {
      uVar6 = uVar6 | ((int)(uint)(byte)param_2[uVar3 >> 3] >> (~uVar3 & 7) & 1U) << (uVar5 & 0xff);
      if (uVar5 == 0) {
        *puVar2 = (char)uVar6;
        puVar2 = puVar2 + 1;
        uVar5 = 7;
        uVar6 = 0;
      }
      else {
        uVar5 = uVar5 - 1;
      }
    }
    if (uVar5 == 7) goto LAB_002e826e;
  }
  *puVar2 = uVar4;
LAB_002e826e:
  uVar7 = __udivsi3(((*param_1 - 1) + (uint)*(byte *)(DAT_002e82c4 + 0x2e82a1 + param_3)) -
                    (uint)*(byte *)(DAT_002e82c4 + param_3 + 0x2e829a));
  bVar1 = *(byte *)((int)param_1 + 0xb);
  *param_1 = uVar7;
  if (bVar1 < 8) {
    uVar7 = bVar1 * uVar7 + 7 >> 3;
  }
  else {
    uVar7 = (bVar1 >> 3) * uVar7;
  }
  param_1[1] = uVar7;
  return;
}


