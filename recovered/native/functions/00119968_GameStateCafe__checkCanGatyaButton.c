/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119968 GameStateCafe::checkCanGatyaButton */

/* GameStateCafe::checkCanGatyaButton() */

undefined1 __thiscall GameStateCafe::checkCanGatyaButton(GameStateCafe *this)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (7 < *(int *)(*(int *)(this + 0xc) + 0x680)) {
    uVar1 = 1;
    iVar2 = *(int *)(DAT_00119990 + 0x11997e);
    if ((*(char *)(iVar2 + 0xc) == '\0') && (*(char *)(iVar2 + 0xd) == '\0')) {
      uVar1 = *(undefined1 *)(iVar2 + 0xe);
    }
  }
  return uVar1;
}


