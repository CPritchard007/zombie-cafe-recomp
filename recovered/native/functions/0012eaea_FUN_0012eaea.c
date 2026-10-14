/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012eaea FUN_0012eaea */

void FUN_0012eaea(void)

{
  int unaff_r5;
  int unaff_r6;
  
  CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0xac));
  if (*(char *)(unaff_r6 + 0xc6) == '\0') {
    FUN_0012eca0();
    return;
  }
  CharacterCommandBar::setInfoButtonNewIndicator(SUB41(*(undefined4 *)(unaff_r5 + 0xac),0));
  *(char *)(unaff_r6 + 0xc6) = '\0';
  FUN_0012eca0();
  return;
}


