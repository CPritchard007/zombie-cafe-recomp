/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb114 CharacterCommandBar::attack */

/* CharacterCommandBar::attack(CharacterCommandBar*, ScreenElement*) */

void CharacterCommandBar::attack(CharacterCommandBar *param_1,ScreenElement *param_2)

{
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 100) + 0x8c) + 0x44) = 4;
  TutorialSystem::triggerEvent
            (*(TutorialSystem **)(*(int *)(param_1 + 0x60) + DAT_000cb134),' ',false);
  return;
}


