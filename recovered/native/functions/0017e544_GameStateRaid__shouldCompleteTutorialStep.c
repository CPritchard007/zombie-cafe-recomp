/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e544 GameStateRaid::shouldCompleteTutorialStep */

/* GameStateRaid::shouldCompleteTutorialStep(GameStateRaid*, unsigned char) */

undefined4 GameStateRaid::shouldCompleteTutorialStep(GameStateRaid *param_1,uchar param_2)

{
  if (param_2 == ' ') {
    return 0;
  }
  if (param_2 < 0x21) {
    if (param_2 == '\x18') {
      return 0;
    }
    if (param_2 < 0x19) {
      if (param_2 == '\x0f') {
        return 0;
      }
      return 1;
    }
    if (param_2 == '\x1a') {
      return 0;
    }
    if (param_2 == '\x1e') {
      return 0;
    }
    return 1;
  }
  if (param_2 != '(') {
    if (param_2 < 0x29) {
      if (param_2 == '&') {
        if (-1 < *(int *)(param_1 + 0xb0)) {
          TutorialArrow::attach
                    (*(TutorialArrow **)(param_1 + 0x150),
                     (CafeObject *)**(undefined4 **)(param_1 + 0xb4),false,0);
          return 1;
        }
        return 0;
      }
      if (param_2 != '\'') {
        return 1;
      }
      TutorialArrow::attach
                (*(TutorialArrow **)(param_1 + 0x150),*(ScreenElement **)(param_1 + 0x154),false,0);
      ScreenElement::setOrder
                (*(ScreenElement **)(param_1 + 0x150),
                 (int)((*(byte *)(*(int *)(param_1 + 0x13c) + 0x4c) + 1) * 0x1000000) >> 0x18);
      return 1;
    }
    if (param_2 == '+') {
      param_1[0x38] = (GameStateRaid)0x1;
      ZombieCafe::addToxin(*(ZombieCafe **)(param_1 + 0xc),1,false);
      *(CafeObject **)(param_1 + 0x114) = *(CafeObject **)(param_1 + 0x74);
      Cafe::select(*(Cafe **)(param_1 + 0x78),*(CafeObject **)(param_1 + 0x74));
      (**(code **)(**(int **)(param_1 + 0x140) + 0x20))(*(int **)(param_1 + 0x140),0);
      CharacterCommandBar::setCharacter
                (*(CharacterCommandBar **)(param_1 + 0x13c),*(CharacterInstance **)(param_1 + 0x74))
      ;
      CharacterCommandBar::open(*(CharacterCommandBar **)(param_1 + 0x13c));
      TutorialArrow::attach
                (*(TutorialArrow **)(param_1 + 0x150),*(ScreenElement **)(param_1 + 0x144),false,0);
      ScreenElement::setOrder
                (*(ScreenElement **)(param_1 + 0x150),
                 (int)((*(byte *)(*(int *)(param_1 + 0x13c) + 0x4c) + 1) * 0x1000000) >> 0x18);
      return 1;
    }
    if (param_2 != ':') {
      return 1;
    }
    param_1[0x38] = (GameStateRaid)0x0;
    CRAMHoover::beginTrackEvent(*(char **)(*(int *)(param_1 + 0xc) + 0x840));
    ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(param_1 + 0xc));
    CRAMHoover::endTrackEvent();
  }
  TutorialArrow::detach(*(TutorialArrow **)(param_1 + 0x150));
  return 1;
}


