/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013dd8c GameStateFriendCafe::GameStateFriendCafe */

/* GameStateFriendCafe::GameStateFriendCafe(String, unsigned char*, int, int, bool) */

GameStateFriendCafe * __thiscall
GameStateFriendCafe::GameStateFriendCafe
          (GameStateFriendCafe *this,String *param_2,undefined4 param_3,undefined4 param_4,
          int param_5,GameStateFriendCafe param_6)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  String *this_00;
  String aSStack_84 [8];
  String aSStack_7c [8];
  FriendData aFStack_74 [96];
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  this_00 = (String *)(this + 0x18);
  *(int *)this = *(int *)(DAT_0013e134 + 0x13ddb2) + 8;
  String::String(this_00);
  *(undefined4 *)(this + 0x24) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0x2c) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0x24) << 2);
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  FriendData::FriendData((FriendData *)(this + 0x3c));
  Vector<int>::Vector((Vector<int> *)(this + 0xcc));
  Vector<FoodStack*>::Vector((Vector<FoodStack*> *)(this + 0xf8));
  *(undefined4 *)(this + 0x10c) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0x114) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0x10c) << 2);
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 300));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x138));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x144));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0x150));
  Vector<int>::Vector((Vector<int> *)(this + 0x160));
  *(undefined4 *)(this + 0x16c) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0x174) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0x16c) << 2);
  *(undefined4 *)(this + 0x170) = 0xffffffff;
  Vector<int>::Vector((Vector<int> *)(this + 0x178));
  String::String((String *)(this + 0x1dc));
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  if (param_6 == (GameStateFriendCafe)0x0) {
    FriendData::FriendData
              (aFStack_74,
               (FriendData *)(*(int *)(*(int *)(this + 0xc) + DAT_0013e138 + 8) + param_5 * 0x5c));
    FriendData::operator=((FriendData *)(this + 0x3c),aFStack_74);
    FriendData::~FriendData(aFStack_74);
  }
  this[0xc1] = param_6;
  String::String(aSStack_84,param_2);
  String::operator=((String *)(this + 0x1dc),aSStack_84);
  String::~String(aSStack_84);
  *(undefined4 *)(this + 0x1e4) = param_3;
  *(undefined4 *)(this + 0x1e8) = param_4;
  if (param_6 == (GameStateFriendCafe)0x0) {
    String::String(aSStack_7c,(String *)(this + 0x3c));
    String::operator=(this_00,aSStack_7c);
    String::~String(aSStack_7c);
  }
  else {
    String::operator=(this_00,(char *)(DAT_0013e13c + 0x13df62));
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  iVar3 = **(int **)(DAT_0013e140 + 0x13df9a);
  iVar2 = SmDev();
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(iVar2 * 4 + iVar3);
  this[0x38] = (GameStateFriendCafe)0x0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_0013e144) = 0;
  this[0xc2] = (GameStateFriendCafe)0x0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  this[0x11] = (GameStateFriendCafe)0x0;
  this[0x210] = (GameStateFriendCafe)0x0;
  this[0xc3] = (GameStateFriendCafe)0x0;
  this[0xc4] = (GameStateFriendCafe)0x0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  this[0xd8] = (GameStateFriendCafe)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  this[0x106] = (GameStateFriendCafe)0x0;
  this[0x104] = (GameStateFriendCafe)0x0;
  this[0x105] = (GameStateFriendCafe)0x0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  return this;
}


