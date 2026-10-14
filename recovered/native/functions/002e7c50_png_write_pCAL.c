/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7c50 png_write_pCAL */

void png_write_pCAL(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,int param_6,char *param_7,undefined4 *param_8)

{
  size_t sVar1;
  int *piVar2;
  char *__s;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int unaff_r5;
  int local_a8;
  int local_a4;
  undefined4 *local_98;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 auStack_6c [80];
  int local_1c;
  
  piVar6 = *(int **)(DAT_002e7d70 + 0x2e7c60);
  local_1c = *piVar6;
  if (param_5 < 4) {
    unaff_r5 = FUN_002e68f8(param_1,param_2,auStack_6c);
    if (unaff_r5 != 0) goto LAB_002e7c8e;
    iVar3 = DAT_002e7d78 + 0x2e7c8a;
  }
  else {
    iVar3 = DAT_002e7d74 + 0x2e7c7a;
  }
  png_error(param_1,iVar3);
LAB_002e7c8e:
  sVar1 = strlen(param_7);
  iVar3 = sVar1 + (param_6 != 0);
  local_a4 = unaff_r5 + 0xb + iVar3;
  piVar2 = (int *)png_malloc(param_1,param_6 << 2);
  local_98 = param_8;
  piVar7 = piVar2;
  for (local_a8 = 0; local_a8 < param_6; local_a8 = local_a8 + 1) {
    __s = (char *)*local_98;
    local_98 = local_98 + 1;
    sVar1 = strlen(__s);
    iVar5 = sVar1 + (local_a8 != param_6 + -1);
    *piVar7 = iVar5;
    piVar7 = piVar7 + 1;
    local_a4 = local_a4 + iVar5;
  }
  FUN_002e6d18(param_1,DAT_002e7d7c,local_a4);
  png_write_chunk_data(param_1,auStack_6c,unaff_r5 + 1);
  png_save_int_32(auStack_78,param_3);
  png_save_int_32(auStack_74,param_4);
  local_70 = (undefined1)param_5;
  local_6f = (undefined1)param_6;
  png_write_chunk_data(param_1,auStack_78,10);
  png_write_chunk_data(param_1,param_7,iVar3);
  piVar7 = piVar2;
  for (iVar3 = 0; iVar3 < param_6; iVar3 = iVar3 + 1) {
    uVar4 = *param_8;
    param_8 = param_8 + 1;
    iVar5 = *piVar7;
    piVar7 = piVar7 + 1;
    png_write_chunk_data(param_1,uVar4,iVar5);
  }
  png_free(param_1,piVar2);
  png_write_chunk_end(param_1);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


