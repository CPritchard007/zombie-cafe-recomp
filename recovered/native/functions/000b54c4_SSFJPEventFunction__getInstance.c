/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b54c4 SSFJPEventFunction::getInstance */

/* SSFJPEventFunction::getInstance() */

SSFJPEventFunction * SSFJPEventFunction::getInstance(void)

{
  int iVar1;
  SSFJPEventFunction *this;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_000b5510 + 0xb54ce);
  this = *(SSFJPEventFunction **)(DAT_000b5514 + 0xb54d2);
  if ((-1 < *piVar2 << 0x1f) && (iVar1 = FUN_002e9da0(piVar2), iVar1 != 0)) {
    SSFJPEventFunction(this);
    FUN_002e9e08(piVar2);
    __aeabi_atexit(this,*(undefined4 *)(DAT_000b5518 + 0xb54f8),
                   *(undefined4 *)(DAT_000b551c + 0xb54fa));
  }
  return this;
}


