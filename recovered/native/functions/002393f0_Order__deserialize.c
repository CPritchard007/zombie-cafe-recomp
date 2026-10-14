/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002393f0 Order::deserialize */

/* Order::deserialize(DataInputStream*) */

Order * Order::deserialize(DataInputStream *param_1)

{
  Order OVar1;
  Order *this;
  String aSStack_28 [8];
  String aSStack_20 [8];
  CapcomDate aCStack_18 [12];
  
  this = (Order *)operator_new(0x1c);
  memset(this,0,0x1c);
  Order(this);
  DataInputStream::readUTF();
  String::operator=((String *)this,aSStack_28);
  String::~String(aSStack_28);
  DataInputStream::readUTF();
  String::operator=((String *)(this + 8),aSStack_20);
  String::~String(aSStack_20);
  CapcomDate::deserialize(aCStack_18,param_1);
  memcpy(this + 0x10,aCStack_18,7);
  OVar1 = (Order)DataInputStream::readByte(param_1);
  this[0x18] = OVar1;
  OVar1 = (Order)DataInputStream::readByte(param_1);
  this[0x19] = OVar1;
  return this;
}


