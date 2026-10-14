/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2f50 BitmapTextElement::BitmapTextElement */

/* BitmapTextElement::BitmapTextElement(String, void*, int, bool, bool, long, int, int, unsigned
   char, unsigned char, bool) */

BitmapTextElement * __thiscall
BitmapTextElement::BitmapTextElement
          (BitmapTextElement *this,String *param_2,undefined4 param_3,int param_4,
          BitmapTextElement param_5,BitmapTextElement param_6,int param_7,undefined4 param_8,
          undefined4 param_9,BitmapTextElement param_10,uchar param_11,bool param_12)

{
  undefined4 uVar1;
  String aSStack_20 [12];
  
  TextElement::TextElement((TextElement *)this,param_11,param_12);
  *(int *)this = *(int *)(DAT_002a302c + 0x2a2f84) + 8;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined4 *)(this + 0xa4) = 0x3f800000;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  this[0xb0] = (BitmapTextElement)0x0;
  *(int *)(this + 4) = param_7 >> 0x10;
  *(undefined4 *)(this + 0xc) = param_8;
  *(int *)(this + 8) = (int)(short)param_7;
  *(undefined4 *)(this + 0x6c) = param_3;
  *(undefined4 *)(this + 0x10) = param_9;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x15] = param_10;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x7d] = param_5;
  this[0x7e] = param_6;
  *(undefined4 *)(this + 0x94) = 0;
  setFGColor(this,param_4);
  String::operator=((String *)(this + 0x60),0);
  *(undefined4 *)(this + 0xb8) = 0;
  String::String(aSStack_20,param_2);
  setText(this,aSStack_20);
  String::~String(aSStack_20);
  uVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0xb4) = uVar1;
  return this;
}


