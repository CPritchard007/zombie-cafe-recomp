/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e2e2c png_read_start_row */

void png_read_start_row(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  png_init_read_transformations();
  if (*(char *)(param_1 + 0x214) == '\0') {
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1c0);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x1c4);
    if (-1 < *(int *)(param_1 + 0x13c) << 0x1e) {
      uVar5 = uVar5 + 7 >> 3;
    }
    *(uint *)(param_1 + 0x1c8) = uVar5;
    uVar2 = __udivsi3((*(int *)(param_1 + 0x1c0) + -1 +
                      (uint)*(byte *)(DAT_002e308c + (uint)*(byte *)(param_1 + DAT_002e3088) +
                                     0x2e2e7e)) -
                      (uint)*(byte *)(DAT_002e308c + 0x2e2e85 +
                                     (uint)*(byte *)(param_1 + DAT_002e3088)));
    *(undefined4 *)(param_1 + 0x1d4) = uVar2;
  }
  uVar5 = (uint)*(byte *)(param_1 + DAT_002e3090);
  uVar6 = *(uint *)(param_1 + 0x13c);
  if (((int)(uVar6 << 0x1d) < 0) && (*(byte *)(param_1 + 0x218) < 8)) {
    uVar5 = 8;
  }
  if ((uVar6 & 0x1000) != 0) {
    cVar1 = *(char *)(param_1 + DAT_002e3094);
    if (cVar1 == '\x03') {
      uVar5 = 0x18;
      if (*(short *)(param_1 + 0x210) != 0) {
        uVar5 = 0x20;
      }
    }
    else if (cVar1 == '\0') {
      if (uVar5 < 8) {
        uVar5 = 8;
      }
      if (*(short *)(param_1 + 0x210) != 0) {
        uVar5 = uVar5 << 1;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)(param_1 + 0x210) != 0)) {
      uVar5 = __divsi3(uVar5 << 2,3);
    }
  }
  if ((int)(uVar6 << 0x16) < 0) {
    if ((uVar6 & 0x1000) == 0) {
      *(uint *)(param_1 + 0x13c) = uVar6 & DAT_002e3098;
    }
    else if (*(byte *)(param_1 + 0x218) < 0x10) {
      uVar5 = uVar5 << 1;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x13c);
  if ((uVar6 & 0x8000) != 0) {
    if (*(byte *)(param_1 + DAT_002e3094) == 0) {
      if ((int)uVar5 < 9) {
        uVar5 = 0x10;
      }
      else {
LAB_002e2f3a:
        uVar5 = 0x20;
      }
    }
    else if (*(byte *)(param_1 + DAT_002e3094) - 2 < 2) {
      if ((int)uVar5 < 0x21) goto LAB_002e2f3a;
      uVar5 = 0x40;
    }
  }
  if ((int)(uVar6 << 0x11) < 0) {
    if ((((*(short *)(param_1 + 0x210) == 0) || ((uVar6 & 0x1000) == 0)) && ((uVar6 & 0x8000) == 0))
       && (cVar1 = *(char *)(param_1 + DAT_002e3094), cVar1 != '\x04')) {
      if ((int)uVar5 < 9) {
        uVar5 = 0x18;
        if (cVar1 == '\x06') goto LAB_002e2f72;
      }
      else {
        uVar5 = 0x30;
        if (cVar1 == '\x06') goto LAB_002e2f7c;
      }
    }
    else if ((int)uVar5 < 0x11) {
LAB_002e2f72:
      uVar5 = 0x20;
    }
    else {
LAB_002e2f7c:
      uVar5 = 0x40;
    }
  }
  if (((int)(uVar6 << 0xb) < 0) &&
     (uVar6 = (uint)*(byte *)(param_1 + DAT_002e309c) * (uint)*(byte *)(param_1 + 0x130),
     (int)uVar5 < (int)uVar6)) {
    uVar5 = uVar6;
  }
  *(char *)(param_1 + DAT_002e30a0) = (char)uVar5;
  *(undefined1 *)(param_1 + DAT_002e30a4) = 0;
  uVar6 = *(int *)(param_1 + 0x1c0) + 7U & 0xfffffff8;
  if ((int)uVar5 < 8) {
    uVar6 = uVar5 * uVar6 + 7 >> 3;
  }
  else {
    uVar6 = (uVar5 >> 3) * uVar6;
  }
  uVar5 = ((int)(uVar5 + 7) >> 3) + uVar6 + 0x31;
  if (*(uint *)(param_1 + 0x374) < uVar5) {
    png_free(param_1,*(undefined4 *)(param_1 + 0x33c),*(uint *)(param_1 + 0x374),0x374,param_4);
    png_free(param_1,*(undefined4 *)(param_1 + 0x388));
    if (*(char *)(param_1 + 0x214) == '\0') {
      uVar2 = png_malloc(param_1,uVar5);
    }
    else {
      uVar2 = png_calloc();
    }
    *(undefined4 *)(param_1 + 0x33c) = uVar2;
    iVar3 = png_malloc(param_1,uVar5);
    *(int *)(param_1 + 0x388) = iVar3;
    uVar6 = *(int *)(param_1 + 0x33c) + 0x20;
    *(uint *)(param_1 + 0x1e4) = uVar6 + ~(uVar6 & 0xf);
    *(uint *)(param_1 + 0x1e0) = iVar3 + 0x20U + ~(iVar3 + 0x20U & 0xf);
    *(uint *)(param_1 + 0x374) = uVar5;
  }
  if (*(int *)(param_1 + 0x1d0) == -1) {
    iVar4 = DAT_002e30a8 + 0x2e303e;
    iVar3 = 0;
  }
  else {
    memset(*(void **)(param_1 + 0x1e0),0,*(int *)(param_1 + 0x1d0) + 1);
    if (*(int *)(param_1 + 0x378) != 0) {
      *(undefined4 *)(param_1 + 0x37c) = 0;
      *(undefined4 *)(param_1 + 0x378) = 0;
      png_free(param_1);
    }
    iVar4 = FUN_002e0358(param_1,DAT_002e30ac);
    iVar3 = param_1 + 0xfc;
    if (iVar4 == 0) goto LAB_002e307e;
    iVar4 = *(int *)(param_1 + 0x15c);
  }
  png_error(param_1,iVar4);
LAB_002e307e:
  *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 0x40;
  return;
}


