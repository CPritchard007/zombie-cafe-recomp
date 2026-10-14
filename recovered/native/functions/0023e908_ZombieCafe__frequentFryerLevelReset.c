/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e908 ZombieCafe::frequentFryerLevelReset */

/* ZombieCafe::frequentFryerLevelReset() */

void __thiscall ZombieCafe::frequentFryerLevelReset(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  
  L_PrintLog((char *)(DAT_0023e944 + 0x23e916),(char *)(DAT_0023e940 + 0x23e914));
  iVar2 = isEventFryerFlag();
  iVar1 = DAT_0023e948;
  if (iVar2 == 0) {
    *(undefined2 *)(this + DAT_0023e94c) = 0;
    *(undefined2 *)(this + iVar1) = 0;
  }
  else {
    *(undefined2 *)(this + DAT_0023e948) = 0;
  }
  L_PrintLog((char *)(DAT_0023e950 + 0x23e938),(char *)(DAT_0023e954 + 0x23e93a));
  return;
}


