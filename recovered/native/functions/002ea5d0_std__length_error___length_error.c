/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea5d0 std::length_error::~length_error */

/* std::length_error::~length_error() */

length_error * __thiscall std::length_error::~length_error(length_error *this)

{
  ~length_error(this);
  operator_delete(this);
  return this;
}


