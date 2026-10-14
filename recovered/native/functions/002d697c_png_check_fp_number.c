/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d697c png_check_fp_number */

undefined8 png_check_fp_number(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_3;
  uVar4 = *param_4;
LAB_002d6a58:
  if (param_2 <= uVar4) {
LAB_002d6a5e:
    *param_3 = uVar2;
    *param_4 = uVar4;
    return CONCAT44(param_1,(uVar2 << 0x1c) >> 0x1f);
  }
  bVar1 = *(byte *)(param_1 + uVar4);
  if (bVar1 < 0x3a) {
    if (bVar1 < 0x31) {
      if (bVar1 == 0x2e) {
        uVar3 = 0x10;
      }
      else if (bVar1 < 0x2f) {
        if (bVar1 == 0x2b) {
          uVar3 = 4;
        }
        else {
          if (bVar1 != 0x2d) goto LAB_002d6a5e;
          uVar3 = 0x84;
        }
      }
      else {
        if (bVar1 != 0x30) goto LAB_002d6a5e;
        uVar3 = 8;
      }
    }
    else {
      uVar3 = 0x108;
    }
  }
  else {
    if ((bVar1 != 0x45) && (bVar1 != 0x65)) goto LAB_002d6a5e;
    uVar3 = 0x20;
  }
  uVar5 = (uVar2 & 3) + (uVar3 & 0x3c);
  if (uVar5 == 9) {
    uVar5 = 0x40;
LAB_002d6a1c:
    uVar2 = uVar2 | uVar5;
LAB_002d6a1e:
    uVar2 = uVar2 | uVar3;
  }
  else {
    if (uVar5 < 10) {
      if (uVar5 != 6) {
        if (uVar5 == 8) {
          if ((uVar2 & 0x10) != 0) {
            uVar2 = uVar2 & 0x1c0 | 0x11;
          }
          uVar3 = uVar3 | 0x40;
          goto LAB_002d6a1e;
        }
        if ((uVar5 != 4) || ((uVar2 & 0x3c) != 0)) goto LAB_002d6a5e;
        goto LAB_002d6a1e;
      }
      if ((uVar2 & 0x3c) != 0) goto LAB_002d6a5e;
      uVar3 = 4;
    }
    else {
      if (uVar5 == 0x10) {
        if ((uVar2 & 0x10) == 0) {
          if ((uVar2 & 8) == 0) {
            uVar2 = uVar2 & 0x1c0;
            uVar5 = 1;
            goto LAB_002d6a1c;
          }
          goto LAB_002d6a1e;
        }
        goto LAB_002d6a5e;
      }
      if (uVar5 < 0x11) {
        if (uVar5 != 10) goto LAB_002d6a5e;
        uVar3 = 0x48;
      }
      else {
        if (((uVar5 != 0x20) && (uVar5 != 0x21)) || ((uVar2 & 8) == 0)) goto LAB_002d6a5e;
        uVar2 = uVar2 & 0x1c0;
        uVar3 = 2;
      }
    }
    uVar2 = uVar2 | uVar3;
  }
  uVar4 = uVar4 + 1;
  goto LAB_002d6a58;
}


