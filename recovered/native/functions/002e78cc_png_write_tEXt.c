/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e78cc png_write_tEXt */

void png_write_tEXt(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  byte *unaff_r5;
  undefined1 auStack_6c [80];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002e7958 + 0x2e78d8);
  local_1c = *piVar3;
  uVar1 = FUN_002e68f8(param_1,param_2,auStack_6c);
  if (uVar1 == 0) {
    iVar2 = DAT_002e795c + 0x2e78f2;
  }
  else {
    unaff_r5 = param_3;
    if ((param_3 != (byte *)0x0) && (unaff_r5 = (byte *)(uint)*param_3, unaff_r5 != (byte *)0x0)) {
      unaff_r5 = (byte *)strlen((char *)param_3);
    }
    if (unaff_r5 <= (byte *)(~uVar1 + DAT_002e7960)) goto LAB_002e791a;
    iVar2 = DAT_002e7964 + 0x2e7916;
  }
  png_error(param_1,iVar2);
LAB_002e791a:
  FUN_002e6d18(param_1,DAT_002e7968,unaff_r5 + uVar1 + 1);
  png_write_chunk_data(param_1,auStack_6c,uVar1 + 1);
  if (unaff_r5 != (byte *)0x0) {
    png_write_chunk_data(param_1,param_3,unaff_r5);
  }
  png_write_chunk_end(param_1);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


