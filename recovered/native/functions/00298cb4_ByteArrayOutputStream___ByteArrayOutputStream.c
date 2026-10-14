/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298cb4 ByteArrayOutputStream::~ByteArrayOutputStream */

/* ByteArrayOutputStream::~ByteArrayOutputStream() */

ByteArrayOutputStream * __thiscall
ByteArrayOutputStream::~ByteArrayOutputStream(ByteArrayOutputStream *this)

{
  ~ByteArrayOutputStream(this);
  operator_delete(this);
  return this;
}


