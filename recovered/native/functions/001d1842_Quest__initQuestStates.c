/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1842 Quest::initQuestStates */

/* Quest::initQuestStates(int) */

void __thiscall Quest::initQuestStates(Quest *this,int param_1)

{
  QuestState *this_00;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 4);
  if (iVar2 < param_1) {
    iVar1 = param_1;
    if (param_1 + iVar2 * -2 < 0 != SBORROW4(param_1,iVar2 * 2)) {
      iVar1 = iVar2 * 2;
    }
    Vector<QuestState*>::resize((Vector<QuestState*> *)(this + 4),iVar1,-1);
  }
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
    this_00 = (QuestState *)operator_new(0x18);
    QuestState::QuestState(this_00,iVar2);
    Vector<QuestState*>::addElement((Vector<QuestState*> *)(this + 4),this_00);
  }
  return;
}


