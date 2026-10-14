/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f2400 PrizeMenuOrder::tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001f2496) */
/* WARNING: Removing unreachable block (ram,0x001f2496) */
/* PrizeMenuOrder::tick(long) */

void __thiscall PrizeMenuOrder::tick(PrizeMenuOrder *this,long param_1)

{
  int iVar1;
  int iVar2;
  String *this_00;
  int *piVar3;
  undefined4 uVar4;
  PrizeMenuOrder *pPVar5;
  code *pcVar6;
  ZombieCafe *this_01;
  ConfirmDialog *pCVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  String aSStack_b4 [8];
  String aSStack_ac [8];
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
  StringBuffer aSStack_34 [32];
  
  if (*(char *)(*(int *)(*(int *)(this + 0x60) + 0x7c) + 0x14) == '\0') {
    return;
  }
  iVar2 = CapcomApp::getInstance();
  this_01 = *(ZombieCafe **)(iVar2 + 4);
  if (*(int *)(this + 0x94) != 0) {
    *(undefined4 *)(this + 0x94) = 0;
    iVar2 = GameStatePrizeMenu::GetPrizeProcess
                      (*(undefined4 *)(*(int *)(this + 0x60) + 100),*(undefined4 *)(this + 0x9c),
                       *(undefined4 *)(this + 0xa0),*(undefined4 *)(this + 0xa4),
                       *(undefined4 *)(this + 0xa8),*(undefined4 *)(this + 0xac),
                       *(undefined4 *)(this + 0xb0),*(undefined4 *)(this + 0xb4),
                       *(undefined4 *)(this + 0xb8));
    if (iVar2 != 0) {
      printf((char *)(DAT_001f27dc + 0x1f270c));
      PrizeMenuDialog::show(*(PrizeMenuDialog **)(this + 0x60));
      return;
    }
    printf((char *)(DAT_001f27e0 + 0x1f271c));
    return;
  }
  iVar2 = ZombieCafe::unhandledPressOrLongEvent(this_01);
  if (((iVar2 != 0) && (*(ZCImageButton **)(this + 0xbc) != (ZCImageButton *)0x0)) &&
     (iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xbc),*(int *)(this_01 + DAT_001f2798) >> 0x10,
                         (int)(short)*(int *)(this_01 + DAT_001f2798),extraout_s0,extraout_s1),
     iVar2 != 0)) {
    ZombieCafe::playEffect((int)this_01,extraout_s0_00);
    iVar1 = DAT_001f27a4;
    iVar2 = DAT_001f27a0;
    this_01[DAT_001f279c] = (ZombieCafe)0x1;
    L_PrintLog((char *)(iVar2 + 0x1f2470),(char *)(iVar1 + 0x1f2472));
    if (*(int *)(this + 0x8c) != 0) {
      StringBuffer::StringBuffer(aSStack_34);
      if ((int)*(short *)(this + 0xa8) - 1U < 7) {
        pPVar5 = this + 0xb0;
        switch(*(short *)(this + 0xa8)) {
        case 1:
          String::String(aSStack_a4,
                         (String *)
                         (*(int *)(*(int *)(this + 0xb0) * 4 +
                                  *(int *)(*(int *)(*(int *)(*(int *)(this + 0x60) + 100) + 0x14) +
                                          0x94)) + 0x2c));
          StringBuffer::append(aSStack_34,aSStack_a4);
          this_00 = aSStack_a4;
          break;
        case 2:
          String::String(aSStack_9c,
                         (String *)
                         (*(int *)(*(int *)pPVar5 * 4 + *(int *)(this_01 + DAT_001f27ac)) +
                         DAT_001f27b0));
          StringBuffer::append(aSStack_34,aSStack_9c);
          this_00 = aSStack_9c;
          break;
        case 3:
          String::String(aSStack_94,
                         (String *)
                         (*(int *)(*(int *)pPVar5 * 4 + *(int *)(this_01 + DAT_001f27ac)) +
                         DAT_001f27b0));
          StringBuffer::append(aSStack_34,aSStack_94);
          this_00 = aSStack_94;
          break;
        case 4:
          String::String(aSStack_8c,
                         (String *)
                         (*(int *)(*(int *)(this + 0xb0) * 4 +
                                  *(int *)(*(int *)(*(int *)(*(int *)(this + 0x60) + 100) + 0x14) +
                                          0x94)) + 0x2c));
          StringBuffer::append(aSStack_34,aSStack_8c);
          this_00 = aSStack_8c;
          break;
        case 5:
          String::String(aSStack_84,(String *)(*(int *)(this_01 + 0x4e8) + *(int *)pPVar5 * 0x1c));
          StringBuffer::append(aSStack_34,aSStack_84);
          this_00 = aSStack_84;
          break;
        case 6:
          String::valueOf((int)aSStack_7c);
          StringBuffer::append(aSStack_34,aSStack_7c);
          String::~String(aSStack_7c);
          String::String(aSStack_74,(char *)(DAT_001f27b4 + 0x1f25a0));
          StringBuffer::append(aSStack_34,aSStack_74);
          this_00 = aSStack_74;
          break;
        case 7:
          String::String(aSStack_6c,(char *)(DAT_001f27b8 + 0x1f25b6));
          StringBuffer::append(aSStack_34,aSStack_6c);
          String::~String(aSStack_6c);
          String::valueOf((int)aSStack_64);
          StringBuffer::append(aSStack_34,aSStack_64);
          String::~String(aSStack_64);
          String::String(aSStack_5c,(char *)(DAT_001f27bc + 0x1f25e8));
          StringBuffer::append(aSStack_34,aSStack_5c);
          this_00 = aSStack_5c;
        }
      }
      else {
        String::String(aSStack_b4,(char *)(DAT_001f27a8 + 0x1f24aa));
        StringBuffer::append(aSStack_34,aSStack_b4);
        String::~String(aSStack_b4);
        String::valueOf((int)aSStack_ac);
        StringBuffer::append(aSStack_34,aSStack_ac);
        this_00 = aSStack_ac;
      }
      String::~String(this_00);
      String::String(aSStack_54,(char *)(DAT_001f27c0 + 0x1f2600));
      StringBuffer::append(aSStack_34,aSStack_54);
      String::~String(aSStack_54);
      pCVar7 = *(ConfirmDialog **)(this + 0x8c);
      StringBuffer::toString();
      String::String(aSStack_44,(char *)(DAT_001f27c4 + 0x1f2626));
      String::String(aSStack_3c,(char *)(DAT_001f27c8 + 0x1f2630));
      ConfirmDialog::show(pCVar7,aSStack_4c,aSStack_44,aSStack_3c,
                          *(undefined4 *)(DAT_001f27cc + 0x1f263c),this);
      String::~String(aSStack_3c);
      String::~String(aSStack_44);
      String::~String(aSStack_4c);
      CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
    }
  }
  piVar3 = *(int **)(this + 0x6c);
  if ((piVar3 == (int *)0x0) && (*(int *)(this + 0x70) == 0)) {
    return;
  }
  iVar2 = param_1 + *(int *)(this + 0x90);
  *(int *)(this + 0x90) = iVar2;
  if (DAT_001f27d0 < iVar2) {
    if (piVar3 == (int *)0x0) {
      piVar3 = *(int **)(this + 0x70);
      if ((piVar3 == (int *)0x0) || ((char)piVar3[5] == '\0')) goto LAB_001f26ca;
      pcVar6 = *(code **)(*piVar3 + 0x20);
      uVar4 = 0;
    }
    else {
      if ((char)piVar3[5] == '\0') goto LAB_001f26ca;
      uVar4 = 0;
      pcVar6 = *(code **)(*piVar3 + 0x20);
    }
  }
  else {
    if (piVar3 == (int *)0x0) {
      piVar3 = *(int **)(this + 0x70);
      if ((piVar3 == (int *)0x0) || ((char)piVar3[5] != '\0')) goto LAB_001f26ca;
      pcVar6 = *(code **)(*piVar3 + 0x20);
    }
    else {
      if ((char)piVar3[5] != '\0') goto LAB_001f26ca;
      pcVar6 = *(code **)(*piVar3 + 0x20);
    }
    uVar4 = 1;
  }
  (*pcVar6)(piVar3,uVar4);
LAB_001f26ca:
  iVar2 = *(int *)(this + 0x90);
  if (DAT_001f27d4 < iVar2) {
    *(int *)(this + 0x90) = iVar2 + DAT_001f27d8;
  }
  return;
}


