/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136d64 GameStateColosseum::drawConnectWindow */

/* GameStateColosseum::drawConnectWindow(long) */

void __thiscall GameStateColosseum::drawConnectWindow(GameStateColosseum *this,long param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar3 = *(int *)(this + 0x14c);
  *(long *)(this + 0x14c) = param_1 + iVar3;
  uVar1 = __divsi3(param_1 + iVar3,2000);
  pcVar4 = *(code **)(**(int **)(this + 0x68) + 0x20);
  bVar5 = (uVar1 & 1) != 0;
  if (bVar5) {
    (*pcVar4)(*(int **)(this + 0x68),1);
    (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
    piVar2 = *(int **)(this + 0xbc);
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  else {
    (*pcVar4)();
    (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),1);
    piVar2 = *(int **)(this + 0xbc);
    pcVar4 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar4)(piVar2,bVar5);
  return;
}


