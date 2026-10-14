/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4e1a CafeWall::serializeChild */

/* CafeWall::serializeChild(DataOutputStream*) */

void __thiscall CafeWall::serializeChild(CafeWall *this,DataOutputStream *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = SUB41(param_1,0);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeInt((int)param_1);
  iVar2 = *(int *)(this + 0x44);
  DataOutputStream::writeBoolean(bVar1);
  if (iVar2 != 0) {
    CafeObject::serialize(*(CafeObject **)(this + 0x44),param_1);
  }
  return;
}


