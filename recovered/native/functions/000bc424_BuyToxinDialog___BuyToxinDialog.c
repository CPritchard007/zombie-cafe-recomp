/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc424 BuyToxinDialog::~BuyToxinDialog */

/* BuyToxinDialog::~BuyToxinDialog() */

BuyToxinDialog * __thiscall BuyToxinDialog::~BuyToxinDialog(BuyToxinDialog *this)

{
  *(int *)this = *(int *)(DAT_000bc498 + 0xbc430) + 8;
  deleteContents(this);
  if (*(void **)(this + 0xd4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd4));
  }
  if (*(void **)(this + 0xc4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc4));
  }
  if (*(void **)(this + 0x94) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x94));
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


