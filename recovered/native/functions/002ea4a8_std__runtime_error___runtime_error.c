/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea4a8 std::runtime_error::~runtime_error */

/* std::runtime_error::~runtime_error() */

runtime_error * __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  *(int *)this = *(int *)(DAT_002ea4c0 + 0x2ea4b2) + 8;
  __Named_exception::~__Named_exception((__Named_exception *)this);
  return this;
}


