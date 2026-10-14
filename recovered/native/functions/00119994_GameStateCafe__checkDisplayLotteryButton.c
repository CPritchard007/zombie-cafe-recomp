/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119994 GameStateCafe::checkDisplayLotteryButton */

/* GameStateCafe::checkDisplayLotteryButton() */

bool __thiscall GameStateCafe::checkDisplayLotteryButton(GameStateCafe *this)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(DAT_001199e4 + 0x1199a0);
  L_PrintLog(pcVar2,(char *)(DAT_001199e8 + 0x1199a2));
  iVar1 = checkCanLotteryButton(this);
  if (iVar1 == 0) {
    L_PrintLog(pcVar2,(char *)(DAT_001199f0 + 0x1199d4));
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
  }
  else {
    L_PrintLog(pcVar2,(char *)(DAT_001199ec + 0x1199ba));
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
  }
  return iVar1 != 0;
}


