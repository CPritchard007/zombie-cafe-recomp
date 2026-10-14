/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c0690 GameStateWeekRaidMenu::layout */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001c0b5e) */
/* WARNING: Removing unreachable block (ram,0x001c0b5e) */
/* GameStateWeekRaidMenu::layout() */

void __thiscall GameStateWeekRaidMenu::layout(GameStateWeekRaidMenu *this)

{
  GameStateWeekRaidMenu *pGVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GameStateWeekRaidMenu *pGVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  GameStateWeekRaidMenu *pGVar11;
  int iVar12;
  undefined8 uVar13;
  
  sVar2 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar8 = *(int *)(*(int *)(this + 0xc) + 0x10);
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),iVar8 >> 0x10,(int)(short)iVar8);
  pGVar11 = this + 0xb4;
  (**(code **)(**(int **)(this + 0x18) + 0x14))
            (*(int **)(this + 0x18),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  uVar13 = __mulsf3(*(undefined4 *)pGVar11,DAT_001c0a88);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x1c),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  piVar10 = *(int **)(this + 0x1c);
  iVar12 = DAT_001c0a8c + 0x1c06e0;
  pcVar9 = *(code **)(*piVar10 + 0x14);
  sVar3 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar8 * 4 + iVar12),*(undefined4 *)pGVar11);
  uVar4 = __fixsfsi();
  (*pcVar9)(piVar10,(int)sVar3,uVar4);
  NoticeDialog::layout();
  (**(code **)(**(int **)(this + 0x38) + 0x14))
            (*(int **)(this + 0x38),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x3c) + 0x14))
            (*(int **)(this + 0x3c),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x40) + 0x14))
            (*(int **)(this + 0x40),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar10 = *(int **)(this + 0x48);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  iVar8 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar8 * 4 + *(int *)(DAT_001c0a90 + 0x1c0762)));
  iVar8 = SmDev();
  uVar5 = __fixsfsi(*(undefined4 *)(iVar8 * 4 + *(int *)(DAT_001c0a94 + 0x1c0776)));
  (*pcVar9)(piVar10,uVar4,uVar5);
  piVar10 = *(int **)(this + 0x44);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  iVar8 = SmDev();
  pGVar7 = this + 0xb0;
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x18),*(undefined4 *)pGVar7);
  uVar4 = __fixsfsi();
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x30),*(undefined4 *)pGVar11);
  uVar5 = __fixsfsi();
  uVar13 = (*pcVar9)(piVar10,uVar4,uVar5);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x44),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  uVar13 = __mulsf3(*(undefined4 *)pGVar11,DAT_001c0a9c);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x4c),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  uVar13 = __mulsf3(*(undefined4 *)pGVar11,DAT_001c0a9c);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x50),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  uVar13 = __mulsf3(*(undefined4 *)pGVar11,DAT_001c0a9c);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x54),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  uVar13 = __mulsf3(*(undefined4 *)pGVar11,DAT_001c0a9c);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x58),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  uVar13 = __mulsf3(*(undefined4 *)pGVar11,DAT_001c0a9c);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x5c),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  uVar13 = __mulsf3(*(undefined4 *)pGVar11,DAT_001c0a9c);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x60),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  piVar10 = *(int **)(this + 0x4c);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  uVar4 = __floatsisf((int)sVar2);
  uVar5 = __mulsf3(*(undefined4 *)pGVar7,DAT_001c0aa0);
  __subsf3(uVar4,uVar5);
  uVar5 = __fixsfsi();
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x48),*(undefined4 *)pGVar11);
  uVar6 = __fixsfsi();
  (*pcVar9)(piVar10,uVar5,uVar6);
  piVar10 = *(int **)(this + 0x50);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  uVar5 = __mulsf3(*(undefined4 *)pGVar7,DAT_001c0aa0);
  __addsf3(uVar4,uVar5);
  uVar5 = __fixsfsi();
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x60),*(undefined4 *)pGVar11);
  uVar6 = __fixsfsi();
  (*pcVar9)(piVar10,uVar5,uVar6);
  piVar10 = *(int **)(this + 0x54);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  uVar5 = __mulsf3(*(undefined4 *)pGVar7,DAT_001c0aa0);
  __subsf3(uVar4,uVar5);
  uVar5 = __fixsfsi();
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x78),*(undefined4 *)pGVar11);
  uVar6 = __fixsfsi();
  (*pcVar9)(piVar10,uVar5,uVar6);
  piVar10 = *(int **)(this + 0x58);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  iVar12 = DAT_001c0aa4 + 0x1c0912;
  uVar5 = __mulsf3(*(undefined4 *)pGVar7,DAT_001c0aa0);
  __addsf3(uVar4,uVar5);
  uVar5 = __fixsfsi();
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x10),*(undefined4 *)pGVar11);
  uVar6 = __fixsfsi();
  (*pcVar9)(piVar10,uVar5,uVar6);
  piVar10 = *(int **)(this + 0x5c);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  uVar5 = __mulsf3(*(undefined4 *)pGVar7,DAT_001c0aa0);
  __subsf3(uVar4,uVar5);
  uVar5 = __fixsfsi();
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x28),*(undefined4 *)pGVar11);
  uVar6 = __fixsfsi();
  (*pcVar9)(piVar10,uVar5,uVar6);
  piVar10 = *(int **)(this + 0x60);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  uVar5 = __mulsf3(*(undefined4 *)pGVar7,DAT_001c0aa0);
  __addsf3(uVar4,uVar5);
  uVar4 = __fixsfsi();
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x40),*(undefined4 *)pGVar11);
  uVar5 = __fixsfsi();
  uVar13 = (*pcVar9)(piVar10,uVar4,uVar5);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x7c),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  __mulsf3(*(undefined4 *)pGVar11,DAT_001c0aa8);
  uVar4 = __fixsfsi();
  uVar13 = (**(code **)(**(int **)(this + 0x7c) + 0x14))
                     (*(int **)(this + 0x7c),uVar4,*(int *)(*(int *)(this + 0x4c) + 0x10) + -6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x80),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  __mulsf3(*(undefined4 *)pGVar11,DAT_001c0aa8);
  uVar4 = __fixsfsi();
  uVar13 = (**(code **)(**(int **)(this + 0x80) + 0x14))
                     (*(int **)(this + 0x80),uVar4,*(int *)(*(int *)(this + 0x50) + 0x10) + -6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x84),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  __mulsf3(*(undefined4 *)pGVar11,DAT_001c0aa8);
  uVar4 = __fixsfsi();
  uVar13 = (**(code **)(**(int **)(this + 0x84) + 0x14))
                     (*(int **)(this + 0x84),uVar4,*(int *)(*(int *)(this + 0x54) + 0x10) + -6);
  ImageElement::setScale
            (*(ImageElement **)(this + 0x88),(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  __mulsf3(*(undefined4 *)pGVar11,DAT_001c0aa8);
  uVar4 = __fixsfsi();
  piVar10 = *(int **)(this + 0x88);
  (**(code **)(*piVar10 + 0x14))(piVar10,uVar4,*(int *)(*(int *)(this + 0x58) + 0x10) + -6);
  pGVar7 = this;
  do {
    uVar13 = __mulsf3(*(undefined4 *)pGVar11,DAT_001c0a9c);
    pGVar1 = pGVar7 + 100;
    pGVar7 = pGVar7 + 4;
    ImageElement::setScale
              (*(ImageElement **)pGVar1,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  } while (pGVar7 != this + 0x18);
  (**(code **)(**(int **)(this + 100) + 0x14))
            (*(int **)(this + 100),*(int *)(*(int *)(this + 0x4c) + 0xc) / 2 + 1,
             *(int *)(*(int *)(this + 0x4c) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x68) + 0x14))
            (*(int **)(this + 0x68),*(int *)(*(int *)(this + 0x50) + 0xc) / 2 + 1,
             *(int *)(*(int *)(this + 0x50) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),*(int *)(*(int *)(this + 0x54) + 0xc) / 2 + 1,
             *(int *)(*(int *)(this + 0x54) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),*(int *)(*(int *)(this + 0x58) + 0xc) / 2 + 1,
             *(int *)(*(int *)(this + 0x58) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x74) + 0x14))
            (*(int **)(this + 0x74),*(int *)(*(int *)(this + 0x5c) + 0xc) / 2 + 1,
             *(int *)(*(int *)(this + 0x5c) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x78) + 0x14))
            (*(int **)(this + 0x78),*(int *)(*(int *)(this + 0x60) + 0xc) / 2 + 1,
             *(int *)(*(int *)(this + 0x60) + 0x10) / 2);
  switch(*(undefined4 *)(this + 200)) {
  case 3:
  case 4:
    (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
  case 2:
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  case 1:
    (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
  case 0:
    (**(code **)(**(int **)(this + 100) + 0x20))(*(int **)(this + 100),0);
  }
  if (*(int *)(this + 0xcc) != 1) {
    if (*(int *)(this + 0xcc) != 2) goto LAB_001c0bb2;
    (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
  }
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
LAB_001c0bb2:
  piVar10 = *(int **)(this + 0x8c);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  iVar8 = SmDev();
  iVar12 = DAT_001c0c90 + 0x1c0bce;
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x58),*(undefined4 *)(this + 0xb0));
  uVar4 = __fixsfsi();
  (*pcVar9)(piVar10,uVar4,*(int *)(*(int *)(this + 0x14) + 0x10) / 2);
  piVar10 = *(int **)(this + 0x90);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  piVar10 = *(int **)(this + 0x94);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  piVar10 = *(int **)(this + 0x98);
  (**(code **)(*piVar10 + 0x20))(piVar10,0);
  *(undefined1 *)(*(int *)(this + 0x90) + 0x86) = 0;
  *(undefined1 *)(*(int *)(this + 0x94) + 0x86) = 0;
  *(undefined1 *)(*(int *)(this + 0x98) + 0x86) = 0;
  piVar10 = *(int **)(this + 0xac);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  sVar2 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(iVar12 + iVar8 * 4 + 0x70),*(undefined4 *)(this + 0xb8));
  uVar4 = __fixsfsi();
  (*pcVar9)(piVar10,(int)sVar2,uVar4);
  piVar10 = *(int **)(this + 0xa0);
  pcVar9 = *(code **)(*piVar10 + 0x14);
  sVar2 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar8 = SmDev();
  __mulsf3(*(undefined4 *)(DAT_001c0c94 + iVar8 * 4 + 0x1c0c82),*(undefined4 *)(this + 0xb4));
  uVar4 = __fixsfsi();
  (*pcVar9)(piVar10,(int)sVar2,uVar4);
  return;
}


