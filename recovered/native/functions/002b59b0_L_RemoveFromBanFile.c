/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b59b0 L_RemoveFromBanFile */

/* L_RemoveFromBanFile(char const*) */

void L_RemoveFromBanFile(char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  size_t sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uStack_4;
  
  iVar2 = DAT_002b5b78;
  piVar12 = (int *)(&stack0xffffffec + DAT_002b5b78);
  puVar11 = *(undefined4 **)(DAT_002b5b84 + 0x2b59c4);
  *(char **)(&stack0x00000004 + DAT_002b5b78) = param_1;
  *(undefined4 *)(&stack0xffffffec + DAT_002b5b7c + DAT_002b5b78) = *puVar11;
  CCGetWritableFilePath(&stack0x0000020c + DAT_002b5b78,0x104,(char *)(DAT_002b5b80 + 0x2b59c2));
  sVar3 = CCAssetManager::fileSize(&stack0x0000020c + iVar2);
  sprintf(&stack0x0000000c + iVar2,(char *)(DAT_002b5b88 + 0x2b59e4),sVar3);
  L_PrintLog((char *)(DAT_002b5b8c + 0x2b59f0),&stack0x0000000c + iVar2);
  *(undefined4 **)(&stack0x00000008 + iVar2) = puVar11;
  if (1 < sVar3 + 1) {
    __s = (char *)malloc(sVar3);
    CCAssetManager::readFile(&stack0x0000020c + iVar2,__s,sVar3);
    sprintf(&stack0x0000000c + iVar2,(char *)(DAT_002b5b90 + 0x2b5a18),
            *(undefined4 *)(&stack0x00000004 + iVar2),sVar3);
    L_PrintLog((char *)(DAT_002b5b94 + 0x2b5a24),&stack0x0000000c + iVar2);
    iVar8 = 0;
    for (iVar6 = 0; iVar6 < (int)sVar3; iVar6 = iVar6 + 1) {
      iVar8 = iVar8 + (uint)(__s[iVar6] == '\n');
    }
    *(int *)(&stack0xfffffff8 + iVar2) = iVar8 >> 1;
    sprintf(&stack0x0000000c + iVar2,(char *)(DAT_002b5b98 + 0x2b5a46),iVar8 >> 1);
    L_PrintLog((char *)(DAT_002b5b9c + 0x2b5a56),&stack0x0000000c + iVar2);
    *(undefined4 *)((int)&uStack_4 + iVar2) = 0;
    *(int *)(&stack0x00000000 + iVar2) = DAT_002b5ba0 + 0x2b5a62;
    uVar9 = 0;
    for (iVar6 = 0; uVar7 = 0, iVar6 < *(int *)(&stack0xfffffff8 + iVar2); iVar6 = iVar6 + 1) {
      iVar8 = *(int *)((int)&uStack_4 + iVar2);
      while (iVar8 < (int)sVar3) {
        pcVar1 = __s + iVar8;
        iVar8 = iVar8 + 1;
        if (*pcVar1 == '\n') break;
        if (uVar7 < 0x100) {
          (&stack0x0000010c)[uVar7 + iVar2] = *pcVar1;
          uVar7 = uVar7 + 1;
        }
      }
      uVar9 = 0;
      (&stack0x0000010c)[uVar7 + iVar2] = 0;
      while (iVar8 < (int)sVar3) {
        pcVar1 = __s + iVar8;
        iVar8 = iVar8 + 1;
        if (*pcVar1 == '\n') break;
        if (uVar9 <= DAT_002b5bb8) {
          (&stack0x00000310)[uVar9 + iVar2] = *pcVar1;
          uVar9 = uVar9 + 1;
        }
      }
      (&stack0x00000310 + iVar2)[uVar9] = 0;
      uVar10 = *(undefined4 *)(&stack0xfffffff8 + iVar2);
      *piVar12 = (int)(&stack0x0000010c + iVar2);
      *(undefined1 **)(&stack0xfffffff0 + iVar2) = &stack0x00000310 + iVar2;
      sprintf(&stack0x0000000c + iVar2,*(char **)(&stack0x00000000 + iVar2),iVar6,uVar10);
      L_PrintLog((char *)(DAT_002b5bbc + 0x2b5b48),&stack0x0000000c + iVar2);
      sVar4 = strlen(&stack0x0000010c + iVar2);
      iVar5 = strncmp(*(char **)(&stack0x00000004 + iVar2),&stack0x0000010c + iVar2,sVar4 - 1);
      if ((iVar5 == 0) ||
         (uVar9 = *(uint *)((int)&uStack_4 + iVar2), (&stack0x0000010c)[iVar2] == '\0')) {
        L_PrintLog((char *)(DAT_002b5ba4 + 0x2b5aac),(char *)(DAT_002b5ba8 + 0x2b5aae));
        uVar9 = *(uint *)((int)&uStack_4 + iVar2);
        iVar5 = iVar8;
        if (iVar6 != *(int *)(&stack0xfffffff8 + iVar2) + -1) {
          for (; iVar5 < (int)sVar3; iVar5 = iVar5 + 1) {
            __s[uVar9] = __s[iVar5];
            uVar9 = uVar9 + 1;
          }
          *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(&stack0xfffffff8 + iVar2) + -1;
        }
      }
      *(int *)((int)&uStack_4 + iVar2) = iVar8;
    }
    __s[uVar9] = '\0';
    sVar3 = strlen(__s);
    sprintf(&stack0x0000000c + iVar2,(char *)(DAT_002b5bac + 0x2b5af0),sVar3,uVar9);
    L_PrintLog((char *)(DAT_002b5bb0 + 0x2b5afc),&stack0x0000000c + iVar2);
    if (uVar9 == 0) {
      CCAssetManager::deleteFile((char *)(DAT_002b5bb4 + 0x2b5b08));
    }
    else {
      CCAssetManager::writeFile(&stack0x0000020c + iVar2,__s,uVar9);
    }
    free(__s);
  }
  if (*(int *)(&stack0xffffffec + DAT_002b5b7c + iVar2) == **(int **)(&stack0x00000008 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


