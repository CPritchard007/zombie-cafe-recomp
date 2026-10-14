/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001daef8 GuardTask::unblockCharacterPositions */

/* GuardTask::unblockCharacterPositions() */

void __thiscall GuardTask::unblockCharacterPositions(GuardTask *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = Cafe::getNextTile((int)*(short *)(*(int *)(this + 0x24) + 0x2c),iVar2);
    if (iVar1 != -1) {
      CFPathFinder::setNodeEnabled
                (*(CFPathFinder **)(*(int *)(this + 0x38) + 0x5c),iVar1,(bool)this[iVar2 + 0x3c]);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}


