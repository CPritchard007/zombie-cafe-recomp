/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136724 GameStateColosseum::setZombieAttackStart */

/* GameStateColosseum::setZombieAttackStart() */

void __thiscall GameStateColosseum::setZombieAttackStart(GameStateColosseum *this)

{
  int iVar1;
  int local_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28[0] = *(int *)(DAT_00136794 + 0x13674c);
  local_28[1] = *(undefined4 *)(DAT_00136794 + 0x136750);
  local_28[2] = *(undefined4 *)(DAT_00136794 + 0x136754);
  local_28[3] = *(undefined4 *)(DAT_00136794 + 0x136758);
  uStack_18 = *(undefined4 *)(DAT_00136794 + 0x13675c);
  uStack_14 = *(undefined4 *)(DAT_00136794 + 0x136760);
  iVar1 = *(int *)(this + 0x54);
  if ((iVar1 < 6) && (local_28[iVar1] <= *(int *)(this + 0x4c))) {
    if ((byte)this[iVar1 + 0x140] != 0xff) {
      *(undefined1 *)
       (*(int *)(*(int *)((uint)(byte)this[iVar1 + 0x140] * 4 + *(int *)(this + 0x11c)) + 0x8c) +
       0x44) = 4;
    }
    if (iVar1 < *(int *)(this + 0x10c) + 1) {
      *(undefined1 *)(*(int *)(*(int *)(iVar1 * 4 + *(int *)(this + 0x110)) + 0x8c) + 0x44) = 4;
    }
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + 1;
  }
  return;
}


