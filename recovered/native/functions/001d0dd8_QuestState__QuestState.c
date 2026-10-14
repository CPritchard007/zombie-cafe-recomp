/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0dd8 QuestState::QuestState */

/* QuestState::QuestState() */

void __thiscall QuestState::QuestState(QuestState *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = 0xffffffff;
  this[4] = (QuestState)0x0;
  uVar2 = DAT_001d0df4;
  uVar1 = DAT_001d0df0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


