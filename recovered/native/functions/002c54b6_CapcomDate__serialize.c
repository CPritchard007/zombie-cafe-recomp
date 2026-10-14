/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c54b6 CapcomDate::serialize */

/* CapcomDate::serialize(DataOutputStream*) */

void __thiscall CapcomDate::serialize(CapcomDate *this,DataOutputStream *param_1)

{
  uchar uVar1;
  
  DataOutputStream::writeShort((short)param_1);
  uVar1 = (uchar)param_1;
  DataOutputStream::writeByte(uVar1);
  DataOutputStream::writeByte(uVar1);
  DataOutputStream::writeByte(uVar1);
  DataOutputStream::writeByte(uVar1);
  DataOutputStream::writeByte(uVar1);
  return;
}


