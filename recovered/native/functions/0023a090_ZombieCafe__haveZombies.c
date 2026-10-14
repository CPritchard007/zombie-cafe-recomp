/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a090 ZombieCafe::haveZombies */

/* ZombieCafe::haveZombies() */

undefined4 __thiscall ZombieCafe::haveZombies(ZombieCafe *this)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = (char *)(DAT_0023a0cc + 0x23a09c);
  while( true ) {
    iVar1 = DAT_0023a0d4;
    if (*(int *)(this + DAT_0023a0d4 + 4) + 1 <= iVar3) {
      return 0;
    }
    L_PrintLog(pcVar2,(char *)(DAT_0023a0d0 + 0x23a0a4));
    if (*(char *)(*(int *)(iVar3 * 4 + *(int *)(this + iVar1 + 8)) + 0x44) != '\x06') break;
    iVar3 = iVar3 + 1;
  }
  return 1;
}


