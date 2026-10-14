/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7c00 FoodStack::FoodStack */

/* FoodStack::FoodStack(unsigned char, int, unsigned char) */

undefined8 __thiscall FoodStack::FoodStack(FoodStack *this,uchar param_1,int param_2,uchar param_3)

{
  String::String((String *)(this + 0xc));
  String::String((String *)(this + 0x14));
  *(ushort *)this = (ushort)param_1;
  *(int *)(this + 4) = param_2;
  this[8] = (FoodStack)param_3;
  String::operator=((String *)(this + 0xc),0);
  String::operator=((String *)(this + 0x14),0);
  return CONCAT44(param_2,this);
}


