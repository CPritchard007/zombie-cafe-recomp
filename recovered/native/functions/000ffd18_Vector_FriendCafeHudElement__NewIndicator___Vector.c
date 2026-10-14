/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ffd18 Vector<FriendCafeHudElement::NewIndicator>::Vector */

/* Vector<FriendCafeHudElement::NewIndicator>::Vector() */

Vector<FriendCafeHudElement::NewIndicator> * __thiscall
Vector<FriendCafeHudElement::NewIndicator>::Vector(Vector<FriendCafeHudElement::NewIndicator> *this)

{
  undefined4 *__s;
  undefined4 *puVar1;
  
  *(undefined4 *)this = 10;
  __s = (undefined4 *)operator_new__(0x78);
  puVar1 = __s;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
  } while (puVar1 != __s + 0x1e);
  *(undefined4 **)(this + 8) = __s;
  memset(__s,0,*(int *)this * 0xc);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


