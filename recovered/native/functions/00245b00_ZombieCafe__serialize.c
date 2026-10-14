/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245b00 ZombieCafe::serialize */

/* ZombieCafe::serialize(OutputStream*) */

void __thiscall ZombieCafe::serialize(ZombieCafe *this,OutputStream *param_1)

{
  bool bVar1;
  short sVar2;
  DataOutputStream *this_00;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  ZombieCafe *pZVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  undefined4 in_stack_fffffe70;
  undefined4 in_stack_fffffe74;
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  CapcomDate aCStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  CapcomDate aCStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  iVar4 = DAT_00245e5c + 0x245b0e;
  local_1c = **(int **)(iVar4 + DAT_00245e60);
  this_00 = (DataOutputStream *)operator_new(4);
  DataOutputStream::DataOutputStream(this_00,param_1);
  iVar7 = DAT_00245e6c;
  L_PrintLog((char *)(DAT_00245e64 + 0x245b2e),(char *)(DAT_00245e68 + 0x245b30));
  L_PrintLog((char *)(iVar7 + 0x245b38),(char *)(DAT_00245e70 + 0x245b3c));
  if (this_00 == (DataOutputStream *)0x0) {
    pcVar5 = (char *)(DAT_00245e78 + 0x245b4e);
  }
  else {
    pcVar5 = (char *)(DAT_00245e74 + 0x245b48);
  }
  L_PrintLog((char *)(iVar7 + 0x245b38),pcVar5);
  L_PrintLog((char *)(DAT_00245e7c + 0x245b5c),(char *)(DAT_00245e80 + 0x245b5e));
  L_PrintLog((char *)(DAT_00245e88 + 0x245b6a),(char *)(DAT_00245e8c + 0x245b6c));
  bVar1 = SUB41(this_00,0);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeByte(bVar1);
  Platform::getAppTime();
  uVar3 = __fixdfsi();
  *(undefined4 *)(this + 0x880) = uVar3;
  __floatsidf();
  fVar14 = (float)DataOutputStream::writeDouble
                            ((double)CONCAT44(in_stack_fffffe74,in_stack_fffffe70));
  DataOutputStream::writeFloat(fVar14);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  fVar14 = (float)DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeFloat(fVar14);
  DataOutputStream::writeInt((int)this_00);
  iVar7 = 0;
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  pcVar5 = *(char **)(iVar4 + DAT_00245ea0);
  do {
    iVar7 = iVar7 + 1;
    DataOutputStream::writeByte(bVar1);
  } while (iVar7 != 0x80);
  iVar7 = 0;
  pcVar10 = *(char **)(iVar4 + DAT_00245ea4);
  do {
    iVar7 = iVar7 + 1;
    DataOutputStream::writeByte(bVar1);
  } while (iVar7 != 0x80);
  pcVar8 = (char *)(DAT_00245ea8 + 0x245c3e);
  L_PrintLog(pcVar8,(char *)(DAT_00245eac + 0x245c42));
  L_PrintLog(pcVar8,pcVar5);
  L_PrintLog(pcVar8,pcVar10);
  L_PrintLog(pcVar8,(char *)(DAT_00245eb0 + 0x245c5e));
  DataOutputStream::writeBoolean(bVar1);
  if (*(Character **)(this + 0x590) != (Character *)0x0) {
    Character::serialize(*(Character **)(this + 0x590),this_00);
  }
  iVar7 = DAT_00245eb4;
  snprintf(acStack_11c,0x100,(char *)(DAT_00245eb8 + 0x245c88),*(int *)(this + DAT_00245eb4 + 4) + 1
          );
  L_PrintLog((char *)(DAT_00245ebc + 0x245c9a),acStack_11c);
  DataOutputStream::writeByte(bVar1);
  for (iVar11 = 0; iVar11 < *(int *)(this + iVar7 + 4) + 1; iVar11 = iVar11 + 1) {
    Character::serialize(*(Character **)(iVar11 * 4 + *(int *)(this + iVar7 + 8)),this_00);
  }
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  for (iVar7 = 0; iVar7 < *(int *)(this + 0x5a4) + 1; iVar7 = iVar7 + 1) {
    Character::serialize(*(Character **)(iVar7 * 4 + *(int *)(this + 0x5a8)),this_00);
  }
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeInt((int)this_00);
  for (iVar7 = 0; iVar7 < *(int *)(this + 0x18); iVar7 = iVar7 + 1) {
    DataOutputStream::writeByte(bVar1);
  }
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  pZVar9 = this + DAT_00245ec8;
  sVar2 = (short)this_00;
  DataOutputStream::writeShort(sVar2);
  for (iVar7 = 0; iVar7 < *(int *)(pZVar9 + 4) + 1; iVar7 = iVar7 + 1) {
    Vector<String>::elementAt((int)aSStack_17c);
    DataOutputStream::writeUTF(this_00,aSStack_17c);
    String::~String(aSStack_17c);
  }
  CapcomDate::serialize((CapcomDate *)(this + 0x8d0),this_00);
  pZVar9 = this + DAT_00245ecc;
  DataOutputStream::writeShort(sVar2);
  for (iVar7 = 0; iVar7 < *(int *)(pZVar9 + 4) + 1; iVar7 = iVar7 + 1) {
    Vector<String>::elementAt((int)aSStack_174);
    DataOutputStream::writeUTF(this_00,aSStack_174);
    String::~String(aSStack_174);
  }
  CapcomDate::serialize((CapcomDate *)(this + DAT_00245ed0),this_00);
  iVar7 = DAT_00245ed4;
  DataOutputStream::writeShort(sVar2);
  for (iVar11 = 0; iVar11 < *(int *)(this + iVar7 + 4) + 1; iVar11 = iVar11 + 1) {
    Order::serialize(*(Order **)(iVar11 * 4 + *(int *)(this + iVar7 + 8)),this_00);
  }
  L_PrintLog((char *)(DAT_00245ed8 + 0x245e2a),(char *)(DAT_00245edc + 0x245e2c));
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  pbVar6 = *(byte **)(iVar4 + DAT_00245eec);
  for (iVar7 = 0; iVar7 < (int)(uint)*pbVar6; iVar7 = iVar7 + 1) {
    DataOutputStream::writeLong(CONCAT44(pbVar6,in_stack_fffffe70));
    DataOutputStream::writeByte(bVar1);
    String::String(aSStack_16c,(String *)(*(int *)(this + 0x6a0) + iVar7 * 8));
    DataOutputStream::writeUTF(this_00,aSStack_16c);
    String::~String(aSStack_16c);
  }
  pbVar6 = *(byte **)(iVar4 + DAT_002462ac);
  for (iVar7 = 0; iVar7 < (int)(uint)*pbVar6; iVar7 = iVar7 + 1) {
    DataOutputStream::writeLong(CONCAT44(pbVar6,in_stack_fffffe70));
  }
  piVar12 = *(int **)(iVar4 + DAT_002462b0);
  for (iVar7 = 0; iVar7 < *piVar12; iVar7 = iVar7 + 1) {
    DataOutputStream::writeLong(CONCAT44(pbVar6,in_stack_fffffe70));
  }
  CapcomDate::serialize((CapcomDate *)(this + 0x6c0),this_00);
  DataOutputStream::writeInt((int)this_00);
  TutorialSystem::serialize(*(TutorialSystem **)(this + DAT_002462bc),this_00);
  DataOutputStream::writeByte(bVar1);
  CapcomDate::serialize((CapcomDate *)(this + 0x890),this_00);
  CapcomDate::serialize((CapcomDate *)(this + DAT_002462c4),this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeShort(sVar2);
  CapcomDate::serialize((CapcomDate *)(this + 0x8a0),this_00);
  CapcomDate::serialize((CapcomDate *)(this + DAT_002462cc),this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  CapcomDate::serialize((CapcomDate *)(this + DAT_002462dc),this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  iVar7 = DAT_002462f4;
  DataOutputStream::writeShort(sVar2);
  for (iVar11 = 0; iVar11 < *(int *)(this + iVar7 + 4) + 1; iVar11 = iVar11 + 1) {
    FoodStack::serialize(*(FoodStack **)(iVar11 * 4 + *(int *)(this + iVar7 + 8)),this_00);
  }
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeByte(bVar1);
  iVar7 = DAT_00246304;
  DataOutputStream::writeInt((int)this_00);
  for (iVar11 = 0; iVar11 < *(int *)(this + iVar7 + 4) + 1; iVar11 = iVar11 + 1) {
    memcpy(aCStack_164,(void *)(*(int *)(this + iVar7 + 8) + iVar11 * 8),8);
    CapcomDate::serialize(aCStack_164,this_00);
    Vector<String>::elementAt((int)aSStack_15c);
    DataOutputStream::writeUTF(this_00,aSStack_15c);
    String::~String(aSStack_15c);
  }
  CapcomDate::serialize((CapcomDate *)(this + DAT_0024630c),this_00);
  String::String(aSStack_154,(String *)(this + DAT_00246310));
  DataOutputStream::writeUTF(this_00,aSStack_154);
  String::~String(aSStack_154);
  DataOutputStream::writeLong(CONCAT44(pbVar6,in_stack_fffffe70));
  CapcomDate::serialize((CapcomDate *)(this + DAT_00246314),this_00);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeShort(sVar2);
  for (iVar7 = 0; iVar7 < *(int *)(this + 0x6d8); iVar7 = iVar7 + 1) {
    DataOutputStream::writeInt((int)this_00);
  }
  __floatsidf(*(undefined4 *)(this + DAT_00246320));
  DataOutputStream::writeDouble((double)CONCAT44(pbVar6,in_stack_fffffe70));
  iVar7 = DAT_00246324;
  DataOutputStream::writeShort(sVar2);
  for (iVar11 = 0; iVar11 < *(int *)(this + iVar7 + 4) + 1; iVar11 = iVar11 + 1) {
    DataOutputStream::writeBoolean(bVar1);
  }
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  String::String(aSStack_14c,(String *)(this + 0x9a0));
  DataOutputStream::writeUTF(this_00,aSStack_14c);
  String::~String(aSStack_14c);
  String::String(aSStack_144,(String *)(this + DAT_00246334));
  DataOutputStream::writeUTF(this_00,aSStack_144);
  String::~String(aSStack_144);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  CapcomDate::serialize((CapcomDate *)(this + DAT_00246340),this_00);
  iVar7 = DAT_00246344;
  DataOutputStream::writeShort(sVar2);
  for (iVar11 = 0; iVar11 < *(int *)(this + iVar7 + 4) + 1; iVar11 = iVar11 + 1) {
    RaidNotification::serialize
              (*(RaidNotification **)(iVar11 * 4 + *(int *)(this + iVar7 + 8)),this_00);
  }
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  CapcomDate::serialize((CapcomDate *)(this + DAT_00246350),this_00);
  DataOutputStream::writeShort(sVar2);
  for (iVar7 = 0; iVar11 = DAT_00246718, iVar7 < *(int *)(this + 0x984) + 1; iVar7 = iVar7 + 1) {
    DataOutputStream::writeBoolean(bVar1);
  }
  DataOutputStream::writeInt((int)this_00);
  for (iVar7 = 0; iVar7 < *(int *)(this + iVar11 + 4) + 1; iVar7 = iVar7 + 1) {
    memcpy(aCStack_13c,(void *)(*(int *)(this + iVar11 + 8) + iVar7 * 8),8);
    CapcomDate::serialize(aCStack_13c,this_00);
    Vector<String>::elementAt((int)aSStack_134);
    DataOutputStream::writeUTF(this_00,aSStack_134);
    String::~String(aSStack_134);
  }
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  ObjectiveSystem::serialize(*(DataOutputStream **)(this + DAT_0024674c));
  DataOutputStream::writeBoolean(bVar1);
  CapcomDate::serialize((CapcomDate *)(this + DAT_00246754),this_00);
  CapcomDate::serialize((CapcomDate *)(this + DAT_00246758),this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeLong(CONCAT44(pbVar6,in_stack_fffffe70));
  DataOutputStream::writeShort(sVar2);
  DataOutputStream::writeShort(sVar2);
  DataOutputStream::writeShort(sVar2);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeByte(bVar1);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeInt((int)this_00);
  for (iVar7 = 0; iVar11 = DAT_00246790, iVar7 < *(int *)(this + 0x6b4) + 1; iVar7 = iVar7 + 1) {
    DataOutputStream::writeInt((int)this_00);
    DataOutputStream::writeLong(CONCAT44(iVar7,in_stack_fffffe70));
  }
  DataOutputStream::writeShort(sVar2);
  iVar7 = 0;
  for (iVar13 = 0; iVar13 < *(int *)(this + iVar11 + 4) + 1; iVar13 = iVar13 + 1) {
    iVar7 = iVar7 + (uint)*(byte *)(*(int *)(this + iVar11 + 8) + iVar13);
    DataOutputStream::writeByte(bVar1);
  }
  DataOutputStream::writeByte(bVar1);
  if (*(int *)(this + 0x40) == 0) {
    puts((char *)(DAT_00246794 + 0x2465be));
  }
  Quest::serialize(*(Quest **)(this + 0x40),this_00);
  iVar11 = 0xe;
  DataOutputStream::writeLong(CONCAT44(iVar7,in_stack_fffffe70));
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeLong(CONCAT44(iVar7,in_stack_fffffe70));
  CapcomDate::serialize((CapcomDate *)(this + DAT_002467a4),this_00);
  do {
    DataOutputStream::writeInt((int)this_00);
    iVar11 = iVar11 + -1;
    DataOutputStream::writeInt((int)this_00);
    DataOutputStream::writeInt((int)this_00);
  } while (iVar11 != 0);
  serializeZombieFlowerInfo(this,this_00);
  DataOutputStream::writeInt((int)this_00);
  serializeZombie_EventRaidInfo(this,this_00);
  serializeZombie_EventRaid2Info(this,this_00);
  DataOutputStream::writeInt((int)this_00);
  serializeZombie_InstallGiftInfo(this,this_00);
  serializeZombie_AmpouleRaidInfo(this,this_00);
  serializeZombie_WeekRaidInfo(this,this_00);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeBoolean(bVar1);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  DataOutputStream::writeInt((int)this_00);
  iVar7 = 0;
  do {
    iVar7 = iVar7 + 4;
    DataOutputStream::writeInt((int)this_00);
  } while (iVar7 != 0x58);
  DataOutputStream::writeInt((int)this_00);
  iVar7 = 0;
  do {
    iVar7 = iVar7 + 4;
    DataOutputStream::writeInt((int)this_00);
  } while (iVar7 != 0x58);
  serializeZombie_EventRaid3Info((DataOutputStream *)this);
  iVar11 = *(int *)(this + 0x674);
  DataOutputStream::writeInt((int)this_00);
  for (iVar7 = 0; iVar7 < iVar11 + 1; iVar7 = iVar7 + 1) {
    iVar13 = iVar7 * 4;
    DataOutputStream::writeInt((int)this_00);
    DataOutputStream::writeInt((int)this_00);
    DataOutputStream::writeInt((int)this_00);
    DataOutputStream::writeInt((int)this_00);
    String::String(aSStack_12c,(String *)(*(int *)(*(int *)(this + 0x678) + iVar13) + 0x10));
    DataOutputStream::writeUTF(this_00,aSStack_12c);
    String::~String(aSStack_12c);
  }
  serializeZombie_basicEventInfo((DataOutputStream *)this);
  DataOutputStream::writeInt((int)this_00);
  String::String(aSStack_124,(String *)(this + 0x9b0));
  DataOutputStream::writeUTF(this_00,aSStack_124);
  String::~String(aSStack_124);
  DataOutputStream::writeBoolean(bVar1);
  L_PrintLog((char *)(DAT_002468e8 + 0x24685e),(char *)(DAT_002468ec + 0x246860));
  if (this_00 != (DataOutputStream *)0x0) {
    operator_delete(this_00);
  }
  if (local_1c != **(int **)(iVar4 + DAT_002468f0)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


