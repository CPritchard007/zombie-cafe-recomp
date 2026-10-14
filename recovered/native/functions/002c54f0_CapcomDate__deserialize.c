/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c54f0 CapcomDate::deserialize */

/* CapcomDate::deserialize(DataInputStream*) */

CapcomDate * __thiscall CapcomDate::deserialize(CapcomDate *this,DataInputStream *param_1)

{
  CapcomDate CVar1;
  undefined2 uVar2;
  
  uVar2 = DataInputStream::readShort(param_1);
  *(undefined2 *)this = uVar2;
  CVar1 = (CapcomDate)DataInputStream::readByte(param_1);
  this[2] = CVar1;
  CVar1 = (CapcomDate)DataInputStream::readByte(param_1);
  this[3] = CVar1;
  CVar1 = (CapcomDate)DataInputStream::readByte(param_1);
  this[4] = CVar1;
  CVar1 = (CapcomDate)DataInputStream::readByte(param_1);
  this[5] = CVar1;
  CVar1 = (CapcomDate)DataInputStream::readByte(param_1);
  this[6] = CVar1;
  return this;
}


