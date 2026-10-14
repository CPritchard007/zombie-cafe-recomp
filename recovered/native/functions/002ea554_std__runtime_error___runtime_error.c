/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea554 std::runtime_error::~runtime_error */

/* std::runtime_error::~runtime_error() */

runtime_error * __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  ~runtime_error(this);
  operator_delete(this);
  return this;
}


