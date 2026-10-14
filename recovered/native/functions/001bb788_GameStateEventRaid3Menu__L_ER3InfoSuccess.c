/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb788 GameStateEventRaid3Menu::L_ER3InfoSuccess */

/* GameStateEventRaid3Menu::L_ER3InfoSuccess(void*, unsigned char const*, unsigned int) */

void GameStateEventRaid3Menu::L_ER3InfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ZombieCafe *this;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(DAT_001bb830 + 0x1bb794);
  L_PrintLog(pcVar5,(char *)(DAT_001bb834 + 0x1bb798));
  iVar3 = CapcomApp::getInstance();
  iVar6 = DAT_001bb83c;
  this = *(ZombieCafe **)(iVar3 + 4);
  if (*(void **)(this + 8) == param_1) {
    javaER3Parse(param_2);
    iVar6 = *(int *)(iVar6 + 0x1bb7bc);
    if (*(int *)(this + 0x228) < *(int *)(iVar6 + 0x98)) {
      *(undefined4 *)(this + 0x234) = 0;
      *(undefined2 *)(this + DAT_001bb840) = 0;
      uVar1 = DAT_001bb82c;
      *(undefined4 *)(this + 0x240) = DAT_001bb828;
      *(undefined4 *)(this + 0x244) = uVar1;
      *(undefined4 *)(this + 0x238) = 1;
      ZombieCafe::initEventRaid3_attackPoint(this);
    }
    if (*(int *)(this + 0x238) < 2) {
      *(undefined4 *)(iVar6 + 0xa0) = 0;
      *(undefined4 *)(iVar6 + 0x9c) = 0;
    }
    iVar2 = DAT_001bb848;
    iVar3 = DAT_001bb844;
    *(undefined4 *)(this + 0x228) = *(undefined4 *)(iVar6 + 0x98);
    *(undefined4 *)((int)param_1 + 0xdc) = 2;
    pcVar5 = (char *)(iVar3 + 0x1bb820);
    pcVar4 = (char *)(iVar2 + 0x1bb822);
  }
  else {
    pcVar4 = (char *)(DAT_001bb838 + 0x1bb7b0);
  }
  L_PrintLog(pcVar5,pcVar4);
  return;
}


