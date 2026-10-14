/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea4c4 std::underflow_error::~underflow_error */

/* std::underflow_error::~underflow_error() */

underflow_error * __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  *(int *)this = *(int *)(DAT_002ea4dc + 0x2ea4ce) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}


