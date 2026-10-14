/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00189e34 GameStateRoulette::changeMessageWindow */

/* GameStateRoulette::changeMessageWindow(bool) */

void GameStateRoulette::changeMessageWindow(bool param_1)

{
  uint uVar1;
  int *piVar2;
  int in_r1;
  code *pcVar3;
  
  uVar1 = (uint)param_1;
  pcVar3 = *(code **)(**(int **)(uVar1 + 100) + 0x20);
  if (in_r1 == 0) {
    (*pcVar3)();
    piVar2 = *(int **)(uVar1 + 0x84);
    pcVar3 = *(code **)(*piVar2 + 0x20);
  }
  else {
    (*pcVar3)(*(int **)(uVar1 + 100),1);
    piVar2 = *(int **)(uVar1 + 0x84);
    pcVar3 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar3)(piVar2,in_r1 != 0);
  return;
}


