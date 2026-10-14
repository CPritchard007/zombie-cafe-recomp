/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b0670 GameStateEventRaid2Menu::Layout_Default */

/* GameStateEventRaid2Menu::Layout_Default() */

void __thiscall GameStateEventRaid2Menu::Layout_Default(GameStateEventRaid2Menu *this)

{
  short sVar1;
  int iVar2;
  String *this_00;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
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
  String aSStack_74 [8];
  StringBuffer aSStack_6c [28];
  StringBuffer aSStack_50 [28];
  StringBuffer aSStack_34 [32];
  
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),1);
  iVar2 = ZombieCafe::checkEventRaid2Time();
  if (iVar2 == 0) {
    (**(code **)(**(int **)(this + 0xe4) + 0x20))();
  }
  else {
    iVar2 = ZombieCafe::getEventRaid2_attackPointTimer(*(ZombieCafe **)(this + 0xc));
    pcVar4 = *(code **)(**(int **)(this + 0xe4) + 0x20);
    if (iVar2 == 0) {
      (*pcVar4)();
    }
    else {
      (*pcVar4)(*(int **)(this + 0xe4),1);
      drawReOpenTimer(this);
    }
    drawEventRaid2Soul(this);
  }
  StringBuffer::StringBuffer(aSStack_6c);
  String::String(aSStack_11c,(char *)(DAT_001b0a1c + 0x1b06ce));
  StringBuffer::append(aSStack_6c,aSStack_11c);
  String::~String(aSStack_11c);
  String::valueOf((long)aSStack_114);
  StringBuffer::append(aSStack_6c,aSStack_114);
  String::~String(aSStack_114);
  piVar7 = *(int **)(this + 0xcc);
  pcVar4 = *(code **)(*piVar7 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar7,aSStack_10c);
  String::~String(aSStack_10c);
  (**(code **)(**(int **)(this + 0xcc) + 0x20))(*(int **)(this + 0xcc),1);
  StringBuffer::StringBuffer(aSStack_50);
  String::String(aSStack_104,(char *)(DAT_001b0a20 + 0x1b0734));
  StringBuffer::append(aSStack_50,aSStack_104);
  String::~String(aSStack_104);
  String::valueOf((long)aSStack_fc);
  StringBuffer::append(aSStack_50,aSStack_fc);
  String::~String(aSStack_fc);
  String::String(aSStack_f4,(char *)(DAT_001b0a24 + 0x1b0768));
  StringBuffer::append(aSStack_50,aSStack_f4);
  String::~String(aSStack_f4);
  piVar7 = *(int **)(this + 0xd0);
  pcVar4 = *(code **)(*piVar7 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar7,aSStack_ec);
  String::~String(aSStack_ec);
  if (8 < *(int *)(this + 0x100)) {
    (**(code **)(**(int **)(this + 0xd0) + 0x20))(*(int **)(this + 0xd0),1);
  }
  if (*(char *)(*(int *)(DAT_001b0a28 + 0x1b07b4) + 0x19) == '\x01') {
    piVar7 = *(int **)(this + 0xcc);
    pcVar4 = *(code **)(*piVar7 + 0x14);
    iVar6 = *(int *)(*(int *)(this + 0x30) + 0xc);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001b0df8 + iVar2 * 4 + 0x1b0bfc));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
    uVar3 = __fixsfsi();
    (*pcVar4)(piVar7,iVar6 / 2,uVar3);
    piVar7 = *(int **)(this + 0xd0);
    pcVar4 = *(code **)(*piVar7 + 0x14);
    iVar6 = *(int *)(*(int *)(this + 0x30) + 0xc);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(int *)(DAT_001b0dfc + iVar2 * 4 + 0x1b0c38) + 0x20);
    __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
    uVar3 = __fixsfsi();
    (*pcVar4)(piVar7,iVar6 / 2,uVar3);
    iVar2 = ZombieCafe::checkEventRaid2Time();
    if (iVar2 == 0) {
      (**(code **)(**(int **)(this + 0xdc) + 0x20))(*(int **)(this + 0xdc),1);
      (**(code **)(**(int **)(this + 0x94) + 0x20))(*(int **)(this + 0x94),0);
      (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
      (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),0);
      (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
      (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),0);
      (**(code **)(**(int **)(this + 0xd4) + 0x20))(*(int **)(this + 0xd4),0);
      (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
      (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
      (**(code **)(**(int **)(this + 0xe0) + 0x20))(*(int **)(this + 0xe0),0);
      piVar7 = *(int **)(this + 0xd8);
      pcVar4 = *(code **)(*piVar7 + 0x14);
      iVar6 = *(int *)(*(int *)(this + 0x30) + 0xc);
      iVar2 = SmDev();
      uVar3 = __floatsisf(*(undefined4 *)(&UNK_001b0d4e + DAT_001b0e00 + iVar2 * 4));
      __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
      uVar3 = __fixsfsi();
      (*pcVar4)(piVar7,iVar6 / 2,uVar3);
    }
    piVar7 = *(int **)(this + 0xd8);
    uVar3 = 0;
    pcVar4 = *(code **)(*piVar7 + 0x20);
    goto LAB_001b0d18;
  }
  iVar2 = isGetEventRaid2Item(this);
  if (iVar2 < 1) {
    piVar7 = *(int **)(this + 0xcc);
    iVar2 = *(int *)(*(int *)(this + 0x30) + 0xc);
    pcVar4 = *(code **)(*piVar7 + 0x14);
    iVar6 = SmDev();
    iVar2 = iVar2 / 2;
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001b0a30 + iVar6 * 4 + 0x1b0836));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
    uVar3 = __fixsfsi();
  }
  else {
    piVar7 = *(int **)(this + 0xcc);
    iVar2 = *(int *)(*(int *)(this + 0x30) + 0xc);
    pcVar4 = *(code **)(*piVar7 + 0x14);
    iVar6 = SmDev();
    iVar2 = ((int)(((uint)(iVar2 >> 0x1f) >> 0x1d) + iVar2) >> 3) * 3;
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001b0a2c + iVar6 * 4 + 0x1b0800));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
    uVar3 = __fixsfsi();
  }
  (*pcVar4)(piVar7,iVar2,uVar3);
  (**(code **)(**(int **)(this + 0xd0) + 0x20))(*(int **)(this + 0xd0),0);
  piVar7 = *(int **)(this + 0xd4);
  pcVar4 = *(code **)(*piVar7 + 0x44);
  String::String(aSStack_e4,(char *)(DAT_001b0a34 + 0x1b085c));
  (*pcVar4)(piVar7,aSStack_e4);
  String::~String(aSStack_e4);
  piVar7 = *(int **)(this + 0xd4);
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x30) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001b0a38 + iVar2 * 4 + 0x1b08b8));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar7,iVar6 / 2,uVar3);
  (**(code **)(**(int **)(this + 0xd4) + 0x20))(*(int **)(this + 0xd4),1);
  iVar2 = ZombieCafe::checkEventRaid2Time();
  if (iVar2 == 0) {
    (**(code **)(**(int **)(this + 0x94) + 0x20))();
    (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
    (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),0);
    (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
    (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),0);
    (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
    (**(code **)(**(int **)(this + 0xe0) + 0x20))(*(int **)(this + 0xe0),0);
    (**(code **)(**(int **)(this + 0xdc) + 0x20))(*(int **)(this + 0xdc),1);
    (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
  }
  uVar5 = *(uint *)(*(int *)(this + 0xc) + 0x1d0);
  if (((uint)(uVar5 < 0x44) == (int)uVar5 >> 0x1f) || ((int)uVar5 < 0)) {
    piVar7 = *(int **)(this + 0xd8);
    pcVar4 = *(code **)(*piVar7 + 0x44);
    String::String(aSStack_74,(char *)(DAT_001b0df0 + 0x1b0b70));
    (*pcVar4)(piVar7,aSStack_74);
    this_00 = aSStack_74;
LAB_001b0b7c:
    String::~String(this_00);
  }
  else {
    iVar2 = *(int *)(DAT_001b0a3c + 0x1b0962);
    if (*(int *)(*(int *)(*(int *)(this + 0x100) * 4 + iVar2) + uVar5 * 0x14) == DAT_001b0a40) {
      piVar7 = *(int **)(this + 0xd8);
      pcVar4 = *(code **)(*piVar7 + 0x44);
      String::String(aSStack_7c,(char *)(DAT_001b0dec + 0x1b0b52));
      (*pcVar4)(piVar7,aSStack_7c);
      this_00 = aSStack_7c;
      goto LAB_001b0b7c;
    }
    iVar6 = ZombieCafe::checkEventRaid2_half();
    if (iVar6 == 0) {
      iVar2 = *(int *)(*(int *)(this + 0x100) * 4 + *(int *)(DAT_001b0a44 + 0x1b098e));
    }
    else {
      iVar2 = *(int *)(iVar2 + *(int *)(this + 0x100) * 4);
    }
    iVar2 = iVar2 + uVar5 * 0x14;
    sVar1 = *(short *)(iVar2 + 4);
    iVar2 = *(int *)(iVar2 + 8);
    if (sVar1 != 0) {
      if ((ushort)(sVar1 - 5U) < 2) {
        piVar7 = *(int **)(this + 0xd8);
        pcVar4 = *(code **)(*piVar7 + 0x44);
        String::String(aSStack_c4,(char *)(DAT_001b0a4c + 0x1b0a0c));
        (*pcVar4)(piVar7,aSStack_c4);
        this_00 = aSStack_c4;
      }
      else {
        if (sVar1 != 3) {
          if (sVar1 == 7) {
            StringBuffer::StringBuffer(aSStack_34);
            if (iVar2 - 1U < 0x1e) {
              String::valueOf((int)aSStack_94);
              StringBuffer::append(aSStack_34,aSStack_94);
              String::~String(aSStack_94);
              String::String(aSStack_8c,(char *)(DAT_001b0de8 + 0x1b0b0c));
              StringBuffer::append(aSStack_34,aSStack_8c);
              String::~String(aSStack_8c);
              piVar7 = *(int **)(this + 0xd8);
              pcVar4 = *(code **)(*piVar7 + 0x44);
              StringBuffer::toString();
              (*pcVar4)(piVar7,aSStack_84);
              String::~String(aSStack_84);
            }
            goto LAB_001b0b3a;
          }
          goto LAB_001b0b80;
        }
        String::String(aSStack_bc,
                       (String *)
                       (*(int *)(iVar2 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001b0ddc)) +
                       DAT_001b0de0));
        StringBuffer::StringBuffer(aSStack_34);
        String::String(aSStack_b4,aSStack_bc);
        StringBuffer::append(aSStack_34,aSStack_b4);
        String::~String(aSStack_b4);
        String::String(aSStack_ac,(char *)(DAT_001b0de4 + 0x1b0a90));
        StringBuffer::append(aSStack_34,aSStack_ac);
        String::~String(aSStack_ac);
        String::valueOf((int)aSStack_a4);
        StringBuffer::append(aSStack_34,aSStack_a4);
        String::~String(aSStack_a4);
        piVar7 = *(int **)(this + 0xd8);
        pcVar4 = *(code **)(*piVar7 + 0x44);
        StringBuffer::toString();
        (*pcVar4)(piVar7,aSStack_9c);
        String::~String(aSStack_9c);
        CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
        this_00 = aSStack_bc;
      }
      goto LAB_001b0b7c;
    }
    StringBuffer::StringBuffer(aSStack_34);
    String::String(aSStack_dc,(char *)(DAT_001b0a48 + 0x1b09ac));
    StringBuffer::append(aSStack_34,aSStack_dc);
    String::~String(aSStack_dc);
    String::valueOf((int)aSStack_d4);
    StringBuffer::append(aSStack_34,aSStack_d4);
    String::~String(aSStack_d4);
    piVar7 = *(int **)(this + 0xd8);
    pcVar4 = *(code **)(*piVar7 + 0x44);
    StringBuffer::toString();
    (*pcVar4)(piVar7,aSStack_cc);
    String::~String(aSStack_cc);
LAB_001b0b3a:
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  }
LAB_001b0b80:
  piVar7 = *(int **)(this + 0xd8);
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x30) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001b0df4 + iVar2 * 4 + 0x1b0be4));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar7,iVar6 / 2,uVar3);
  piVar7 = *(int **)(this + 0xd8);
  uVar3 = 1;
  pcVar4 = *(code **)(*piVar7 + 0x20);
LAB_001b0d18:
  (*pcVar4)(piVar7,uVar3);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_50);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_6c);
  return;
}


