/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5a3c TextElement::TextElement */

/* TextElement::TextElement(String, CapcomFont*, int, bool, bool, long, int, int, unsigned char,
   unsigned char, bool) */

TextElement * __thiscall
TextElement::TextElement
          (TextElement *this,String *param_2,undefined4 param_3,undefined4 param_4,
          TextElement param_5,TextElement param_6,int param_7,int param_8,int param_9,uchar param_10
          ,TextElement param_11,TextElement param_12)

{
  String aSStack_20 [12];
  
  ScreenElement::ScreenElement
            ((ScreenElement *)this,param_7 >> 0x10,(int)(short)param_7,param_8,param_9,param_10,
             (ScreenElement *)0x0);
  *(int *)this = *(int *)(DAT_002a5b0c + 0x2a5a88) + 8;
  String::String((String *)(this + 0x60));
  *(undefined4 *)(this + 0x68) = param_3;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x7c] = param_11;
  this[0x7d] = param_5;
  this[0x7e] = param_6;
  this[0x84] = param_12;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  this[0x85] = (TextElement)0x0;
  this[0x7f] = (TextElement)0x9;
  *(undefined4 *)(this + 0x1c) = param_4;
  String::String(aSStack_20,param_2);
  setText(this,aSStack_20);
  String::~String(aSStack_20);
  return this;
}


