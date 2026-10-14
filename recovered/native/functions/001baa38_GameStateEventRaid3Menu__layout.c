/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001baa38 GameStateEventRaid3Menu::layout */

/* GameStateEventRaid3Menu::layout() */

void __thiscall GameStateEventRaid3Menu::layout(GameStateEventRaid3Menu *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  GameStateEventRaid3Menu *pGVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar11 = DAT_001bae0c;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  pGVar8 = this + 0xe8;
  (**(code **)(**(int **)(this + 0x18) + 0x14))
            (*(int **)(this + 0x18),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar9 = *(int **)(this + 0x24);
  iVar11 = iVar11 + 0x1baa6e;
  pcVar6 = *(code **)(*piVar9 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar2 * 4 + iVar11),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar9,(int)sVar1,uVar3);
  piVar9 = *(int **)(this + 0x28);
  (**(code **)(*piVar9 + 0x14))(piVar9,0,*(int *)(*(int *)(this + 0x14) + 0x10) - piVar9[4]);
  (**(code **)(**(int **)(this + 0x2c) + 0x14))
            (*(int **)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x14) + 0xc),
             *(undefined4 *)(*(int *)(this + 0x14) + 0x10));
  piVar9 = *(int **)(this + 0x1c);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x18),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar9,(int)sVar1,uVar3);
  NoticeDialog::layout();
  (**(code **)(**(int **)(this + 0x48) + 0x14))
            (*(int **)(this + 0x48),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x4c) + 0x14))
            (*(int **)(this + 0x4c),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x50) + 0x14))
            (*(int **)(this + 0x50),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar9 = *(int **)(this + 0x5c);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001bae10 + 0x1bab40)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_001bae14 + 0x1bab54)));
  (*pcVar6)(piVar9,uVar3,uVar4);
  piVar9 = *(int **)(this + 0x58);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x30),*(undefined4 *)(this + 0xe4));
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x48),*(undefined4 *)pGVar8);
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar9,uVar3,uVar4);
  iVar10 = *(int *)(this + 0x58);
  piVar9 = *(int **)(this + 0x54);
  iVar2 = *(int *)(iVar10 + 0x60);
  iVar7 = *piVar9;
  uVar5 = *(undefined4 *)(iVar10 + 4);
  uVar3 = __floatsisf((int)*(short *)(iVar2 + 0x22));
  uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar2 + 0x2c));
  uVar4 = __floatsisf((int)*(short *)(iVar2 + 0x24));
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __floatsisf((int)*(short *)(iVar2 + 0x28));
  __addsf3(uVar3,uVar4);
  iVar2 = __fixsfsi();
  uVar3 = __floatsisf(iVar2 + *(int *)(iVar10 + 8));
  uVar4 = __mulsf3(*(undefined4 *)pGVar8,DAT_001bae18);
  __addsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  (**(code **)(iVar7 + 0x14))(piVar9,uVar5,uVar3);
  piVar9 = *(int **)(this + 0xb0);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x60),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar9,(int)sVar1,uVar3);
  piVar9 = *(int **)(this + 0xa0);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x78),*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar9,(int)sVar1,uVar3);
  piVar9 = *(int **)(this + 100);
  iVar7 = DAT_001bae1c + 0x1bac8a;
  pcVar6 = *(code **)(*piVar9 + 0x14);
  iVar2 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar11 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar7 + iVar11 * 4 + 0x10));
  __mulsf3(uVar3,*(undefined4 *)pGVar8);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar9,((int)(((uint)(iVar2 >> 0x1f) >> 0x1d) + iVar2) >> 3) * 5,uVar3);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x12);
  uVar12 = __mulsf3(*(undefined4 *)pGVar8,DAT_001bae20);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x68),(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar12 = __mulsf3(*(undefined4 *)pGVar8,DAT_001bae20);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x6c),(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar12 = __mulsf3(*(undefined4 *)pGVar8,DAT_001bae20);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x70),(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  uVar12 = __mulsf3(*(undefined4 *)pGVar8,DAT_001bae20);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x74),(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  piVar9 = *(int **)(this + 0x68);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  uVar3 = __floatsisf((int)sVar1);
  iVar11 = SmDev();
  __mulsf3(uVar3,DAT_001bae24);
  uVar4 = __fixsfsi();
  uVar5 = __floatsisf(*(undefined4 *)(iVar7 + iVar11 * 4 + 0x28));
  __mulsf3(uVar5,*(undefined4 *)pGVar8);
  uVar5 = __fixsfsi();
  (*pcVar6)(piVar9,uVar4,uVar5);
  piVar9 = *(int **)(this + 0x6c);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  iVar11 = SmDev();
  __mulsf3(uVar3,DAT_001bae28);
  uVar4 = __fixsfsi();
  uVar5 = __floatsisf(*(undefined4 *)(iVar7 + iVar11 * 4 + 0x40));
  __mulsf3(uVar5,*(undefined4 *)pGVar8);
  uVar5 = __fixsfsi();
  (*pcVar6)(piVar9,uVar4,uVar5);
  piVar9 = *(int **)(this + 0x70);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  iVar11 = SmDev();
  __mulsf3(uVar3,DAT_001bae2c);
  uVar4 = __fixsfsi();
  uVar5 = __floatsisf(*(undefined4 *)(iVar7 + iVar11 * 4 + 0x58));
  __mulsf3(uVar5,*(undefined4 *)pGVar8);
  uVar5 = __fixsfsi();
  (*pcVar6)(piVar9,uVar4,uVar5);
  piVar9 = *(int **)(this + 0x74);
  pcVar6 = *(code **)(*piVar9 + 0x14);
  iVar11 = SmDev();
  __mulsf3(uVar3,DAT_001bae30);
  uVar3 = __fixsfsi();
  uVar4 = __floatsisf(*(undefined4 *)(iVar7 + iVar11 * 4 + 0x70));
  __mulsf3(uVar4,*(undefined4 *)pGVar8);
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar9,uVar3,uVar4);
  return;
}


