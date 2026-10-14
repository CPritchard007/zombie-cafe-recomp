/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024b9a0 ZombieCafe::resetSaveData */

/* ZombieCafe::resetSaveData() */

void __thiscall ZombieCafe::resetSaveData(ZombieCafe *this)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  Character *pCVar6;
  FoodStack *this_00;
  void *pvVar7;
  Quest *pQVar8;
  undefined4 *puVar9;
  OutputStream *pOVar10;
  SaveDataOutputStream *pSVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  Vector<FoodStack*> *pVVar16;
  Vector<Order*> *this_01;
  Vector<RaidNotification*> *this_02;
  int iVar17;
  Vector<Character*> *this_03;
  Vector<unsigned_char> *this_04;
  short *psVar18;
  ZombieCafe *pZVar19;
  int iVar20;
  uint *puVar21;
  int *piVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  double *pdVar27;
  undefined4 *puVar28;
  
  iVar2 = DAT_0024bbe8;
  iVar20 = DAT_0024bbe0 + 0x24b9ac;
  puVar21 = (uint *)(&stack0xffffffec + DAT_0024bbe8);
  piVar22 = (int *)(&stack0xffffffec + DAT_0024bbe8);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_0024bbe8);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_0024bbe8);
  puVar25 = (undefined4 *)(&stack0xffffffec + DAT_0024bbe8);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_0024bbe8);
  pdVar27 = (double *)(&stack0xffffffec + DAT_0024bbe8);
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_0024bbe8);
  *(undefined4 *)(&stack0x00000280 + DAT_0024bbe8) = **(undefined4 **)(iVar20 + DAT_0024bbe4);
  L_PrintLog((char *)(DAT_0024bbec + 0x24b9ba),(char *)(DAT_0024bbf0 + 0x24b9bc));
  L_PrintLog((char *)(DAT_0024bbf4 + 0x24b9ca),(char *)(DAT_0024bbf8 + 0x24b9cc));
  this[DAT_0024bbfc] = (ZombieCafe)0x0;
  iVar17 = DAT_0024bc04;
  *(undefined4 *)(this + DAT_0024bc00) = 0xffffffff;
  *(undefined4 *)(this + 0x880) = 0xffffffff;
  *(undefined4 *)(this + 0x688) = **(undefined4 **)(iVar20 + DAT_0024bc08);
  bVar1 = **(byte **)(iVar20 + DAT_0024bc0c);
  *(uint *)(this + iVar17) = (uint)bVar1;
  *puVar21 = (uint)bVar1;
  iVar17 = CCOptions::GetUInt(*(CCOptions **)(this + 0xa00),(void *)(DAT_0024bc10 + 0x24ba06),
                              (char *)0x0,0xa00);
  *(int *)(this + DAT_0024bc04) = iVar17 + *piVar22;
  *(undefined4 *)(this + DAT_0024bc18) = **(undefined4 **)(iVar20 + DAT_0024bc14);
  *(undefined4 *)(this + 0x680) = 1;
  iVar17 = DAT_0024bc20;
  *(undefined4 *)(this + DAT_0024bc1c) = 0;
  *(undefined4 *)(this + 0x690) = 0xffffffff;
  *puVar23 = *(undefined4 *)(iVar20 + iVar17);
  for (iVar17 = 0; iVar17 < (int)(uint)*(byte *)*puVar24; iVar17 = iVar17 + 1) {
    *(undefined4 *)(iVar17 * 4 + *(int *)(this + DAT_0024bc24)) = 0;
    *(undefined1 *)(*(int *)(this + DAT_0024bc28) + iVar17) = 0;
    iVar13 = *(int *)(this + 0x6a0);
    CharacterData::getRandomName((CharacterData *)(&stack0xfffffff8 + iVar2),false,0);
    String::operator=((String *)(iVar13 + iVar17 * 8),&stack0xfffffff8 + iVar2);
    String::~String((String *)(&stack0xfffffff8 + iVar2));
  }
  pbVar3 = *(byte **)(iVar20 + DAT_0024bc2c);
  for (iVar17 = 0; iVar13 = DAT_0024bc34, iVar17 < (int)(uint)*pbVar3; iVar17 = iVar17 + 1) {
    *(undefined4 *)(iVar17 * 4 + *(int *)(this + 0x698)) = 0;
  }
  piVar4 = *(int **)(iVar20 + DAT_0024bc30);
  for (iVar17 = 0; iVar17 < *piVar4; iVar17 = iVar17 + 1) {
    *(undefined4 *)(iVar17 * 4 + *(int *)(this + iVar13)) = 0;
  }
  CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000000 + iVar2),0);
  memcpy(this + 0x6c0,&stack0x00000000 + iVar2,7);
  iVar17 = DAT_0024bc3c;
  iVar15 = 0;
  *(undefined4 *)(this + DAT_0024bc38) = 0;
  uVar14 = **(undefined4 **)(iVar20 + DAT_0024bc40);
  *(undefined4 *)(this + iVar17) = uVar14;
  *(undefined4 *)(this + DAT_0024bc44) = uVar14;
  iVar17 = DAT_0024bc4c;
  *(undefined4 *)(this + DAT_0024bc48) = 0;
  uVar14 = **(undefined4 **)(iVar20 + DAT_0024bc50);
  *(undefined4 *)(this + iVar17) = uVar14;
  *(undefined4 *)(this + 0x9d0) = uVar14;
  *(undefined4 *)(this + DAT_0024bc54) = 0;
  this[DAT_0024bc58] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024bc5c) = 0;
  this[DAT_0024bc60] = (ZombieCafe)0x0;
  CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000008 + iVar2),0);
  memcpy(this + DAT_0024bc64,&stack0x00000008 + iVar2,7);
  *(undefined4 *)(this + DAT_0024bc68) = 0;
  iVar17 = DAT_0024bc70;
  this[DAT_0024bc6c] = (ZombieCafe)0x0;
  *(undefined4 *)(this + 0x6a8) = *(undefined4 *)(this + 0x680);
  iVar13 = *(int *)(this + DAT_0024bc74);
  do {
    iVar5 = iVar13 + iVar15;
    iVar15 = iVar15 + 0x14;
    *(undefined1 *)(iVar5 + 0x10) = 0;
  } while (iVar15 != iVar17);
  this_03 = (Vector<Character*> *)(this + DAT_0024bc78);
  while (iVar17 = *(int *)(this_03 + 4), iVar17 != -1) {
    pCVar6 = (Character *)Vector<Character*>::removeElementAt(this_03,iVar17);
    if (pCVar6 != (Character *)0x0) {
      Character::~Character(pCVar6);
      operator_delete(pCVar6);
    }
  }
  *(undefined4 *)(this + 0x5b8) = **(undefined4 **)(iVar20 + DAT_0024bc7c);
  while (*(int *)(this + 0x5a4) != -1) {
    pCVar6 = (Character *)
             Vector<Character*>::removeElementAt
                       ((Vector<Character*> *)(this + 0x5a0),*(int *)(this + 0x5a4));
    if (pCVar6 != (Character *)0x0) {
      Character::~Character(pCVar6);
      operator_delete(pCVar6);
    }
  }
  pVVar16 = (Vector<FoodStack*> *)(this + DAT_0024bc80);
  while (-1 < *(int *)(pVVar16 + 4)) {
    Vector<FoodStack*>::removeElementAt(pVVar16,0);
  }
  pVVar16 = (Vector<FoodStack*> *)(this + DAT_0024bc84);
  while (iVar17 = *(int *)(pVVar16 + 4), -1 < iVar17) {
    this_00 = (FoodStack *)Vector<FoodStack*>::removeElementAt(pVVar16,iVar17);
    if (this_00 != (FoodStack *)0x0) {
      FoodStack::~FoodStack(this_00);
      operator_delete(this_00);
    }
  }
  this_01 = (Vector<Order*> *)(this + DAT_0024bc88);
  while (-1 < *(int *)(this_01 + 4)) {
    Vector<Order*>::removeElementAt(this_01,0);
  }
  this_02 = (Vector<RaidNotification*> *)(this + DAT_0024bf34);
  while (-1 < *(int *)(this_02 + 4)) {
    Vector<RaidNotification*>::removeElementAt(this_02,0);
  }
  memset(*(void **)(this + 0x1c),0,*(size_t *)(this + 0x18));
  unlockRecipe(this,0,'\0');
  unlockRecipe(this,1,'\0');
  iVar17 = DAT_0024bf3c * (uint)**(byte **)(iVar20 + DAT_0024bf38);
  *(int *)(this + 0x940) = iVar17;
  *(int *)(this + 0x944) = iVar17 >> 0x1f;
  CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000010 + iVar2),0);
  memcpy(this + DAT_0024bf40,&stack0x00000010 + iVar2,7);
  this[0x950] = (ZombieCafe)0x0;
  this[DAT_0024bf44] = (ZombieCafe)0x0;
  *(undefined2 *)(this + DAT_0024bf48) = 0;
  CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000018 + iVar2),0);
  pvVar7 = memcpy(this + 0x890,&stack0x00000018 + iVar2,7);
  memcpy(this + DAT_0024bf4c,pvVar7,7);
  CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000020 + iVar2),0);
  pvVar7 = memcpy(this + 0x8a0,&stack0x00000020 + iVar2,7);
  memcpy(this + DAT_0024bf50,pvVar7,7);
  *(undefined4 *)(this + 0x8b0) = DAT_0024bf54;
  iVar17 = DAT_0024bf5c;
  *(undefined2 *)(this + DAT_0024bf58) = 1;
  *(undefined2 *)(this + DAT_0024bf60) = 0;
  *(undefined2 *)(this + DAT_0024bf64) = 0;
  this[DAT_0024bf68] = (ZombieCafe)0x0;
  *(undefined4 *)(this + iVar17 + 4) = 0xffffffff;
  CapcomDate::today((CapcomDate *)(&stack0x00000028 + iVar2));
  iVar17 = DAT_0024bf6c;
  memcpy(this + 0x8d0,&stack0x00000028 + iVar2,7);
  CapcomDate::today((CapcomDate *)(&stack0x00000030 + iVar2));
  memcpy(this + iVar17,&stack0x00000030 + iVar2,7);
  *(undefined4 *)(this + DAT_0024bf70 + 4) = 0xffffffff;
  CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000038 + iVar2),0);
  memcpy(this + DAT_0024bf74,&stack0x00000038 + iVar2,7);
  *(undefined4 *)(this + DAT_0024bf78) = 0;
  this[DAT_0024bf7c] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024bf80) = 0;
  CapcomDate::now((CapcomDate *)(&stack0x00000040 + iVar2));
  this[0x6e0] = *(ZombieCafe *)(&stack0x00000042 + iVar2);
  this[0x6e8] = (ZombieCafe)0x0;
  iVar17 = DAT_0024bf88;
  this[DAT_0024bf84] = (ZombieCafe)0x0;
  this[DAT_0024bf8c] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024bf90) = 0;
  this[0x6f0] = (ZombieCafe)0x0;
  this[DAT_0024bf94] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024bf98) = 0;
  *(undefined4 *)(this + iVar17 + 4) = 0xffffffff;
  iVar17 = DAT_0024bf9c;
  for (iVar13 = 0; iVar13 < (int)(uint)*(ushort *)(this + DAT_0024bfa4); iVar13 = iVar13 + 1) {
    iVar15 = *(int *)(iVar13 * 4 + *(int *)(this + iVar17));
    if (*(char *)(iVar15 + DAT_0024bfa0) != '\0') {
      Vector<bool>::addElement((Vector<bool> *)(this + DAT_0024bf88),*(int *)(iVar15 + 0xb20) == 0);
    }
  }
  *(undefined4 *)(this + 0x984) = 0xffffffff;
  iVar17 = DAT_0024bf9c;
  for (iVar13 = 0; iVar13 < (int)(uint)*(ushort *)(this + DAT_0024bfa4); iVar13 = iVar13 + 1) {
    if (*(char *)(*(int *)(iVar13 * 4 + *(int *)(this + iVar17)) + DAT_0024bfa0) != '\0') {
      Vector<bool>::addElement((Vector<bool> *)(this + 0x980),false);
    }
  }
  this_04 = (Vector<unsigned_char> *)(this + DAT_0024bfa8);
  *(undefined4 *)(this_04 + 4) = 0xffffffff;
  for (iVar17 = 0; iVar17 <= (int)(uint)(*(ushort *)(this + DAT_0024bfa4) >> 2); iVar17 = iVar17 + 1
      ) {
    Vector<unsigned_char>::addElement(this_04,'\0');
  }
  iVar5 = 0;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x48] = (ZombieCafe)0x0;
  iVar17 = *(int *)(iVar20 + DAT_0024bfac);
  iVar13 = *(int *)(iVar20 + DAT_0024bfb0);
  iVar15 = *(int *)(iVar20 + DAT_0024bfb4);
  do {
    *(undefined4 *)(iVar17 + iVar5) = 0xffffffff;
    *(undefined4 *)(iVar13 + iVar5) = 0;
    *(undefined4 *)(iVar15 + iVar5) = 0;
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0x10);
  this[0x49] = (ZombieCafe)0x0;
  *(undefined4 *)(this + 0x40) = 0;
  pQVar8 = (Quest *)operator_new(0x50);
  Quest::Quest(pQVar8);
  iVar17 = DAT_0024bfb8;
  *(Quest **)(this + 0x40) = pQVar8;
  psVar18 = *(short **)(iVar20 + iVar17);
  Quest::initQuestStates(pQVar8,(int)*psVar18);
  Quest::calEnableQuestCnt(*(Quest **)(this + 0x40));
  *puVar25 = psVar18;
  for (iVar17 = 0; iVar17 < *(short *)*puVar26; iVar17 = iVar17 + 1) {
    piVar4 = (int *)QuestData::getData(iVar17);
    Quest::checkQuestState(*(Quest **)(this + 0x40),*piVar4);
    piVar4 = (int *)QuestData::getData(iVar17);
    Quest::changedQuestState(*(Quest **)(this + 0x40),*piVar4,1,2);
  }
  for (iVar17 = 0; pQVar8 = *(Quest **)(this + 0x40), iVar17 < *(short *)*puVar28;
      iVar17 = iVar17 + 1) {
    puVar9 = (undefined4 *)QuestData::getData(iVar17);
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = *puVar9;
    Platform::getAppTime();
    Quest::addActiveQuest((int)pQVar8,*pdVar27);
  }
  Quest::adjustedActiveState(pQVar8);
  while (-1 < *(int *)(this + 0x6b4)) {
    pvVar7 = (void *)Vector<EarlyBirdSaleBuyTimer*>::removeElementAt
                               ((Vector<EarlyBirdSaleBuyTimer*> *)(this + 0x6b0),0);
    operator_delete(pvVar7);
  }
  **(undefined1 **)(iVar20 + DAT_0024c2b0) = 0;
  **(undefined4 **)(iVar20 + DAT_0024c2b4) = 0;
  *(undefined4 *)(this + DAT_0024c2b8) = 0;
  *(undefined4 *)(this + DAT_0024c2bc) = 0;
  *(undefined4 *)(this + 0xa40) = 0;
  *(undefined4 *)(this + 0xa50) = 0;
  setLockerPresentFlag(this);
  addLockerSize(this,10);
  this[DAT_0024c2c0] = (ZombieCafe)0x0;
  this[DAT_0024c2c4] = (ZombieCafe)0x0;
  *(undefined4 *)(this + DAT_0024c2c8) = 0;
  *(undefined4 *)(this + DAT_0024c2cc) = 0;
  *(undefined4 *)(this + 0xa60) = 0;
  *(undefined4 *)(this + DAT_0024c2d0) = 0;
  *(undefined4 *)(this + 0x788) = 0;
  iVar17 = 0x16;
  pZVar19 = this;
  do {
    iVar13 = arc4random();
    *(int *)(pZVar19 + 0x730) = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
    iVar13 = arc4random();
    iVar17 = iVar17 + -1;
    *(int *)(pZVar19 + DAT_0024c2d4) = iVar13 + (iVar13 >> 0x1f) ^ iVar13 >> 0x1f;
    pZVar19 = pZVar19 + 4;
  } while (iVar17 != 0);
  **(undefined1 **)(iVar20 + DAT_0024c2d8) = 0;
  **(undefined4 **)(iVar20 + DAT_0024c2dc) = 0;
  **(undefined1 **)(iVar20 + DAT_0024c2e0) = 0;
  **(undefined1 **)(iVar20 + DAT_0024c2e4) = 0;
  **(undefined1 **)(iVar20 + DAT_0024c2e8) = 0;
  *(undefined4 *)(this + DAT_0024c2ec) = 0;
  clearCollaboGiftInfo();
  CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000048 + iVar2),0);
  memcpy(this + DAT_0024c2f0,&stack0x00000048 + iVar2,7);
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
  pvVar7 = (void *)CCLocalNotifications::Init();
  CCLocalNotifications::DeleteAllNotes(pvVar7);
  CCLocalNotifications::Free(pvVar7);
  *(undefined4 *)(this + DAT_0024c2f4) = 0;
  *(undefined4 *)(this + 0x9c0) = 0;
  *(undefined4 *)(this + 0x990) = 0;
  this[DAT_0024c2f8] = (ZombieCafe)0x0;
  iVar17 = DAT_0024c2fc;
  CapcomDate::from1970Offset((CapcomDate *)(&stack0x00000050 + iVar2),0);
  memcpy(this + iVar17,&stack0x00000050 + iVar2,7);
  ObjectiveSystem::clear(*(ObjectiveSystem **)(this + DAT_0024c300));
  pcVar12 = (char *)(DAT_0024c308 + 0x24c122);
  *(undefined4 *)(this + 0x728) = **(undefined4 **)(iVar20 + DAT_0024c304);
  String::String((String *)(&stack0x00000058 + iVar2),pcVar12);
  pOVar10 = (OutputStream *)operator_new(0x14);
  SaveDataOutputStream::SaveDataOutputStream
            ((SaveDataOutputStream *)pOVar10,&stack0x00000058 + iVar2);
  String::~String((String *)(&stack0x00000058 + iVar2));
  serialize(this,pOVar10);
  (**(code **)(*(int *)pOVar10 + 8))(pOVar10);
  (**(code **)(*(int *)pOVar10 + 4))(pOVar10);
  pbVar3 = *(byte **)(iVar20 + DAT_0024c30c);
  for (iVar17 = 0; (int)(iVar17 + (uint)*pbVar3 * -2) < 0 != SBORROW4(iVar17,(uint)*pbVar3 * 2);
      iVar17 = iVar17 + 1) {
    snprintf(&stack0x00000080 + iVar2,0x100,(char *)(DAT_0024c310 + 0x24c16a),iVar17);
    String::String((String *)(&stack0x00000060 + iVar2),&stack0x00000080 + iVar2);
    pSVar11 = (SaveDataOutputStream *)operator_new(0x14);
    SaveDataOutputStream::SaveDataOutputStream(pSVar11,&stack0x00000060 + iVar2);
    String::~String((String *)(&stack0x00000060 + iVar2));
    (**(code **)(*(int *)pSVar11 + 0x10))(pSVar11,0);
    (**(code **)(*(int *)pSVar11 + 0x10))(pSVar11,0);
    (**(code **)(*(int *)pSVar11 + 8))(pSVar11);
    (**(code **)(*(int *)pSVar11 + 4))(pSVar11);
    snprintf(&stack0x00000180 + iVar2,0x100,(char *)(DAT_0024c314 + 0x24c1ba),iVar17);
    String::String((String *)(&stack0x00000068 + iVar2),&stack0x00000180 + iVar2);
    pSVar11 = (SaveDataOutputStream *)operator_new(0x14);
    SaveDataOutputStream::SaveDataOutputStream(pSVar11,&stack0x00000068 + iVar2);
    String::~String((String *)(&stack0x00000068 + iVar2));
    (**(code **)(*(int *)pSVar11 + 0x10))(pSVar11,0);
    (**(code **)(*(int *)pSVar11 + 0x10))(pSVar11,0);
    (**(code **)(*(int *)pSVar11 + 8))(pSVar11);
    (**(code **)(*(int *)pSVar11 + 4))(pSVar11);
    String::String((String *)(&stack0x00000070 + iVar2),(char *)(DAT_0024c318 + 0x24c208));
    CapcomDebug::print(&stack0x00000070 + iVar2);
    String::~String((String *)(&stack0x00000070 + iVar2));
  }
  String::String((String *)(&stack0x00000078 + iVar2),(char *)(DAT_0024c31c + 0x24c228));
  CapcomDebug::print(&stack0x00000078 + iVar2);
  String::~String((String *)(&stack0x00000078 + iVar2));
  L_PrintLog((char *)(DAT_0024c320 + 0x24c23e),(char *)(DAT_0024c324 + 0x24c240));
  if (*(int *)(&stack0x00000280 + iVar2) != **(int **)(iVar20 + DAT_0024c328)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


