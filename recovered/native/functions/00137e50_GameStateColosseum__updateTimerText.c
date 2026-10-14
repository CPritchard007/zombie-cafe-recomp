/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00137e50 GameStateColosseum::updateTimerText */

/* GameStateColosseum::updateTimerText() */

void __thiscall GameStateColosseum::updateTimerText(GameStateColosseum *this)

{
  int iVar1;
  String *pSVar2;
  int extraout_r1;
  int extraout_r1_00;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
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
  String aSStack_34 [8];
  StringBuffer aSStack_2c [28];
  
  StringBuffer::StringBuffer(aSStack_2c);
  uVar4 = *(undefined4 *)(this + 0x4c);
  iVar1 = __divsi3(uVar4,DAT_0013807c);
  if (iVar1 == 0) {
    String::String(aSStack_a4,(char *)(DAT_00138080 + 0x137e72));
    StringBuffer::append(aSStack_2c,aSStack_a4);
    pSVar2 = aSStack_a4;
  }
  else if (iVar1 < 10) {
    String::String(aSStack_9c,(char *)(DAT_00138084 + 0x137e8c));
    StringBuffer::append(aSStack_2c,aSStack_9c);
    String::~String(aSStack_9c);
    String::valueOf((int)aSStack_94);
    StringBuffer::append(aSStack_2c,aSStack_94);
    pSVar2 = aSStack_94;
  }
  else {
    String::valueOf((int)aSStack_8c);
    StringBuffer::append(aSStack_2c,aSStack_8c);
    pSVar2 = aSStack_8c;
  }
  String::~String(pSVar2);
  String::String(aSStack_84,(char *)(DAT_00138088 + 0x137ece));
  StringBuffer::append(aSStack_2c,aSStack_84);
  String::~String(aSStack_84);
  iVar1 = __divsi3(uVar4,DAT_0013808c);
  if (iVar1 == 0) {
    String::String(aSStack_7c,(char *)(DAT_00138090 + 0x137ef2));
    StringBuffer::append(aSStack_2c,aSStack_7c);
    pSVar2 = aSStack_7c;
  }
  else {
    __aeabi_idivmod(iVar1,0x3c);
    if (extraout_r1 < 10) {
      String::String(aSStack_74,(char *)(DAT_00138094 + 0x137f14));
      StringBuffer::append(aSStack_2c,aSStack_74);
      String::~String(aSStack_74);
      String::valueOf((int)aSStack_6c);
      StringBuffer::append(aSStack_2c,aSStack_6c);
      pSVar2 = aSStack_6c;
    }
    else {
      String::valueOf((int)aSStack_64);
      StringBuffer::append(aSStack_2c,aSStack_64);
      pSVar2 = aSStack_64;
    }
  }
  String::~String(pSVar2);
  String::String(aSStack_5c,(char *)(DAT_00138098 + 0x137f54));
  StringBuffer::append(aSStack_2c,aSStack_5c);
  String::~String(aSStack_5c);
  iVar1 = __divsi3(uVar4,1000);
  if (iVar1 == 0) {
    String::String(aSStack_54,(char *)(DAT_0013809c + 0x137f7a));
    StringBuffer::append(aSStack_2c,aSStack_54);
    pSVar2 = aSStack_54;
  }
  else {
    __aeabi_idivmod(iVar1,0x3c);
    if (extraout_r1_00 < 10) {
      String::String(aSStack_4c,(char *)(DAT_001380a0 + 0x137f9c));
      StringBuffer::append(aSStack_2c,aSStack_4c);
      String::~String(aSStack_4c);
      String::valueOf((int)aSStack_44);
      StringBuffer::append(aSStack_2c,aSStack_44);
      pSVar2 = aSStack_44;
    }
    else {
      String::valueOf((int)aSStack_3c);
      StringBuffer::append(aSStack_2c,aSStack_3c);
      pSVar2 = aSStack_3c;
    }
  }
  String::~String(pSVar2);
  piVar5 = *(int **)(this + 0xb4);
  pcVar3 = *(code **)(*piVar5 + 0x44);
  StringBuffer::toString();
  (*pcVar3)(piVar5,aSStack_34);
  String::~String(aSStack_34);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_2c);
  return;
}


