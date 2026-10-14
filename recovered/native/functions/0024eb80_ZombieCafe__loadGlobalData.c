/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024eb80 ZombieCafe::loadGlobalData */

/* ZombieCafe::loadGlobalData() */

void __thiscall ZombieCafe::loadGlobalData(ZombieCafe *this)

{
  int iVar1;
  InputStream *pIVar2;
  byte *pbVar3;
  int *piVar4;
  void *pvVar5;
  ObjectiveSystem *this_00;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  ZombieCafe *pZVar14;
  int local_f4;
  String aSStack_ec [8];
  CharacterData aCStack_e4 [8];
  CapcomDate aCStack_dc [8];
  CapcomDate aCStack_d4 [8];
  CapcomDate aCStack_cc [8];
  CapcomDate aCStack_c4 [8];
  CapcomDate aCStack_bc [8];
  CapcomDate aCStack_b4 [8];
  undefined4 local_ac;
  undefined4 local_a8;
  CapcomDate aCStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  iVar7 = DAT_0024ed20;
  iVar1 = DAT_0024ed10 + 0x24eb8e;
  piVar6 = *(int **)(iVar1 + DAT_0024ed14);
  local_1c = *piVar6;
  pcVar10 = (char *)(DAT_0024ed18 + 0x24eb9c);
  pcVar11 = (char *)(DAT_0024ed1c + 0x24eb9e);
  L_PrintLog(pcVar10,pcVar11);
  L_PrintLog((char *)(DAT_0024ed24 + 0x24ebb2),(char *)(iVar7 + 0x24ebae));
  L_PrintLog(pcVar10,pcVar11);
  String::String(aSStack_ec,(char *)(iVar7 + 0x24ebae));
  pIVar2 = (InputStream *)SaveDataInputStream::open(aSStack_ec);
  String::~String(aSStack_ec);
  if (pIVar2 == (InputStream *)0x0) {
    pcVar10 = (char *)(DAT_0024ed28 + 0x24ebde);
    L_PrintLog((char *)(DAT_0024ed2c + 0x24ebe2),pcVar10);
    L_PrintLog((char *)(DAT_0024ed30 + 0x24ebec),pcVar10);
    L_PrintLog((char *)(DAT_0024ed34 + 0x24ebf6),pcVar10);
  }
  else {
    local_f4 = deserialize(this,pIVar2,-1,-1);
    (**(code **)(*(int *)pIVar2 + 0xc))(pIVar2);
    (**(code **)(*(int *)pIVar2 + 4))(pIVar2);
    if (local_f4 != 0) {
      CapcomDate::today((CapcomDate *)&local_ac);
      iVar7 = CapcomDate::daysBetween
                        (*(undefined4 *)(this + 0x8d0),*(undefined4 *)(this + 0x8d4),local_ac,
                         local_a8);
      if (0 < iVar7) {
        *(undefined4 *)(this + DAT_0024f1e4 + 4) = 0xffffffff;
        memcpy(this + 0x8d0,&local_ac,7);
      }
      pZVar14 = this + DAT_0024f184;
      iVar7 = CapcomDate::daysBetween
                        (*(undefined4 *)(this + DAT_0024f184),*(undefined4 *)(pZVar14 + 4),local_ac,
                         local_a8);
      if (0 < iVar7) {
        *(undefined4 *)(this + DAT_0024f1e8 + 4) = 0xffffffff;
        memcpy(pZVar14,&local_ac,7);
      }
      pZVar14 = this + DAT_0024f180;
      iVar7 = CapcomDate::daysBetween
                        (*(undefined4 *)(this + DAT_0024f180),*(undefined4 *)(pZVar14 + 4),local_ac,
                         local_a8);
      if (iVar7 < 0) {
        CapcomDate::from1970Offset(aCStack_a4,0);
        memcpy(pZVar14,aCStack_a4,7);
      }
      goto LAB_0024f078;
    }
  }
  *(undefined4 *)(this + 0x880) = 0xffffffff;
  iVar7 = DAT_0024ed3c;
  *(undefined4 *)(this + 0x688) = **(undefined4 **)(iVar1 + DAT_0024ed38);
  *(uint *)(this + DAT_0024ed44) = (uint)**(byte **)(iVar1 + DAT_0024ed40);
  *(undefined4 *)(this + DAT_0024ed4c) = **(undefined4 **)(iVar1 + DAT_0024ed48);
  *(undefined4 *)(this + 0x5b8) = **(undefined4 **)(iVar1 + DAT_0024ed50);
  iVar12 = DAT_0024ed54;
  *(undefined4 *)(this + 0x680) = 1;
  *(undefined4 *)(this + iVar12) = 0;
  *(undefined4 *)(this + 0x690) = 0xffffffff;
  this[0x3f8] = (ZombieCafe)0x64;
  iVar12 = DAT_0024ed60;
  pcVar10 = (char *)(DAT_0024ed58 + 0x24ec88);
  this[DAT_0024ed5c] = (ZombieCafe)0x64;
  L_PrintLog(pcVar10,(char *)(iVar12 + 0x24ec8c));
  for (iVar12 = 0; iVar12 < (int)(uint)**(byte **)(iVar1 + DAT_0024ed70); iVar12 = iVar12 + 1) {
    *(undefined4 *)(iVar12 * 4 + *(int *)(this + DAT_0024ed64)) = 0;
    *(undefined1 *)(*(int *)(this + DAT_0024ed68) + iVar12) = 0;
    iVar9 = *(int *)(this + 0x6a0);
    CharacterData::getRandomName(aCStack_e4,false,0);
    String::operator=((String *)(iVar9 + iVar12 * 8),aCStack_e4);
    String::~String((String *)aCStack_e4);
    L_PrintLog((char *)(iVar7 + 0x24ec48),(char *)(DAT_0024ed6c + 0x24ecca));
  }
  L_PrintLog((char *)(DAT_0024ed74 + 0x24ece0),(char *)(DAT_0024ed78 + 0x24ece2));
  pbVar3 = *(byte **)(iVar1 + DAT_0024ed7c);
  for (iVar7 = 0; iVar12 = DAT_0024ed84, iVar7 < (int)(uint)*pbVar3; iVar7 = iVar7 + 1) {
    *(undefined4 *)(iVar7 * 4 + *(int *)(this + 0x698)) = 0;
  }
  piVar4 = *(int **)(iVar1 + DAT_0024ed80);
  for (iVar7 = 0; iVar7 < *piVar4; iVar7 = iVar7 + 1) {
    *(undefined4 *)(iVar7 * 4 + *(int *)(this + iVar12)) = 0;
  }
  CapcomDate::from1970Offset(aCStack_dc,0);
  memcpy(this + 0x6c0,aCStack_dc,7);
  *(undefined4 *)(this + DAT_0024f130) = 0;
  uVar8 = **(undefined4 **)(iVar1 + DAT_0024f134);
  *(undefined4 *)(this + DAT_0024f138) = uVar8;
  *(undefined4 *)(this + DAT_0024f13c) = uVar8;
  iVar7 = DAT_0024f144;
  *(undefined4 *)(this + DAT_0024f140) = 0;
  uVar8 = **(undefined4 **)(iVar1 + DAT_0024f148);
  pcVar10 = (char *)(DAT_0024f14c + 0x24edd8);
  *(undefined4 *)(this + iVar7) = uVar8;
  *(undefined4 *)(this + 0x9d0) = uVar8;
  *(undefined4 *)(this + DAT_0024f150) = 0;
  this[DAT_0024f154] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024f158) = 0;
  this[DAT_0024f15c] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024f160) = 0;
  iVar7 = DAT_0024f164;
  *(undefined4 *)(this + 0x6a8) = *(undefined4 *)(this + 0x680);
  L_PrintLog(pcVar10,(char *)(iVar7 + 0x24ee02));
  iVar7 = DAT_0024f16c;
  iVar12 = *(int *)(this + DAT_0024f168);
  iVar9 = 0;
  do {
    iVar13 = iVar12 + iVar9;
    iVar9 = iVar9 + 0x14;
    *(undefined1 *)(iVar13 + 0x10) = 0;
  } while (iVar9 != iVar7);
  unlockRecipe(this,0,'\0');
  unlockRecipe(this,1,'\0');
  *(undefined2 *)(this + DAT_0024f170) = 0;
  CapcomDate::from1970Offset(aCStack_d4,0);
  pvVar5 = memcpy(this + 0x890,aCStack_d4,7);
  memcpy(this + DAT_0024f174,pvVar5,7);
  CapcomDate::from1970Offset(aCStack_cc,0);
  pvVar5 = memcpy(this + 0x8a0,aCStack_cc,7);
  memcpy(this + DAT_0024f178,pvVar5,7);
  *(undefined4 *)(this + 0x8b0) = DAT_0024f17c;
  CapcomDate::from1970Offset(aCStack_c4,0);
  memcpy(this + DAT_0024f180,aCStack_c4,7);
  CapcomDate::today(aCStack_bc);
  memcpy(this + 0x8d0,aCStack_bc,7);
  CapcomDate::today(aCStack_b4);
  memcpy(this + DAT_0024f184,aCStack_b4,7);
  *(undefined2 *)(this + DAT_0024f188) = 1;
  *(undefined2 *)(this + DAT_0024f18c) = 0;
  *(undefined2 *)(this + DAT_0024f190) = 0;
  this[DAT_0024f194] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024f198) = 0;
  *(undefined4 *)(this + DAT_0024f19c) = 0;
  *(undefined4 *)(this + 0xa40) = 0;
  *(undefined4 *)(this + 0xa50) = 0;
  setLockerPresentFlag(this);
  addLockerSize(this,10);
  this[DAT_0024f1a0] = (ZombieCafe)0x0;
  this[DAT_0024f1a4] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024f1a8) = 0;
  *(undefined4 *)(this + DAT_0024f1ac) = 0;
  *(undefined4 *)(this + 0xa60) = 0;
  *(undefined4 *)(this + DAT_0024f1b0) = 0;
  *(undefined4 *)(this + 0x788) = 0;
  iVar7 = 0x16;
  pZVar14 = this;
  do {
    iVar12 = arc4random();
    *(int *)(pZVar14 + 0x730) = iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f;
    iVar12 = arc4random();
    iVar7 = iVar7 + -1;
    *(int *)(pZVar14 + DAT_0024f1b4) = iVar12 + (iVar12 >> 0x1f) ^ iVar12 >> 0x1f;
    iVar9 = DAT_0024f1c0;
    iVar12 = DAT_0024f1bc;
    pZVar14 = pZVar14 + 4;
  } while (iVar7 != 0);
  **(undefined1 **)(iVar1 + DAT_0024f1b8) = 0;
  **(undefined4 **)(iVar1 + DAT_0024f1c4) = 0;
  **(undefined1 **)(iVar1 + DAT_0024f1c8) = 0;
  **(undefined1 **)(iVar1 + DAT_0024f1cc) = 0;
  **(undefined1 **)(iVar1 + DAT_0024f1d0) = 0;
  *(undefined4 *)(this + DAT_0024f1d4) = 0;
  clearCollaboGiftInfo();
  clearGiftBox(this);
  ClearPicGiftBox(this);
  ClearRankingGiftInfo();
  clearZombieFlowerEventInfo(this);
  initEventRaidInfo(this);
  initEventRaid2Info(this);
  initEventRaid3Info(this);
  initAmpouleRaidInfo(this);
  initWeekRaidInfo(this);
  initBasicEventInfo(this);
  initToxinCheatCheck(this);
  *(undefined4 *)(this + 0x498) = 0;
  initInstallGiftInfo(this);
  this[DAT_0024f1d8] = (ZombieCafe)0x0;
  for (iVar7 = 0; iVar7 < (int)(uint)*(ushort *)(this + iVar12); iVar7 = iVar7 + 1) {
    if (*(char *)(*(int *)(iVar7 * 4 + *(int *)(this + iVar9)) + DAT_0024f1dc) != '\0') {
      Vector<bool>::addElement((Vector<bool> *)(this + 0x980),false);
    }
  }
  this_00 = (ObjectiveSystem *)operator_new(0x20);
  ObjectiveSystem::ObjectiveSystem(this_00);
  *(ObjectiveSystem **)(this + DAT_0024f1e0) = this_00;
  ObjectiveSystem::clear(this_00);
  local_f4 = 0;
