/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d404 GameStateAmpouleRaid::setZombieAttackStart */

/* GameStateAmpouleRaid::setZombieAttackStart() */

void __thiscall GameStateAmpouleRaid::setZombieAttackStart(GameStateAmpouleRaid *this)

{
  int iVar1;
  int local_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28[0] = *(int *)(DAT_0010d470 + 0x10d484);
  local_28[1] = *(undefined4 *)(DAT_0010d470 + 0x10d488);
  local_28[2] = *(undefined4 *)(DAT_0010d470 + 0x10d48c);
  local_28[3] = *(undefined4 *)(DAT_0010d470 + 0x10d490);
  uStack_18 = *(undefined4 *)(DAT_0010d470 + 0x10d494);
  uStack_14 = *(undefined4 *)(DAT_0010d470 + 0x10d498);
  iVar1 = *(int *)(this + 0x48);
  if ((iVar1 < 6) && (local_28[iVar1] <= *(int *)(this + 0x40))) {
    if ((byte)this[iVar1 + 300] != 0xff) {
      *(undefined1 *)
       (*(int *)(*(int *)((uint)(byte)this[iVar1 + 300] * 4 + *(int *)(this + 0x108)) + 0x8c) + 0x44
       ) = 4;
    }
    if (iVar1 < *(int *)(this + 0xf8) + 1) {
      *(undefined1 *)(*(int *)(*(int *)(iVar1 * 4 + *(int *)(this + 0xfc)) + 0x8c) + 0x44) = 4;
    }
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
  }
  return;
}


