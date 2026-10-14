/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e2f20 ItemButton::~ItemButton */

/* ItemButton::~ItemButton() */

ItemButton * __thiscall ItemButton::~ItemButton(ItemButton *this)

{
  ~ItemButton(this);
  operator_delete(this);
  return this;
}


