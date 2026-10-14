/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e958 ZombieCafe::frequentFryerLevelAdd */

/* ZombieCafe::frequentFryerLevelAdd() */

void __thiscall ZombieCafe::frequentFryerLevelAdd(ZombieCafe *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short extraout_r1;
  int *piVar5;
  char *pcVar6;
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_0023ea10 + 0x23e964);
  pcVar6 = (char *)(DAT_0023ea14 + 0x23e968);
  local_1c = *piVar5;
  L_PrintLog(pcVar6,(char *)(DAT_0023ea18 + 0x23e970));
  iVar4 = isEventFryerFlag();
  iVar3 = DAT_0023ea28;
  iVar2 = DAT_0023ea24;
  if (iVar4 == 0) {
    if ((*(short *)(this + DAT_0023ea24) == 0) &&
       (__aeabi_idivmod((int)*(short *)(this + DAT_0023ea28),10), extraout_r1 == 0)) {
      *(undefined2 *)(this + iVar2) = 1;
    }
    iVar2 = DAT_0023ea2c;
    sVar1 = *(short *)(this + iVar3);
    *(short *)(this + iVar3) = sVar1 + 1;
    if (iVar2 < (short)(sVar1 + 1)) {
      *(undefined2 *)(this + DAT_0023ea28) = 1;
    }
    snprintf(acStack_11c,0x100,(char *)(DAT_0023ea30 + 0x23e9e4),(int)*(short *)(this + iVar3));
    pcVar6 = (char *)(DAT_0023ea34 + 0x23e9f0);
  }
  else {
    sVar1 = *(short *)(this + DAT_0023ea1c);
    *(short *)(this + DAT_0023ea1c) = sVar1 + 1;
    snprintf(acStack_11c,0x100,(char *)(DAT_0023ea20 + 0x23e99e),(int)(short)(sVar1 + 1));
  }
  L_PrintLog(pcVar6,acStack_11c);
  L_PrintLog((char *)(DAT_0023ea38 + 0x23e9fc),(char *)(DAT_0023ea3c + 0x23e9fe));
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


