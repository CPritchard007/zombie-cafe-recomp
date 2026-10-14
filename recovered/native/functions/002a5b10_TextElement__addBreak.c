/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5b10 TextElement::addBreak */

/* TextElement::addBreak(int) */

void __thiscall TextElement::addBreak(TextElement *this,int param_1)

{
  Vector<int> *this_00;
  
  if (*(int *)(this + 0x70) == 0) {
    this_00 = (Vector<int> *)operator_new(0xc);
    Vector<int>::Vector(this_00);
    *(Vector<int> **)(this + 0x70) = this_00;
  }
  Vector<int>::addElement(*(Vector<int> **)(this + 0x70),param_1);
  return;
}


