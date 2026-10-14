/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00250cf0 Vector<FriendData>::addElement */

/* Vector<FriendData>::addElement(FriendData) */

void __thiscall Vector<FriendData>::addElement(Vector<FriendData> *this,FriendData *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 4) + 2;
  if (*(int *)this < iVar2) {
    iVar1 = *(int *)this * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(this,iVar1,-1);
  }
  iVar2 = *(int *)(this + 4);
  *(int *)(this + 4) = iVar2 + 1;
  FriendData::operator=((FriendData *)(*(int *)(this + 8) + (iVar2 + 1) * 0x5c),param_2);
  return;
}


