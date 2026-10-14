/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00116274 GameStateBackupSelection::uninit */

/* GameStateBackupSelection::uninit() */

void __thiscall GameStateBackupSelection::uninit(GameStateBackupSelection *this)

{
  int *piVar1;
  GameStateBackupSelection *pGVar2;
  int iVar3;
  
  iVar3 = 3;
  pGVar2 = this;
  do {
    if (*(int **)(pGVar2 + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar2 + 0x24) + 4))();
    }
    if (*(int **)(pGVar2 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar2 + 0x18) + 4))();
    }
    if ((*(int *)(pGVar2 + 0x38) != 0) &&
       (piVar1 = *(int **)(*(int *)(pGVar2 + 0x38) + 0x60), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(pGVar2 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar2 + 0x38) + 4))();
    }
    if ((*(int *)(pGVar2 + 0x44) != 0) &&
       (piVar1 = *(int **)(*(int *)(pGVar2 + 0x44) + 0x60), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(pGVar2 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar2 + 0x44) + 4))();
    }
    if (*(int **)(pGVar2 + 0x50) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar2 + 0x50) + 4))();
    }
    if (*(int **)(pGVar2 + 0x5c) != (int *)0x0) {
      (**(code **)(**(int **)(pGVar2 + 0x5c) + 4))();
    }
    iVar3 = iVar3 + -1;
    pGVar2 = pGVar2 + 4;
  } while (iVar3 != 0);
  if (*(int **)(this + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x30) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x34) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x34) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x34) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
  }
  return;
}


