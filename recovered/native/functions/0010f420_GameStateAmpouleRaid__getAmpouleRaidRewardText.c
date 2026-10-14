/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010f420 GameStateAmpouleRaid::getAmpouleRaidRewardText */

/* GameStateAmpouleRaid::getAmpouleRaidRewardText() */

GameStateAmpouleRaid * __thiscall
GameStateAmpouleRaid::getAmpouleRaidRewardText(GameStateAmpouleRaid *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  String *this_00;
  ZombieCafe *this_01;
  short *psVar5;
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  StringBuffer::StringBuffer(aSStack_34);
  iVar2 = CapcomApp::getInstance();
  this_01 = *(ZombieCafe **)(iVar2 + 4);
  iVar2 = ZombieCafe::getAmpouleRaid_themeID(this_01);
  iVar3 = ZombieCafe::getAmpouleRaid_cafeLevel(this_01);
  iVar4 = ZombieCafe::isAmpouleRaid_FirstHalf();
  if (iVar4 == 0) {
    iVar2 = *(int *)(*(int *)(DAT_0010f5ec + 0x10f452) + iVar2 * 8 + 4);
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_0010f5ec + 0x10f452) + iVar2 * 8);
  }
  psVar5 = (short *)(iVar2 + iVar3 * 0x10);
  sVar1 = *psVar5;
  iVar2 = *(int *)(psVar5 + 2);
  if (sVar1 == 0) {
    String::String(aSStack_7c,(char *)(DAT_0010f5f0 + 0x10f470));
    StringBuffer::append(aSStack_34,aSStack_7c);
    String::~String(aSStack_7c);
    String::valueOf((int)aSStack_74);
    StringBuffer::append(aSStack_34,aSStack_74);
    this_00 = aSStack_74;
  }
  else if (sVar1 == 1) {
    String::String(aSStack_6c,(char *)(DAT_0010f5f4 + 0x10f4a4));
    StringBuffer::append(aSStack_34,aSStack_6c);
    String::~String(aSStack_6c);
    if ((uint)(iVar2 + DAT_0010f5f8) < 0xf) {
      String::String(aSStack_64,(String *)(DAT_0010f5fc + 0x10f4ca + (iVar2 + -0x1ea) * 0x24));
      StringBuffer::append(aSStack_34,aSStack_64);
      this_00 = aSStack_64;
    }
    else if ((uint)(iVar2 + DAT_0010f600) < 9) {
      String::String(aSStack_5c,(String *)(DAT_0010f608 + 0x10f4f2 + (iVar2 + DAT_0010f604) * 0x24))
      ;
      StringBuffer::append(aSStack_34,aSStack_5c);
      this_00 = aSStack_5c;
    }
    else if ((uint)(iVar2 + DAT_0010f60c) < 5) {
      String::String(aSStack_54,(String *)(DAT_0010f614 + 0x10f51a + (iVar2 + DAT_0010f610) * 0x24))
      ;
      StringBuffer::append(aSStack_34,aSStack_54);
      this_00 = aSStack_54;
    }
    else if ((uint)(iVar2 + DAT_0010f618) < 10) {
      String::String(aSStack_4c,(String *)(DAT_0010f620 + 0x10f542 + (iVar2 + DAT_0010f61c) * 0x24))
      ;
      StringBuffer::append(aSStack_34,aSStack_4c);
      this_00 = aSStack_4c;
    }
    else {
      String::String(aSStack_44,(char *)(DAT_0010f624 + 0x10f55c));
      StringBuffer::append(aSStack_34,aSStack_44);
      this_00 = aSStack_44;
    }
  }
  else {
    if (sVar1 != 8) goto LAB_0010f586;
    String::String(aSStack_3c,(char *)(DAT_0010f628 + 0x10f576));
    StringBuffer::append(aSStack_34,aSStack_3c);
    this_00 = aSStack_3c;
  }
  String::~String(this_00);
LAB_0010f586:
  StringBuffer::toString();
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return this;
}


