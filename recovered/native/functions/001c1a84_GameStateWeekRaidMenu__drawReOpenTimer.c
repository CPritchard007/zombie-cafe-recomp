/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c1a84 GameStateWeekRaidMenu::drawReOpenTimer */

/* GameStateWeekRaidMenu::drawReOpenTimer() */

void __thiscall GameStateWeekRaidMenu::drawReOpenTimer(GameStateWeekRaidMenu *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  String *this_00;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  
  iVar1 = ZombieCafe::getWeekRaid_attackPointTimer(*(ZombieCafe **)(this + 0xc));
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_7c,(char *)(DAT_001c1c50 + 0x1c1aa0));
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  iVar2 = __divsi3(iVar1,DAT_001c1c54);
  if (0 < iVar2) {
    String::valueOf((long)aSStack_74);
    StringBuffer::append(aSStack_34,aSStack_74);
    String::~String(aSStack_74);
    String::String(aSStack_6c,(char *)(DAT_001c1c58 + 0x1c1ada));
    StringBuffer::append(aSStack_34,aSStack_6c);
    String::~String(aSStack_6c);
  }
  iVar1 = iVar1 + iVar2 * DAT_001c1c5c;
  iVar3 = __divsi3(iVar1,DAT_001c1c60);
  if (iVar3 < 1) {
    if (iVar2 < 1) goto LAB_001c1b44;
    String::String(aSStack_54,(char *)(DAT_001c1c68 + 0x1c1b34));
    StringBuffer::append(aSStack_34,aSStack_54);
    this_00 = aSStack_54;
  }
  else {
    String::valueOf((long)aSStack_64);
    StringBuffer::append(aSStack_34,aSStack_64);
    String::~String(aSStack_64);
    String::String(aSStack_5c,(char *)(DAT_001c1c64 + 0x1c1b1a));
    StringBuffer::append(aSStack_34,aSStack_5c);
    this_00 = aSStack_5c;
  }
  String::~String(this_00);
LAB_001c1b44:
  __divsi3(iVar1 + DAT_001c1c6c * iVar3,1000);
  String::valueOf((long)aSStack_4c);
  StringBuffer::append(aSStack_34,aSStack_4c);
  String::~String(aSStack_4c);
  String::String(aSStack_44,(char *)(DAT_001c1c70 + 0x1c1b70));
  StringBuffer::append(aSStack_34,aSStack_44);
  String::~String(aSStack_44);
  piVar5 = *(int **)(this + 0xac);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar5,aSStack_3c);
  String::~String(aSStack_3c);
  piVar5 = *(int **)(this + 0xac);
  pcVar4 = *(code **)(*piVar5 + 0x14);
  iVar1 = SmDev();
  uVar6 = *(undefined4 *)(DAT_001c1c74 + iVar1 * 4 + 0x1c1be6);
  uVar7 = *(undefined4 *)(this + 0xb8);
  iVar1 = SmDev();
  __mulsf3(uVar6,uVar7);
  uVar6 = __fixsfsi();
  __mulsf3(*(undefined4 *)(&UNK_001c1c24 + DAT_001c1c78 + iVar1 * 4),*(undefined4 *)(this + 0xb8));
  uVar7 = __fixsfsi();
  (*pcVar4)(piVar5,uVar6,uVar7);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return;
}


