/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298c14 ByteArrayInputStream::~ByteArrayInputStream */

/* ByteArrayInputStream::~ByteArrayInputStream() */

ByteArrayInputStream * __thiscall
ByteArrayInputStream::~ByteArrayInputStream(ByteArrayInputStream *this)

{
  *(int *)this = *(int *)(DAT_00298c3c + 0x298c1e) + 8;
  if ((this[4] != (ByteArrayInputStream)0x0) && (*(void **)(this + 8) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 8));
  }
  InputStream::~InputStream((InputStream *)this);
  return this;
}


