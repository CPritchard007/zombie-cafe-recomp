/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001cdc50 GameStateChangeHard::autoTextTimer */

/* GameStateChangeHard::autoTextTimer() */

void GameStateChangeHard::autoTextTimer(void)

{
  int in_r0;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  piVar2 = (int *)(in_r0 + 0xb4);
  iVar3 = *piVar2 + 1;
  *piVar2 = iVar3;
  if (iVar3 < 0x3c) {
    piVar2 = *(int **)(in_r0 + 0x34);
    if (piVar2 == (int *)0x0) {
      return;
    }
    uVar1 = 1;
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  else {
    if (99 < iVar3) {
      if (iVar3 == 100) {
        return;
      }
      *piVar2 = 0;
      return;
    }
    piVar2 = *(int **)(in_r0 + 0x34);
    if (piVar2 == (int *)0x0) {
      return;
    }
    uVar1 = 0;
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar4)(piVar2,uVar1);
  return;
}


