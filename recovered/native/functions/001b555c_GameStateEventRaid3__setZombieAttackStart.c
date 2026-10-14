/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b555c GameStateEventRaid3::setZombieAttackStart */

/* GameStateEventRaid3::setZombieAttackStart() */

void __thiscall GameStateEventRaid3::setZombieAttackStart(GameStateEventRaid3 *this)

{
  int iVar1;
  int local_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28[0] = *(int *)(DAT_001b55cc + 0x1b557c);
  local_28[1] = *(undefined4 *)(DAT_001b55cc + 0x1b5580);
  local_28[2] = *(undefined4 *)(DAT_001b55cc + 0x1b5584);
  local_28[3] = *(undefined4 *)(DAT_001b55cc + 0x1b5588);
  uStack_18 = *(undefined4 *)(DAT_001b55cc + 0x1b558c);
  uStack_14 = *(undefined4 *)(DAT_001b55cc + 0x1b5590);
  iVar1 = *(int *)(this + 0x58);
  if ((iVar1 < 6) && (local_28[iVar1] <= *(int *)(this + 0x50))) {
    if ((byte)this[iVar1 + 0x154] != 0xff) {
      *(undefined1 *)
       (*(int *)(*(int *)((uint)(byte)this[iVar1 + 0x154] * 4 + *(int *)(this + 0x130)) + 0x8c) +
       0x44) = 4;
    }
    if (iVar1 < *(int *)(this + 0x120) + 1) {
      *(undefined1 *)(*(int *)(*(int *)(iVar1 * 4 + *(int *)(this + 0x124)) + 0x8c) + 0x44) = 4;
    }
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
  }
  return;
}


