/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011b0b8 GameStateCafe::OpenStorageEquip */

/* GameStateCafe::OpenStorageEquip(int) */

void GameStateCafe::OpenStorageEquip(int param_1)

{
  ScreenElement *pSVar1;
  undefined4 *puVar2;
  
  L_PrintLog((char *)(DAT_0011b120 + 0x11b0c6),(char *)(DAT_0011b11c + 0x11b0c4));
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined4 *)(param_1 + 0xbc);
    pSVar1 = (ScreenElement *)*puVar2;
    if ((pSVar1 != (ScreenElement *)0x0) && (1 < (byte)pSVar1[0x8c] - 1)) {
      ScreenElement::setOrder(pSVar1,0x10);
      Storage::open((Storage *)*puVar2,'\x06','\x01');
      ScreenElement::setOrder((ScreenElement *)*puVar2,(int)**(char **)(DAT_0011b124 + 0x11b0fe));
      CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0xac));
    }
    L_PrintLog((char *)(DAT_0011b128 + 0x11b114),(char *)(DAT_0011b12c + 0x11b116));
  }
  return;
}


