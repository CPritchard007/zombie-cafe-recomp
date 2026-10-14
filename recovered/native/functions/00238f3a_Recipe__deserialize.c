/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238f3a Recipe::deserialize */

/* Recipe::deserialize(DataInputStream*) */

undefined8 Recipe::deserialize(DataInputStream *param_1)

{
  DataInputStream DVar1;
  undefined2 uVar2;
  DataInputStream *in_r1;
  DataInputStream *pDStack_18;
  DataInputStream *pDStack_14;
  
  pDStack_18 = param_1;
  pDStack_14 = in_r1;
  DataInputStream::readUTF();
  String::operator=((String *)param_1,(String *)&pDStack_18);
  String::~String((String *)&pDStack_18);
  uVar2 = DataInputStream::readShort(in_r1);
  *(undefined2 *)(param_1 + 8) = uVar2;
  DVar1 = (DataInputStream)DataInputStream::readByte(in_r1);
  param_1[0x16] = DVar1;
  uVar2 = DataInputStream::readShort(in_r1);
  *(undefined2 *)(param_1 + 10) = uVar2;
  uVar2 = DataInputStream::readShort(in_r1);
  *(undefined2 *)(param_1 + 0xc) = uVar2;
  uVar2 = DataInputStream::readShort(in_r1);
  *(undefined2 *)(param_1 + 0xe) = uVar2;
  uVar2 = DataInputStream::readShort(in_r1);
  *(undefined2 *)(param_1 + 0x10) = uVar2;
  uVar2 = DataInputStream::readShort(in_r1);
  *(undefined2 *)(param_1 + 0x14) = uVar2;
  DVar1 = (DataInputStream)DataInputStream::readByte(in_r1);
  param_1[0x17] = DVar1;
  DVar1 = (DataInputStream)DataInputStream::readByte(in_r1);
  param_1[0x18] = DVar1;
  return CONCAT44(pDStack_14,pDStack_18);
}


