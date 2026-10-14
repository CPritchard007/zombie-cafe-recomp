/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac4d0 CCAssetManager::appendFile */

/* CCAssetManager::appendFile(char const*, void*, unsigned int) */

void CCAssetManager::appendFile(char *param_1,void *param_2,uint param_3)

{
  int iVar1;
  char *__file;
  int __fd;
  ssize_t sVar2;
  undefined4 *puVar3;
  ssize_t *psVar4;
  
  iVar1 = DAT_002ac598;
  puVar3 = *(undefined4 **)(DAT_002ac594 + 0x2ac4dc);
  psVar4 = (ssize_t *)(&stack0xffffffec + DAT_002ac598);
  *(void **)(&stack0xfffffff4 + DAT_002ac598) = param_2;
  *(undefined4 *)(&stack0x00000400 + DAT_002ac598) = *puVar3;
  *(undefined4 **)(&stack0xfffffff8 + DAT_002ac598) = puVar3;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    __android_log_print(4,DAT_002ac59c + 0x2ac500,DAT_002ac5a0 + 0x2ac502);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(&stack0x00000000 + DAT_002ac598,0,0x400);
  __file = (char *)FUN_002abfbc(&stack0x00000000 + iVar1,0x400,param_1);
  __android_log_print(3,DAT_002ac5a4 + 0x2ac52e,DAT_002ac5a8 + 0x2ac530,__file);
  if ((param_3 != 0) && (*(int *)(&stack0xfffffff4 + iVar1) != 0)) {
    __fd = open(__file,DAT_002ac5ac,DAT_002ac5b0);
    if (__fd < 0) {
      sVar2 = -1;
    }
    else {
      sVar2 = write(__fd,*(void **)(&stack0xfffffff4 + iVar1),param_3);
      ::close(__fd);
    }
    *psVar4 = sVar2;
    *(uint *)(&stack0xfffffff0 + iVar1) = param_3;
    __android_log_print(4,DAT_002ac5b4 + 0x2ac570,DAT_002ac5b8 + 0x2ac572,param_1);
  }
  if (*(int *)(&stack0x00000400 + iVar1) != **(int **)(&stack0xfffffff8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


