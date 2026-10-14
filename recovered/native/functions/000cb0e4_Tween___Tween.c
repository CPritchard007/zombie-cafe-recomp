/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb0e4 Tween::~Tween */

/* Tween::~Tween() */

Tween * __thiscall Tween::~Tween(Tween *this)

{
  *(int *)this = *(int *)(DAT_000cb0fc + 0xcb0ee) + 8;
  operator_delete(this);
  return this;
}


