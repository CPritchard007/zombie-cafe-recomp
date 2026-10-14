/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298c40 ByteArrayInputStream::~ByteArrayInputStream */

/* ByteArrayInputStream::~ByteArrayInputStream() */

ByteArrayInputStream * __thiscall
ByteArrayInputStream::~ByteArrayInputStream(ByteArrayInputStream *this)

{
  ~ByteArrayInputStream(this);
  operator_delete(this);
  return this;
}


