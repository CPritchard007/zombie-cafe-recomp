/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bebc0 CCBitField::Load */

/* CCBitField::Load(char const*) */

undefined4 * CCBitField::Load(char *param_1)

{
  undefined4 *__ptr;
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  size_t sVar5;
  size_t __size;
  
  __ptr = (undefined4 *)malloc(0xc);
  if (__ptr != (undefined4 *)0x0) {
    pvVar1 = (void *)CCFile::Open(param_1,0);
    if (pvVar1 == (void *)0xffffffff) {
      free(__ptr);
      return (undefined4 *)0xffffffff;
    }
    iVar2 = CCFile::Read(pvVar1,__ptr,4);
    if (iVar2 == 4) {
      uVar3 = __floatunsisf(*__ptr);
      uVar3 = __mulsf3(uVar3,0x3d000000);
      __subsf3(uVar3,DAT_002bec50);
      iVar2 = __fixsfsi();
      __ptr[1] = iVar2 + 1;
      __size = (iVar2 + 1) * 4;
      pvVar4 = malloc(__size);
      __ptr[2] = pvVar4;
      if (pvVar4 != (void *)0x0) {
        sVar5 = CCFile::Read(pvVar1,pvVar4,__size);
        if (sVar5 == __size) {
          CCFile::Close(pvVar1);
          return __ptr;
        }
        free((void *)__ptr[2]);
      }
    }
    free(__ptr);
    CCFile::Close(pvVar1);
  }
  return (undefined4 *)0xffffffff;
}


