/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298c84 ByteArrayOutputStream::~ByteArrayOutputStream */

/* ByteArrayOutputStream::~ByteArrayOutputStream() */

ByteArrayOutputStream * __thiscall
ByteArrayOutputStream::~ByteArrayOutputStream(ByteArrayOutputStream *this)

{
  *(int *)this = *(int *)(DAT_00298cac + 0x298c8e) + 8;
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc));
  }
  *(int *)this = *(int *)(DAT_00298cb0 + 0x298ca4) + 8;
  return this;
}


