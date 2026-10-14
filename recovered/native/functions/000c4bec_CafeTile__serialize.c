/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4bec CafeTile::serialize */

/* CafeTile::serialize(DataOutputStream*) */

void __thiscall CafeTile::serialize(CafeTile *this,DataOutputStream *param_1)

{
  bool bVar1;
  
  bVar1 = SUB41(param_1,0);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  if (*(CafeObject **)(this + 0xc) != (CafeObject *)0x0) {
    CafeObject::serialize(*(CafeObject **)(this + 0xc),param_1);
  }
  DataOutputStream::writeBoolean(bVar1);
  if (*(CafeObject **)(this + 0x10) != (CafeObject *)0x0) {
    CafeObject::serialize(*(CafeObject **)(this + 0x10),param_1);
  }
  DataOutputStream::writeBoolean(bVar1);
  if (*(CafeObject **)(this + 0x14) != (CafeObject *)0x0) {
    CafeObject::serialize(*(CafeObject **)(this + 0x14),param_1);
  }
  return;
}


