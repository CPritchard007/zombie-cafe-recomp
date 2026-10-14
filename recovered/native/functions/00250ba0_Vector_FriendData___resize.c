/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00250ba0 Vector<FriendData>::resize */

/* Vector<FriendData>::resize(int, int) */

void __thiscall Vector<FriendData>::resize(Vector<FriendData> *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FriendData *pFVar4;
  FriendData *__s;
  int local_2c;
  FriendData *local_28;
  FriendData *local_24;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  local_2c = param_2;
  if (*(int *)(this + 4) < param_2) {
    local_2c = -1;
  }
  puVar1 = (undefined4 *)operator_new__(param_1 * 0x5c + 8);
  *puVar1 = 0x5c;
  __s = (FriendData *)(puVar1 + 2);
  puVar1[1] = param_1;
  local_24 = __s;
  iVar2 = param_1;
  do {
    iVar2 = iVar2 + -1;
    FriendData::FriendData(local_24);
    local_24 = local_24 + 0x5c;
  } while (iVar2 != 0);
  memset(__s,0,param_1 * 0x5c);
  iVar2 = *(int *)(this + 4) + 1;
  if (local_2c == -1) {
    local_2c = iVar2;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      local_2c = param_1;
    }
    local_28 = __s;
    for (iVar2 = 0; iVar2 < local_2c; iVar2 = iVar2 + 1) {
      FriendData::operator=(local_28,(FriendData *)(*(int *)(this + 8) + iVar2 * 0x5c));
      local_28 = local_28 + 0x5c;
    }
  }
  else {
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    iVar2 = iVar2 - local_2c;
    local_24 = __s;
    for (iVar3 = 0; iVar3 < local_2c; iVar3 = iVar3 + 1) {
      FriendData::operator=(local_24,(FriendData *)(*(int *)(this + 8) + iVar3 * 0x5c));
      local_24 = local_24 + 0x5c;
    }
    iVar3 = local_2c * 0x5c;
    for (local_2c = 0; local_2c < iVar2; local_2c = local_2c + 1) {
      FriendData::operator=
                ((FriendData *)((int)puVar1 + iVar3 + 100),
                 (FriendData *)(*(int *)(this + 8) + iVar3));
      iVar3 = iVar3 + 0x5c;
    }
  }
  iVar2 = *(int *)(this + 8);
  if (iVar2 != 0) {
    pFVar4 = (FriendData *)(iVar2 + *(int *)(iVar2 + -4) * 0x5c);
    while (pFVar4 != *(FriendData **)(this + 8)) {
      FriendData::~FriendData(pFVar4 + -0x5c);
      pFVar4 = pFVar4 + -0x5c;
    }
    operator_delete__(pFVar4 + -8);
  }
  *(FriendData **)(this + 8) = __s;
  *(int *)this = param_1;
  return;
}


