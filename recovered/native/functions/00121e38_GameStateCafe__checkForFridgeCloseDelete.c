/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00121e38 GameStateCafe::checkForFridgeCloseDelete */

/* GameStateCafe::checkForFridgeCloseDelete() */

void __thiscall GameStateCafe::checkForFridgeCloseDelete(GameStateCafe *this)

{
  GameStateCafe *pGVar1;
  
  pGVar1 = this + 0x9c;
  if (*(short *)(*(int *)pGVar1 + 0xce) != DAT_00121e70) {
    Vector<FoodStack*>::removeElementAt
              ((Vector<FoodStack*> *)(*(int *)(this + 0xc) + DAT_00121e74),
               (int)*(short *)(*(int *)pGVar1 + 0xce));
    *(undefined1 *)(*(int *)pGVar1 + 0x100) = 0;
    FridgeDialog::refreshPage(*(FridgeDialog **)pGVar1);
    FridgeDialog::show(*(FridgeDialog **)pGVar1,false);
  }
  return;
}


