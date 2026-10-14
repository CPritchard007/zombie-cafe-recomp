/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0db8 QuestState::QuestState */

/* QuestState::QuestState(int) */

void __thiscall QuestState::QuestState(QuestState *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(int *)this = param_1;
  uVar2 = DAT_001d0dd4;
  uVar1 = DAT_001d0dd0;
  this[4] = (QuestState)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


