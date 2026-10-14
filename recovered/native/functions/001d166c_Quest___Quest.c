/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d166c Quest::~Quest */

/* Quest::~Quest() */

Quest * __thiscall Quest::~Quest(Quest *this)

{
  QuestState *this_00;
  ActiveQuest *this_01;
  Vector<ActiveQuest*> *pVVar1;
  int iVar2;
  
  *(int *)this = *(int *)(DAT_001d1754 + 0x1d1676) + 8;
  puts((char *)(DAT_001d1758 + 0x1d1680));
  for (iVar2 = 0; iVar2 < *(int *)(this + 8) + 1; iVar2 = iVar2 + 1) {
    this_00 = *(QuestState **)(iVar2 * 4 + *(int *)(this + 0xc));
    if (this_00 != (QuestState *)0x0) {
      QuestState::~QuestState(this_00);
      operator_delete(this_00);
    }
  }
  *(undefined4 *)(this + 8) = 0xffffffff;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x14) + 1; iVar2 = iVar2 + 1) {
    this_01 = *(ActiveQuest **)(iVar2 * 4 + *(int *)(this + 0x18));
    if (this_01 != (ActiveQuest *)0x0) {
      ActiveQuest::~ActiveQuest(this_01);
      operator_delete(this_01);
    }
  }
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(*(int *)(this + 0x44) + 4) = 0xffffffff;
  pVVar1 = *(Vector<ActiveQuest*> **)(this + 0x44);
  if (pVVar1 != (Vector<ActiveQuest*> *)0x0) {
    Vector<ActiveQuest*>::~Vector(pVVar1);
    operator_delete(pVVar1);
  }
  *(undefined4 *)(*(int *)(this + 0x48) + 4) = 0xffffffff;
  pVVar1 = *(Vector<ActiveQuest*> **)(this + 0x48);
  if (pVVar1 != (Vector<ActiveQuest*> *)0x0) {
    Vector<ActiveQuest*>::~Vector(pVVar1);
    operator_delete(pVVar1);
  }
  *(undefined4 *)(*(int *)(this + 0x4c) + 4) = 0xffffffff;
  pVVar1 = *(Vector<ActiveQuest*> **)(this + 0x4c);
  if (pVVar1 != (Vector<ActiveQuest*> *)0x0) {
    Vector<ActiveQuest*>::~Vector(pVVar1);
    operator_delete(pVVar1);
  }
  Vector<ActiveQuest*>::~Vector((Vector<ActiveQuest*> *)(this + 0x1c));
  Vector<ActiveQuest*>::~Vector((Vector<ActiveQuest*> *)(this + 0x10));
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc));
  }
  return this;
}


