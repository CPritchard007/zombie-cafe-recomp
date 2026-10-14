/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fef72 PendingItem::~PendingItem */

/* PendingItem::~PendingItem() */

PendingItem * __thiscall PendingItem::~PendingItem(PendingItem *this)

{
  ~PendingItem(this);
  operator_delete(this);
  return this;
}


