/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e2d68 png_read_finish_row */

undefined8 png_read_finish_row(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar5 = *(int *)(param_1 + 0x1d8) + 1;
  *(uint *)(param_1 + 0x1d8) = uVar5;
  local_20 = param_1;
  local_1c = param_2;
  if (*(uint *)(param_1 + 0x1c8) <= uVar5) {
    if (*(char *)(param_1 + 0x214) == '\0') {
LAB_002e2e18:
      png_read_finish_IDAT(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      iVar3 = DAT_002e2e24;
      iVar2 = DAT_002e2e20;
      memset(*(void **)(param_1 + 0x1e0),0,*(int *)(param_1 + 0x1d0) + 1);
      uVar5 = (uint)*(byte *)(param_1 + iVar3);
      local_1c = iVar2 + 0x2e2e1f;
      do {
        uVar6 = uVar5 + 1;
        uVar5 = uVar6 & 0xff;
        uVar1 = (undefined1)uVar6;
        if (6 < uVar5) {
          *(undefined1 *)(param_1 + iVar3) = uVar1;
          goto LAB_002e2e18;
        }
        local_20 = __udivsi3((*(int *)(param_1 + 0x1c0) + -1 +
                             (uint)*(byte *)(iVar2 + 0x2e2e18 + uVar5)) -
                             (uint)*(byte *)(local_1c + uVar5));
        *(int *)(param_1 + 0x1d4) = local_20;
        if (*(int *)(param_1 + 0x13c) << 0x1e < 0) break;
        iVar4 = __udivsi3((*(int *)(param_1 + 0x1c4) + -1 +
                          (uint)*(byte *)(DAT_002e2e28 + 0x2e2df0 + uVar5)) -
                          (uint)*(byte *)(DAT_002e2e28 + 0x2e2df7 + uVar5));
        *(int *)(param_1 + 0x1c8) = iVar4;
      } while ((iVar4 == 0) || (local_20 == 0));
      *(undefined1 *)(param_1 + iVar3) = uVar1;
    }
  }
  return CONCAT44(local_1c,local_20);
}


