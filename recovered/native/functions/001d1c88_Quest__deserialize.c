/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1c88 Quest::deserialize */

/* Quest::deserialize(DataInputStream*) */

Quest * Quest::deserialize(DataInputStream *param_1)

{
  short sVar1;
  Quest *this;
  uint uVar2;
  QuestState *pQVar3;
  ActiveQuest *pAVar4;
  undefined4 uVar5;
  Vector<QuestState*> *this_00;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24;
  
  this = (Quest *)operator_new(0x50);
  Quest(this);
  uVar2 = DataInputStream::readInt(param_1);
  iVar7 = *(int *)(this + 4);
  this_00 = (Vector<QuestState*> *)(this + 4);
  if (iVar7 < (int)uVar2) {
    uVar6 = uVar2;
    if ((int)(uVar2 + iVar7 * -2) < 0 != SBORROW4(uVar2,iVar7 * 2)) {
      uVar6 = iVar7 * 2;
    }
    Vector<QuestState*>::resize(this_00,uVar6,-1);
  }
  for (iVar7 = 0; iVar7 < (int)uVar2; iVar7 = iVar7 + 1) {
    pQVar3 = (QuestState *)QuestState::deserialize(param_1);
    Vector<QuestState*>::addElement(this_00,pQVar3);
  }
  iVar7 = *(int *)(this + 8);
  sVar1 = **(short **)(DAT_001d1dcc + 0x1d1ce8);
  if (iVar7 + 1 < (int)sVar1) {
    for (iVar9 = 0; iVar9 < (int)sVar1 - (iVar7 + 1); iVar9 = iVar9 + 1) {
      pQVar3 = (QuestState *)operator_new(0x18);
      QuestState::QuestState(pQVar3,iVar9 + (uVar2 & (int)~uVar2 >> 0x1f));
      Vector<QuestState*>::addElement(this_00,pQVar3);
    }
  }
  iVar7 = DataInputStream::readInt(param_1);
  iVar9 = *(int *)(this + 0x10);
  if (iVar9 < iVar7) {
    iVar8 = iVar7;
    if (iVar7 + iVar9 * -2 < 0 != SBORROW4(iVar7,iVar9 * 2)) {
      iVar8 = iVar9 * 2;
    }
    Vector<ActiveQuest*>::resize((Vector<ActiveQuest*> *)(this + 0x10),iVar8,-1);
  }
  for (local_24 = 0; local_24 < iVar7; local_24 = local_24 + 1) {
    pAVar4 = (ActiveQuest *)ActiveQuest::deserialize(param_1);
    Vector<ActiveQuest*>::addElement((Vector<ActiveQuest*> *)(this + 0x10),pAVar4);
    iVar9 = **(int **)(local_24 * 4 + *(int *)(this + 0x18));
    iVar8 = *(int *)(iVar9 * 4 + *(int *)(this + 0xc));
    iVar9 = QuestData::getData(iVar9);
    if ((*(byte *)(iVar9 + 5) - 8 < 4) && (0 < *(int *)(iVar8 + 0x14))) {
      *(undefined1 *)(iVar8 + 4) = 3;
    }
    if ((*(char *)(iVar9 + 5) == '\x06') && (*(int *)(iVar8 + 0x14) == 0)) {
      *(undefined1 *)(iVar8 + 4) = 3;
    }
  }
  uVar5 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x28) = uVar5;
  uVar5 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x2c) = uVar5;
  uVar5 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x30) = uVar5;
  uVar5 = DataInputStream::readInt(param_1);
  *(undefined4 *)(this + 0x34) = uVar5;
  checkAndSetUpdatedQuestComplete();
  return this;
}


