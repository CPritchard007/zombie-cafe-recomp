/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298fc6 CapcomApp::paint */

/* CapcomApp::paint() */

void __thiscall CapcomApp::paint(CapcomApp *this)

{
  glPushMatrix();
  if (*(GameLoader **)this == (GameLoader *)0x0) {
    (**(code **)(**(int **)(this + 4) + 0x1c))();
  }
  else {
    GameLoader::paint(*(GameLoader **)this,*(CapcomGraphics **)(this + 0x58));
  }
  CapcomGraphics::finishBatch();
  glPopMatrix();
  return;
}


