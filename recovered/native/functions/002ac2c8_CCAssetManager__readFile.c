/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac2c8 CCAssetManager::readFile */

/* CCAssetManager::readFile(char const*, void*, unsigned int) */

void CCAssetManager::readFile(char *param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  char *__file;
  ssize_t sVar3;
  undefined4 *puVar4;
  ssize_t *psVar5;
  
  iVar1 = DAT_002ac3bc;
  puVar4 = *(undefined4 **)(DAT_002ac3b8 + 0x2ac2d4);
  psVar5 = (ssize_t *)(&stack0xffffffec + DAT_002ac3bc);
  *(uint *)(&stack0xfffffff4 + DAT_002ac3bc) = param_3;
  *(undefined4 *)(&stack0x00000400 + DAT_002ac3bc) = *puVar4;
  *(undefined4 **)(&stack0xfffffff8 + DAT_002ac3bc) = puVar4;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    __android_log_print(4,DAT_002ac3c0 + 0x2ac2f8,DAT_002ac3c4 + 0x2ac2fa);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  __android_log_print(3,DAT_002ac3c8 + 0x2ac30e,DAT_002ac3cc + 0x2ac310,param_1);
  if ((*(int *)(&stack0xfffffff4 + iVar1) == 0) || (param_2 == (void *)0x0)) goto LAB_002ac39e;
  iVar2 = FUN_002abde4(param_1);
  if (iVar2 == 0) {
    iVar2 = AAssetManager_open(*(undefined4 *)(DAT_002ac3d4 + 0x2ac374),param_1);
    if (iVar2 == 0) goto LAB_002ac388;
    sVar3 = AAsset_read(iVar2,param_2,*(undefined4 *)(&stack0xfffffff4 + iVar1));
    AAsset_close(iVar2);
  }
  else {
    memset(&stack0x00000000 + iVar1,0,0x400);
    __file = (char *)FUN_002abfbc(&stack0x00000000 + iVar1,0x400,param_1);
    iVar2 = open(__file,0,DAT_002ac3d0);
    if (iVar2 < 0) {
LAB_002ac388:
      sVar3 = -1;
    }
    else {
      sVar3 = read(iVar2,param_2,*(size_t *)(&stack0xfffffff4 + iVar1));
      ::close(iVar2);
    }
  }
  *psVar5 = sVar3;
  __android_log_print(4,DAT_002ac3d8 + 0x2ac396,DAT_002ac3dc + 0x2ac398,param_1);
LAB_002ac39e:
  if (*(int *)(&stack0x00000400 + iVar1) != **(int **)(&stack0xfffffff8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


