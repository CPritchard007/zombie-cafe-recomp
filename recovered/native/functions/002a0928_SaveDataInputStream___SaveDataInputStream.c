/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0928 SaveDataInputStream::~SaveDataInputStream */

/* SaveDataInputStream::~SaveDataInputStream() */

SaveDataInputStream * __thiscall
SaveDataInputStream::~SaveDataInputStream(SaveDataInputStream *this)

{
  ~SaveDataInputStream(this);
  operator_delete(this);
  return this;
}


