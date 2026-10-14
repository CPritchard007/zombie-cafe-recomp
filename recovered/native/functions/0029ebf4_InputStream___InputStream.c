/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ebf4 InputStream::~InputStream */

/* InputStream::~InputStream() */

InputStream * __thiscall InputStream::~InputStream(InputStream *this)

{
  *(int *)this = *(int *)(DAT_0029ec0c + 0x29ebfe) + 8;
  close();
  return this;
}


