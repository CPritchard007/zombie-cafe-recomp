/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0b30 SaveDataOutputStream::~SaveDataOutputStream */

/* SaveDataOutputStream::~SaveDataOutputStream() */

SaveDataOutputStream * __thiscall
SaveDataOutputStream::~SaveDataOutputStream(SaveDataOutputStream *this)

{
  ~SaveDataOutputStream(this);
  operator_delete(this);
  return this;
}


