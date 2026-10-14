/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ffcaa FriendCafeHudElement::getButton */

/* FriendCafeHudElement::getButton(int) */

undefined4 __thiscall FriendCafeHudElement::getButton(FriendCafeHudElement *this,int param_1)

{
  FriendCafeHudElement *pFVar1;
  
  if (param_1 == 10) {
    pFVar1 = this + 0xa4;
  }
  else if (param_1 == 0xb) {
    pFVar1 = this + 0xa8;
  }
  else if (param_1 == 0xc) {
    pFVar1 = this + 0xac;
  }
  else if (param_1 == 0xe) {
    pFVar1 = this + 0xb0;
  }
  else {
    if (param_1 != 0xd) {
      return *(undefined4 *)(param_1 * 4 + *(int *)(this + 0x84));
    }
    pFVar1 = this + 0xb4;
  }
  return *(undefined4 *)pFVar1;
}


