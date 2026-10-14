/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af498 GameStateEventRaid2Menu::setEventRaid2SoulPosition */

/* GameStateEventRaid2Menu::setEventRaid2SoulPosition() */

void __thiscall GameStateEventRaid2Menu::setEventRaid2SoulPosition(GameStateEventRaid2Menu *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  ImageButton *this_00;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  
  piVar6 = *(int **)(this + 0x4c);
  pcVar4 = *(code **)(*piVar6 + 0x14);
  iVar5 = DAT_001af634 + 0x1af4ac;
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x14));
  __mulsf3(uVar2,*(undefined4 *)(this + 0x10c));
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x2c));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar6,uVar2,uVar3);
  piVar6 = *(int **)(this + 0x50);
  pcVar4 = *(code **)(*piVar6 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x44));
  __mulsf3(uVar2,*(undefined4 *)(this + 0x10c));
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x5c));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar6,uVar2,uVar3);
  piVar6 = *(int **)(this + 0x54);
  pcVar4 = *(code **)(*piVar6 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x74));
  __mulsf3(uVar2,*(undefined4 *)(this + 0x10c));
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x5c));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar6,uVar2,uVar3);
  piVar6 = *(int **)(this + 0x58);
  iVar7 = DAT_001af638 + 0x1af580;
  pcVar4 = *(code **)(*piVar6 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar7 + iVar1 * 4 + 0xc));
  __mulsf3(uVar2,*(undefined4 *)(this + 0x10c));
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x5c));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar6,uVar2,uVar3);
  piVar6 = *(int **)(this + 0x80);
  pcVar4 = *(code **)(*piVar6 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar7 + iVar1 * 4 + 0x24));
  __mulsf3(uVar2,*(undefined4 *)(this + 0x10c));
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar7 + iVar1 * 4 + 0x3c));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x10c));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar6,uVar2,uVar3);
  this_00 = *(ImageButton **)(this + 0x80);
  iVar1 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar1 * 4 + 0x54),*(undefined4 *)(this + 0x10c));
  iVar1 = SmDev();
  uVar8 = __mulsf3(*(undefined4 *)(iVar7 + iVar1 * 4 + 0x54),*(undefined4 *)(this + 0x10c));
  ImageButton::setScale(this_00,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  return;
}


