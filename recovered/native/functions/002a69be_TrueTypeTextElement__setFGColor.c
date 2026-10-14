/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a69be TrueTypeTextElement::setFGColor */

/* TrueTypeTextElement::setFGColor(int) */

void __thiscall TrueTypeTextElement::setFGColor(TrueTypeTextElement *this,int param_1)

{
  *(int *)(this + 0x1c) = param_1;
  *(int *)(this + 0x9c) = param_1;
  cache(this);
  return;
}


