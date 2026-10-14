/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119924 GameStateCafe::checkCanLotteryButton */

/* GameStateCafe::checkCanLotteryButton() */

char __thiscall GameStateCafe::checkCanLotteryButton(GameStateCafe *this)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = '\0';
  if (7 < *(int *)(*(int *)(this + 0xc) + 0x680)) {
    cVar1 = '\x01';
    pcVar2 = *(char **)(DAT_00119964 + 0x11993a);
    if ((((*pcVar2 == '\0') && (pcVar2[1] == '\0')) && (pcVar2[2] == '\0')) &&
       (((pcVar2[3] == '\0' && (pcVar2[4] == '\0')) && (pcVar2[5] == '\0')))) {
      cVar1 = pcVar2[6];
    }
  }
  return cVar1;
}


