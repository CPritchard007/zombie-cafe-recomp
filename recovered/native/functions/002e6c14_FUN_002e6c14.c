/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6c14 FUN_002e6c14 */

int FUN_002e6c14(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  
  local_2c = param_2[1];
  *(undefined4 *)(param_1 + 0x144) = *param_2;
  *(undefined4 **)(param_1 + 0x150) = param_2 + 3;
  local_24 = (undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x154) = 0x400;
  local_28 = 0x400;
  do {
    iVar2 = local_2c;
    local_2c = 0;
    *(int *)(param_1 + 0x148) = iVar2;
    if (*(int *)(param_1 + 0x154) == 0) {
      if (local_28 + param_3 < 0) {
LAB_002e6ca6:
        iVar2 = -4;
        break;
      }
      puVar1 = (undefined4 *)*local_24;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)png_malloc_base(param_1,*(int *)(param_1 + 0x180) + 4);
        if (puVar1 == (undefined4 *)0x0) goto LAB_002e6ca6;
        *puVar1 = 0;
        *local_24 = puVar1;
      }
      *(undefined4 **)(param_1 + 0x150) = puVar1 + 1;
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x180);
      local_28 = local_28 + *(int *)(param_1 + 0x180);
      local_24 = puVar1;
    }
    iVar2 = deflate(param_1 + 0x144,4);
    local_2c = *(int *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x148) = 0;
  } while (iVar2 == 0);
  local_28 = local_28 - *(int *)(param_1 + 0x154);
  *(undefined4 *)(param_1 + 0x154) = 0;
  param_2[2] = local_28;
  if (DAT_002e6d00 < (uint)(local_28 + param_3)) {
    iVar2 = -4;
    *(int *)(param_1 + 0x15c) = DAT_002e6d04 + 0x2e6cce;
  }
  else {
    png_zstream_error(param_1,iVar2);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (((iVar2 == 1) && (local_2c == 0)) && (iVar2 = 0, (uint)param_2[1] < 0x4001)) {
    FUN_002e6bc4(param_2 + 3);
  }
  return iVar2;
}


