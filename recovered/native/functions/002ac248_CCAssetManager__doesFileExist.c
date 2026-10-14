/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ac248 CCAssetManager::doesFileExist */

/* CCAssetManager::doesFileExist(char const*) */

undefined8 CCAssetManager::doesFileExist(char *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    __android_log_print(3,DAT_002ac2b0 + 0x2ac274,DAT_002ac2b4 + 0x2ac276,param_1,param_1);
    uVar1 = fileSize(param_1);
    if (-((int)~uVar1 >> 0x1f) == 0) {
      iVar2 = DAT_002ac2bc + 0x2ac292;
    }
    else {
      iVar2 = DAT_002ac2b8 + 0x2ac28c;
    }
    __android_log_print(4,DAT_002ac2c0 + 0x2ac29a,DAT_002ac2c4 + 0x2ac29c,param_1);
    return CONCAT44(iVar2,-((int)~uVar1 >> 0x1f));
  }
  __android_log_print(4,DAT_002ac2a8 + 0x2ac25e,DAT_002ac2ac + 0x2ac260);
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


