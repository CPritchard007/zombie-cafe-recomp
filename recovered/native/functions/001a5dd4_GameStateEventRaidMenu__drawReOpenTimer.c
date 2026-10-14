/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a5dd4 GameStateEventRaidMenu::drawReOpenTimer */

/* GameStateEventRaidMenu::drawReOpenTimer() */

void __thiscall GameStateEventRaidMenu::drawReOpenTimer(GameStateEventRaidMenu *this)

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
  
  CapcomApp::getInstance();
  iVar1 = ZombieCafe::getEventRaid_attackPointTimer(*(ZombieCafe **)(this + 0xc));
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_7c,(char *)(DAT_001a5fa4 + 0x1a5df4));
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  iVar2 = __divsi3(iVar1,DAT_001a5fa8);
  if (0 < iVar2) {
    String::valueOf((long)aSStack_74);
    StringBuffer::append(aSStack_34,aSStack_74);
    String::~String(aSStack_74);
    String::String(aSStack_6c,(char *)(DAT_001a5fac + 0x1a5e2e));
    StringBuffer::append(aSStack_34,aSStack_6c);
    String::~String(aSStack_6c);
  }
  iVar1 = iVar1 + iVar2 * DAT_001a5fb0;
  iVar3 = __divsi3(iVar1,DAT_001a5fb4);
  if (iVar3 < 1) {
    if (iVar2 < 1) goto LAB_001a5e98;
    String::String(aSStack_54,(char *)(DAT_001a5fbc + 0x1a5e88));
    StringBuffer::append(aSStack_34,aSStack_54);
    this_00 = aSStack_54;
  }
  else {
    String::valueOf((long)aSStack_64);
    StringBuffer::append(aSStack_34,aSStack_64);
    String::~String(aSStack_64);
    String::String(aSStack_5c,(char *)(DAT_001a5fb8 + 0x1a5e6e));
    StringBuffer::append(aSStack_34,aSStack_5c);
    this_00 = aSStack_5c;
  }
  String::~String(this_00);
LAB_001a5e98:
  __divsi3(iVar1 + DAT_001a5fc0 * iVar3,1000);
  String::valueOf((long)aSStack_4c);
  StringBuffer::append(aSStack_34,aSStack_4c);
  String::~String(aSStack_4c);
  String::String(aSStack_44,(char *)(DAT_001a5fc4 + 0x1a5ec4));
  StringBuffer::append(aSStack_34,aSStack_44);
  String::~String(aSStack_44);
  piVar5 = *(int **)(this + 0x84);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar5,aSStack_3c);
  String::~String(aSStack_3c);
  piVar5 = *(int **)(this + 0x84);
  pcVar4 = *(code **)(*piVar5 + 0x14);
  iVar1 = SmDev();
  uVar6 = *(undefined4 *)(DAT_001a5fc8 + iVar1 * 4 + 0x1a5f22);
  uVar7 = *(undefined4 *)(this + 0xb0);
  iVar1 = SmDev();
  __mulsf3(uVar6,uVar7);
  uVar6 = __fixsfsi();
  __mulsf3(*(undefined4 *)(&UNK_001a5f60 + DAT_001a5fcc + iVar1 * 4),*(undefined4 *)(this + 0xb4));
  uVar7 = __fixsfsi();
  (*pcVar4)(piVar5,uVar6,uVar7);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return;
}


