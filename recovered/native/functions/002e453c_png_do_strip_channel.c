/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e453c png_do_strip_channel */

void png_do_strip_channel(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = param_2 + *(int *)(param_1 + 4);
  puVar3 = param_2;
  if (*(char *)(param_1 + 10) == '\x02') {
    if (*(char *)(param_1 + 9) == '\b') {
      puVar2 = param_2 + 1;
      if (param_3 == 0) {
        puVar2 = param_2 + 2;
        puVar3 = param_2 + 1;
      }
      for (; puVar2 < puVar4; puVar2 = puVar2 + 2) {
        *puVar3 = *puVar2;
        puVar3 = puVar3 + 1;
      }
      uVar1 = 8;
    }
    else {
      if (*(char *)(param_1 + 9) != '\x10') {
        return;
      }
      puVar2 = param_2 + 2;
      if (param_3 == 0) {
        puVar2 = param_2 + 4;
        puVar3 = param_2 + 2;
      }
      for (; puVar2 < puVar4; puVar2 = puVar2 + 4) {
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3 = puVar3 + 2;
      }
      uVar1 = 0x10;
    }
    *(undefined1 *)(param_1 + 0xb) = uVar1;
    *(undefined1 *)(param_1 + 10) = 1;
    if (*(char *)(param_1 + 8) != '\x04') goto LAB_002e461e;
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 10) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 9) == '\b') {
      if (param_3 == 0) {
        puVar2 = param_2 + 4;
        puVar3 = param_2 + 3;
      }
      else {
        puVar2 = param_2 + 1;
      }
      for (; puVar2 < puVar4; puVar2 = puVar2 + 4) {
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        puVar3 = puVar3 + 3;
      }
      uVar1 = 0x18;
    }
    else {
      if (*(char *)(param_1 + 9) != '\x10') {
        return;
      }
      if (param_3 == 0) {
        puVar2 = param_2 + 8;
        puVar3 = param_2 + 6;
      }
      else {
        puVar2 = param_2 + 2;
      }
      for (; puVar2 < puVar4; puVar2 = puVar2 + 8) {
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        puVar3[3] = puVar2[3];
        puVar3[4] = puVar2[4];
        puVar3[5] = puVar2[5];
        puVar3 = puVar3 + 6;
      }
      uVar1 = 0x30;
    }
    *(undefined1 *)(param_1 + 0xb) = uVar1;
    *(undefined1 *)(param_1 + 10) = 3;
    if (*(char *)(param_1 + 8) != '\x06') goto LAB_002e461e;
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
LAB_002e461e:
  *(int *)(param_1 + 4) = (int)puVar3 - (int)param_2;
  return;
}


