/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1444 Quest::getCurrentSelectedActiveQuestID */

/* Quest::getCurrentSelectedActiveQuestID() */

undefined4 __thiscall Quest::getCurrentSelectedActiveQuestID(Quest *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x40) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = **(undefined4 **)(*(int *)(this + 0x40) * 4 + *(int *)(this + 0x18));
  }
  return uVar1;
}


