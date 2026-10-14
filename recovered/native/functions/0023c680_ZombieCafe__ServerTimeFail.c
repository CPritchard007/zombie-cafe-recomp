/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023c680 ZombieCafe::ServerTimeFail */

/* ZombieCafe::ServerTimeFail() */

void __thiscall ZombieCafe::ServerTimeFail(ZombieCafe *this)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  
  iVar1 = DAT_0023c720;
  L_PrintLog((char *)(DAT_0023c71c + 0x23c690),(char *)(DAT_0023c718 + 0x23c68e));
  pcVar3 = (char *)(iVar1 + 0x23c698);
  L_PrintLog(pcVar3,(char *)(DAT_0023c724 + 0x23c69c));
  if (*(int *)(this + 8) != 0) {
    L_PrintLog(pcVar3,(char *)(DAT_0023c728 + 0x23c6ac));
    if ((*(TutorialSystem **)(this + DAT_0023c72c) != (TutorialSystem *)0x0) &&
       (iVar1 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(this + DAT_0023c72c),'\x16'), iVar1 != 0)) {
      L_PrintLog(pcVar3,(char *)(DAT_0023c730 + 0x23c6c8));
      pcVar2 = *(code **)(**(int **)(this + 8) + 0x2c);
      (*pcVar2)(*(int **)(this + 8),pcVar2,*(undefined4 *)(this + 0x4a8),
                *(undefined4 *)(this + 0x4ac));
      L_PrintLog((char *)(DAT_0023c734 + 0x23c6e4),(char *)(DAT_0023c738 + 0x23c6e6));
    }
  }
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + 0x4ac) = 0;
  L_PrintLog((char *)(DAT_0023c73c + 0x23c6fe),(char *)(DAT_0023c740 + 0x23c700));
  L_ServerTimeFailed(this,0);
  L_PrintLog((char *)(DAT_0023c744 + 0x23c712),(char *)(DAT_0023c748 + 0x23c714));
  return;
}


