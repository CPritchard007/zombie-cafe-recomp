/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea5e4 std::invalid_argument::~invalid_argument */

/* std::invalid_argument::~invalid_argument() */

invalid_argument * __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  *(int *)this = *(int *)(DAT_002ea5fc + 0x2ea5ee) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}


