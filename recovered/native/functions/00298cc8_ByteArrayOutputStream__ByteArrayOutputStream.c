/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298cc8 ByteArrayOutputStream::ByteArrayOutputStream */

/* ByteArrayOutputStream::ByteArrayOutputStream() */

ByteArrayOutputStream * __thiscall
ByteArrayOutputStream::ByteArrayOutputStream(ByteArrayOutputStream *this)

{
  void *__s;
  
  *(int *)this = *(int *)(DAT_00298d00 + 0x298cd4) + 8;
  *(undefined4 *)(this + 4) = 10;
  __s = operator_new__(10);
  *(void **)(this + 0xc) = __s;
  memset(__s,0,*(size_t *)(this + 4));
  *(undefined4 *)(this + 8) = 0xffffffff;
  return this;
}


