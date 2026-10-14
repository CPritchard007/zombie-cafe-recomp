/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea584 std::out_of_range::~out_of_range */

/* std::out_of_range::~out_of_range() */

out_of_range * __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  *(int *)this = *(int *)(DAT_002ea59c + 0x2ea58e) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}


