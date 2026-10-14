/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0fdc Quest::calEnableQuestCnt */

/* Quest::calEnableQuestCnt() */

void __thiscall Quest::calEnableQuestCnt(Quest *this)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(DAT_001d100c + 0x1d0fe8);
  *(undefined4 *)(this + 0x38) = 0;
  psVar3 = (short *)*puVar2;
  for (iVar4 = 0; iVar4 < *psVar3; iVar4 = iVar4 + 1) {
    iVar1 = QuestData::getData(iVar4);
    if (*(char *)(iVar1 + 4) != -1) {
      *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    }
  }
  return;
}


