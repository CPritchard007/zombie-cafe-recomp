/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001469e0 Vector<GameStateFriends::FriendItem>::Vector */

/* Vector<GameStateFriends::FriendItem>::Vector() */

Vector<GameStateFriends::FriendItem> * __thiscall
Vector<GameStateFriends::FriendItem>::Vector(Vector<GameStateFriends::FriendItem> *this)

{
  undefined4 *__s;
  undefined4 *puVar1;
  
  *(undefined4 *)this = 10;
  __s = (undefined4 *)operator_new__(0xf0);
  puVar1 = __s;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1 = puVar1 + 6;
  } while (puVar1 != __s + 0x3c);
  *(undefined4 **)(this + 8) = __s;
  memset(__s,0,*(int *)this * 0x18);
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


