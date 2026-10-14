/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a26b2 BitmapTextElement::setText */

/* BitmapTextElement::setText(String) */

void __thiscall BitmapTextElement::setText(BitmapTextElement *this,String *param_2)

{
  int iVar1;
  undefined4 uVar2;
  String aSStack_28 [8];
  StringUtil aSStack_20 [8];
  String aSStack_18 [8];
  
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    free(*(void **)(this + 0xb8));
  }
  String::String(aSStack_28,param_2);
  iVar1 = operator==(aSStack_28,0);
  String::~String(aSStack_28);
  if (iVar1 == 0) {
    StringUtil::getEncodingString(aSStack_20,'\x01');
    uVar2 = String::getBytes(param_2,aSStack_20,0,0,0);
    *(undefined4 *)(this + 0xb8) = uVar2;
    String::~String((String *)aSStack_20);
  }
  else {
    *(undefined4 *)(this + 0xb8) = 0;
  }
  String::String(aSStack_18,param_2);
  TextElement::setText((TextElement *)this,aSStack_18);
  String::~String(aSStack_18);
  return;
}


