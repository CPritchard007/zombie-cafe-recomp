/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bc28c GameStateEventRaid3Menu::Layout_Default */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001bc328) */
/* WARNING: Removing unreachable block (ram,0x001bc328) */
/* GameStateEventRaid3Menu::Layout_Default() */

void __thiscall GameStateEventRaid3Menu::Layout_Default(GameStateEventRaid3Menu *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  String *pSVar4;
  code *pcVar5;
  uint uVar6;
  GameStateEventRaid3Menu *pGVar7;
  int iVar8;
  int *piVar9;
  code *local_100;
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
  
  (**(code **)(**(int **)(this + 0x20) + 0x20))(*(int **)(this + 0x20),0);
  (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
  (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),0);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),1);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),1);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),1);
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),1);
  *(undefined1 *)(*(int *)(this + 0x68) + 0x86) = 1;
  *(undefined1 *)(*(int *)(this + 0x6c) + 0x86) = 1;
  *(undefined1 *)(*(int *)(this + 0x70) + 0x86) = 1;
  *(undefined1 *)(*(int *)(this + 0x74) + 0x86) = 1;
  iVar2 = ZombieCafe::getEventRaid3_clearLevel(*(ZombieCafe **)(this + 0xc));
  if (iVar2 == 1) {
LAB_001bc312:
    *(undefined1 *)(*(int *)(this + 0x70) + 0x86) = 0;
LAB_001bc31a:
    *(undefined1 *)(*(int *)(this + 0x74) + 0x86) = 0;
  }
  else {
    if (iVar2 == 2) goto LAB_001bc31a;
    if (iVar2 == 0) {
      *(undefined1 *)(*(int *)(this + 0x6c) + 0x86) = 0;
      goto LAB_001bc312;
    }
  }
  switch(iVar2) {
  case 4:
    (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),1);
  case 3:
    (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),1);
  case 2:
    (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),1);
  case 1:
    (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),1);
  }
  pGVar7 = this + 0x88;
  iVar8 = DAT_001bc6bc + 0x1bc36e;
  (**(code **)(**(int **)pGVar7 + 0x20))(*(int **)pGVar7,0);
  piVar9 = *(int **)pGVar7;
  pcVar5 = *(code **)(*piVar9 + 0x14);
  iVar2 = SmDev();
  uVar3 = *(undefined4 *)(iVar8 + iVar2 * 4 + 100);
  iVar2 = SmDev();
  (*pcVar5)(piVar9,uVar3,*(undefined4 *)(iVar8 + iVar2 * 4 + 0x7c));
  iVar2 = ZombieCafe::checkEventRaid3_bonusTime();
  if (iVar2 != 0) {
    uVar3 = ZombieCafe::getEventRaid3_bonusRate();
    iVar2 = __aeabi_fcmpgt(uVar3,0x3f800000);
    if (iVar2 != 0) {
      (**(code **)(**(int **)pGVar7 + 0x20))(*(int **)pGVar7,1);
    }
  }
  (**(code **)(**(int **)(this + 0x58) + 0x20))(*(int **)(this + 0x58),1);
  (**(code **)(**(int **)(this + 0x54) + 0x20))(*(int **)(this + 0x54),1);
  iVar2 = ZombieCafe::checkEventRaid3Time();
  if (iVar2 == 0) {
    (**(code **)(**(int **)(this + 0xb0) + 0x20))();
  }
  else {
    iVar2 = ZombieCafe::getEventRaid3_attackPointTimer(*(ZombieCafe **)(this + 0xc));
    pcVar5 = *(code **)(**(int **)(this + 0xb0) + 0x20);
    if (iVar2 == 0) {
      (*pcVar5)();
    }
    else {
      (*pcVar5)(*(int **)(this + 0xb0),1);
      drawReOpenTimer(this);
    }
    drawEventRaid3Soul(this);
  }
  iVar2 = DAT_001bc6c0;
  StringBuffer::StringBuffer(aSStack_6c);
  if (*(int *)(*(int *)(iVar2 + 0x1bc41c) + 0xa0) < 1) {
    String::String(aSStack_e4,(char *)(DAT_001bc6c8 + 0x1bc45e));
    StringBuffer::append(aSStack_6c,aSStack_e4);
    pSVar4 = aSStack_e4;
  }
  else {
    String::String(aSStack_f4,(char *)(DAT_001bc6c4 + 0x1bc42e));
    StringBuffer::append(aSStack_6c,aSStack_f4);
    String::~String(aSStack_f4);
    String::valueOf((int)aSStack_ec);
    StringBuffer::append(aSStack_6c,aSStack_ec);
    pSVar4 = aSStack_ec;
  }
  String::~String(pSVar4);
  piVar9 = *(int **)(this + 0x90);
  pcVar5 = *(code **)(*piVar9 + 0x44);
  StringBuffer::toString();
  (*pcVar5)(piVar9,aSStack_dc);
  String::~String(aSStack_dc);
  iVar2 = isGetEventRaid3Item(this);
  if (iVar2 < 1) {
    piVar9 = *(int **)(this + 0x90);
    iVar2 = *(int *)(*(int *)(this + 0x1c) + 0xc);
    local_100 = *(code **)(*piVar9 + 0x14);
    iVar8 = SmDev();
    uVar3 = *(undefined4 *)(DAT_001bc6d0 + iVar8 * 4 + 0x1bc510);
    iVar2 = iVar2 / 2;
  }
  else {
    piVar9 = *(int **)(this + 0x90);
    iVar2 = *(int *)(*(int *)(this + 0x1c) + 0xc);
    local_100 = *(code **)(*piVar9 + 0x14);
    iVar8 = SmDev();
    iVar2 = ((int)(((uint)(iVar2 >> 0x1f) >> 0x1d) + iVar2) >> 3) * 3;
    uVar3 = *(undefined4 *)(DAT_001bc6cc + iVar8 * 4 + 0x1bc4ee);
  }
  (*local_100)(piVar9,iVar2,uVar3);
  StringBuffer::StringBuffer(aSStack_50);
  String::String(aSStack_d4,(char *)(DAT_001bc6d4 + 0x1bc4f6));
  StringBuffer::append(aSStack_50,aSStack_d4);
  String::~String(aSStack_d4);
  String::valueOf((long)aSStack_cc);
  StringBuffer::append(aSStack_50,aSStack_cc);
  String::~String(aSStack_cc);
  piVar9 = *(int **)(this + 0x94);
  pcVar5 = *(code **)(*piVar9 + 0x44);
  StringBuffer::toString();
  (*pcVar5)(piVar9,aSStack_c4);
  String::~String(aSStack_c4);
  (**(code **)(**(int **)(this + 0x94) + 0x20))(*(int **)(this + 0x94),1);
  iVar2 = isGetEventRaid3Item(this);
  if (iVar2 < 1) {
    piVar9 = *(int **)(this + 0x94);
    iVar2 = *(int *)(*(int *)(this + 0x1c) + 0xc);
    pcVar5 = *(code **)(*piVar9 + 0x14);
    iVar8 = SmDev();
    iVar2 = iVar2 / 2;
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001bc6dc + iVar8 * 4 + 0x1bc5fc));
    __mulsf3(uVar3,*(undefined4 *)(this + 0xe8));
    uVar3 = __fixsfsi();
  }
  else {
    piVar9 = *(int **)(this + 0x94);
    iVar2 = *(int *)(*(int *)(this + 0x1c) + 0xc);
    pcVar5 = *(code **)(*piVar9 + 0x14);
    iVar8 = SmDev();
    iVar2 = ((int)(((uint)(iVar2 >> 0x1f) >> 0x1d) + iVar2) >> 3) * 3;
    uVar3 = __floatsisf(*(undefined4 *)(DAT_001bc6d8 + iVar8 * 4 + 0x1bc5c6));
    __mulsf3(uVar3,*(undefined4 *)(this + 0xe8));
    uVar3 = __fixsfsi();
  }
  (*pcVar5)(piVar9,iVar2,uVar3);
  piVar9 = *(int **)(this + 0x98);
  pcVar5 = *(code **)(*piVar9 + 0x44);
  String::String(aSStack_bc,(char *)(DAT_001bc6e0 + 0x1bc5dc));
  (*pcVar5)(piVar9,aSStack_bc);
  String::~String(aSStack_bc);
  piVar9 = *(int **)(this + 0x98);
  pcVar5 = *(code **)(*piVar9 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001bc6e4 + iVar2 * 4 + 0x1bc620));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xe8));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar9,iVar8 / 2,uVar3);
  (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),1);
  iVar2 = ZombieCafe::checkEventRaid3Time();
  if (iVar2 == 0) {
    L_PrintLog((char *)(DAT_001bc6e8 + 0x1bc648),(char *)(DAT_001bc6ec + 0x1bc64a));
    piVar9 = *(int **)(this + 0x9c);
    pcVar5 = *(code **)(*piVar9 + 0x44);
    String::String(aSStack_b4,(char *)(DAT_001bc6f0 + 0x1bc65c));
    (*pcVar5)(piVar9,aSStack_b4);
    String::~String(aSStack_b4);
    (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
    (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
    (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
    (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
    (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
    (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
  }
  else {
    L_PrintLog((char *)(DAT_001bc92c + 0x1bc6fc),(char *)(DAT_001bc930 + 0x1bc6fe));
    uVar6 = *(uint *)(*(int *)(this + 0xc) + 0x234);
    if (((uint)(uVar6 < 0x3e) == (int)uVar6 >> 0x1f) || ((int)uVar6 < 0)) {
      piVar9 = *(int **)(this + 0x9c);
      pcVar5 = *(code **)(*piVar9 + 0x44);
      String::String(aSStack_74,(char *)(DAT_001bc948 + 0x1bc818));
      (*pcVar5)(piVar9,aSStack_74);
      pSVar4 = aSStack_74;
    }
    else {
      iVar2 = DAT_001bc934 + 0x1bc724 + uVar6 * 0x14;
      sVar1 = *(short *)(iVar2 + 0x20);
      if (sVar1 == 0) {
        StringBuffer::StringBuffer(aSStack_34);
        String::valueOf((int)aSStack_ac);
        StringBuffer::append(aSStack_34,aSStack_ac);
        String::~String(aSStack_ac);
        String::String(aSStack_a4,(char *)(DAT_001bc938 + 0x1bc750));
        StringBuffer::append(aSStack_34,aSStack_a4);
        String::~String(aSStack_a4);
        piVar9 = *(int **)(this + 0x9c);
        pcVar5 = *(code **)(*piVar9 + 0x44);
        StringBuffer::toString();
        (*pcVar5)(piVar9,aSStack_9c);
        String::~String(aSStack_9c);
        CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
        goto LAB_001bc828;
      }
      if ((ushort)(sVar1 - 5U) < 2) {
        piVar9 = *(int **)(this + 0x9c);
        pcVar5 = *(code **)(*piVar9 + 0x44);
        String::String(aSStack_94,(char *)(DAT_001bc93c + 0x1bc7a0));
        (*pcVar5)(piVar9,aSStack_94);
        pSVar4 = aSStack_94;
      }
      else {
        if (sVar1 != 3) goto LAB_001bc828;
        String::String(aSStack_8c,
                       (String *)
                       (*(int *)(*(int *)(iVar2 + 0x24) * 4 +
                                *(int *)(*(int *)(this + 0xc) + DAT_001bc940)) + DAT_001bc944));
        StringBuffer::StringBuffer(aSStack_34);
        String::String(aSStack_84,aSStack_8c);
        StringBuffer::append(aSStack_34,aSStack_84);
        String::~String(aSStack_84);
        piVar9 = *(int **)(this + 0x9c);
        pcVar5 = *(code **)(*piVar9 + 0x44);
        StringBuffer::toString();
        (*pcVar5)(piVar9,aSStack_7c);
        String::~String(aSStack_7c);
        CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
        pSVar4 = aSStack_8c;
      }
    }
    String::~String(pSVar4);
  }
LAB_001bc828:
  piVar9 = *(int **)(this + 0x9c);
  pcVar5 = *(code **)(*piVar9 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001bc94c + iVar2 * 4 + 0x1bc874));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xe8));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar9,iVar8 / 2,uVar3);
  (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),1);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_50);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_6c);
  return;
}


