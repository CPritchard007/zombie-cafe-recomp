/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f9dc GameStateCafe::undoEdits */

/* GameStateCafe::undoEdits() */

void __thiscall GameStateCafe::undoEdits(GameStateCafe *this)

{
  int *piVar1;
  
  while (piVar1 = (int *)CapcomLinkedList<UndoData*>::remove
                                   ((CapcomLinkedList<UndoData*> *)(this + 0x144),0),
        piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      if (-1 < piVar1[1]) {
        Cafe::setTileImageIndex(*(Cafe **)(this + 0x14),piVar1[1],piVar1[2],piVar1[3]);
      }
    }
    else {
      *(short *)(*piVar1 + 0x38) = (short)piVar1[2];
      *(int *)(*piVar1 + 0x40) = piVar1[3];
    }
    operator_delete(piVar1);
  }
  return;
}


