/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016f734 GameStateMarketingIntro::~GameStateMarketingIntro */

/* GameStateMarketingIntro::~GameStateMarketingIntro() */

GameStateMarketingIntro * __thiscall
GameStateMarketingIntro::~GameStateMarketingIntro(GameStateMarketingIntro *this)

{
  *(int *)this = *(int *)(DAT_0016f74c + 0x16f73e) + 8;
  operator_delete(this);
  return this;
}


