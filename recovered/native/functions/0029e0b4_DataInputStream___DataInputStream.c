/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e0b4 DataInputStream::~DataInputStream */

/* DataInputStream::~DataInputStream() */

DataInputStream * __thiscall DataInputStream::~DataInputStream(DataInputStream *this)

{
  ~DataInputStream(this);
  operator_delete(this);
  return this;
}


