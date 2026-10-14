/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a58f8 TextElement::TextElement */

/* TextElement::TextElement(unsigned char, bool) */

TextElement * __thiscall TextElement::TextElement(TextElement *this,uchar param_1,bool param_2)

{
  ScreenElement::ScreenElement((ScreenElement *)this,(ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a5970 + 0x2a5910) + 8;
  String::String((String *)(this + 0x60));
  String::operator=((String *)(this + 0x60),0);
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x7c] = (TextElement)param_1;
  this[0x7d] = (TextElement)0x1;
  this[0x7e] = (TextElement)0x1;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  this[0x85] = (TextElement)0x0;
  this[0x84] = (TextElement)param_2;
  this[0x7f] = (TextElement)0x9;
  *(undefined4 *)(this + 0x1c) = 0xff000000;
  return this;
}


