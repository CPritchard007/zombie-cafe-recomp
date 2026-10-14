/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00160bc4 GameStateMainMenu::resume */

/* GameStateMainMenu::resume() */

void __thiscall GameStateMainMenu::resume(GameStateMainMenu *this)

{
  int iVar1;
  
  L_PrintLog((char *)(DAT_00160bf0 + 0x160bd2),(char *)(DAT_00160bec + 0x160bd0));
  iVar1 = CCServer::GetNickName(*(void **)(*(int *)(this + 0xc) + DAT_00160bf4));
  **(char **)(DAT_00160bf8 + 0x160be8) = '\x01' - (iVar1 == 0);
  return;
}


