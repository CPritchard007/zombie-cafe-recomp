/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb388 GameStateEventRaid3Menu::isGetEventRaid3Item */

/* GameStateEventRaid3Menu::isGetEventRaid3Item() */

int __thiscall GameStateEventRaid3Menu::isGetEventRaid3Item(GameStateEventRaid3Menu *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(*(int *)(DAT_001bb3c4 + 0x1bb392) + 0x9c);
  iVar2 = 0;
  iVar1 = 0;
  do {
    uVar4 = *(uint *)(iVar2 + DAT_001bb3c8 + 0x1bb3b2);
    iVar2 = iVar2 + 0x14;
    iVar1 = iVar1 + (((int)uVar3 >> 0x1f) - ((int)uVar4 >> 0x1f)) + (uint)(uVar4 <= uVar3);
  } while (iVar2 != 0x4d8);
  return iVar1 - *(int *)(*(int *)(this + 0xc) + 0x234);
}


