/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e69d0 FUN_002e69d0 */

void FUN_002e69d0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  int local_1c;
  
  piVar3 = *(int **)(DAT_002e6ba8 + 0x2e69dc);
  local_1c = *piVar3;
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 != 0) {
    local_5c = (undefined1)((uint)param_2 >> 0x18);
    local_5b = (undefined1)((uint)param_2 >> 0x10);
    local_5a = (undefined1)((uint)param_2 >> 8);
    local_58 = 0x3a;
    local_57 = 0x20;
    local_56 = (undefined1)((uint)iVar1 >> 0x18);
    local_55 = (undefined1)((uint)iVar1 >> 0x10);
    local_54 = (undefined1)((uint)iVar1 >> 8);
    local_59 = (undefined1)param_2;
    local_53 = (undefined1)iVar1;
    png_safecat(&local_5c,0x40,10,DAT_002e6bac + 0x2e6a1c);
    png_warning(param_1,&local_5c);
    if (*(int *)(param_1 + 0x140) == DAT_002e6bb0) {
      iVar1 = -2;
      *(int *)(param_1 + 0x15c) = DAT_002e6bb4 + 0x2e6a3e;
      goto LAB_002e6b94;
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  local_74 = *(int *)(param_1 + 0x184);
  local_70 = *(int *)(param_1 + 0x188);
  iVar1 = *(int *)(param_1 + 0x18c);
  local_6c = *(int *)(param_1 + 400);
  if (param_2 == DAT_002e6bb0) {
    if (*(int *)(param_1 + 0x138) << 0x1f < 0) {
      iVar4 = 0xca;
      goto LAB_002e6aa6;
    }
    local_78 = (uint)(*(char *)(param_1 + DAT_002e6bb8) != '\b');
  }
  else {
    local_74 = *(int *)(param_1 + 0x198);
    local_70 = *(int *)(param_1 + 0x19c);
    iVar1 = *(int *)(param_1 + 0x1a0);
    local_6c = *(int *)(param_1 + 0x1a4);
    iVar4 = 0xd4;
LAB_002e6aa6:
    local_78 = *(uint *)(param_1 + iVar4 * 2);
  }
  if (param_3 < 0x4001) {
    for (uVar2 = 1 << (iVar1 - 1U & 0xff); param_3 + 0x106 <= uVar2; uVar2 = uVar2 >> 1) {
      iVar1 = iVar1 + -1;
    }
  }
  if ((*(int *)(param_1 + 0x138) << 0x1e < 0) &&
     ((((*(int *)(param_1 + 0x1ac) != local_74 || (*(int *)(param_1 + 0x1b0) != local_70)) ||
       (*(int *)(param_1 + 0x1b4) != iVar1)) ||
      ((*(int *)(param_1 + 0x1b8) != local_6c || (*(uint *)(param_1 + 0x1bc) != local_78)))))) {
    iVar4 = deflateEnd(param_1 + 0x144);
    if (iVar4 != 0) {
      png_warning(param_1,DAT_002e6bbc + 0x2e6b28);
    }
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xfffffffd;
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  if ((*(uint *)(param_1 + 0x138) & 2) == 0) {
    iVar1 = deflateInit2_(param_1 + 0x144,local_74,local_70,iVar1,local_6c,local_78,
                          DAT_002e6bc0 + 0x2e6b6e,0x38);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 2;
      goto LAB_002e6b84;
    }
  }
  else {
    iVar1 = deflateReset();
    if (iVar1 == 0) {
LAB_002e6b84:
      *(int *)(param_1 + 0x140) = param_2;
      iVar1 = 0;
      goto LAB_002e6b94;
    }
  }
  png_zstream_error(param_1,iVar1);
LAB_002e6b94:
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


