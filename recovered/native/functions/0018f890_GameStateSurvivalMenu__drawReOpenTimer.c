/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f890 GameStateSurvivalMenu::drawReOpenTimer */

/* GameStateSurvivalMenu::drawReOpenTimer() */

void __thiscall GameStateSurvivalMenu::drawReOpenTimer(GameStateSurvivalMenu *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  String *this_00;
  code *pcVar4;
  int *piVar5;
  int iVar6;
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
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  iVar6 = *(int *)(*(int *)(this + 0xc) + DAT_0018fa4c);
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_7c,(char *)(DAT_0018fa50 + 0x18f8ba));
  StringBuffer::append(aSStack_34,aSStack_7c);
  String::~String(aSStack_7c);
  iVar1 = __divsi3(iVar6,DAT_0018fa54);
  if (0 < iVar1) {
    String::valueOf((long)aSStack_74);
    StringBuffer::append(aSStack_34,aSStack_74);
    String::~String(aSStack_74);
    String::String(aSStack_6c,(char *)(DAT_0018fa58 + 0x18f8f4));
    StringBuffer::append(aSStack_34,aSStack_6c);
    String::~String(aSStack_6c);
  }
  iVar6 = iVar6 + iVar1 * DAT_0018fa5c;
  iVar3 = __divsi3(iVar6,DAT_0018fa60);
  if (iVar3 < 1) {
    if (iVar1 < 1) goto LAB_0018f95e;
    String::String(aSStack_54,(char *)(DAT_0018fa68 + 0x18f94e));
    StringBuffer::append(aSStack_34,aSStack_54);
    this_00 = aSStack_54;
  }
  else {
    String::valueOf((long)aSStack_64);
    StringBuffer::append(aSStack_34,aSStack_64);
    String::~String(aSStack_64);
    String::String(aSStack_5c,(char *)(DAT_0018fa64 + 0x18f934));
    StringBuffer::append(aSStack_34,aSStack_5c);
    this_00 = aSStack_5c;
  }
  String::~String(this_00);
LAB_0018f95e:
  __divsi3(iVar6 + DAT_0018fa6c * iVar3,1000);
  String::valueOf((long)aSStack_4c);
  StringBuffer::append(aSStack_34,aSStack_4c);
  String::~String(aSStack_4c);
  String::String(aSStack_44,(char *)(DAT_0018fa70 + 0x18f98a));
  StringBuffer::append(aSStack_34,aSStack_44);
  String::~String(aSStack_44);
  piVar5 = *(int **)(this + 0x8c);
  pcVar4 = *(code **)(*piVar5 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar5,aSStack_3c);
  String::~String(aSStack_3c);
  piVar5 = *(int **)(this + 0x8c);
  iVar3 = *(int *)(*(int *)(this + 0xc) + 0x14);
  iVar6 = piVar5[3];
  pcVar4 = *(code **)(*piVar5 + 0x14);
  iVar1 = SmDev();
  __mulsf3(uVar2,*(undefined4 *)(&UNK_0018fa08 + DAT_0018fa74 + iVar1 * 4));
  uVar2 = __fixsfsi();
  (*pcVar4)(piVar5,(iVar3 >> 0x10) - iVar6 / 2,uVar2);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return;
}


