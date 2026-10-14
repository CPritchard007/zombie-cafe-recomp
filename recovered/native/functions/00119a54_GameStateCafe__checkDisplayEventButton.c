/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119a54 GameStateCafe::checkDisplayEventButton */

/* GameStateCafe::checkDisplayEventButton() */

undefined4 __thiscall GameStateCafe::checkDisplayEventButton(GameStateCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar3 = (char *)(DAT_00119b1c + 0x119a60);
  puVar4 = (undefined4 *)(DAT_00119b24 + 0x119a68);
  L_PrintLog(pcVar3,(char *)(DAT_00119b20 + 0x119a64));
  pcVar5 = (char *)*puVar4;
  if (*pcVar5 == '\0') {
    L_PrintLog(pcVar3,(char *)(DAT_00119b28 + 0x119a7a));
  }
  iVar1 = ZombieCafe::checkEventRaidTime();
  if (iVar1 == 0) {
    L_PrintLog((char *)(DAT_00119b2c + 0x119a8e),(char *)(DAT_00119b30 + 0x119a90));
  }
  if ((*(int *)(*(int *)(this + 0xc) + 0x680) < 8) ||
     ((((iVar1 = ZombieCafe::isWeekRaidCafe(), iVar1 == 0 ||
        (iVar1 = ZombieCafe::checkWeekRaidTime(), iVar1 == 0)) &&
       ((*pcVar5 == '\0' || (iVar1 = ZombieCafe::checkEventRaidTime(), iVar1 == 0)))) &&
      (((**(char **)(DAT_00119b34 + 0x119ac6) == '\0' ||
        (iVar1 = ZombieCafe::checkEventRaid2Time(), iVar1 == 0)) &&
       (**(char **)(DAT_00119b38 + 0x119adc) == '\0')))))) {
    L_PrintLog((char *)(DAT_00119b3c + 0x119aec),(char *)(DAT_00119b40 + 0x119aee));
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
    uVar2 = 0;
  }
  else {
    L_PrintLog((char *)(DAT_00119b44 + 0x119b08),(char *)(DAT_00119b48 + 0x119b0a));
    HudElement::setButtonAvailability(*(int *)(this + 200),true);
    uVar2 = 1;
  }
  return uVar2;
}


