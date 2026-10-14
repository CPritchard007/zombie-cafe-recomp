/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4624 png_do_bgr */

void png_do_bgr(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 2);
  if ((int)(uVar3 << 0x1e) < 0) {
    iVar2 = *param_1;
    if (*(char *)((int)param_1 + 9) == '\b') {
      if (uVar3 == 2) {
        for (iVar4 = 0; iVar4 != iVar2; iVar4 = iVar4 + 1) {
          uVar1 = param_2[2];
          param_2[2] = *param_2;
          *param_2 = uVar1;
          param_2 = param_2 + 3;
        }
      }
      else if (uVar3 == 6) {
        for (iVar4 = 0; iVar4 != iVar2; iVar4 = iVar4 + 1) {
          uVar1 = param_2[2];
          param_2[2] = *param_2;
          *param_2 = uVar1;
          param_2 = param_2 + 4;
        }
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      if (uVar3 == 2) {
        for (iVar4 = 0; iVar4 != iVar2; iVar4 = iVar4 + 1) {
          uVar1 = param_2[4];
          param_2[4] = *param_2;
          *param_2 = uVar1;
          uVar1 = param_2[5];
          param_2[5] = param_2[1];
          param_2[1] = uVar1;
          param_2 = param_2 + 6;
        }
      }
      else if (uVar3 == 6) {
        for (iVar4 = 0; iVar4 != iVar2; iVar4 = iVar4 + 1) {
          uVar1 = param_2[4];
          param_2[4] = *param_2;
          *param_2 = uVar1;
          uVar1 = param_2[5];
          param_2[5] = param_2[1];
          param_2[1] = uVar1;
          param_2 = param_2 + 8;
        }
      }
    }
  }
  return;
}


