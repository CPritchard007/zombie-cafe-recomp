/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea5a0 std::out_of_range::~out_of_range */

/* std::out_of_range::~out_of_range() */

out_of_range * __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  ~out_of_range(this);
  operator_delete(this);
  return this;
}


