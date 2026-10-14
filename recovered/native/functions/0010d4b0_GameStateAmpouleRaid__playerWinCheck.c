/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d4b0 GameStateAmpouleRaid::playerWinCheck */

/* GameStateAmpouleRaid::playerWinCheck() */

bool GameStateAmpouleRaid::playerWinCheck(void)

{
  int in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_r0 + 0xf8);
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < iVar4 + 1; iVar2 = iVar2 + 1) {
    iVar1 = __aeabi_fcmple(*(undefined4 *)
                            (*(int *)(*(int *)(iVar2 * 4 + *(int *)(in_r0 + 0xfc)) + 0x8c) + 0x40),0
                          );
    iVar3 = iVar3 + (uint)(iVar1 == 0);
  }
  return iVar3 == 0;
}


