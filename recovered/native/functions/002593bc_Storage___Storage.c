/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002593bc Storage::~Storage */

/* Storage::~Storage() */

Storage * __thiscall Storage::~Storage(Storage *this)

{
  int iVar1;
  CapcomTrueTypeFont *this_00;
  
  *(int *)this = *(int *)(DAT_00259490 + 0x2593c6) + 8;
  unsetTab();
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
  }
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc0) + 4))();
  }
  iVar1 = 0;
  do {
    if (*(int **)(this + iVar1 + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1 + 0x98) + 4))();
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x1c);
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb4) + 4))();
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
  }
  if (*(int **)(this + 200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 200) + 4))();
  }
  this_00 = *(CapcomTrueTypeFont **)(this + 0x60);
  if (this_00 != (CapcomTrueTypeFont *)0x0) {
    CapcomTrueTypeFont::~CapcomTrueTypeFont(this_00);
    operator_delete(this_00);
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


