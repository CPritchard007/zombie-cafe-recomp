/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e198c Vector<FriendContact*>::move */

/* Vector<FriendContact*>::move(int, int) */

void __thiscall Vector<FriendContact*>::move(Vector<FriendContact*> *this,int param_1,int param_2)

{
  size_t __n;
  int iVar1;
  
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    iVar1 = param_1 * 4;
    memmove((void *)(*(int *)(this + 8) + (param_2 + param_1) * 4),
            (void *)(*(int *)(this + 8) + iVar1),((*(int *)(this + 4) - param_1) + 1) * 4);
    __n = param_2 * 4;
    if (param_2 < 1) {
      __n = param_2 * -4;
      iVar1 = (*(int *)(this + 4) + 1 + param_2) * 4;
    }
    memset((void *)(*(int *)(this + 8) + iVar1),0,__n);
  }
  return;
}


