/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b0478 GameStateEventRaid2Menu::drawReOpenTimer */

/* GameStateEventRaid2Menu::drawReOpenTimer() */

void __thiscall GameStateEventRaid2Menu::drawReOpenTimer(GameStateEventRaid2Menu *this)

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
  
  iVar1 = ZombieCafe::getEventRaid2_attackPointTimer(*(ZombieCafe **)(this + 0xc));
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_7c,(char *)(DAT_001b0644 + 0x1b0494));
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  iVar2 = __divsi3(iVar1,DAT_001b0648);
  if (0 < iVar2) {
    String::valueOf((long)aSStack_74);
    StringBuffer::append(aSStack_34,aSStack_74);
    String::~String(aSStack_74);
    String::String(aSStack_6c,(char *)(DAT_001b064c + 0x1b04ce));
    StringBuffer::append(aSStack_34,aSStack_6c);
    String::~String(aSStack_6c);
  }
  iVar1 = iVar1 + iVar2 * DAT_001b0650;
  iVar3 = __divsi3(iVar1,DAT_001b0654);
  if (iVar3 < 1) {
    if (iVar2 < 1) goto LAB_001b0538;
    String::String(aSStack_54,(char *)(DAT_001b065c + 0x1b0528));
    StringBuffer::append(aSStack_34,aSStack_54);
    this_00 = aSStack_54;
  }
  else {
    String::valueOf((long)aSStack_64);
    StringBuffer::append(aSStack_34,aSStack_64);
    String::~String(aSStack_64);
    String::String(aSStack_5c,(char *)(DAT_001b0658 + 0x1b050e));
    StringBuffer::append(aSStack_34,aSStack_5c);
    this_00 = aSStack_5c;
  }
  String::~String(this_00);
LAB_001b0538:
  __divsi3(iVar1 + DAT_001b0660 * iVar3,1000);
  String::valueOf((long)aSStack_4c);
  StringBuffer::append(aSStack_34,aSStack_4c);
  String::~String(aSStack_4c);
  String::String(aSStack_44,(char *)(DAT_001b0664 + 0x1b0564));
  StringBuffer::append(aSStack_34,aSStack_44);
  String::~String(aSStack_44);
  piVar5 = *(int **)(this + 0xe4);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar5,aSStack_3c);
  String::~String(aSStack_3c);
  piVar5 = *(int **)(this + 0xe4);
  pcVar4 = *(code **)(*piVar5 + 0x14);
  iVar1 = SmDev();
  uVar6 = *(undefined4 *)(&UNK_001b060e + DAT_001b0668 + iVar1 * 4);
  uVar7 = *(undefined4 *)(this + 0x108);
  iVar1 = SmDev();
  __mulsf3(uVar6,uVar7);
  uVar6 = __fixsfsi();
  __mulsf3(*(undefined4 *)((int)&DAT_001b064c + DAT_001b066c + iVar1 * 4),
           *(undefined4 *)(this + 0x10c));
  uVar7 = __fixsfsi();
  (*pcVar4)(piVar5,uVar6,uVar7);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return;
}


