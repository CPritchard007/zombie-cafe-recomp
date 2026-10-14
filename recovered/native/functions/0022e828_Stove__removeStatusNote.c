/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e828 Stove::removeStatusNote */

/* Stove::removeStatusNote() */

void __thiscall Stove::removeStatusNote(Stove *this)

{
  int iVar1;
  Cafe *this_00;
  
  if (*(int *)(this + 0x88) != 0) {
    iVar1 = CapcomApp::getInstance();
    this_00 = *(Cafe **)(*(int *)(iVar1 + 4) + 0x7e8);
    if (this_00 != (Cafe *)0x0) {
      Cafe::removeStatusNote(this_00,*(StatusNote **)(this + 0x88));
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  return;
}


