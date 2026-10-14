/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb74c GameStateEventRaid3Menu::SoulVisible */

/* GameStateEventRaid3Menu::SoulVisible(bool) */

void GameStateEventRaid3Menu::SoulVisible(bool param_1)

{
  GameStateEventRaid3Menu *this;
  int in_r1;
  
  this = (GameStateEventRaid3Menu *)(uint)param_1;
  if (in_r1 == 0) {
    (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),0);
    (**(code **)(**(int **)(this + 0x3c) + 0x20))(*(int **)(this + 0x3c),0);
    (**(code **)(**(int **)(this + 0x40) + 0x20))(*(int **)(this + 0x40),0);
    (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),0);
  }
  else {
    drawEventRaid3Soul(this);
  }
  return;
}


