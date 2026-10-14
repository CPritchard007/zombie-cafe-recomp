/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c722c Character::serialize */

/* Character::serialize(DataOutputStream*) */

void __thiscall Character::serialize(Character *this,DataOutputStream *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  String *this_00;
  float fVar4;
  longlong in_stack_ffffffd0;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  this_00 = (String *)(this + 8);
  L_PrintLog((char *)(DAT_000c73b4 + 0xc723e),(char *)(DAT_000c73b8 + 0xc7240));
  String::String((String *)&stack0xffffffd0,this_00);
  iVar2 = operator!=(&stack0xffffffd0,0);
  String::~String((String *)&stack0xffffffd0);
  if (iVar2 != 0) {
    pcVar3 = (char *)String::getBytes(this_00);
    L_PrintLog((char *)(DAT_000c73bc + 0xc7270),pcVar3);
    free(pcVar3);
  }
  String::String(aSStack_28,(String *)(*(int *)this + DAT_000c73c0));
  iVar2 = operator!=(aSStack_28,0);
  String::~String(aSStack_28);
  if (iVar2 != 0) {
    pcVar3 = (char *)String::getBytes((String *)(*(int *)this + DAT_000c73c0));
    L_PrintLog((char *)(DAT_000c73c4 + 0xc72ac),pcVar3);
    free(pcVar3);
  }
  DataOutputStream::writeShort((short)param_1);
  String::String(aSStack_20,this_00);
  DataOutputStream::writeUTF(param_1,aSStack_20);
  String::~String(aSStack_20);
  bVar1 = SUB41(param_1,0);
  DataOutputStream::writeByte(bVar1);
  fVar4 = (float)DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeFloat(fVar4);
  DataOutputStream::writeByte(bVar1);
  iVar2 = 0;
  DataOutputStream::writeLong(in_stack_ffffffd0);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeLong(in_stack_ffffffd0);
  DataOutputStream::writeLong(in_stack_ffffffd0);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeByte(bVar1);
  do {
    iVar2 = iVar2 + 4;
    DataOutputStream::writeInt((int)param_1);
  } while (iVar2 != 0x14);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  return;
}


