/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002471bc Vector<FriendData>::Vector */

/* Vector<FriendData>::Vector() */

undefined8 __thiscall Vector<FriendData>::Vector(Vector<FriendData> *this)

{
  undefined4 *puVar1;
  FriendData *__s;
  int iVar2;
  bool bVar3;
  FriendData *local_1c;
  
  *(undefined4 *)this = 10;
  puVar1 = (undefined4 *)operator_new__(0x3a0);
  puVar1[1] = 10;
  __s = (FriendData *)(puVar1 + 2);
  *puVar1 = 0x5c;
  iVar2 = 9;
  local_1c = __s;
  do {
    FriendData::FriendData(local_1c);
    local_1c = local_1c + 0x5c;
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  *(FriendData **)(this + 8) = __s;
  memset(__s,0,*(int *)this * 0x5c);
  *(int *)(this + 4) = iVar2;
  return CONCAT44(this,this);
}


