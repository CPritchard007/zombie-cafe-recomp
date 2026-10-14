/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a0f74 GameStateEventRaid::getEventRaidRewardText */

/* GameStateEventRaid::getEventRaidRewardText() */

GameStateEventRaid * __thiscall GameStateEventRaid::getEventRaidRewardText(GameStateEventRaid *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  String *this_00;
  int *piVar5;
  ZombieCafe *this_01;
  short *psVar6;
  String aSStack_e4 [8];
  String aSStack_dc [8];
  String aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
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
  iVar2 = ZombieCafe::getEventRaid_cafeLevel(this_01);
  ZombieCafe::getEventRaid_cafeLevelNext(this_01);
  iVar3 = ZombieCafe::getEventRaid_Theme(this_01);
  iVar4 = ZombieCafe::isEventRaid_FirstHalf();
  if (iVar4 == 0) {
    piVar5 = (int *)(DAT_001a12dc + 0x1a0fb6);
  }
  else {
    piVar5 = (int *)(DAT_001a12d8 + 0x1a0fb0);
  }
  psVar6 = (short *)(*(int *)(*piVar5 + iVar3 * 4) + iVar2 * 0x10);
  sVar1 = *psVar6;
  iVar2 = *(int *)(psVar6 + 2);
  iVar3 = *(int *)(psVar6 + 4);
  if (sVar1 == 0) {
    String::String(aSStack_e4,(char *)(DAT_001a12e0 + 0x1a0fcc));
    StringBuffer::append(aSStack_34,aSStack_e4);
    String::~String(aSStack_e4);
    String::valueOf((int)aSStack_dc);
    StringBuffer::append(aSStack_34,aSStack_dc);
    this_00 = aSStack_dc;
  }
  else {
    if (sVar1 == 1) goto LAB_001a120a;
    if (sVar1 == 2) {
      String::String(aSStack_d4,(char *)(DAT_001a12e4 + 0x1a1006));
      StringBuffer::append(aSStack_34,aSStack_d4);
      String::~String(aSStack_d4);
      String::String(aSStack_cc,
                     (String *)
                     (*(int *)(iVar3 * 4 + *(int *)(this_01 + DAT_001a12e8)) + DAT_001a12ec));
      StringBuffer::append(aSStack_34,aSStack_cc);
      this_00 = aSStack_cc;
    }
    else if (sVar1 == 3) {
      String::String(aSStack_c4,(char *)(DAT_001a12f0 + 0x1a1040));
      StringBuffer::append(aSStack_34,aSStack_c4);
      String::~String(aSStack_c4);
      String::String(aSStack_bc,
                     (String *)
                     (*(int *)(iVar2 * 4 + *(int *)(this_01 + DAT_001a12e8)) + DAT_001a12ec));
      StringBuffer::append(aSStack_34,aSStack_bc);
      String::~String(aSStack_bc);
      String::String(aSStack_b4,(char *)(DAT_001a12f4 + 0x1a1078));
      StringBuffer::append(aSStack_34,aSStack_b4);
      String::~String(aSStack_b4);
      String::valueOf((int)aSStack_ac);
      StringBuffer::append(aSStack_34,aSStack_ac);
      String::~String(aSStack_ac);
      String::String(aSStack_a4,(char *)(DAT_001a12f8 + 0x1a10a6));
      StringBuffer::append(aSStack_34,aSStack_a4);
      this_00 = aSStack_a4;
    }
    else if (sVar1 == 7) {
      String::String(aSStack_9c,(char *)(DAT_001a12fc + 0x1a10c0));
      StringBuffer::append(aSStack_34,aSStack_9c);
      String::~String(aSStack_9c);
      String::String(aSStack_94,
                     (String *)
                     (*(int *)(iVar2 * 4 + *(int *)(this_01 + DAT_001a12e8)) + DAT_001a12ec));
      StringBuffer::append(aSStack_34,aSStack_94);
      String::~String(aSStack_94);
      String::String(aSStack_8c,(char *)(DAT_001a1300 + 0x1a10f8));
      StringBuffer::append(aSStack_34,aSStack_8c);
      String::~String(aSStack_8c);
      String::valueOf((int)aSStack_84);
      StringBuffer::append(aSStack_34,aSStack_84);
      String::~String(aSStack_84);
      String::String(aSStack_7c,(char *)(DAT_001a1304 + 0x1a1126));
      StringBuffer::append(aSStack_34,aSStack_7c);
      String::~String(aSStack_7c);
      String::String(aSStack_74,(char *)(DAT_001a1308 + 0x1a113e));
      StringBuffer::append(aSStack_34,aSStack_74);
      this_00 = aSStack_74;
    }
    else {
      if (sVar1 == 4) goto LAB_001a120a;
      if (sVar1 == 5) {
        String::String(aSStack_6c,(char *)(DAT_001a130c + 0x1a115c));
        StringBuffer::append(aSStack_34,aSStack_6c);
        this_00 = aSStack_6c;
      }
      else if (sVar1 == 6) {
        String::String(aSStack_64,(char *)(DAT_001a1310 + 0x1a1176));
        StringBuffer::append(aSStack_34,aSStack_64);
        this_00 = aSStack_64;
      }
      else if (sVar1 == 8) {
        if (0x1d < iVar2 - 1U) goto LAB_001a120a;
        String::valueOf((int)aSStack_5c);
        StringBuffer::append(aSStack_34,aSStack_5c);
        String::~String(aSStack_5c);
        String::String(aSStack_54,(char *)(DAT_001a1314 + 0x1a11ac));
        StringBuffer::append(aSStack_34,aSStack_54);
        this_00 = aSStack_54;
      }
      else {
        if ((sVar1 != 9) || (9 < iVar2 - 1U)) goto LAB_001a120a;
        String::String(aSStack_4c,(char *)(DAT_001a1318 + 0x1a11cc));
        StringBuffer::append(aSStack_34,aSStack_4c);
        String::~String(aSStack_4c);
        String::valueOf((int)aSStack_44);
        StringBuffer::append(aSStack_34,aSStack_44);
        String::~String(aSStack_44);
        String::String(aSStack_3c,(char *)(DAT_001a131c + 0x1a11fa));
        StringBuffer::append(aSStack_34,aSStack_3c);
        this_00 = aSStack_3c;
      }
    }
  }
  String::~String(this_00);
LAB_001a120a:
  StringBuffer::toString();
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return this;
}


