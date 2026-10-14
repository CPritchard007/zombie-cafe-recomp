/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9b9c GameStateEventRaid2::setZombieAttackStart */

/* GameStateEventRaid2::setZombieAttackStart() */

void __thiscall GameStateEventRaid2::setZombieAttackStart(GameStateEventRaid2 *this)

{
  int iVar1;
  int local_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28[0] = *(int *)(DAT_001a9c0c + 0x1a9bbc);
  local_28[1] = *(undefined4 *)(DAT_001a9c0c + 0x1a9bc0);
  local_28[2] = *(undefined4 *)(DAT_001a9c0c + 0x1a9bc4);
  local_28[3] = *(undefined4 *)(DAT_001a9c0c + 0x1a9bc8);
  uStack_18 = *(undefined4 *)(DAT_001a9c0c + 0x1a9bcc);
  uStack_14 = *(undefined4 *)(DAT_001a9c0c + 0x1a9bd0);
  iVar1 = *(int *)(this + 0x58);
  if ((iVar1 < 6) && (local_28[iVar1] <= *(int *)(this + 0x50))) {
    if ((byte)this[iVar1 + 0x148] != 0xff) {
      *(undefined1 *)
       (*(int *)(*(int *)((uint)(byte)this[iVar1 + 0x148] * 4 + *(int *)(this + 0x124)) + 0x8c) +
       0x44) = 4;
    }
    if (iVar1 < *(int *)(this + 0x114) + 1) {
      *(undefined1 *)(*(int *)(*(int *)(iVar1 * 4 + *(int *)(this + 0x118)) + 0x8c) + 0x44) = 4;
    }
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
  }
  return;
}


