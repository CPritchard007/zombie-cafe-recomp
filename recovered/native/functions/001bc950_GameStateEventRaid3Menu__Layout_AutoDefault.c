/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bc950 GameStateEventRaid3Menu::Layout_AutoDefault */

/* GameStateEventRaid3Menu::Layout_AutoDefault() */

void __thiscall GameStateEventRaid3Menu::Layout_AutoDefault(GameStateEventRaid3Menu *this)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = **(int **)(DAT_001bc9fc + 0x1bc95a);
  if (iVar2 == 0) {
    pcVar3 = (char *)(DAT_001bca00 + 0x1bc968);
    L_PrintLog(pcVar3,(char *)(DAT_001bca04 + 0x1bc96a));
    Layout_Default_EventBefore(this);
    Layout_GetItemButton(this);
    pcVar1 = (char *)(DAT_001bca08 + 0x1bc980);
  }
  else if (iVar2 == 2) {
    pcVar3 = (char *)(DAT_001bca0c + 0x1bc98c);
    L_PrintLog(pcVar3,(char *)(DAT_001bca10 + 0x1bc98e));
    Layout_Default_EventFinish(this);
    pcVar1 = (char *)(DAT_001bca14 + 0x1bc99e);
  }
  else if (iVar2 == 3) {
    pcVar3 = (char *)(DAT_001bca18 + 0x1bc9aa);
    L_PrintLog(pcVar3,(char *)(DAT_001bca1c + 0x1bc9ac));
    Layout_Default_EventClose(this);
    L_PrintLog(pcVar3,(char *)(DAT_001bca20 + 0x1bc9be));
    Layout_GetItemButton(this);
    pcVar1 = (char *)(DAT_001bca24 + 0x1bc9cc);
  }
  else {
    pcVar3 = (char *)(DAT_001bca28 + 0x1bc9d4);
    L_PrintLog(pcVar3,(char *)(DAT_001bca2c + 0x1bc9d6));
    Layout_Default(this);
    L_PrintLog(pcVar3,(char *)(DAT_001bca30 + 0x1bc9e8));
    Layout_GetItemButton(this);
    pcVar1 = (char *)(DAT_001bca34 + 0x1bc9f6);
  }
  L_PrintLog(pcVar3,pcVar1);
  return;
}


