/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac7b4 CCAssetManager::renameFile */

/* CCAssetManager::renameFile(char const*, char const*) */

void CCAssetManager::renameFile(char *param_1,char *param_2)

{
  int iVar1;
  char *__old;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  iVar1 = DAT_002ac870;
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002ac870);
  piVar7 = (int *)(&stack0xffffffec + DAT_002ac870);
  piVar4 = *(int **)(DAT_002ac878 + 0x2ac7c8);
  *(int *)(&stack0xffffffec + DAT_002ac874 + DAT_002ac870) = *piVar4;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    memset(&stack0x00000000 + DAT_002ac870,0,0x400);
    memset(&stack0x00000400 + iVar1,0,0x400);
    __old = (char *)FUN_002abfbc(&stack0x00000000 + iVar1,0x400,param_1);
    uVar2 = FUN_002abfbc(&stack0x00000400 + iVar1,0x400,param_2);
    iVar5 = DAT_002ac884 + 0x2ac82c;
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar2;
    *puVar6 = uVar2;
    __android_log_print(3,iVar5,DAT_002ac888 + 0x2ac82e,__old);
    iVar3 = rename(__old,*(char **)(&stack0xfffffff8 + iVar1));
    uVar2 = fileSize(param_2);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
    *piVar7 = iVar3;
    __android_log_print(4,iVar5,DAT_002ac88c + 0x2ac852,param_2);
    if (*(int *)(&stack0xffffffec + DAT_002ac874 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  __android_log_print(4,DAT_002ac87c + 0x2ac7e0,DAT_002ac880 + 0x2ac7e2);
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


