/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac3e4 CCAssetManager::writeFile */

/* CCAssetManager::writeFile(char const*, void*, unsigned int) */

void CCAssetManager::writeFile(char *param_1,void *param_2,uint param_3)

{
  int iVar1;
  char *__file;
  int __fd;
  ssize_t sVar2;
  undefined4 *puVar3;
  ssize_t *psVar4;
  
  iVar1 = DAT_002ac4a8;
  puVar3 = *(undefined4 **)(DAT_002ac4a4 + 0x2ac3f0);
  psVar4 = (ssize_t *)(&stack0xffffffec + DAT_002ac4a8);
  *(uint *)(&stack0xfffffff4 + DAT_002ac4a8) = param_3;
  *(undefined4 *)(&stack0x00000400 + DAT_002ac4a8) = *puVar3;
  *(undefined4 **)(&stack0xfffffff8 + DAT_002ac4a8) = puVar3;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    __android_log_print(4,DAT_002ac4ac + 0x2ac414,DAT_002ac4b0 + 0x2ac416);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(&stack0x00000000 + DAT_002ac4a8,0,0x400);
  __file = (char *)FUN_002abfbc(&stack0x00000000 + iVar1,0x400,param_1);
  __android_log_print(3,DAT_002ac4b4 + 0x2ac442,DAT_002ac4b8 + 0x2ac444,__file);
  if (param_2 != (void *)0x0) {
    __fd = open(__file,DAT_002ac4bc,DAT_002ac4c0);
    if (__fd < 0) {
      sVar2 = -1;
    }
    else {
      sVar2 = write(__fd,param_2,*(size_t *)(&stack0xfffffff4 + iVar1));
      ::close(__fd);
    }
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0xfffffff4 + iVar1);
    *psVar4 = sVar2;
    __android_log_print(4,DAT_002ac4c4 + 0x2ac480,DAT_002ac4c8 + 0x2ac482,param_1);
  }
  if (*(int *)(&stack0x00000400 + iVar1) != **(int **)(&stack0xfffffff8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


