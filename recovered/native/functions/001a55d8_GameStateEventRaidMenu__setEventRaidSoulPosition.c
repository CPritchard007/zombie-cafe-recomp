/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a55d8 GameStateEventRaidMenu::setEventRaidSoulPosition */

/* GameStateEventRaidMenu::setEventRaidSoulPosition() */

undefined8 __thiscall GameStateEventRaidMenu::setEventRaidSoulPosition(GameStateEventRaidMenu *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  GameStateEventRaidMenu *pGVar7;
  int *piVar8;
  
  piVar8 = *(int **)(this + 0x28);
  iVar6 = DAT_001a56fc + 0x1a55e8;
  pcVar5 = *(code **)(*piVar8 + 0x14);
  pGVar7 = this + 0xb4;
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 8));
  __mulsf3(uVar2,*(undefined4 *)(this + 0xb0));
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x20));
  __mulsf3(uVar3,*(undefined4 *)pGVar7);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x2c);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x38));
  __mulsf3(uVar2,*(undefined4 *)pGVar7);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x50));
  __mulsf3(uVar3,*(undefined4 *)pGVar7);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x30);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x68));
  __mulsf3(uVar2,*(undefined4 *)pGVar7);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x50));
  __mulsf3(uVar3,*(undefined4 *)pGVar7);
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar8,uVar2,uVar3);
  piVar8 = *(int **)(this + 0x34);
  pcVar5 = *(code **)(*piVar8 + 0x14);
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar1 * 4 + DAT_001a5700 + 0x1a56c8));
  __mulsf3(uVar3,*(undefined4 *)pGVar7);
  uVar3 = __fixsfsi();
  iVar1 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x50));
  __mulsf3(uVar4,*(undefined4 *)pGVar7);
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar8,uVar3,uVar4);
  return CONCAT44(uVar2,pcVar5);
}


