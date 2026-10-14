/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ee14 GameStateEventRaid::setZombieAttackStart */

/* GameStateEventRaid::setZombieAttackStart() */

void __thiscall GameStateEventRaid::setZombieAttackStart(GameStateEventRaid *this)

{
  int iVar1;
  int local_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_28[0] = *(int *)(DAT_0019ee80 + 0x19ee34);
  local_28[1] = *(undefined4 *)(DAT_0019ee80 + 0x19ee38);
  local_28[2] = *(undefined4 *)(DAT_0019ee80 + 0x19ee3c);
  local_28[3] = *(undefined4 *)(DAT_0019ee80 + 0x19ee40);
  uStack_18 = *(undefined4 *)(DAT_0019ee80 + 0x19ee44);
  uStack_14 = *(undefined4 *)(DAT_0019ee80 + 0x19ee48);
  iVar1 = *(int *)(this + 0x40);
  if ((iVar1 < 6) && (local_28[iVar1] <= *(int *)(this + 0x38))) {
    if ((byte)this[iVar1 + 0x128] != 0xff) {
      *(undefined1 *)
       (*(int *)(*(int *)((uint)(byte)this[iVar1 + 0x128] * 4 + *(int *)(this + 0x104)) + 0x8c) +
       0x44) = 4;
    }
    if (iVar1 < *(int *)(this + 0xf4) + 1) {
      *(undefined1 *)(*(int *)(*(int *)(iVar1 * 4 + *(int *)(this + 0xf8)) + 0x8c) + 0x44) = 4;
    }
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  }
  return;
}


