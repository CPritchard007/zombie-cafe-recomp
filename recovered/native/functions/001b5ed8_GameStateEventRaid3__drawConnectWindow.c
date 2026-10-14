/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5ed8 GameStateEventRaid3::drawConnectWindow */

/* GameStateEventRaid3::drawConnectWindow(long) */

void __thiscall GameStateEventRaid3::drawConnectWindow(GameStateEventRaid3 *this,long param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar3 = *(int *)(this + 0x160);
  *(long *)(this + 0x160) = param_1 + iVar3;
  uVar1 = __divsi3(param_1 + iVar3,2000);
  pcVar4 = *(code **)(**(int **)(this + 0x7c) + 0x20);
  bVar5 = (uVar1 & 1) != 0;
  if (bVar5) {
    (*pcVar4)(*(int **)(this + 0x7c),1);
    (**(code **)(**(int **)(this + 200) + 0x20))(*(int **)(this + 200),0);
    piVar2 = *(int **)(this + 0xcc);
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  else {
    (*pcVar4)();
    (**(code **)(**(int **)(this + 200) + 0x20))(*(int **)(this + 200),1);
    piVar2 = *(int **)(this + 0xcc);
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar4)(piVar2,bVar5);
  return;
}


