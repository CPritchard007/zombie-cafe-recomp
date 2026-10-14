/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001284ac GameStateCafe::EventGiftShowDialog */

/* GameStateCafe::EventGiftShowDialog() */

undefined4 __thiscall GameStateCafe::EventGiftShowDialog(GameStateCafe *this)

{
  short sVar1;
  int *piVar2;
  Character *pCVar3;
  CharacterInstance *this_00;
  long lVar4;
  MoveTask *this_01;
  undefined4 uVar5;
  String *this_02;
  int iVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  CFPathFinder *pCVar10;
  int *piVar11;
  int iVar12;
  NoticeDialog *pNVar13;
  int *piVar14;
  int iVar15;
  float fVar16;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  String aSStack_58 [8];
  CharacterData aCStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar15 = DAT_0012881c + 0x1284bc;
  if (*(char *)(*(int *)(this + 0x7c) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0x80) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0xd0) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0xd4) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0x8c) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0x90) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0x94) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0x9c) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0xa0) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0x134) + 0x14) != '\0') {
    return 0;
  }
  if ((*(int *)(this + 0x98) != 0) && (*(char *)(*(int *)(this + 0x98) + 0x14) != '\0')) {
    return 0;
  }
  if ((*(int *)(this + 0xd8) != 0) && (*(char *)(*(int *)(this + 0xd8) + 0x14) != '\0')) {
    return 0;
  }
  if ((*(int *)(this + 0xdc) != 0) && (*(char *)(*(int *)(this + 0xdc) + 0x14) != '\0')) {
    return 0;
  }
  if ((*(int *)(this + 0x120) != 0) && (*(char *)(*(int *)(this + 0x120) + 0x14) != '\0')) {
    return 0;
  }
  if ((*(int *)(this + 0x124) != 0) && (*(char *)(*(int *)(this + 0x124) + 0x14) != '\0')) {
    return 0;
  }
  if ((*(int *)(this + 0x128) != 0) && (*(char *)(*(int *)(this + 0x128) + 0x14) != '\0')) {
    return 0;
  }
  iVar6 = ZombieCafe::getGiftBoxZombieCount(*(ZombieCafe **)(this + 0xc));
  if (0 < iVar6) {
    iVar8 = *(int *)(this + 0xc);
    piVar2 = *(int **)(iVar15 + DAT_00128824);
    local_80 = 1;
    if (((int)*(short *)((*(int *)(iVar8 + 0x680) + -1) * 2 + *piVar2) <=
         *(int *)(iVar8 + DAT_00128820 + 4) + 1) &&
       (local_80 = 2, *(int *)(iVar8 + 0x5b8) <= *(int *)(iVar8 + 0x5a4) + 1)) {
      local_80 = 0;
    }
    local_84 = 0;
    pcVar9 = (char *)(DAT_00128828 + 0x128600);
    local_70 = 0;
    local_78 = 0;
    local_7c = 0;
    do {
      if (local_80 == 1) {
        if (*(int *)(*(int *)(this + 0xc) + DAT_00128820 + 4) + 1 <
            (int)*(short *)((*(int *)(*(int *)(this + 0xc) + 0x680) + -1) * 2 + *piVar2))
        goto LAB_0012864c;
LAB_00128946:
        local_70 = local_70 + 1;
      }
      else {
        if ((local_80 != 2) ||
           (*(int *)(*(int *)(this + 0xc) + 0x5b8) <= *(int *)(*(int *)(this + 0xc) + 0x5a4) + 1))
        goto LAB_00128946;
LAB_0012864c:
        iVar8 = ZombieCafe::getGiftBoxZombieFirst(*(ZombieCafe **)(this + 0xc));
        if (iVar8 != -1) {
          iVar12 = *(int *)(*(ZombieCafe **)(this + 0xc) + iVar8 * 0xc + 0x5cc);
          ZombieCafe::releaseGiftBoxZombie(*(ZombieCafe **)(this + 0xc),iVar8);
          if (local_80 == 1) {
            pCVar3 = (Character *)Cafe::createCustomer(*(int *)(*(int *)(this + 0xc) + 0x7e8));
            pCVar10 = *(CFPathFinder **)(*(int *)(*(int *)(this + 0xc) + 0x7e8) + 0x5c);
            this_00 = (CharacterInstance *)operator_new(0xdc);
            CharacterInstance::CharacterInstance(this_00,pCVar3,pCVar10);
            piVar14 = *(int **)(iVar15 + DAT_0012882c);
            piVar11 = *(int **)(iVar15 + DAT_00128834);
            piVar7 = *(int **)(iVar15 + DAT_00128830);
            lVar4 = Cafe::diamondToStaggeredCoords(*piVar14 + -1,*piVar11 + 1 + *piVar7);
            iVar8 = Cafe::staggeredCoordsToIndex(lVar4);
            lVar4 = Cafe::diamondToStaggeredCoords(*piVar14,*piVar11 + *piVar7);
            sVar1 = Cafe::staggeredCoordsToIndex(lVar4);
            CafeObject::setTileIndex
                      ((CafeObject *)this_00,sVar1,*(Cafe **)(*(int *)(this + 0xc) + 0x7e8));
            this_01 = (MoveTask *)operator_new(0x48);
            MoveTask::MoveTask(this_01,this_00,*(Cafe **)(this + 0x14),iVar8,'\0',false);
            local_7c = local_7c + 1;
            CharacterInstance::addTask(this_00,(Task *)this_01);
            Vector<CharacterInstance*>::addElement
                      ((Vector<CharacterInstance*> *)(this + 0x28),this_00);
            Cafe::addCafeObject(*(Cafe **)(this + 0x14),(CafeObject *)this_00);
            completeInfect((CharacterInstance *)this,(GameStateCafe *)this_00);
            pCVar3 = *(Character **)(this_00 + 0x8c);
            fVar16 = (float)Character::getMaxEnergy();
            Character::setCurrentEnergy(pCVar3,fVar16);
          }
          else {
            String::String(aSStack_58,pcVar9);
            pCVar3 = (Character *)operator_new(0x6c);
            Character::Character
                      (pCVar3,*(undefined4 *)
                               (iVar12 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00128838)),2,1,
                       aSStack_58);
            String::~String(aSStack_58);
            fVar16 = (float)Character::getMaxEnergy();
            Character::setCurrentEnergy(pCVar3,fVar16);
            CharacterData::getRandomName(aCStack_50,*(bool *)(*(int *)pCVar3 + DAT_0012883c),0);
            String::operator=((String *)(pCVar3 + 8),aCStack_50);
            local_78 = local_78 + 1;
            String::~String((String *)aCStack_50);
            Platform::getAppTime();
            uVar5 = __fixdfsi();
            pCVar3[4] = (Character)0x1;
            pCVar3[5] = (Character)0x2;
            *(undefined4 *)(pCVar3 + 0x10) = uVar5;
            ZombieCafe::putZombieInMeetlocker
                      (*(ZombieCafe **)(this + 0xc),pCVar3,*(PullMenuElement **)(this + 0xcc));
          }
        }
      }
      local_84 = local_84 + 1;
    } while (local_84 != iVar6);
    if ((local_7c + local_78 == 0) && (0 < local_70)) {
      pNVar13 = *(NoticeDialog **)(this + 0xd0);
      String::String(aSStack_48,(char *)(DAT_00128840 + 0x1287e8));
      Vector<String>::elementAt((int)aSStack_40);
      NoticeDialog::show(pNVar13,aSStack_48,aSStack_40,0,0);
      String::~String(aSStack_40);
      this_02 = aSStack_48;
    }
    else if (local_7c == 0) {
      if (local_78 == 0) {
        return 1;
      }
      ZombieCafe::save();
      pNVar13 = *(NoticeDialog **)(this + 0xd0);
      String::String(aSStack_28,(char *)(DAT_00128958 + 0x1288a6));
      Vector<String>::elementAt((int)aSStack_20);
      NoticeDialog::show(pNVar13,aSStack_28,aSStack_20,0,0);
      String::~String(aSStack_20);
      this_02 = aSStack_28;
    }
    else {
      ZombieCafe::save();
      pNVar13 = *(NoticeDialog **)(this + 0xd0);
      String::String(aSStack_38,(char *)(DAT_00128950 + 0x12885e));
      Vector<String>::elementAt((int)aSStack_30);
      NoticeDialog::show(pNVar13,aSStack_38,aSStack_30,0,0);
      String::~String(aSStack_30);
      this_02 = aSStack_38;
    }
    String::~String(this_02);
  }
  return 1;
}


