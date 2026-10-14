/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e098 DataInputStream::~DataInputStream */

/* DataInputStream::~DataInputStream() */

DataInputStream * __thiscall DataInputStream::~DataInputStream(DataInputStream *this)

{
  *(int *)this = *(int *)(DAT_0029e0b0 + 0x29e0a2) + 8;
  InputStream::~InputStream((InputStream *)this);
  return this;
}


