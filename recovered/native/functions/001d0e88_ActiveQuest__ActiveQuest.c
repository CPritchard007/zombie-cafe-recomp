/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0e88 ActiveQuest::ActiveQuest */

/* ActiveQuest::ActiveQuest(bool, int, double) */

void __thiscall ActiveQuest::ActiveQuest(ActiveQuest *this,bool param_1,int param_2,double param_3)

{
  *(undefined4 *)this = 0xffffffff;
  this[0x10] = (ActiveQuest)param_1;
  *(double *)(this + 8) = param_3;
  *(int *)(this + 0x14) = param_2;
  this[0x18] = (ActiveQuest)0x0;
  return;
}


