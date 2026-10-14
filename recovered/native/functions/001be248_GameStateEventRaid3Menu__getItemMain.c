/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001be248 GameStateEventRaid3Menu::getItemMain */

/* GameStateEventRaid3Menu::getItemMain() */

void __thiscall GameStateEventRaid3Menu::getItemMain(GameStateEventRaid3Menu *this)

{
  short sVar1;
  int iVar2;
  ZombieCafe *pZVar3;
  FoodStack *pFVar4;
  undefined4 uVar5;
  Character *pCVar6;
  undefined4 uVar7;
  int iVar8;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar9;
  uchar uVar10;
  int iVar11;
  NoticeDialog *pNVar12;
  int iVar13;
  int local_12c;
  String aSStack_11c [8];
  String aSStack_114 [8];
  String aSStack_10c [8];
  String aSStack_104 [8];
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
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
  CharacterData aCStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar13 = DAT_001be5a8 + 0x1be254;
  iVar2 = isGetEventRaid3Item(this);
  if (iVar2 < 1) goto LAB_001be80a;
  pZVar3 = *(ZombieCafe **)(this + 0xc);
  iVar8 = DAT_001be5ac + 0x1be26e + *(int *)(pZVar3 + 0x234) * 0x14;
  iVar11 = *(int *)(iVar8 + 0x24);
  iVar2 = *(int *)(iVar8 + 0x28);
  sVar1 = *(short *)(iVar8 + 0x20);
  iVar8 = *(int *)(iVar8 + 0x2c);
  if (*(int *)(pZVar3 + 0x234) < 0) goto LAB_001be80a;
  if (sVar1 == 0) {
    ZombieCafe::addCash(pZVar3,iVar11);
    *(int *)(*(int *)(this + 0xc) + 0x234) = *(int *)(*(int *)(this + 0xc) + 0x234) + 1;
    ZombieCafe::save();
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_11c);
    StringBuffer::append(aSStack_34,aSStack_11c);
    String::~String(aSStack_11c);
    String::String(aSStack_114,(char *)(DAT_001be5b0 + 0x1be2c4));
    StringBuffer::append(aSStack_34,aSStack_114);
    String::~String(aSStack_114);
    String::valueOf((int)aSStack_10c);
    StringBuffer::append(aSStack_34,aSStack_10c);
    String::~String(aSStack_10c);
    String::String(aSStack_104,(char *)(DAT_001be5b4 + 0x1be2f2));
    StringBuffer::append(aSStack_34,aSStack_104);
    String::~String(aSStack_104);
    pNVar12 = *(NoticeDialog **)(this + 0x48);
    StringBuffer::toString();
    String::String(aSStack_f4,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar13 + DAT_001be5b8) * 8));
    NoticeDialog::show(pNVar12,aSStack_fc,aSStack_f4,0,this);
    String::~String(aSStack_f4);
    String::~String(aSStack_fc);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
    goto LAB_001be80a;
  }
  if (sVar1 == 5) {
    pFVar4 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(pFVar4,(uchar)iVar11,(uchar)iVar2);
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(pZVar3 + DAT_001be5bc),pFVar4);
    uVar5 = arc4random();
    __aeabi_uidivmod(uVar5,0x14);
    *(int *)(pFVar4 + 4) = extraout_r1 + 10;
    *(int *)(*(int *)(this + 0xc) + 0x234) = *(int *)(*(int *)(this + 0xc) + 0x234) + 1;
    ZombieCafe::save();
    FoodStack::getRecipe(pFVar4);
    Recipe::getFullName((char)&stack0xffffffec + 0xa8);
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_ec);
    StringBuffer::append(aSStack_34,aSStack_ec);
    String::~String(aSStack_ec);
    String::String(aSStack_e4,(char *)(DAT_001be5c0 + 0x1be3c6));
    StringBuffer::append(aSStack_34,aSStack_e4);
    String::~String(aSStack_e4);
    String::String(aSStack_dc,aSStack_6c);
    StringBuffer::append(aSStack_34,aSStack_dc);
    String::~String(aSStack_dc);
    String::String(aSStack_d4,(char *)(DAT_001be5c4 + 0x1be3f4));
    StringBuffer::append(aSStack_34,aSStack_d4);
    String::~String(aSStack_d4);
    pNVar12 = *(NoticeDialog **)(this + 0x48);
    StringBuffer::toString();
    String::String(aSStack_c4,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar13 + DAT_001be5b8) * 8));
    NoticeDialog::show(pNVar12,aSStack_cc,aSStack_c4,0,this);
    String::~String(aSStack_c4);
    String::~String(aSStack_cc);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  }
  else if (sVar1 == 6) {
    iVar8 = iVar11;
    local_12c = iVar2;
    if (iVar11 == 0) {
      iVar8 = iVar2;
      if (iVar2 == 0) {
        iVar8 = iVar11;
      }
    }
    else {
      local_12c = iVar11;
      if (iVar2 != 0) {
        local_12c = iVar2;
      }
    }
    uVar10 = (uchar)iVar8;
    iVar2 = arc4random();
    if (-1 < (iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f) << 0x1f) {
      uVar10 = (uchar)local_12c;
    }
    iVar2 = arc4random();
    __aeabi_idivmod(iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f,100);
    piVar9 = (int *)(DAT_001be5cc + 0x1be49c);
    for (iVar2 = 1; iVar2 < **(int **)(iVar13 + DAT_001be5c8); iVar2 = iVar2 + 1) {
      iVar8 = *piVar9;
      piVar9 = piVar9 + 1;
      if (extraout_r1_00 < iVar8) goto LAB_001be4a8;
    }
    iVar2 = 1;
LAB_001be4a8:
    iVar8 = *(int *)(this + 0xc);
    pFVar4 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(pFVar4,uVar10,(uchar)iVar2);
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar8 + DAT_001be5bc),pFVar4);
    uVar5 = arc4random();
    __aeabi_uidivmod(uVar5,0x14);
    *(int *)(pFVar4 + 4) = extraout_r1_01 + 10;
    *(int *)(*(int *)(this + 0xc) + 0x234) = *(int *)(*(int *)(this + 0xc) + 0x234) + 1;
    ZombieCafe::save();
    FoodStack::getRecipe(pFVar4);
    Recipe::getFullName((char)&stack0xffffffec + 0xa8);
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_bc);
    StringBuffer::append(aSStack_34,aSStack_bc);
    String::~String(aSStack_bc);
    String::String(aSStack_b4,(char *)(DAT_001be5d0 + 0x1be524));
    StringBuffer::append(aSStack_34,aSStack_b4);
    String::~String(aSStack_b4);
    String::String(aSStack_ac,aSStack_6c);
    StringBuffer::append(aSStack_34,aSStack_ac);
    String::~String(aSStack_ac);
    String::String(aSStack_a4,(char *)(DAT_001be5d4 + 0x1be552));
    StringBuffer::append(aSStack_34,aSStack_a4);
    String::~String(aSStack_a4);
    pNVar12 = *(NoticeDialog **)(this + 0x48);
    StringBuffer::toString();
    String::String(aSStack_94,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar13 + DAT_001be5b8) * 8));
    NoticeDialog::show(pNVar12,aSStack_9c,aSStack_94,0,this);
    String::~String(aSStack_94);
    String::~String(aSStack_9c);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  }
  else {
    if (sVar1 != 3) goto LAB_001be80a;
    iVar2 = playerHaveZombieCountCheck(this);
    piVar9 = *(int **)(iVar13 + DAT_001be940);
    if (iVar2 == 0) {
      pNVar12 = *(NoticeDialog **)(this + 0x48);
      String::String(aSStack_8c,(char *)(DAT_001be944 + 0x1be5f8));
      String::String(aSStack_84,
                     (String *)(*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar9 * 8))
      ;
      NoticeDialog::show(pNVar12,aSStack_8c,aSStack_84,0,this);
      String::~String(aSStack_84);
      String::~String(aSStack_8c);
      return;
    }
    String::String(aSStack_7c,(char *)(DAT_001be948 + 0x1be636));
    pCVar6 = (Character *)operator_new(0x6c);
    Character::Character
              (pCVar6,*(undefined4 *)(iVar11 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001be94c)),2,
               1,aSStack_7c);
    String::~String(aSStack_7c);
    uVar5 = __floatsisf((int)**(short **)(iVar13 + DAT_001be950));
    uVar7 = Character::getMaxEnergy();
    iVar2 = __aeabi_fcmplt(uVar5,0);
    if (iVar2 == 0) {
      iVar2 = __aeabi_fcmpgt(uVar5,uVar7);
      if (iVar2 != 0) {
        uVar5 = uVar7;
      }
    }
    else {
      uVar5 = 0;
    }
    iVar2 = DAT_001be954;
    *(undefined4 *)(pCVar6 + 0x40) = uVar5;
    CharacterData::getRandomName(aCStack_74,*(bool *)(*(int *)pCVar6 + iVar2),0);
    String::operator=((String *)(pCVar6 + 8),aCStack_74);
    String::~String((String *)aCStack_74);
    Platform::getAppTime();
    uVar5 = __fixdfsi();
    pCVar6[4] = (Character)0x1;
    *(undefined4 *)(pCVar6 + 0x10) = uVar5;
    pCVar6[5] = (Character)0x2;
    if (iVar8 == 1) {
      *(undefined4 *)(pCVar6 + 0x30) = 1;
    }
    else {
      iVar2 = iVar8;
      if (iVar8 == 2) {
LAB_001be6e8:
        *(int *)(pCVar6 + 0x30) = iVar2;
      }
      else if (iVar8 == 3) {
        *(undefined4 *)(pCVar6 + 0x30) = 3;
      }
      else {
        iVar2 = 0;
        if (iVar8 != 4) goto LAB_001be6e8;
        *(undefined4 *)(pCVar6 + 0x30) = 4;
      }
    }
    pZVar3 = *(ZombieCafe **)(this + 0xc);
    iVar2 = *(int *)((Vector<Character*> *)(pZVar3 + DAT_001be958) + 4);
    if (iVar2 + 1 <
        (int)*(short *)((*(int *)(pZVar3 + 0x680) + -1) * 2 + **(int **)(iVar13 + DAT_001be95c))) {
      iVar2 = iVar2 + 2;
      if (*(int *)(pZVar3 + DAT_001be958) < iVar2) {
        iVar13 = *(int *)(pZVar3 + DAT_001be958) * 2;
        if (iVar13 < iVar2) {
          iVar13 = iVar2;
        }
        Vector<Character*>::resize((Vector<Character*> *)(pZVar3 + DAT_001be958),iVar13,-1);
      }
      iVar13 = *(int *)(pZVar3 + DAT_001be958 + 4);
      iVar2 = DAT_001be958 + 8;
      *(int *)(pZVar3 + DAT_001be958 + 4) = iVar13 + 1;
      *(Character **)((iVar13 + 1) * 4 + *(int *)(pZVar3 + iVar2)) = pCVar6;
    }
    else {
      ZombieCafe::putZombieInMeetlocker(pZVar3,pCVar6,(PullMenuElement *)0x0);
    }
    *(int *)(*(int *)(this + 0xc) + 0x234) = *(int *)(*(int *)(this + 0xc) + 0x234) + 1;
    ZombieCafe::save();
    String::String(aSStack_6c,(String *)(*(int *)pCVar6 + DAT_001be960));
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_64);
    StringBuffer::append(aSStack_34,aSStack_64);
    String::~String(aSStack_64);
    String::String(aSStack_5c,(char *)(DAT_001be964 + 0x1be784));
    StringBuffer::append(aSStack_34,aSStack_5c);
    String::~String(aSStack_5c);
    String::String(aSStack_54,aSStack_6c);
    StringBuffer::append(aSStack_34,aSStack_54);
    String::~String(aSStack_54);
    String::String(aSStack_4c,(char *)(DAT_001be968 + 0x1be7b2));
    StringBuffer::append(aSStack_34,aSStack_4c);
    String::~String(aSStack_4c);
    pNVar12 = *(NoticeDialog **)(this + 0x48);
    StringBuffer::toString();
    String::String(aSStack_3c,
                   (String *)(*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar9 * 8));
    NoticeDialog::show(pNVar12,aSStack_44,aSStack_3c,0,this);
    String::~String(aSStack_3c);
    String::~String(aSStack_44);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  }
  String::~String(aSStack_6c);
LAB_001be80a:
  Layout_GetItemButton(this);
  return;
}


