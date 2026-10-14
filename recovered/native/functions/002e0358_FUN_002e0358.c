/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0358 FUN_002e0358 */

void FUN_002e0358(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  int local_1c;
  
  piVar2 = *(int **)(DAT_002e0400 + 0x2e0364);
  local_1c = *piVar2;
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 != 0) {
    local_5c = (undefined1)((uint)iVar1 >> 0x18);
    local_5b = (undefined1)((uint)iVar1 >> 0x10);
    local_5a = (undefined1)((uint)iVar1 >> 8);
    local_59 = (undefined1)iVar1;
    png_safecat(&local_5c,0x40,4,DAT_002e0404 + 0x2e038e);
    png_chunk_warning(param_1,&local_5c);
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  if ((*(uint *)(param_1 + 0x138) & 2) == 0) {
    iVar1 = inflateInit_(param_1 + 0x144,DAT_002e0408 + 0x2e03ce,0x38);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 2;
      goto LAB_002e03da;
    }
  }
  else {
    iVar1 = inflateReset();
    if (iVar1 == 0) {
LAB_002e03da:
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x140) = param_2;
      goto LAB_002e03ec;
    }
  }
  png_zstream_error(param_1,iVar1);
LAB_002e03ec:
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


