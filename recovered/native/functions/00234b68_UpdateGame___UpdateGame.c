/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00234b68 UpdateGame::~UpdateGame */

/* UpdateGame::~UpdateGame() */

UpdateGame * __thiscall UpdateGame::~UpdateGame(UpdateGame *this)

{
  *(int *)this = *(int *)(DAT_00234b90 + 0x234b72) + 8;
  CapcomGame::freeData((CapcomGame *)this);
  CapcomGame::~CapcomGame((CapcomGame *)this);
  return this;
}


