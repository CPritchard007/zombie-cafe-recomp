/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c187c FUN_002c187c */

void FUN_002c187c(void *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_002c18e4;
  piVar2 = *(int **)(DAT_002c18e8 + 0x2c188e);
  *(int *)(&stack0x000003f4 + DAT_002c18e4) = *piVar2;
  L_PrintLog((char *)(DAT_002c18ec + 0x2c18a0),(char *)((int)param_1 + 0x110));
  L_CreateRequestString
            ((char *)((int)param_1 + 0x110),&stack0xfffffff4 + iVar1,0x400,
             *(undefined4 *)((int)param_1 + 400));
  L_PrintLog((char *)(DAT_002c18f0 + 0x2c18bc),&stack0xfffffff4 + iVar1);
  CCUrlConnection::NewRequest((char *)(DAT_002c18f4 + 0x2c18c8),&stack0xfffffff4 + iVar1,1,param_1);
  if (*(int *)(&stack0x000003f4 + iVar1) != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


