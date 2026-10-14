/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a69d0 TrueTypeTextElement::TrueTypeTextElement */

/* TrueTypeTextElement::TrueTypeTextElement(String, CapcomTrueTypeFont*, int, bool, bool, long, int,
   int, unsigned char, bool) */

TrueTypeTextElement * __thiscall
TrueTypeTextElement::TrueTypeTextElement
          (TrueTypeTextElement *this,String *param_2,undefined4 param_3,int param_4,
          TrueTypeTextElement param_5,TrueTypeTextElement param_6,int param_7,undefined4 param_8,
          undefined4 param_9,TrueTypeTextElement param_10,uchar param_11)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  String aSStack_20 [12];
  
  TextElement::TextElement((TextElement *)this,param_11,false);
  *(int *)this = *(int *)(DAT_002a6ac0 + 0x2a6a02) + 8;
  Vector<CFTexture*>::Vector((Vector<CFTexture*> *)(this + 0x8c));
  puVar1 = *(undefined4 **)(DAT_002a6ac4 + 0x2a6a14);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)(this + 0x98) = *puVar1;
  *(undefined4 *)(this + 0x9c) = uVar2;
  *(undefined4 *)(this + 0xa0) = uVar3;
  uVar2 = puVar1[4];
  uVar3 = puVar1[5];
  *(undefined4 *)(this + 0xa4) = puVar1[3];
  *(undefined4 *)(this + 0xa8) = uVar2;
  *(undefined4 *)(this + 0xac) = uVar3;
  uVar2 = puVar1[7];
  uVar3 = puVar1[8];
  *(undefined4 *)(this + 0xb0) = puVar1[6];
  *(undefined4 *)(this + 0xb4) = uVar2;
  *(undefined4 *)(this + 0xb8) = uVar3;
  uVar2 = puVar1[10];
  *(undefined4 *)(this + 0xbc) = puVar1[9];
  *(undefined4 *)(this + 0xc0) = uVar2;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 200) = 0x3f800000;
  *(undefined4 *)(this + 0xd4) = 0x3f800000;
  this[0xe0] = (TrueTypeTextElement)0x0;
  *(int *)(this + 4) = param_7 >> 0x10;
  *(int *)(this + 8) = (int)(short)param_7;
  *(undefined4 *)(this + 0xc) = param_8;
  *(undefined4 *)(this + 0x10) = param_9;
  *(undefined4 *)(this + 0x70) = 0;
  this[0x15] = param_10;
  *(undefined4 *)(this + 0x68) = param_3;
  this[0x7d] = param_5;
  this[0x7e] = param_6;
  setFGColor(this,param_4);
  String::String(aSStack_20,param_2);
  TextElement::setText((TextElement *)this,aSStack_20);
  String::~String(aSStack_20);
  this[0xc4] = (TrueTypeTextElement)0x1;
  return this;
}


