/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea4f4 std::overflow_error::~overflow_error */

/* std::overflow_error::~overflow_error() */

overflow_error * __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  *(int *)this = *(int *)(DAT_002ea50c + 0x2ea4fe) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}


