/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be63c Cafe::serialize */

/* Cafe::serialize(OutputStream*) */

undefined8 __thiscall Cafe::serialize(Cafe *this,OutputStream *param_1)

{
  bool bVar1;
  DataOutputStream *this_00;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  Cafe *pCVar7;
  OutputStream *pOVar8;
  int iVar9;
  
  pCVar7 = this;
  pOVar8 = param_1;
  this_00 = (DataOutputStream *)operator_new(4);
  DataOutputStream::DataOutputStream(this_00,param_1);
  bVar1 = SUB41(this_00,0);
  DataOutputStream::writeByte(bVar1);
  uVar6 = Platform::getAppTime();
  *(undefined8 *)(this + 0xd8) = uVar6;
  DataOutputStream::writeDouble((double)CONCAT44(pOVar8,pCVar7));
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeByte(bVar1);
  iVar9 = DAT_000be72c;
  DataOutputStream::writeShort((short)this_00);
  DataOutputStream::writeShort((short)this_00);
  piVar2 = *(int **)(iVar9 + 0xbe6a4);
  puVar3 = (undefined4 *)(DAT_000be730 + 0xbe6b0);
  DataOutputStream::writeInt((int)this_00);
  piVar4 = (int *)*puVar3;
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  for (iVar9 = 0; iVar9 < *piVar4 * *piVar2; iVar9 = iVar9 + 1) {
    CafeTile::serialize(*(CafeTile **)(iVar9 * 4 + *(int *)this),this_00);
  }
  DataOutputStream::writeInt((int)this_00);
  for (iVar5 = 0; iVar5 < *(int *)(this + 0x100) + 1; iVar5 = iVar5 + 1) {
    DataOutputStream::writeInt((int)this_00);
  }
  operator_delete(this_00);
  return CONCAT44(iVar9,pCVar7);
}


