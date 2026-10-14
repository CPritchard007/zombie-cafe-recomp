/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001031fc Furniture::serializeChild */

/* Furniture::serializeChild(DataOutputStream*) */

void __thiscall Furniture::serializeChild(Furniture *this,DataOutputStream *param_1)

{
  bool bVar1;
  uint uVar2;
  
  L_PrintLog((char *)(DAT_001032a0 + 0x10320a),(char *)(DAT_001032a4 + 0x10320c));
  bVar1 = SUB41(param_1,0);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeByte(bVar1);
  uVar2 = *(uint *)(this + 0x3c);
  if (uVar2 != 0) {
    uVar2 = (uint)(*(char *)(*(int *)(this + 0x38) + 0x44) != '\x03');
  }
  DataOutputStream::writeBoolean(bVar1);
  if (uVar2 != 0) {
    CafeObject::serialize(*(CafeObject **)(this + 0x3c),param_1);
  }
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeShort((short)param_1);
  DataOutputStream::writeShort((short)param_1);
  CapcomDate::serialize((CapcomDate *)(this + 0x56),param_1);
  L_PrintLog((char *)(DAT_001032a8 + 0x103298),(char *)(DAT_001032ac + 0x10329a));
  return;
}


