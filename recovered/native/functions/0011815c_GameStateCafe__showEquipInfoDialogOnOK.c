/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011815c GameStateCafe::showEquipInfoDialogOnOK */

/* GameStateCafe::showEquipInfoDialogOnOK(GameStateCafe*) */

void GameStateCafe::showEquipInfoDialogOnOK(GameStateCafe *param_1)

{
  GameStateCafe *pGVar1;
  
  pGVar1 = param_1 + 0xbc;
  L_PrintLog((char *)(DAT_001181bc + 0x11816c),(char *)(DAT_001181b8 + 0x11816a));
  if ((*(int *)pGVar1 != 0) && (1 < *(byte *)(*(int *)pGVar1 + 0x8c) - 1)) {
    CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0xac));
    ScreenElement::setOrder(*(ScreenElement **)pGVar1,0x10);
    Storage::open(*(Storage **)pGVar1,'\x06','\x01');
    ScreenElement::setOrder(*(ScreenElement **)pGVar1,(int)**(char **)(DAT_001181c0 + 0x1181a4));
  }
  L_PrintLog((char *)(DAT_001181c4 + 0x1181b2),(char *)(DAT_001181c8 + 0x1181b4));
  return;
}


