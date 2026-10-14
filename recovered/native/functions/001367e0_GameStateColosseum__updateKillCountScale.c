/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001367e0 GameStateColosseum::updateKillCountScale */

/* GameStateColosseum::updateKillCountScale() */

void __thiscall GameStateColosseum::updateKillCountScale(GameStateColosseum *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0xc4);
  if (0 < iVar1) {
    iVar1 = iVar1 + -1;
    *(int *)(this + 0xc4) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = __floatsisf();
      uVar2 = __divsf3(uVar2,DAT_00136818);
      uVar2 = __addsf3(uVar2,0x3f800000);
    }
    *(undefined4 *)(*(int *)(this + 0xb0) + 0xbc) = uVar2;
  }
  return;
}


