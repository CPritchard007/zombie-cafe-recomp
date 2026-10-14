/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac670 CCAssetManager::copyFile */

/* CCAssetManager::copyFile(char const*, char const*) */

void CCAssetManager::copyFile(char *param_1,char *param_2)

{
  char *__file;
  int __fd;
  ssize_t sVar1;
  size_t __n;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  iVar3 = DAT_002ac77c;
  puVar5 = *(undefined4 **)(DAT_002ac778 + 0x2ac67c);
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002ac77c);
  piVar8 = (int *)(&stack0xffffffec + DAT_002ac77c);
  *(undefined4 *)(&stack0xffffffec + DAT_002ac780 + DAT_002ac77c) = *puVar5;
  *(undefined4 **)(&stack0xfffffff8 + DAT_002ac77c) = puVar5;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    iVar3 = DAT_002ac784 + 0x2ac69c;
    iVar4 = DAT_002ac788 + 0x2ac69e;
  }
  else {
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      memset(&stack0x00000000 + DAT_002ac77c,0,0x400);
      __file = (char *)FUN_002abfbc(&stack0x00000000 + iVar3,0x400,param_2);
      *puVar7 = __file;
      __android_log_print(3,DAT_002ac794 + 0x2ac6e0,DAT_002ac798 + 0x2ac6e2,param_1);
      iVar4 = AAssetManager_open(*(undefined4 *)(DAT_002ac79c + 0x2ac6fc),param_1,0);
      if (iVar4 == 0) {
        iVar6 = -1;
      }
      else {
        __fd = open(__file,DAT_002ac7a0,DAT_002ac7a4);
        iVar6 = 0;
        if (__fd < 0) {
          iVar6 = -1;
        }
        else {
          while (__n = AAsset_read(iVar4,&stack0x00000400 + iVar3,0x400), 0 < (int)__n) {
            sVar1 = write(__fd,&stack0x00000400 + iVar3,__n);
            iVar6 = iVar6 + sVar1;
          }
          ::close(__fd);
        }
        AAsset_close(iVar4);
      }
      uVar2 = fileSize(param_2);
      *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar2;
      *piVar8 = iVar6;
      __android_log_print(4,DAT_002ac7a8 + 0x2ac754,DAT_002ac7ac + 0x2ac756,param_2);
      if (*(int *)(&stack0xffffffec + DAT_002ac780 + iVar3) != **(int **)(&stack0xfffffff8 + iVar3))
      {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar3 = DAT_002ac78c + 0x2ac6b0;
    iVar4 = DAT_002ac790 + 0x2ac6b2;
  }
  __android_log_print(4,iVar3,iVar4);
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


