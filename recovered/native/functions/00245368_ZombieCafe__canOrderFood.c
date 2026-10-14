/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245368 ZombieCafe::canOrderFood */

/* ZombieCafe::canOrderFood(FriendData*) */

undefined4 __thiscall ZombieCafe::canOrderFood(ZombieCafe *this,FriendData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = DAT_002453dc;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(this + iVar1 + 4) + 1 <= iVar3) {
      return 1;
    }
    Vector<String>::elementAt((int)aSStack_28);
    iVar2 = String::equals((String *)(param_1 + 0x2c),aSStack_28);
    String::~String(aSStack_28);
    if (iVar2 != 0) break;
    Vector<String>::elementAt((int)aSStack_20);
    iVar2 = String::equals((String *)(param_1 + 0x34),aSStack_20);
    String::~String(aSStack_20);
    if (iVar2 != 0) {
      return 0;
    }
    iVar3 = iVar3 + 1;
  }
  return 0;
}


