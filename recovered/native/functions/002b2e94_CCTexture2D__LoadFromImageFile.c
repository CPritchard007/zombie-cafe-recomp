/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2e94 CCTexture2D::LoadFromImageFile */

/* CCTexture2D::LoadFromImageFile(ccTexture2D*, char const*) */

undefined8 CCTexture2D::LoadFromImageFile(ccTexture2D *param_1,char *param_2)

{
  uchar *puVar1;
  size_t __size;
  uchar *__ptr;
  void *pvVar2;
  int iVar3;
  
  printf((char *)(DAT_002b2f24 + 0x2b2ea0));
  if (param_1 != (ccTexture2D *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  puVar1 = (uchar *)CCAssetManager::doesFileExist(param_2);
  if (puVar1 != (uchar *)0x0) {
    __size = CCAssetManager::fileSize(param_2);
    puVar1 = (uchar *)0x0;
    if ((__size != 0xffffffff) &&
       (__ptr = (uchar *)malloc(__size), puVar1 = __ptr, __ptr != (uchar *)0x0)) {
      L_PrintLog((char *)(DAT_002b2f28 + 0x2b2ed8),param_2);
      CCAssetManager::readFile(param_2,__ptr,__size);
      L_PrintLog((char *)(DAT_002b2f2c + 0x2b2eec),(char *)(DAT_002b2f30 + 0x2b2eee));
      pvVar2 = (void *)CCTextureLocator::InitWithFile(param_2);
      iVar3 = Load(param_1,__ptr,pvVar2);
      if (iVar3 == 0) {
        Free(param_1);
      }
      puVar1 = (uchar *)(uint)(iVar3 != 0);
      L_PrintLog((char *)(DAT_002b2f34 + 0x2b2f0e),(char *)(DAT_002b2f38 + 0x2b2f10));
      free(__ptr);
    }
  }
  return CONCAT44(param_1,puVar1);
}


