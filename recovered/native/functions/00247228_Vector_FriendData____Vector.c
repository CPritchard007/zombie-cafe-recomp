/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247228 Vector<FriendData>::~Vector */

/* Vector<FriendData>::~Vector() */

Vector<FriendData> * __thiscall Vector<FriendData>::~Vector(Vector<FriendData> *this)

{
  int iVar1;
  FriendData *pFVar2;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    pFVar2 = (FriendData *)(iVar1 + *(int *)(iVar1 + -4) * 0x5c);
    while (pFVar2 != *(FriendData **)(this + 8)) {
      FriendData::~FriendData(pFVar2 + -0x5c);
      pFVar2 = pFVar2 + -0x5c;
    }
    operator_delete__(pFVar2 + -8);
  }
  return this;
}


