/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015a08c GameStateGatya::uninitResultListScreen */

/* GameStateGatya::uninitResultListScreen() */

void __thiscall GameStateGatya::uninitResultListScreen(GameStateGatya *this)

{
  int *piVar1;
  
  if (*(int *)(this + 0x1e8) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1e8) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1e8) + 100) + 4))();
    }
    if (*(int **)(this + 0x1e8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1e8) + 4))();
    }
    *(undefined4 *)(this + 0x1e8) = 0;
  }
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_0015a1e0) = 0;
  unSelectCharacter(this);
  if (*(int *)(this + 0x1f0) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x1f0) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x1f0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1f0) + 4))();
    }
    *(undefined4 *)(this + 0x1f0) = 0;
  }
  if (*(int *)(this + 500) != 0) {
    piVar1 = *(int **)(*(int *)(this + 500) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 500) != (int *)0x0) {
      (**(code **)(**(int **)(this + 500) + 4))();
    }
    *(undefined4 *)(this + 500) = 0;
  }
  if (*(int *)(this + 0x204) != 0) {
    piVar1 = *(int **)(*(int *)(this + 0x204) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x204) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x204) + 4))();
    }
    *(undefined4 *)(this + 0x204) = 0;
  }
  if (*(int *)(this + 0x1ec) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1ec) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1ec) + 100) + 4))();
    }
    if (*(int **)(this + 0x1ec) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1ec) + 4))();
    }
    *(undefined4 *)(this + 0x1ec) = 0;
  }
  if (*(int *)(this + 0x1f8) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x1f8) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x1f8) + 100) + 4))();
    }
    if (*(int **)(this + 0x1f8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1f8) + 4))();
    }
    *(undefined4 *)(this + 0x1f8) = 0;
  }
  if (*(int *)(this + 0x208) != 0) {
    (**(code **)(**(int **)(this + 0x14) + 0x34))();
    if (*(int **)(*(int *)(this + 0x208) + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x208) + 0x60) + 4))();
    }
    if (*(int **)(this + 0x208) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x208) + 4))();
    }
    *(undefined4 *)(this + 0x208) = 0;
  }
  releaseCharacterAll(this);
  this[0xe40] = (GameStateGatya)0x0;
  return;
}


