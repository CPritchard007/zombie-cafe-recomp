/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2e88 BitmapTextElement::BitmapTextElement */

/* BitmapTextElement::BitmapTextElement(String, void*, int, unsigned int, bool, bool, unsigned char,
   unsigned char, bool) */

BitmapTextElement * __thiscall
BitmapTextElement::BitmapTextElement
          (BitmapTextElement *this,String *param_2,undefined4 param_3,int param_4,undefined4 param_5
          ,BitmapTextElement param_6,BitmapTextElement param_7,BitmapTextElement param_8,
          uchar param_9,bool param_10)

{
  undefined4 uVar1;
  String aSStack_20 [12];
  
  TextElement::TextElement((TextElement *)this,param_9,param_10);
  *(int *)this = *(int *)(DAT_002a2f4c + 0x2a2eba) + 8;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined4 *)(this + 0xa4) = 0x3f800000;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  this[0xb0] = (BitmapTextElement)0x0;
  this[0x15] = param_8;
  this[0x7d] = param_6;
  this[0x7e] = param_7;
  *(undefined4 *)(this + 0x6c) = param_3;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x94) = 1;
  *(undefined4 *)(this + 0x90) = param_5;
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


