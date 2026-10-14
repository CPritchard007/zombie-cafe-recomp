/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c0fd4 GameStateWeekRaidMenu::setWeekRaidSoulPosition */

/* GameStateWeekRaidMenu::setWeekRaidSoulPosition() */

void __thiscall GameStateWeekRaidMenu::setWeekRaidSoulPosition(GameStateWeekRaidMenu *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  GameStateWeekRaidMenu *pGVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = *(int **)(this + 0x20);
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar5 = DAT_001c10fc + 0x1c0fe8;
  pGVar6 = this + 0xb8;
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x20));
  __mulsf3(uVar2,*(undefined4 *)pGVar6);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x38));
  __mulsf3(uVar3,*(undefined4 *)pGVar6);
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar7,uVar2,uVar3);
  piVar7 = *(int **)(this + 0x24);
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x50));
  __mulsf3(uVar2,*(undefined4 *)pGVar6);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x68));
  __mulsf3(uVar3,*(undefined4 *)pGVar6);
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar7,uVar2,uVar3);
  piVar7 = *(int **)(this + 0x28);
  iVar8 = DAT_001c1100 + 0x1c1076;
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar1 * 4 + iVar8));
  __mulsf3(uVar2,*(undefined4 *)pGVar6);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x68));
  __mulsf3(uVar3,*(undefined4 *)pGVar6);
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar7,uVar2,uVar3);
  piVar7 = *(int **)(this + 0x2c);
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar8 + iVar1 * 4 + 0x18));
  __mulsf3(uVar2,*(undefined4 *)pGVar6);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar5 + iVar1 * 4 + 0x68));
  __mulsf3(uVar3,*(undefined4 *)pGVar6);
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar7,uVar2,uVar3);
  return;
}


