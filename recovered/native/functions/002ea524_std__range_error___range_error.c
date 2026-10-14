/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea524 std::range_error::~range_error */

/* std::range_error::~range_error() */

range_error * __thiscall std::range_error::~range_error(range_error *this)

{
  *(int *)this = *(int *)(DAT_002ea53c + 0x2ea52e) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}


