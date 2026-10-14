/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00113090 GameStateAmpouleRaidMenu::drawReOpenTimer */

/* GameStateAmpouleRaidMenu::drawReOpenTimer() */

void __thiscall GameStateAmpouleRaidMenu::drawReOpenTimer(GameStateAmpouleRaidMenu *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  String *this_00;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
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
  
  iVar1 = ZombieCafe::getAmpouleRaid_reopenTimer(*(ZombieCafe **)(this + 0xc));
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_7c,(char *)(DAT_00113240 + 0x1130ac));
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  iVar2 = __divsi3(iVar1,DAT_00113244);
  if (0 < iVar2) {
    String::valueOf((long)aSStack_74);
    StringBuffer::append(aSStack_34,aSStack_74);
    String::~String(aSStack_74);
    String::String(aSStack_6c,(char *)(DAT_00113248 + 0x1130e6));
    StringBuffer::append(aSStack_34,aSStack_6c);
    String::~String(aSStack_6c);
  }
  iVar1 = iVar1 + iVar2 * DAT_0011324c;
  iVar3 = __divsi3(iVar1,DAT_00113250);
  if (iVar3 < 1) {
    if (iVar2 < 1) goto LAB_00113150;
    String::String(aSStack_54,(char *)(DAT_00113258 + 0x113140));
    StringBuffer::append(aSStack_34,aSStack_54);
    this_00 = aSStack_54;
  }
  else {
    String::valueOf((long)aSStack_64);
    StringBuffer::append(aSStack_34,aSStack_64);
    String::~String(aSStack_64);
    String::String(aSStack_5c,(char *)(DAT_00113254 + 0x113126));
    StringBuffer::append(aSStack_34,aSStack_5c);
    this_00 = aSStack_5c;
  }
  String::~String(this_00);
LAB_00113150:
  __divsi3(iVar1 + DAT_0011325c * iVar3,1000);
  String::valueOf((long)aSStack_4c);
  StringBuffer::append(aSStack_34,aSStack_4c);
  String::~String(aSStack_4c);
  String::String(aSStack_44,(char *)(DAT_00113260 + 0x11317c));
  StringBuffer::append(aSStack_34,aSStack_44);
  String::~String(aSStack_44);
  piVar6 = *(int **)(this + 0x78);
  pcVar5 = *(code **)(*piVar6 + 0x44);
  StringBuffer::toString();
  (*pcVar5)(piVar6,aSStack_3c);
  String::~String(aSStack_3c);
  piVar6 = *(int **)(this + 0x78);
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x14);
  iVar2 = piVar6[3];
  pcVar5 = *(code **)(*piVar6 + 0x14);
  iVar1 = SmDev();
  __mulsf3(*(undefined4 *)(&UNK_001131ee + DAT_00113264 + iVar1 * 4),*(undefined4 *)(this + 0x94));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar6,(iVar3 >> 0x10) - iVar2 / 2,uVar4);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return;
}


