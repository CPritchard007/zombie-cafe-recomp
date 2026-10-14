/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea568 std::logic_error::~logic_error */

/* std::logic_error::~logic_error() */

logic_error * __thiscall std::logic_error::~logic_error(logic_error *this)

{
  *(int *)this = *(int *)(DAT_002ea580 + 0x2ea572) + 8;
  __Named_exception::~__Named_exception((__Named_exception *)this);
  return this;
}


