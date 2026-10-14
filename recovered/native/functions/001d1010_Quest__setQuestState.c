/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1010 Quest::setQuestState */

/* Quest::setQuestState(int, unsigned char) */

void __thiscall Quest::setQuestState(Quest *this,int param_1,uchar param_2)

{
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 8))) {
    *(uchar *)(*(int *)(param_1 * 4 + *(int *)(this + 0xc)) + 4) = param_2;
  }
  return;
}


