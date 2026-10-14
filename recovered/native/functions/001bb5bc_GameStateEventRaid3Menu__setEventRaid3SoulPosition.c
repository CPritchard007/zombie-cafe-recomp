/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb5bc GameStateEventRaid3Menu::setEventRaid3SoulPosition */

/* GameStateEventRaid3Menu::setEventRaid3SoulPosition() */

undefined8 __thiscall
GameStateEventRaid3Menu::setEventRaid3SoulPosition(GameStateEventRaid3Menu *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  GameStateEventRaid3Menu *pGVar7;
  int *piVar8;
  
  piVar8 = *(int **)(this + 0x38);
  iVar6 = DAT_001bb6e4 + 0x1bb5cc;
  pcVar5 = *(code **)(*piVar8 + 0x14);
  pGVar7 = this + 0xe8;
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(DAT_001bb6e8 + iVar1 * 4 + 0x1bb650));
  __mulsf3(uVar2,*(undefined4 *)(this + 0xe4));
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0xc));
  __mulsf3(uVar3,*(undefined4 *)pGVar7);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x3c);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x24));
  __mulsf3(uVar2,*(undefined4 *)pGVar7);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x3c));
  __mulsf3(uVar3,*(undefined4 *)pGVar7);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x40);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x54));
  __mulsf3(uVar2,*(undefined4 *)pGVar7);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x3c));
  __mulsf3(uVar3,*(undefined4 *)pGVar7);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x44);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x6c));
  __mulsf3(uVar3,*(undefined4 *)pGVar7);
  uVar3 = __fixsfsi();
  iVar1 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x3c));
  __mulsf3(uVar4,*(undefined4 *)pGVar7);
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar8,uVar3,uVar4);
  return CONCAT44(uVar2,pcVar5);
}


