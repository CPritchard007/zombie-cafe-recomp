/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8350 jpeg_save_markers */

void jpeg_save_markers(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1[0x74];
  uVar2 = *(int *)(param_1[1] + 0x30) - 0x14;
  if ((int)param_3 <= (int)uVar2) {
    uVar2 = param_3;
  }
  if (uVar2 == 0) {
    if ((param_2 == 0xee) || (param_2 == 0xe0)) {
      iVar1 = DAT_002c83dc + 0x2c8392;
    }
    else {
      iVar1 = DAT_002c83d8 + 0x2c838c;
    }
LAB_002c8390:
    if (param_2 == 0xfe) {
      *(int *)(iVar3 + 0x1c) = iVar1;
      *(uint *)(iVar3 + 0x60) = uVar2;
      return;
    }
  }
  else {
    if ((uVar2 < 0xe) && (param_2 == 0xe0)) {
      uVar2 = 0xe;
    }
    else {
      if ((0xb < uVar2) || (param_2 != 0xee)) {
        iVar1 = DAT_002c83d4 + 0x2c837e;
        goto LAB_002c8390;
      }
      uVar2 = 0xc;
    }
    iVar1 = DAT_002c83e0 + 0x2c83d0;
  }
  if (param_2 - 0xe0U < 0x10) {
    *(int *)((param_2 + -0xd8) * 4 + iVar3) = iVar1;
    *(uint *)(iVar3 + (param_2 + -200) * 4 + 4) = uVar2;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)();
  }
  return;
}


