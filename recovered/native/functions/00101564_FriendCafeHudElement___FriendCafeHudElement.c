/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00101564 FriendCafeHudElement::~FriendCafeHudElement */

/* FriendCafeHudElement::~FriendCafeHudElement() */

FriendCafeHudElement * __thiscall
FriendCafeHudElement::~FriendCafeHudElement(FriendCafeHudElement *this)

{
  ~FriendCafeHudElement(this);
  operator_delete(this);
  return this;
}


