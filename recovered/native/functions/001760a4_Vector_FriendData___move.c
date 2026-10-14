/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001760a4 Vector<FriendData>::move */

/* Vector<FriendData>::move(int, int) */

void __thiscall Vector<FriendData>::move(Vector<FriendData> *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    iVar2 = param_1 * 0x5c;
    memmove((void *)(*(int *)(this + 8) + (param_2 + param_1) * 0x5c),
            (void *)(*(int *)(this + 8) + iVar2),((*(int *)(this + 4) - param_1) + 1) * 0x5c);
    if (param_2 < 1) {
      iVar1 = -0x5c;
      iVar2 = (*(int *)(this + 4) + 1 + param_2) * 0x5c;
    }
    else {
      iVar1 = 0x5c;
    }
    memset((void *)(*(int *)(this + 8) + iVar2),0,param_2 * iVar1);
  }
  return;
}


