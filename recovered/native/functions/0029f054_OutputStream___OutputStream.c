/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f054 OutputStream::~OutputStream */

/* OutputStream::~OutputStream() */

OutputStream * __thiscall OutputStream::~OutputStream(OutputStream *this)

{
  *(int *)this = *(int *)(DAT_0029f06c + 0x29f05e) + 8;
  operator_delete(this);
  return this;
}


