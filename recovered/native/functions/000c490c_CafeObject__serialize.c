/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c490c CafeObject::serialize */

/* CafeObject::serialize(DataOutputStream*) */

void __thiscall CafeObject::serialize(CafeObject *this,DataOutputStream *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x14))();
  DataOutputStream::writeByte(SUB41(param_1,0));
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x18))(this,param_1);
    DataOutputStream::writeInt((int)param_1);
    DataOutputStream::writeShort((short)param_1);
    DataOutputStream::writeShort((short)param_1);
    DataOutputStream::writeBoolean(SUB41(param_1,0));
  }
  return;
}


