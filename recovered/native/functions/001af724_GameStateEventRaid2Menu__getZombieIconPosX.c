/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001af724 GameStateEventRaid2Menu::getZombieIconPosX */

/* GameStateEventRaid2Menu::getZombieIconPosX() */

undefined4 __thiscall GameStateEventRaid2Menu::getZombieIconPosX(GameStateEventRaid2Menu *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(this + 0x100);
  if (iVar2 == 0x16) {
    iVar2 = DAT_001af7b8 + 0x1af73a;
  }
  else {
    if (iVar2 != 0x15) {
      if (iVar2 == 0x14) {
        puVar3 = (undefined4 *)(DAT_001af7c0 + 0x1af758);
      }
      else if (iVar2 == 0x17) {
        puVar3 = (undefined4 *)(DAT_001af7c4 + 0x1af77e);
      }
      else if (iVar2 == 0x18) {
        puVar3 = (undefined4 *)(DAT_001af7c8 + 0x1af7a4);
      }
      else if (iVar2 - 0x19U < 4) {
        puVar3 = (undefined4 *)((int)&DAT_001af7cc + DAT_001af7cc + 2);
      }
      else {
        if (iVar2 != 0x1d) {
          return 0;
        }
        puVar3 = (undefined4 *)(DAT_001af7d0 + 0x1af7f6);
      }
      goto LAB_001af792;
    }
    iVar2 = DAT_001af7bc + 0x1af746;
  }
  puVar3 = (undefined4 *)(iVar2 + 0x6c);
LAB_001af792:
  local_28[0] = *puVar3;
  local_28[1] = puVar3[1];
  local_28[2] = puVar3[2];
  local_28[3] = puVar3[3];
  uStack_18 = puVar3[4];
  uStack_14 = puVar3[5];
  iVar2 = SmDev();
  uVar1 = __floatsisf(local_28[iVar2]);
  __mulsf3(uVar1,*(undefined4 *)(this + 0x10c));
  uVar1 = __fixsfsi();
  return uVar1;
}


