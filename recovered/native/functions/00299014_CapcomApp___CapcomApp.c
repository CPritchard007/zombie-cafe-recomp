/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299014 CapcomApp::~CapcomApp */

/* CapcomApp::~CapcomApp() */

CapcomApp * __thiscall CapcomApp::~CapcomApp(CapcomApp *this)

{
  GameLoader *this_00;
  ResourceManager *this_01;
  CapcomGraphics *this_02;
  
  this_00 = *(GameLoader **)this;
  if (this_00 != (GameLoader *)0x0) {
    GameLoader::~GameLoader(this_00);
    operator_delete(this_00);
  }
  (**(code **)(**(int **)(this + 4) + 0x34))();
  (**(code **)(**(int **)(this + 4) + 0x14))();
  CCMarketing_Free(*(undefined4 *)(this + 0x18));
  setUseBackBuffer(SUB41(this,0));
  this_01 = *(ResourceManager **)(this + 0x5c);
  if (this_01 != (ResourceManager *)0x0) {
    ResourceManager::~ResourceManager(this_01);
    operator_delete(this_01);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
  }
  if (*(int **)(this + 4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 4) + 4))();
  }
  this_02 = *(CapcomGraphics **)(this + 0x58);
  if (this_02 != (CapcomGraphics *)0x0) {
    CapcomGraphics::~CapcomGraphics(this_02);
    operator_delete(this_02);
  }
  return this;
}


