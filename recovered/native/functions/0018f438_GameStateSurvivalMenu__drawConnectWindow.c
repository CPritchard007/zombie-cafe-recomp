/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f438 GameStateSurvivalMenu::drawConnectWindow */

/* GameStateSurvivalMenu::drawConnectWindow(long) */

void __thiscall GameStateSurvivalMenu::drawConnectWindow(GameStateSurvivalMenu *this,long param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar1 = param_1 + *(int *)(this + 0xb8);
  *(int *)(this + 0xb8) = iVar1;
  uVar2 = __divsi3(iVar1,2000);
  piVar3 = *(int **)(this + 0x84);
  bVar5 = (uVar2 & 1) != 0;
  if (bVar5) {
    (**(code **)(*piVar3 + 0x20))(piVar3,0);
    piVar3 = *(int **)(this + 0x88);
    pcVar4 = *(code **)(*piVar3 + 0x20);
  }
  else {
    (**(code **)(*piVar3 + 0x20))(piVar3,1);
    piVar3 = *(int **)(this + 0x88);
    pcVar4 = *(code **)(*piVar3 + 0x20);
  }
  (*pcVar4)(piVar3,bVar5);
  return;
}


