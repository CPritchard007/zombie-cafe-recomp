/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d13cc Quest::isQuestCompleted */

/* Quest::isQuestCompleted(int) */

bool __thiscall Quest::isQuestCompleted(Quest *this,int param_1)

{
  return *(char *)(*(int *)(param_1 * 4 + *(int *)(this + 0xc)) + 4) == '\x03';
}


