/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251348 ZombieCafe::AddFriend */

/* ZombieCafe::AddFriend(int, char const*, char const*) */

void __thiscall ZombieCafe::AddFriend(ZombieCafe *this,int param_1,char *param_2,char *param_3)

{
  FriendData aFStack_d0 [24];
  int local_b8;
  String aSStack_ac [8];
  String aSStack_a4 [16];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  FriendData aFStack_74 [96];
  
  FriendData::FriendData(aFStack_d0);
  L_PrintLog((char *)(DAT_002513d0 + 0x251362),param_2);
  local_b8 = param_1;
  String::operator=((String *)aFStack_d0,param_2);
  String::operator=(aSStack_a4,param_3);
  String::operator=(aSStack_ac,param_2);
  local_90 = 0x23;
  local_94 = 1;
  local_84 = 0;
  local_88 = 3;
  local_8c = DAT_002513d4;
  FriendData::FriendData(aFStack_74,aFStack_d0);
  Vector<FriendData>::addElement((Vector<FriendData> *)(this + DAT_002513d8),aFStack_74);
  FriendData::~FriendData(aFStack_74);
  this[DAT_002513dc] = (ZombieCafe)0x1;
  FriendData::~FriendData(aFStack_d0);
  return;
}


