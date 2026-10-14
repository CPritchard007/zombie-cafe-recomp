/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ea9c ZombieCafe::checkGetLottery */

/* ZombieCafe::checkGetLottery() */

char ZombieCafe::checkGetLottery(void)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = '\x01';
  pcVar2 = *(char **)(DAT_0023eacc + 0x23eaa4);
  if ((((*pcVar2 == '\0') && (pcVar2[1] == '\0')) && (pcVar2[2] == '\0')) &&
     (((pcVar2[3] == '\0' && (pcVar2[4] == '\0')) && (pcVar2[5] == '\0')))) {
    cVar1 = pcVar2[6];
  }
  return cVar1;
}


