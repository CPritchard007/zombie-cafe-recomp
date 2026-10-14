/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac5c0 CCAssetManager::deleteFile */

/* CCAssetManager::deleteFile(char const*) */

void CCAssetManager::deleteFile(char *param_1)

{
  int iVar1;
  char *__filename;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = DAT_002ac650;
  piVar5 = (int *)(&stack0xffffffec + DAT_002ac650);
  piVar3 = *(int **)(DAT_002ac654 + 0x2ac5d2);
  *(int *)(&stack0x000003f8 + DAT_002ac650) = *piVar3;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    memset(&stack0xfffffff8 + DAT_002ac650,0,0x400);
    __filename = (char *)FUN_002abfbc(&stack0xfffffff8 + iVar1,0x400,param_1);
    iVar4 = DAT_002ac660 + 0x2ac618;
    __android_log_print(3,iVar4,DAT_002ac664 + 0x2ac61a,__filename);
    iVar2 = ::remove(__filename);
    *piVar5 = iVar2;
    __android_log_print(4,iVar4,DAT_002ac668 + 0x2ac632,param_1);
    if (*(int *)(&stack0x000003f8 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __android_log_print(4,DAT_002ac658 + 0x2ac5ea,DAT_002ac65c + 0x2ac5ec);
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


