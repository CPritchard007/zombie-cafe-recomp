/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fec8c PendingItem::~PendingItem */

/* PendingItem::~PendingItem() */

PendingItem * __thiscall PendingItem::~PendingItem(PendingItem *this)

{
  *(int *)this = *(int *)(DAT_001feca4 + 0x1fec96) + 8;
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


