/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5612 TextElement::setSize */

/* TextElement::setSize(int, int) */

void __thiscall TextElement::setSize(TextElement *this,int param_1,int param_2)

{
  ScreenElement::setSize((ScreenElement *)this,param_1,param_2);
  (**(code **)(*(int *)this + 0x50))(this);
  return;
}


