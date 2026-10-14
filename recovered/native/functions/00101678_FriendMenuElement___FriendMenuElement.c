/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00101678 FriendMenuElement::~FriendMenuElement */

/* FriendMenuElement::~FriendMenuElement() */

FriendMenuElement * __thiscall FriendMenuElement::~FriendMenuElement(FriendMenuElement *this)

{
  ~FriendMenuElement(this);
  operator_delete(this);
  return this;
}


