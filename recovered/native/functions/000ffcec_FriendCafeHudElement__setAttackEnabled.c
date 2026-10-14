/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ffcec FriendCafeHudElement::setAttackEnabled */

/* FriendCafeHudElement::setAttackEnabled(bool) */

void __thiscall FriendCafeHudElement::setAttackEnabled(FriendCafeHudElement *this,bool param_1)

{
  *(bool *)(*(int *)(this + 100) + 0x86) = param_1;
  layout(this);
  return;
}


