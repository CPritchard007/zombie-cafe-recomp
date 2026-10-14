/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0e74 ActiveQuest::ActiveQuest */

/* ActiveQuest::ActiveQuest(int, double) */

void __thiscall ActiveQuest::ActiveQuest(ActiveQuest *this,int param_1,double param_2)

{
  undefined4 in_r2;
  undefined4 in_r3;
  
  *(undefined4 *)(this + 8) = in_r2;
  *(undefined4 *)(this + 0xc) = in_r3;
  *(int *)this = param_1;
  this[0x10] = (ActiveQuest)0x0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  this[0x18] = (ActiveQuest)0x0;
  return;
}


