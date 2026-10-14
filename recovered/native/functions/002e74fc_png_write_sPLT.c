/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e74fc png_write_sPLT */

void png_write_sPLT(undefined4 param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 auStack_74 [2];
  undefined1 auStack_72 [2];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [80];
  int local_1c;
  
  piVar5 = *(int **)(DAT_002e75dc + 0x2e7508);
  iVar7 = 10;
  local_1c = *piVar5;
  if (*(char *)(param_2 + 1) == '\b') {
    iVar7 = 6;
  }
  iVar4 = param_2[3];
  iVar2 = FUN_002e68f8(param_1,*param_2,auStack_6c);
  if (iVar2 == 0) {
    png_error(param_1,DAT_002e75e0 + 0x2e7534);
  }
  FUN_002e6d18(param_1,DAT_002e75e4,iVar2 + 2 + iVar7 * iVar4);
  png_write_chunk_data(param_1,auStack_6c,iVar2 + 1);
  png_write_chunk_data(param_1,param_2 + 1,1);
  puVar6 = (undefined2 *)param_2[2];
  while( true ) {
    if ((undefined2 *)(param_2[2] + param_2[3] * 10) <= puVar6) break;
    if (*(char *)(param_2 + 1) == '\b') {
      puVar3 = auStack_74;
      local_78 = (undefined1)*puVar6;
      local_77 = (undefined1)puVar6[1];
      local_76 = (undefined1)puVar6[2];
      local_75 = (undefined1)puVar6[3];
      uVar1 = puVar6[4];
    }
    else {
      png_save_uint_16(&local_78,*puVar6);
      png_save_uint_16(&local_76,puVar6[1]);
      png_save_uint_16(auStack_74,puVar6[2]);
      png_save_uint_16(auStack_72,puVar6[3]);
      uVar1 = puVar6[4];
      puVar3 = auStack_70;
    }
    png_save_uint_16(puVar3,uVar1);
    png_write_chunk_data(param_1,&local_78,iVar7);
    puVar6 = puVar6 + 5;
  }
  png_write_chunk_end(param_1);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


