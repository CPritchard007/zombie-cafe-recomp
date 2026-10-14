/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ffc74 FriendCafeHudElement::hasNewIndicator */

/* FriendCafeHudElement::hasNewIndicator(int) */

undefined1 __thiscall FriendCafeHudElement::hasNewIndicator(FriendCafeHudElement *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 10) {
    if (*(char *)(*(int *)(this + 0xc0) + 0x14) == '\0') {
      return 0;
    }
    iVar1 = *(int *)(this + 0xa4);
  }
  else {
    if (*(char *)(*(int *)(*(int *)(this + 0x94) + param_1 * 0xc + 8) + 0x14) == '\0') {
      return 0;
    }
    iVar1 = *(int *)(param_1 * 4 + *(int *)(this + 0x84));
  }
  return *(undefined1 *)(iVar1 + 0x14);
}


