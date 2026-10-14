/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e626 GameLoader::~GameLoader */

/* GameLoader::~GameLoader() */

GameLoader * __thiscall GameLoader::~GameLoader(GameLoader *this)

{
  if (*(int **)(this + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc) + 4))();
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
    *(undefined4 *)(this + 0x18) = 0;
  }
  return this;
}


