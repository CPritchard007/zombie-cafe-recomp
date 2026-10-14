/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7c50 FoodStack::FoodStack */

/* FoodStack::FoodStack(unsigned char, int, unsigned char, String) */

FoodStack * __thiscall
FoodStack::FoodStack
          (FoodStack *this,undefined2 param_2_00,undefined4 param_2,FoodStack param_3,
          String *param_5)

{
  String aSStack_20 [12];
  
  String::String((String *)(this + 0xc));
  String::String((String *)(this + 0x14));
  *(undefined2 *)this = param_2_00;
  *(undefined4 *)(this + 4) = param_2;
  this[8] = param_3;
  String::String(aSStack_20,param_5);
  String::operator=((String *)(this + 0xc),aSStack_20);
  String::~String(aSStack_20);
  String::operator=((String *)(this + 0x14),0);
  return this;
}


