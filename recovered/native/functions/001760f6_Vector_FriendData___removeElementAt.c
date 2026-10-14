/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001760f6 Vector<FriendData>::removeElementAt */

/* Vector<FriendData>::removeElementAt(int) */

int Vector<FriendData>::removeElementAt(int param_1)

{
  Vector<FriendData> *in_r1;
  int in_r2;
  int iVar1;
  FriendData aFStack_d0 [92];
  FriendData aFStack_74 [96];
  
  if ((in_r2 < 0) || (*(int *)(in_r1 + 4) < in_r2)) {
    FriendData::FriendData((FriendData *)param_1,0);
  }
  else {
    FriendData::FriendData(aFStack_d0,(FriendData *)(*(int *)(in_r1 + 8) + in_r2 * 0x5c));
    iVar1 = *(int *)(in_r1 + 8);
    FriendData::FriendData(aFStack_74,0);
    FriendData::operator=((FriendData *)(iVar1 + in_r2 * 0x5c),aFStack_74);
    FriendData::~FriendData(aFStack_74);
    move(in_r1,in_r2 + 1,-1);
    *(int *)(in_r1 + 4) = *(int *)(in_r1 + 4) + -1;
    FriendData::FriendData((FriendData *)param_1,aFStack_d0);
    FriendData::~FriendData(aFStack_d0);
  }
  return param_1;
}


