/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a090c SaveDataInputStream::~SaveDataInputStream */

/* SaveDataInputStream::~SaveDataInputStream() */

SaveDataInputStream * __thiscall
SaveDataInputStream::~SaveDataInputStream(SaveDataInputStream *this)

{
  *(int *)this = *(int *)(DAT_002a0924 + 0x2a0916) + 8;
  InputStream::~InputStream((InputStream *)this);
  return this;
}


