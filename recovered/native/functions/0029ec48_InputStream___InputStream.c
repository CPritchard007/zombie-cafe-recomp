/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ec48 InputStream::~InputStream */

/* InputStream::~InputStream() */

InputStream * __thiscall InputStream::~InputStream(InputStream *this)

{
  ~InputStream(this);
  operator_delete(this);
  return this;
}


