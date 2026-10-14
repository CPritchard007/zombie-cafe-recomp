/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5524 Scrollbar::~Scrollbar */

/* Scrollbar::~Scrollbar() */

Scrollbar * __thiscall Scrollbar::~Scrollbar(Scrollbar *this)

{
  ~Scrollbar(this);
  operator_delete(this);
  return this;
}


