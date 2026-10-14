/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac134 CCAssetManager::fileSize */

/* CCAssetManager::fileSize(char const*) */

void CCAssetManager::fileSize(char *param_1)

{
  int iVar1;
  int iVar2;
  char *__file;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar1 = DAT_002ac220;
  piVar5 = *(int **)(DAT_002ac21c + 0x2ac140);
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002ac220);
  *(int *)(&stack0x00000460 + DAT_002ac220) = *piVar5;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    __android_log_print(4,DAT_002ac224 + 0x2ac15e,DAT_002ac228 + 0x2ac160);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  __android_log_print(3,DAT_002ac22c + 0x2ac174,DAT_002ac230 + 0x2ac176,param_1);
  iVar2 = FUN_002abde4(param_1);
  if (iVar2 == 0) {
    iVar2 = AAssetManager_open(*(undefined4 *)(DAT_002ac238 + 0x2ac1de),param_1);
    if (iVar2 != 0) {
      uVar4 = AAsset_getLength(iVar2);
      AAsset_close(iVar2);
      goto LAB_002ac1f2;
    }
  }
  else {
    memset(&stack0x00000060 + iVar1,0,0x400);
    __file = (char *)FUN_002abfbc(&stack0x00000060 + iVar1,0x400,param_1);
    iVar2 = open(__file,0,DAT_002ac234);
    if (-1 < iVar2) {
      memset(&stack0xfffffff4 + iVar1,0,0x68);
      iVar3 = fstat(iVar2,(stat *)(&stack0xfffffff4 + iVar1));
      if (iVar3 == 0) {
        uVar4 = *(undefined4 *)(&stack0x00000024 + iVar1);
      }
      else {
        uVar4 = 0xffffffff;
      }
      ::close(iVar2);
      goto LAB_002ac1f2;
    }
  }
  uVar4 = 0xffffffff;
LAB_002ac1f2:
  *puVar6 = uVar4;
  __android_log_print(4,DAT_002ac23c + 0x2ac1fc,DAT_002ac240 + 0x2ac1fe,param_1);
  if (*(int *)(&stack0x00000460 + iVar1) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


