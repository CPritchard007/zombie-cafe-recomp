/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea614 std::domain_error::~domain_error */

/* std::domain_error::~domain_error() */

domain_error * __thiscall std::domain_error::~domain_error(domain_error *this)

{
  *(int *)this = *(int *)(DAT_002ea62c + 0x2ea61e) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}


