/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3408 png_set_IHDR */

void png_set_IHDR(int param_1,int *param_2,int param_3,int param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    *param_2 = param_3;
    param_2[1] = param_4;
    *(undefined1 *)(param_2 + 6) = param_5;
    *(undefined1 *)((int)param_2 + 0x19) = param_6;
    *(undefined1 *)((int)param_2 + 0x1b) = param_9;
    *(undefined1 *)((int)param_2 + 0x1a) = param_8;
    *(undefined1 *)(param_2 + 7) = param_7;
    png_check_IHDR(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
    if ((uVar3 == 3) || (uVar1 = 3, -1 < (int)(uVar3 << 0x1e))) {
      uVar1 = 1;
    }
    *(undefined1 *)((int)param_2 + 0x1d) = uVar1;
    if ((int)(uVar3 << 0x1d) < 0) {
      *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
    }
    bVar2 = *(char *)((int)param_2 + 0x1d) * (char)param_2[6];
    *(byte *)((int)param_2 + 0x1e) = bVar2;
    if (bVar2 < 8) {
      uVar3 = (uint)bVar2 * param_3 + 7 >> 3;
    }
    else {
      uVar3 = (uint)(bVar2 >> 3) * param_3;
    }
    param_2[3] = uVar3;
  }
  return;
}


