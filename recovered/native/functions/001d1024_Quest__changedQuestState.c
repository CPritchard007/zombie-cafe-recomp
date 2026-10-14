/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1024 Quest::changedQuestState */

/* Quest::changedQuestState(int, int, int) */

void __thiscall Quest::changedQuestState(Quest *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 4 + *(int *)(this + 0xc));
  if ((uint)*(byte *)(iVar1 + 4) == param_2) {
    *(char *)(iVar1 + 4) = (char)param_3;
  }
  return;
}


