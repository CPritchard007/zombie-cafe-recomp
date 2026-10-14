/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247040 Order::parseLabel */

/* Order::parseLabel(String) */

bool __thiscall Order::parseLabel(Order *this,String *param_2)

{
  Order OVar1;
  Vector<String> *this_00;
  int iVar2;
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  String::String(aSStack_28,param_2);
  this_00 = (Vector<String> *)StringUtil::splitString(aSStack_28,0x2c);
  String::~String(aSStack_28);
  iVar2 = *(int *)(this_00 + 4);
  if (iVar2 == 1) {
    Vector<String>::elementAt((int)aSStack_20);
    OVar1 = (Order)StringUtil::parseInt(aSStack_20);
    this[0x18] = OVar1;
    String::~String(aSStack_20);
    Vector<String>::elementAt((int)aSStack_18);
    OVar1 = (Order)StringUtil::parseInt(aSStack_18);
    this[0x19] = OVar1;
    String::~String(aSStack_18);
  }
  Vector<String>::~Vector(this_00);
  operator_delete(this_00);
  return iVar2 == 1;
}


