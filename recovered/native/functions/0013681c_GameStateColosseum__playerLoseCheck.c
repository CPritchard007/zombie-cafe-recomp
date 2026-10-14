/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013681c GameStateColosseum::playerLoseCheck */

/* GameStateColosseum::playerLoseCheck() */

bool GameStateColosseum::playerLoseCheck(void)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    uVar2 = (uint)*(byte *)(in_r0 + iVar3 + 0x140);
    if (uVar2 != 0xff) {
      iVar1 = __aeabi_fcmple(*(undefined4 *)
                              (*(int *)(*(int *)(uVar2 * 4 + *(int *)(in_r0 + 0x11c)) + 0x8c) + 0x40
                              ),0);
      iVar4 = iVar4 + (uint)(iVar1 == 0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 6);
  return iVar4 == 0;
}


