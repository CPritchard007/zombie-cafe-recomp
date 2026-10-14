/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298f4c CapcomApp::tick */

/* CapcomApp::tick(long) */

void __thiscall CapcomApp::tick(CapcomApp *this,long param_1)

{
  GameLoader *this_00;
  
  if (*(long *)this != 0) {
    GameLoader::tick(*(long *)this);
    this_00 = *(GameLoader **)this;
    if (this_00[0x39] != (GameLoader)0x3) {
      return;
    }
    GameLoader::~GameLoader(this_00);
    operator_delete(this_00);
    *(undefined4 *)this = 0;
  }
  (**(code **)(**(int **)(this + 4) + 0x18))(*(int **)(this + 4),param_1);
  return;
}


