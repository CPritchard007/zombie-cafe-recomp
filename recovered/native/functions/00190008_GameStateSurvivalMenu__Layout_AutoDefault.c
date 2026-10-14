/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00190008 GameStateSurvivalMenu::Layout_AutoDefault */

/* GameStateSurvivalMenu::Layout_AutoDefault() */

void __thiscall GameStateSurvivalMenu::Layout_AutoDefault(GameStateSurvivalMenu *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x54);
  if (iVar1 == 0) {
    Layout_Default_EventBefore(this);
  }
  else {
    if (iVar1 == 2) {
      Layout_Default_EventFinish(this);
      return;
    }
    if (iVar1 == 3) {
      Layout_Default_EventClose(this);
    }
    else {
      Layout_Default(this);
    }
  }
  Layout_GetItemButton(this);
  return;
}


