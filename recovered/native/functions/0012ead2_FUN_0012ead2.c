/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012ead2 FUN_0012ead2 */

void FUN_0012ead2(void)

{
  int iVar1;
  int iVar2;
  int in_r3;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = DAT_0012ebc0;
  iVar2 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(in_r3 + DAT_0012ebc0),'Z');
  if (iVar2 == 0) {
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar1),'[',false);
  }
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


