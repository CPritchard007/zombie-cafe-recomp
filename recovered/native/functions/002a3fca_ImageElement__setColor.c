/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3fca ImageElement::setColor */

/* ImageElement::setColor(unsigned int) */

void __thiscall ImageElement::setColor(ImageElement *this,uint param_1)

{
  *(uint *)(this + 0x94) = param_1;
  this[0x92] = (ImageElement)('\x01' - (param_1 == 0xffffffff));
  return;
}


