/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d148a Quest::setQuestsNoNewEntry */

/* Quest::setQuestsNoNewEntry() */

void __thiscall Quest::setQuestsNoNewEntry(Quest *this)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(int *)(this + 0x14) + 1U; uVar1 = uVar1 + 1) {
    *(undefined1 *)(*(int *)(uVar1 * 4 + *(int *)(this + 0x18)) + 0x18) = 0;
  }
  return;
}


