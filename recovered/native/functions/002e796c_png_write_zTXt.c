/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e796c png_write_zTXt */

void png_write_zTXt(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_r6;
  int iVar5;
  
  iVar1 = DAT_002e7a3c;
  puVar4 = *(undefined4 **)(DAT_002e7a38 + 0x2e7978);
  iVar5 = *(int *)(&stack0x00000474 + DAT_002e7a3c);
  *(undefined4 *)(&stack0x00000458 + DAT_002e7a3c) = *puVar4;
  *(undefined4 **)(&stack0xfffffff0 + DAT_002e7a3c) = puVar4;
  if (iVar5 != -1) {
    if (iVar5 == 0) {
      unaff_r6 = FUN_002e68f8(param_1,param_2,&stack0xfffffff8 + DAT_002e7a3c);
      if (unaff_r6 != 0) goto LAB_002e79bc;
      iVar3 = DAT_002e7a44 + 0x2e79b8;
    }
    else {
      iVar3 = DAT_002e7a40 + 0x2e79a6;
    }
    do {
      png_error(param_1,iVar3);
LAB_002e79bc:
      (&stack0xfffffff9)[unaff_r6 + iVar1] = (char)iVar5;
      pcVar2 = param_3;
      if (param_3 != (char *)0x0) {
        pcVar2 = (char *)strlen(param_3);
      }
      *(char **)(&stack0x0000004c + iVar1) = param_3;
      *(char **)(&stack0x00000050 + iVar1) = pcVar2;
      *(undefined4 *)(&stack0x00000054 + iVar1) = 0;
      iVar3 = FUN_002e69d0(param_1,DAT_002e7a48);
      if (iVar3 == 0) {
        param_3 = (char *)(unaff_r6 + 2);
        iVar3 = FUN_002e6c14(param_1,&stack0x0000004c + iVar1,param_3);
        if (iVar3 == 0) goto LAB_002e79fa;
      }
      iVar3 = *(int *)(param_1 + 0x15c);
    } while( true );
  }
  png_write_tEXt(param_1,param_2,param_3,0);
LAB_002e7a1e:
  if (*(int *)(&stack0x00000458 + iVar1) != **(int **)(&stack0xfffffff0 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_002e79fa:
  FUN_002e6d18(param_1,DAT_002e7a48,param_3 + *(int *)(&stack0x00000054 + iVar1));
  png_write_chunk_data(param_1,&stack0xfffffff8 + iVar1,param_3);
  FUN_002e6e30(param_1,&stack0x0000004c + iVar1);
  png_write_chunk_end(param_1);
  goto LAB_002e7a1e;
}


