/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1310 L_SendAnalyticsDataNew */

void L_SendAnalyticsDataNew(undefined4 param_1)

{
  char *__s;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  size_t __size;
  uchar *__ptr;
  undefined4 *puVar6;
  int *piVar7;
  int iStack_4;
  int *piVar8;
  int *piVar9;
  
  iVar1 = DAT_002c1484;
  piVar7 = (int *)(&stack0xffffffec + DAT_002c1484);
  piVar8 = (int *)(&stack0xffffffec + DAT_002c1484);
  piVar9 = (int *)(&stack0xffffffec + DAT_002c1484);
  *(undefined4 *)(&stack0x0000000c + DAT_002c1484) = param_1;
  puVar6 = *(undefined4 **)(DAT_002c148c + 0x2c1322);
  *(undefined4 *)(&stack0xffffffec + DAT_002c1488 + DAT_002c1484) = *puVar6;
  L_PrintLog((char *)(DAT_002c1490 + 0x2c132a),(char *)(DAT_002c1494 + 0x2c1330));
  CCGetWritableFilePath(&stack0x000001d4 + iVar1,0x104,(char *)(DAT_002c1498 + 0x2c133c));
  iVar2 = CCAssetManager::doesFileExist(&stack0x000001d4 + iVar1);
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar6;
  if (iVar2 != 0) {
    iVar2 = CCAssetManager::fileSize(&stack0x000001d4 + iVar1);
    sprintf(&stack0x000000d4 + iVar1,(char *)(DAT_002c149c + 0x2c135e),iVar2);
    if (DAT_002c14a0 < iVar2) {
      __s = &stack0x000002d8 + iVar1;
      L_PrintLog((char *)(DAT_002c14ac + 0x2c1380),&stack0x000000d4 + iVar1);
      CCGetModelName(&stack0x00000054 + iVar1,0x80);
      uVar3 = CCGetDeviceID();
      uVar4 = javaGetProductID();
      uVar5 = javaGetAndroidID();
      *piVar7 = DAT_002c14b0 + 0x2c13a4;
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = DAT_002c14bc;
      *(undefined4 *)(&stack0x00000004 + iVar1) = uVar5;
      *(int *)((int)&iStack_4 + iVar1) = DAT_002c14c0 + 0x2c13b6;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar3;
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000000 + iVar1) = uVar4;
      snprintf(__s,0x400,(char *)(DAT_002c14b4 + 0x2c13aa),DAT_002c14b8 + 0x2c13ac);
      L_PrintLog((char *)(DAT_002c14c4 + 0x2c13ce),__s);
      __size = CCAssetManager::fileSize(&stack0x000001d4 + iVar1);
      if (__size == 0) {
        L_PrintLog((char *)(DAT_002c14c8 + 0x2c13e4),(char *)(DAT_002c14cc + 0x2c13e6));
        CCAssetManager::deleteFile(&stack0x000001d4 + iVar1);
      }
      else {
        __ptr = (uchar *)malloc(__size);
        CCAssetManager::readFile(&stack0x000001d4 + iVar1,__ptr,__size);
        CCFileMd5(&stack0x00000014 + iVar1,0x40,__ptr,__size);
        *piVar8 = (int)(&stack0x00000014 + iVar1);
        *(char **)(&stack0xfffffff0 + iVar1) = __s;
        snprintf(&stack0xffffffec + DAT_002c14d8 + iVar1,0x400,(char *)(DAT_002c14d0 + 0x2c141e),
                 DAT_002c14d4 + 0x2c141c);
        CCMd5(&stack0x00000014 + iVar1,0x40,&stack0xffffffec + DAT_002c14d8 + iVar1);
        *piVar9 = (int)(&stack0x00000014 + iVar1);
        snprintf(&stack0xffffffec + DAT_002c14e0 + iVar1,0x400,(char *)(DAT_002c14dc + 0x2c143e),__s
                );
        L_PrintLog((char *)(DAT_002c14e4 + 0x2c1450),&stack0xffffffec + DAT_002c14e0 + iVar1);
        CCUrlConnection::NewRequest
                  ((char *)(DAT_002c14e8 + 0x2c145e),&stack0xffffffec + DAT_002c14e0 + iVar1,0,
                   *(void **)(&stack0x0000000c + iVar1));
        free(__ptr);
      }
    }
    else {
      L_PrintLog((char *)(DAT_002c14a4 + 0x2c1370),(char *)(DAT_002c14a8 + 0x2c1372));
    }
  }
  if (*(int *)(&stack0xffffffec + DAT_002c1488 + iVar1) == **(int **)(&stack0x00000010 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


