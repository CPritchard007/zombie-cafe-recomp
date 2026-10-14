/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ffcde FriendCafeHudElement::setCollectFeesEnabled */

/* FriendCafeHudElement::setCollectFeesEnabled(bool) */

void __thiscall FriendCafeHudElement::setCollectFeesEnabled(FriendCafeHudElement *this,bool param_1)

{
  *(bool *)(*(int *)(this + 0x60) + 0x86) = param_1;
  layout(this);
  return;
}


