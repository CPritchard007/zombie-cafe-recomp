/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002beb68 CCBitField::Init */

/* CCBitField::Init(unsigned int) */

uint * CCBitField::Init(uint param_1)

{
  uint *__ptr;
  undefined4 uVar1;
  int iVar2;
  void *__s;
  size_t __size;
  
  __ptr = (uint *)malloc(0xc);
  if (__ptr != (uint *)0x0) {
    *__ptr = param_1;
    uVar1 = __floatunsisf(param_1);
    uVar1 = __mulsf3(uVar1,0x3d000000);
    __subsf3(uVar1,DAT_002bebbc);
    iVar2 = __fixsfsi();
    __ptr[1] = iVar2 + 1U;
    __size = (iVar2 + 1U) * 4;
    __s = malloc(__size);
    __ptr[2] = (uint)__s;
    if (__s != (void *)0x0) {
      memset(__s,0,__size);
      return __ptr;
    }
    free(__ptr);
  }
  return (uint *)0xffffffff;
}


