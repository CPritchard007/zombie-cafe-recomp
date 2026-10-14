/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d6204 QuestOrder::tick */

/* QuestOrder::tick(long) */

void QuestOrder::tick(long param_1)

{
  int iVar1;
  ZombieCafe *this;
  int iVar2;
  NoticeDialog *pNVar3;
  float extraout_s0;
  float extraout_s0_00;
  float fVar4;
  float extraout_s0_01;
  float extraout_s1;
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
  
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x60) + 0x8c) + 0x14) != '\0') {
    iVar1 = CapcomApp::getInstance();
    this = *(ZombieCafe **)(iVar1 + 4);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this);
    if (((iVar1 != 0) && (*(ZCImageButton **)(param_1 + 0x90) != (ZCImageButton *)0x0)) &&
       (iVar1 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 0x90),*(int *)(this + DAT_001d64bc) >> 0x10
                           ,(int)(short)*(int *)(this + DAT_001d64bc),extraout_s0,extraout_s1),
       iVar1 != 0)) {
      ZombieCafe::playEffect((int)this,extraout_s0_00);
      iVar1 = DAT_001d64c4;
      this[DAT_001d64c0] = (ZombieCafe)0x1;
      printf((char *)(iVar1 + 0x1d6266));
      StringBuffer::StringBuffer(aSStack_34);
      Vector<String>::elementAt((int)aSStack_7c);
      StringBuffer::append(aSStack_34,aSStack_7c);
      String::~String(aSStack_7c);
      String::String(aSStack_74,(char *)(DAT_001d64cc + 0x1d6298));
      StringBuffer::append(aSStack_34,aSStack_74);
      String::~String(aSStack_74);
      Vector<String>::elementAt((int)aSStack_6c);
      StringBuffer::append(aSStack_34,aSStack_6c);
      String::~String(aSStack_6c);
      String::valueOf((int)aSStack_64);
      StringBuffer::append(aSStack_34,aSStack_64);
      String::~String(aSStack_64);
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x60) + 0x40);
      *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1;
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 1) {
        String::String(aSStack_54,(char *)(DAT_001d64dc + 0x1d634a));
        StringBuffer::append(aSStack_34,aSStack_54);
        String::~String(aSStack_54);
        iVar2 = *(int *)(param_1 + 0x84);
        iVar1 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(*(int *)(param_1 + 0x60) + 0x60));
        fVar4 = extraout_s0_01;
        if ((iVar1 == 0) && (0 < iVar2)) {
          fVar4 = (float)ZombieCafe::addXp(*(ZombieCafe **)(*(int *)(param_1 + 0x60) + 0x60),iVar2);
        }
        ZombieCafe::playEffect(*(int *)(*(int *)(param_1 + 0x60) + 0x60),fVar4);
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x60) + 0x40);
        *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + *(int *)(param_1 + 0x84);
      }
      else if (iVar1 == 2) {
        Vector<String>::elementAt((int)aSStack_4c);
        StringBuffer::append(aSStack_34,aSStack_4c);
        String::~String(aSStack_4c);
        fVar4 = (float)ZombieCafe::addToxin
                                 (*(ZombieCafe **)(*(int *)(param_1 + 0x60) + 0x60),
                                  *(int *)(param_1 + 0x84),false);
        ZombieCafe::playEffect(*(int *)(*(int *)(param_1 + 0x60) + 0x60),fVar4);
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x60) + 0x40);
        *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + *(int *)(param_1 + 0x84);
      }
      else if (iVar1 == 0) {
        String::String(aSStack_5c,(char *)(DAT_001d64d4 + 0x1d6304));
        StringBuffer::append(aSStack_34,aSStack_5c);
        fVar4 = (float)String::~String(aSStack_5c);
        iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x60);
        *(int *)(iVar1 + DAT_001d64d8) = *(int *)(iVar1 + DAT_001d64d8) + *(int *)(param_1 + 0x84);
        ZombieCafe::playEffect(*(int *)(*(int *)(param_1 + 0x60) + 0x60),fVar4);
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x60) + 0x40);
        *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + *(int *)(param_1 + 0x84);
      }
      *(undefined1 *)
       (*(int *)(**(int **)(param_1 + 0x8c) * 4 +
                *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x60) + 0x60) + 0x40) + 0xc)) + 4) = 4
      ;
      Quest::removeActiveQuest
                (*(Quest **)(*(int *)(*(int *)(param_1 + 0x60) + 0x60) + 0x40),
                 **(int **)(param_1 + 0x8c));
      ZombieCafe::save();
      Quest::adjustedActiveState(*(Quest **)(*(int *)(*(int *)(param_1 + 0x60) + 0x60) + 0x40));
      pNVar3 = *(NoticeDialog **)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0xd0);
      StringBuffer::toString();
      Vector<String>::elementAt((int)aSStack_3c);
      NoticeDialog::show(pNVar3,aSStack_44,aSStack_3c,0,param_1);
      String::~String(aSStack_3c);
      String::~String(aSStack_44);
      QuestDialog::show(*(QuestDialog **)(param_1 + 0x60));
      CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
    }
  }
  return;
}


