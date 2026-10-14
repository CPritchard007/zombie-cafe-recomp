/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00126f28 GameStateCafe::checkFriendReward */

/* GameStateCafe::checkFriendReward() */

void __thiscall GameStateCafe::checkFriendReward(GameStateCafe *this)

{
  int *piVar1;
  int iVar2;
  MessageWithToxin *pMVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar7 = DAT_001271a0 + 0x126f34;
  piVar1 = *(int **)(iVar7 + DAT_001271a4);
  iVar8 = -1;
  piVar4 = (int *)**(undefined4 **)(iVar7 + DAT_001271a8);
  for (iVar5 = 0; iVar6 = *(int *)(this + 0xc), iVar5 < *piVar1; iVar5 = iVar5 + 1) {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    if ((*(int *)(iVar6 + DAT_001271ac) < iVar2) &&
       (iVar2 <= *(int *)(iVar6 + DAT_001271b0 + 4) + 1)) {
      iVar8 = iVar5;
    }
  }
  iVar5 = *(int *)(iVar6 + DAT_001271b0 + 4) + 1;
  if (*(int *)(iVar6 + DAT_001271ac) < iVar5) {
    *(int *)(iVar6 + DAT_001271ac) = iVar5;
  }
  if (iVar8 != -1) {
    Vector<String>::elementAt((int)aSStack_88);
    String::valueOf((int)aSStack_80);
    String::operator+(aSStack_78,aSStack_88,aSStack_80);
    Vector<String>::elementAt((int)aSStack_70);
    String::operator+(aSStack_68,aSStack_78,aSStack_70);
    piVar4 = *(int **)(iVar7 + DAT_001271bc);
    String::valueOf((long)aSStack_60);
    String::operator+(aSStack_58,aSStack_68,aSStack_60);
    Vector<String>::elementAt((int)aSStack_50);
    String::operator+(aSStack_90,aSStack_58,aSStack_50);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    String::~String(aSStack_60);
    String::~String(aSStack_68);
    String::~String(aSStack_70);
    String::~String(aSStack_78);
    String::~String(aSStack_80);
    String::~String(aSStack_88);
    if (iVar8 < *piVar1 + -1) {
      Vector<String>::elementAt((int)aSStack_48);
      String::valueOf((long)aSStack_40);
      String::operator+(aSStack_38,aSStack_48,aSStack_40);
      Vector<String>::elementAt((int)aSStack_30);
      String::operator+(aSStack_28,aSStack_38,aSStack_30);
      String::operator+=(aSStack_90,aSStack_28);
      String::~String(aSStack_28);
      String::~String(aSStack_30);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
      String::~String(aSStack_48);
    }
    String::String(aSStack_20,aSStack_90);
    pMVar3 = (MessageWithToxin *)operator_new(0x14);
    MessageWithToxin::MessageWithToxin(pMVar3,aSStack_20,*(undefined4 *)(*piVar4 + iVar8 * 4));
    Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar3);
    String::~String(aSStack_20);
    String::~String(aSStack_90);
  }
  return;
}


