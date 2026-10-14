/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229644 StatusNote::~StatusNote */

/* StatusNote::~StatusNote() */

StatusNote * __thiscall StatusNote::~StatusNote(StatusNote *this)

{
  *(int *)this = *(int *)(DAT_0022968c + 0x22964e) + 8;
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
  }
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))();
  }
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 4))();
  }
  CafeUIElement::~CafeUIElement((CafeUIElement *)this);
  return this;
}


