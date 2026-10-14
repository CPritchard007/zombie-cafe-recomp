/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea5b4 std::length_error::~length_error */

/* std::length_error::~length_error() */

length_error * __thiscall std::length_error::~length_error(length_error *this)

{
  *(int *)this = *(int *)(DAT_002ea5cc + 0x2ea5be) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}


