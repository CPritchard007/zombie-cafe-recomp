/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea47c std::__Named_exception::~__Named_exception */

/* std::__Named_exception::~__Named_exception() */

__Named_exception * __thiscall std::__Named_exception::~__Named_exception(__Named_exception *this)

{
  *(int *)this = *(int *)(DAT_002ea4a4 + 0x2ea486) + 8;
  if (*(__Named_exception **)(this + 0x104) != this + 4) {
    free(*(__Named_exception **)(this + 0x104));
  }
  FUN_002e9698(this);
  return this;
}


