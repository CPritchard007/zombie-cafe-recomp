/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d14c8 Quest::setCurrentSelectedActiveQuest */

/* Quest::setCurrentSelectedActiveQuest(bool, int) */

void __thiscall Quest::setCurrentSelectedActiveQuest(Quest *this,bool param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1) {
    for (uVar2 = 0; uVar2 < *(int *)(this + 0x14) + 1U; uVar2 = uVar2 + 1) {
      iVar1 = *(int *)(uVar2 * 4 + *(int *)(this + 0x18));
      if ((*(char *)(iVar1 + 0x10) != '\0') && (*(int *)(iVar1 + 0x14) == param_2)) {
        *(uint *)(this + 0x40) = uVar2;
        return;
      }
    }
  }
  return;
}


