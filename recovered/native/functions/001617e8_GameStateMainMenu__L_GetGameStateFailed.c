/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001617e8 GameStateMainMenu::L_GetGameStateFailed */

/* GameStateMainMenu::L_GetGameStateFailed(void*, ccServerFailureCode) */

void GameStateMainMenu::L_GetGameStateFailed(undefined4 param_1,undefined4 param_2)

{
  CEvent *this;
  int *piVar1;
  char acStack_8c [128];
  int local_c;
  
  piVar1 = *(int **)(DAT_00161834 + 0x1617f4);
  local_c = *piVar1;
  sprintf(acStack_8c,(char *)(DAT_00161838 + 0x1617fa),param_2);
  L_PrintLog((char *)(DAT_0016183c + 0x16180a),acStack_8c);
  this = (CEvent *)(DAT_00161844 + 0x16188e);
  **(undefined1 **)(DAT_00161840 + 0x161816) = 0;
  CEvent::set(this,1);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


