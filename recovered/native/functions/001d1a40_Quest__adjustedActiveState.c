/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1a40 Quest::adjustedActiveState */

/* Quest::adjustedActiveState() */

void __thiscall Quest::adjustedActiveState(Quest *this)

{
  char cVar1;
  Vector<ActiveQuest*> *this_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ActiveQuest *pAVar6;
  int iVar7;
  int local_d4 [47];
  int iStack_18;
  
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 0x44) + 4) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 0x48) + 4) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 0x4c) + 4) = 0xffffffff;
  piVar5 = local_d4;
  do {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  } while (piVar5 != &iStack_18);
  iVar7 = 0;
  printf((char *)(DAT_001d1bc0 + 0x1d1a70),*(int *)(this + 0x14) + 1);
  if (*(int *)(this + 0x14) != -1) {
    for (; iVar7 < *(int *)(this + 0x14) + 1; iVar7 = iVar7 + 1) {
      pAVar6 = *(ActiveQuest **)(iVar7 * 4 + *(int *)(this + 0x18));
      iVar2 = *(int *)pAVar6;
      iVar4 = *(int *)(iVar2 * 4 + *(int *)(this + 0xc));
      cVar1 = *(char *)(iVar4 + 4);
      if (cVar1 != '\x04') {
        iVar2 = QuestData::getData(iVar2);
        uVar3 = (uint)*(byte *)(iVar2 + 5);
        if ((0x2e < uVar3) || (iVar2 = local_d4[uVar3], local_d4[uVar3] = iVar2 + 1, iVar2 + 1 < 6))
        {
          if (cVar1 == '\x03') {
            this_00 = *(Vector<ActiveQuest*> **)(this + 0x44);
          }
          else {
            if (cVar1 != '\x02') goto LAB_001d1ac8;
            if (*(int *)(iVar4 + 0x14) < 1) {
              this_00 = *(Vector<ActiveQuest*> **)(this + 0x4c);
            }
            else {
              this_00 = *(Vector<ActiveQuest*> **)(this + 0x48);
            }
          }
          Vector<ActiveQuest*>::addElement(this_00,pAVar6);
        }
      }
LAB_001d1ac8:
    }
    for (iVar7 = 0; iVar7 < *(int *)(*(int *)(this + 0x44) + 4) + 1; iVar7 = iVar7 + 1) {
      Vector<ActiveQuest*>::addElement
                ((Vector<ActiveQuest*> *)(this + 0x1c),
                 *(ActiveQuest **)(iVar7 * 4 + *(int *)(*(int *)(this + 0x44) + 8)));
    }
    for (iVar7 = 0; iVar7 < *(int *)(*(int *)(this + 0x48) + 4) + 1; iVar7 = iVar7 + 1) {
      Vector<ActiveQuest*>::addElement
                ((Vector<ActiveQuest*> *)(this + 0x1c),
                 *(ActiveQuest **)(iVar7 * 4 + *(int *)(*(int *)(this + 0x48) + 8)));
    }
    if (*(int *)(this + 0x20) < 0x14) {
      iVar7 = 0;
      printf((char *)(DAT_001d1bc4 + 0x1d1b24),*(int *)(*(int *)(this + 0x4c) + 4) + 1);
      if (-1 < *(int *)(*(int *)(this + 0x4c) + 4)) {
        for (; iVar7 < *(int *)(*(int *)(this + 0x4c) + 4) + 1; iVar7 = iVar7 + 1) {
          pAVar6 = *(ActiveQuest **)(iVar7 * 4 + *(int *)(*(int *)(this + 0x4c) + 8));
          iVar2 = QuestData::getData(*(int *)pAVar6);
          if ((((3 < *(byte *)(iVar2 + 5) - 8) && (*(byte *)(iVar2 + 5) != 6)) &&
              (0 < *(short *)(iVar2 + 0x46))) &&
             (Vector<ActiveQuest*>::addElement((Vector<ActiveQuest*> *)(this + 0x1c),pAVar6),
             0x12 < *(int *)(this + 0x20))) {
            return;
          }
        }
        for (iVar7 = 0; iVar7 < *(int *)(*(int *)(this + 0x4c) + 4) + 1; iVar7 = iVar7 + 1) {
          pAVar6 = *(ActiveQuest **)(iVar7 * 4 + *(int *)(*(int *)(this + 0x4c) + 8));
          iVar2 = QuestData::getData(*(int *)pAVar6);
          if (((*(short *)(iVar2 + 0x46) < 1) && (3 < *(byte *)(iVar2 + 5) - 8)) &&
             ((*(byte *)(iVar2 + 5) != 6 &&
              (Vector<ActiveQuest*>::addElement((Vector<ActiveQuest*> *)(this + 0x1c),pAVar6),
              0x12 < *(int *)(this + 0x20))))) {
            return;
          }
        }
      }
    }
  }
  return;
}


