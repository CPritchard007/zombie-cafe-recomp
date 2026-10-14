/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af7d4 GameStateEventRaid2Menu::layout */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001afeec) */
/* WARNING (jumptable): Removing unreachable block (ram,0x001aff26) */
/* WARNING: Removing unreachable block (ram,0x001afeec) */
/* WARNING: Removing unreachable block (ram,0x001aff26) */
/* GameStateEventRaid2Menu::layout() */

void __thiscall GameStateEventRaid2Menu::layout(GameStateEventRaid2Menu *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  GameStateEventRaid2Menu *pGVar10;
  undefined8 uVar11;
  undefined4 local_2c;
  
  (**(code **)(**(int **)(this + 0x28) + 0x18))
            (*(int **)(this + 0x28),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  FUN_001aeba0(*(undefined4 *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  piVar7 = *(int **)(this + 0x34);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(DAT_001afbec + iVar2 * 4 + 0x1af892),*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 0x38);
  if (piVar7 != (int *)0x0) {
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar8 = DAT_001afbf0 + 0x1af83a;
    uVar3 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x16));
    iVar2 = SmDev();
    uVar4 = __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x14),*(undefined4 *)(this + 0x10c));
    __addsf3(uVar3,uVar4);
    uVar3 = __fixsfsi();
    iVar2 = SmDev();
    __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x2c),*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
  }
  piVar7 = *(int **)(this + 0x3c);
  (**(code **)(*piVar7 + 0x14))(piVar7,0,*(int *)(*(int *)(this + 0x28) + 0x10) - piVar7[4]);
  (**(code **)(**(int **)(this + 0x40) + 0x14))
            (*(int **)(this + 0x40),*(undefined4 *)(*(int *)(this + 0x28) + 0xc),
             *(undefined4 *)(*(int *)(this + 0x28) + 0x10));
  piVar7 = *(int **)(this + 0x30);
  iVar8 = DAT_001afbf4 + 0x1af8b0;
  pcVar6 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x44),*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 0xc4);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x20))(piVar7,1);
    uVar3 = getZombieIconPosX(this);
    piVar7 = *(int **)(this + 0xc4);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x5c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
  }
  NoticeDialog::layout();
  FUN_001aeba0(*(undefined4 *)(this + 0x5c),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  FUN_001aeba0(*(undefined4 *)(this + 0x60),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  FUN_001aeba0(*(undefined4 *)(this + 100),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  FUN_001aeba0(*(undefined4 *)(this + 0x68),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  if (*(int *)(this + 0x18) != 0) {
    FUN_001aeba0(*(int *)(this + 0x18),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    WaitDialog::layout();
  }
  piVar7 = *(int **)(this + 0x70);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001afbf8 + 0x1af982)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001afbfc + 0x1af996)));
  (*pcVar6)(piVar7,uVar3,uVar4);
  piVar7 = *(int **)(this + 0x6c);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar9 = DAT_001afc00 + 0x1af9b4;
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(DAT_001afc04 + iVar2 * 4 + 0x1afa36),*(undefined4 *)(this + 0x108));
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar9 + iVar2 * 4 + 0xc),*(undefined4 *)(this + 0x10c));
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar7,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0xe8) + 0x14))
            (*(int **)(this + 0xe8),*(int *)(*(int *)(this + 0x6c) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x6c) + 0x10) / 2);
  piVar7 = *(int **)(this + 0xe4);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x24),*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 0xe0);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x3c),*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar7,(int)sVar1,uVar3);
  piVar7 = *(int **)(this + 0x78);
  pcVar6 = *(code **)(*piVar7 + 0x14);
  iVar8 = *(int *)(*(int *)(this + 0x30) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x54));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar7,((int)(((uint)(iVar8 >> 0x1f) >> 0x1d) + iVar8) >> 3) * 5,uVar3);
  if (*(int *)(this + 0x100) < 9) {
    iVar8 = SmDev();
    iVar2 = DAT_001aff34;
    iVar9 = DAT_001aff30 + 0x1afc74;
    __mulsf3(*(undefined4 *)(iVar9 + iVar8 * 4 + 0x5c),*(undefined4 *)(this + 0x10c));
    piVar7 = *(int **)(this + 0x94);
    iVar2 = iVar2 + 0x1afc8a;
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar8 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar9 + iVar8 * 4 + 0x74));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar8 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar2 + iVar8 * 4 + 0x1c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    piVar7 = *(int **)(this + 0x98);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar8 = SmDev();
    iVar5 = DAT_001aff38 + 0x1afce8;
    uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar8 * 4 + 0xc));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar8 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar2 + iVar8 * 4 + 0x4c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    piVar7 = *(int **)(this + 0x9c);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar8 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar8 * 4 + 0x24));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar8 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar2 + iVar8 * 4 + 0x7c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    piVar7 = *(int **)(this + 0xa0);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar2 * 4 + 0x3c));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar2 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x2c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),0);
    uVar11 = (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
  }
  else {
    iVar2 = SmDev();
    __mulsf3(*(undefined4 *)(iVar9 + iVar2 * 4 + 0x6c),*(undefined4 *)(this + 0x10c));
    piVar7 = *(int **)(this + 0x94);
    iVar8 = DAT_001afc08 + 0x1afad4;
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 4));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar2 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x1c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    piVar7 = *(int **)(this + 0x98);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x34));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar2 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x4c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    piVar7 = *(int **)(this + 0x9c);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 100));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar2 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x7c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    piVar7 = *(int **)(this + 0xa0);
    iVar8 = DAT_001afc0c + 0x1afbb6;
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x14));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar2 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x2c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    piVar7 = *(int **)(this + 0xa4);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x44));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar2 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x2c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    uVar11 = (*pcVar6)(piVar7,uVar3,uVar4);
  }
  pGVar10 = this + 0x98;
  uVar11 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x94),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = ImageButton::setScale
                     (*(ImageButton **)pGVar10,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = ImageButton::setScale
                     (*(ImageButton **)(this + 0x9c),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = ImageButton::setScale
                     (*(ImageButton **)(this + 0xa0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = ImageButton::setScale
                     (*(ImageButton **)(this + 0xa4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = ImageElement::setScale
                     (*(ImageElement **)(this + 0xa8),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = ImageElement::setScale
                     (*(ImageElement **)(this + 0xac),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = ImageElement::setScale
                     (*(ImageElement **)(this + 0xb0),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20));
  uVar11 = ImageElement::setScale
                     (*(ImageElement **)(this + 0xb4),(float)uVar11,
                      (float)((ulonglong)uVar11 >> 0x20));
  ImageElement::setScale
            (*(ImageElement **)(this + 0xb8),(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  piVar7 = *(int **)(this + 0x7c);
  iVar2 = *piVar7;
  iVar8 = *(int *)(*(int *)(this + 0x30) + 0xc);
  iVar9 = piVar7[3];
  uVar3 = __floatsisf(*(int *)(*(int *)(this + 0x30) + 0x10) - piVar7[4] / 2);
  uVar4 = __mulsf3(*(undefined4 *)(this + 0x10c),DAT_001aff3c);
  __subsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  (**(code **)(iVar2 + 0x14))(piVar7,iVar8 / 2 - iVar9 / 2,uVar3);
  *(undefined1 *)(*(int *)(this + 0x94) + 0x86) = 1;
  *(undefined1 *)(*(int *)pGVar10 + 0x86) = 1;
  *(undefined1 *)(*(int *)(this + 0x9c) + 0x86) = 1;
  *(undefined1 *)(*(int *)(this + 0xa0) + 0x86) = 1;
  *(undefined1 *)(*(int *)(this + 0xa4) + 0x86) = 1;
  uVar3 = ZombieCafe::getEventRaid2_clearLevel(*(ZombieCafe **)(this + 0xc));
  switch(uVar3) {
  case 0:
    *(undefined1 *)(*(int *)pGVar10 + 0x86) = 0;
  case 1:
    *(undefined1 *)(*(int *)(this + 0x9c) + 0x86) = 0;
  case 2:
    *(undefined1 *)(*(int *)(this + 0xa0) + 0x86) = 0;
  case 3:
    *(undefined1 *)(*(int *)(this + 0xa4) + 0x86) = 0;
  }
  switch(uVar3) {
  case 5:
    (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),1);
  case 4:
    (**(code **)(**(int **)(this + 0xb4) + 0x20))(*(int **)(this + 0xb4),1);
  case 3:
    (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),1);
  case 2:
    (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),1);
  case 1:
    (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),1);
  default:
    pGVar10 = this + 0xbc;
    iVar8 = DAT_001b0150 + 0x1aff96;
    (**(code **)(**(int **)pGVar10 + 0x20))(*(int **)pGVar10,0);
    piVar7 = *(int **)pGVar10;
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x54));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    iVar2 = SmDev();
    uVar4 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x6c));
    __mulsf3(uVar4,*(undefined4 *)(this + 0x10c));
    uVar4 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,uVar4);
    iVar2 = ZombieCafe::checkEventRaid2_bonusTime();
    if (iVar2 != 0) {
      uVar3 = ZombieCafe::getEventRaid2_bonusRate();
      iVar2 = __aeabi_fcmpgt(uVar3,0x3f800000);
      if (iVar2 != 0) {
        (**(code **)(**(int **)pGVar10 + 0x20))(*(int **)pGVar10,1);
      }
    }
    piVar7 = *(int **)(this + 0xc0);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    if (*(char *)(*(int *)(this + 0xbc) + 0x14) == '\0') {
      iVar2 = SmDev();
      iVar8 = DAT_001b0158 + 0x1b005e;
      uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x54));
      __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
      local_2c = __fixsfsi();
      iVar2 = SmDev();
      uVar3 = *(undefined4 *)(iVar8 + iVar2 * 4 + 0x6c);
    }
    else {
      iVar2 = SmDev();
      iVar8 = DAT_001b0154 + 0x1b0030;
      uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 4));
      __mulsf3(uVar3,*(undefined4 *)(this + 0x108));
      local_2c = __fixsfsi();
      iVar2 = SmDev();
      uVar3 = *(undefined4 *)(iVar8 + iVar2 * 4 + 0x1c);
    }
    uVar3 = __floatsisf(uVar3);
    __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
    uVar3 = __fixsfsi();
    (*pcVar6)(piVar7,local_2c,uVar3);
    piVar7 = *(int **)(this + 0xdc);
    (**(code **)(*piVar7 + 0x20))(piVar7,0);
    piVar7 = *(int **)(this + 0xdc);
    iVar8 = DAT_001b015c + 0x1b00b0;
    pcVar6 = *(code **)(*piVar7 + 0x14);
    sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
    iVar2 = SmDev();
    uVar3 = __floatsisf(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x34));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
    uVar3 = __fixsfsi();
    (*pcVar6)(piVar7,(int)sVar1,uVar3);
    piVar7 = *(int **)(this + 0x84);
    pcVar6 = *(code **)(*piVar7 + 0x14);
    iVar2 = SmDev();
    __mulsf3(*(undefined4 *)(iVar8 + iVar2 * 4 + 0x4c),*(undefined4 *)(this + 0x108));
    uVar3 = __fixsfsi();
    (*pcVar6)(piVar7,uVar3,*(int *)(*(int *)(this + 0x28) + 0x10) / 2);
    piVar7 = *(int **)(this + 0x88);
    (**(code **)(*piVar7 + 0x20))(piVar7,0);
    piVar7 = *(int **)(this + 0x8c);
    (**(code **)(*piVar7 + 0x20))(piVar7,0);
    piVar7 = *(int **)(this + 0x90);
    (**(code **)(*piVar7 + 0x20))(piVar7,0);
    *(undefined1 *)(*(int *)(this + 0x88) + 0x86) = 0;
    *(undefined1 *)(*(int *)(this + 0x8c) + 0x86) = 0;
    *(undefined1 *)(*(int *)(this + 0x90) + 0x86) = 0;
    return;
  }
}


