/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001537e4 GameStateGatya::changeMessageWindow */

/* GameStateGatya::changeMessageWindow(bool) */

void __thiscall GameStateGatya::changeMessageWindow(GameStateGatya *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(this + 0x1fc);
  if (piVar1 != (int *)0x0) {
    if (!param_1) {
      (**(code **)(*piVar1 + 0x20))();
      piVar1 = *(int **)(this + 0x20c);
      pcVar2 = *(code **)(*piVar1 + 0x20);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,1);
      piVar1 = *(int **)(this + 0x20c);
      pcVar2 = *(code **)(*piVar1 + 0x20);
    }
    (*pcVar2)(piVar1,param_1);
  }
  return;
}