LAB_0024f078:
  iVar7 = DAT_0024f1f0;
  pbVar3 = *(byte **)(iVar1 + DAT_0024f1ec);
  piVar4 = *(int **)(iVar1 + DAT_0024f1f8);
  snprintf(acStack_9c,0x80,(char *)(DAT_0024f1f4 + 0x24f08c),*(undefined4 *)(this + 0x680),
           (uint)*pbVar3,*(undefined4 *)(this + DAT_0024f1f0),*piVar4);
  L_PrintLog((char *)(DAT_0024f1fc + 0x24f0aa),acStack_9c);
  iVar12 = *(int *)(this + iVar7);
  if (((iVar12 < (int)(uint)*pbVar3) || (iVar12 < *(int *)(this + 0x680))) || (*piVar4 < iVar12)) {
    *(undefined4 *)(this + iVar7) = 0xffffffff;
  }
  else {
    *pbVar3 = (byte)iVar12;
  }
  iVar7 = *(int *)((*pbVar3 - 1) * 4 + **(int **)(iVar1 + DAT_0024f200));
  if (iVar7 < *(int *)(this + DAT_0024f204)) {
    *(int *)(this + DAT_0024f204) = iVar7;
  }
  if (*(int *)(this + DAT_0024f204) < 0) {
    *(undefined4 *)(this + DAT_0024f204) = 0;
  }
  L_PrintLog((char *)(DAT_0024f208 + 0x24f0fe),(char *)(DAT_0024f20c + 0x24f100));
  if (local_1c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_f4);
}


