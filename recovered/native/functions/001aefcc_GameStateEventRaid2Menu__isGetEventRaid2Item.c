/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aefcc GameStateEventRaid2Menu::isGetEventRaid2Item */

/* GameStateEventRaid2Menu::isGetEventRaid2Item() */

int __thiscall GameStateEventRaid2Menu::isGetEventRaid2Item(GameStateEventRaid2Menu *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(*(int *)(this + 0x100) * 4 + *(int *)(DAT_001af00c + 0x1aefe0)) +
                    iVar3);
    if (iVar1 <= *(int *)(*(int *)(this + 0xc) + 0x1d4)) {
      iVar2 = iVar2 + (uint)(iVar1 + DAT_001af010 != 0);
    }
    iVar3 = iVar3 + 0x14;
  } while (iVar3 != 0x550);
  return iVar2 - *(int *)(*(int *)(this + 0xc) + 0x1d0);
}


