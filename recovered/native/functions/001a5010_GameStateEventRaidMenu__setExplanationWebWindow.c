/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a5010 GameStateEventRaidMenu::setExplanationWebWindow */

/* GameStateEventRaidMenu::setExplanationWebWindow() */

void __thiscall GameStateEventRaidMenu::setExplanationWebWindow(GameStateEventRaidMenu *this)

{
  int iVar1;
  char *__format;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = DAT_001a517c;
  piVar3 = *(int **)(DAT_001a5178 + 0x1a501a);
  piVar4 = (int *)(&stack0xfffffff4 + DAT_001a517c);
  *(int *)(&stack0x00000200 + DAT_001a517c) = *piVar3;
  iVar2 = *(int *)(this + 0xa8);
  if (iVar2 == 1) {
    __format = (char *)(DAT_001a5180 + 0x1a5034);
  }
  else if (iVar2 == 2) {
    __format = (char *)(DAT_001a5184 + 0x1a503e);
  }
  else if (iVar2 == 3) {
    __format = (char *)(DAT_001a5188 + 0x1a5048);
  }
  else if (iVar2 == 4) {
    __format = (char *)(DAT_001a518c + 0x1a5052);
  }
  else if (iVar2 == 5) {
    __format = (char *)(DAT_001a5190 + 0x1a505c);
  }
  else if (iVar2 == 6) {
    __format = (char *)(DAT_001a5194 + 0x1a5066);
  }
  else if (iVar2 == 7) {
    __format = (char *)(DAT_001a5198 + 0x1a5070);
  }
  else if (iVar2 == 8) {
    __format = (char *)(DAT_001a519c + 0x1a507a);
  }
  else if (iVar2 == 9) {
    __format = (char *)(DAT_001a51a0 + 0x1a5086);
  }
  else if (iVar2 == 10) {
    __format = (char *)(DAT_001a51a4 + 0x1a5090);
  }
  else if (iVar2 == 0xb) {
    __format = (char *)(DAT_001a51a8 + 0x1a509a);
  }
  else if (iVar2 == 0xc) {
    __format = (char *)(DAT_001a51ac + 0x1a50a4);
  }
  else if (iVar2 == 0xd) {
    __format = (char *)(DAT_001a51b0 + 0x1a50b0);
  }
  else if (iVar2 == 0xe) {
    __format = (char *)(DAT_001a51b4 + 0x1a50ba);
  }
  else if (iVar2 == 0xf) {
    __format = (char *)(DAT_001a51b8 + 0x1a50c4);
  }
  else if (iVar2 == 0x10) {
    __format = (char *)(DAT_001a51bc + 0x1a50ce);
  }
  else if (iVar2 == 0x11) {
    __format = (char *)(DAT_001a51c0 + 0x1a50da);
  }
  else if (iVar2 == 0x12) {
    __format = (char *)(DAT_001a51c4 + 0x1a50e4);
  }
  else if (iVar2 == 0x13) {
    __format = (char *)(DAT_001a51c8 + 0x1a50ee);
  }
  else if (iVar2 == 0x14) {
    __format = (char *)(DAT_001a51cc + 0x1a50f8);
  }
  else if (iVar2 == 0x15) {
    __format = (char *)(DAT_001a51d0 + 0x1a5104);
  }
  else if (iVar2 == 0x16) {
    __format = (char *)(DAT_001a51d4 + 0x1a510e);
  }
  else if (iVar2 == 0x17) {
    __format = (char *)(DAT_001a51d8 + 0x1a5118);
  }
  else if (iVar2 == 0x18) {
    __format = (char *)(DAT_001a51dc + 0x1a5122);
  }
  else if (iVar2 == 0x19) {
    __format = (char *)(DAT_001a51e0 + 0x1a512c);
  }
  else if (iVar2 == 0x1a) {
    __format = (char *)(DAT_001a51e4 + 0x1a5136);
  }
  else if (iVar2 == 0x1b) {
    __format = (char *)(DAT_001a51e8 + 0x1a5140);
  }
  else {
    __format = (char *)(DAT_001a51ec + 0x1a5146);
  }
  snprintf(&stack0x00000000 + DAT_001a517c,0x200,__format);
  this[0xb8] = (GameStateEventRaidMenu)0x1;
  *piVar4 = (int)(&stack0x00000000 + iVar1);
  javaShowWebViewRanking(10,0x14,0x50,0x50);
  if (*(int *)(&stack0x00000200 + iVar1) == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


