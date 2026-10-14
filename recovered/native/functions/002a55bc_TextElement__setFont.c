/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a55bc TextElement::setFont */

/* TextElement::setFont(CapcomFont*) */

void __thiscall TextElement::setFont(TextElement *this,CapcomFont *param_1)

{
  *(CapcomFont **)(this + 0x68) = param_1;
  (**(code **)(*(int *)this + 0x50))();
  return;
}


