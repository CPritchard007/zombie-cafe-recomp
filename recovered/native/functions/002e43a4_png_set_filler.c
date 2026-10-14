/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e43a4 png_set_filler */

void png_set_filler(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x134) & 0x8000) == 0) {
    if (*(char *)(param_1 + DAT_002e4414) == '\0') {
      if (*(byte *)(param_1 + 0x218) < 8) {
        iVar1 = DAT_002e4418 + 0x2e43ee;
        goto LAB_002e43f2;
      }
      uVar3 = 2;
    }
    else {
      if (*(char *)(param_1 + DAT_002e4414) != '\x02') {
        iVar1 = DAT_002e441c + 0x2e43f4;
LAB_002e43f2:
        png_app_error(param_1,iVar1);
        return;
      }
      uVar3 = 4;
    }
    *(undefined1 *)(param_1 + 0x21c) = uVar3;
  }
  else {
    *(undefined2 *)(param_1 + 0x220) = param_2;
  }
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x8000;
  if (param_3 == 1) {
    uVar2 = *(uint *)(param_1 + 0x138) | 0x80;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x138) & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x138) = uVar2;
  return;
}


