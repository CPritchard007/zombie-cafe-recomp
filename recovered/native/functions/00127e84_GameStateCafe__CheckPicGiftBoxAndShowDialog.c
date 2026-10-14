/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00127e84 GameStateCafe::CheckPicGiftBoxAndShowDialog */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00127fb0) */
/* WARNING: Removing unreachable block (ram,0x00127fb0) */
/* GameStateCafe::CheckPicGiftBoxAndShowDialog() */

int __thiscall GameStateCafe::CheckPicGiftBoxAndShowDialog(GameStateCafe *this)

{
  short sVar1;
  CharacterInstance *this_00;
  long lVar2;
  MoveTask *this_01;
  Character *pCVar3;
  undefined4 uVar4;
  Vector<PicGiftBoxInfo*> *this_02;
  String *this_03;
  int iVar5;
  int iVar6;
  int iVar7;
  CFPathFinder *pCVar8;
  int *piVar9;
  ZombieCafe *this_04;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  NoticeDialog *pNVar13;
  int iVar14;
  int *piVar15;
  float fVar16;
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  CharacterData aCStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar11 = DAT_0012814c + 0x127e92;
  if (*(char *)(*(int *)(this + 0x7c) + 0x14) != '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(this + 0x80) + 0x14) != '\0') {
    return 0;
  }
  if ((*(int *)(this + 0x138) != 0) && (*(char *)(*(int *)(this + 0x138) + 0x14) != '\0')) {
    return 0;
  }
  if ((*(int *)(this + 300) != 0) && (*(char *)(*(int *)(this + 300) + 0x14) != '\0')) {
    return 0;
  }
  pNVar13 = *(NoticeDialog **)(this + 0xd0);
  if (pNVar13[0x14] != (NoticeDialog)0x0) {
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
  this_04 = *(ZombieCafe **)(this + 0xc);
  if (*(int *)(this_04 + 0x674) < 0) {
    return 0;
  }
  puVar10 = (undefined4 *)**(undefined4 **)(this_04 + 0x678);
  switch(*puVar10) {
  case 4:
    iVar11 = 5;
    break;
  case 5:
    iVar11 = 10;
    goto LAB_00128280;
  case 6:
    iVar11 = 0x19;
    break;
  case 7:
    iVar11 = 100;
    goto LAB_00128280;
  case 8:
    iVar11 = 1;
LAB_00128280:
    ZombieCafe::addToxin(this_04,iVar11,false);
LAB_00128210:
    MakePicGiftDialog(this,(PicGiftBoxInfo *)**(undefined4 **)(*(int *)(this + 0xc) + 0x678));
    this_02 = (Vector<PicGiftBoxInfo*> *)(*(int *)(this + 0xc) + 0x670);
    goto LAB_0012822a;
  default:
LAB_001283d2:
    Vector<PicGiftBoxInfo*>::removeElementAt((Vector<PicGiftBoxInfo*> *)(this_04 + 0x670),0);
    ZombieCafe::save();
    return 0;
  case 0xc:
  case 0x11:
  case 0x13:
    iVar6 = 1;
    if ((int)*(short *)((*(int *)(this_04 + 0x680) + -1) * 2 + **(int **)(iVar11 + DAT_00128154)) <=
        *(int *)(this_04 + DAT_00128150 + 4) + 1) {
      if (*(int *)(this_04 + 0x5b8) <= *(int *)(this_04 + 0x5a4) + 1) {
        String::String(aSStack_70,(char *)(DAT_001284a8 + 0x12846e));
        Vector<String>::elementAt((int)aSStack_68);
        NoticeDialog::show(pNVar13,aSStack_70,aSStack_68,0,0);
        String::~String(aSStack_68);
        this_03 = aSStack_70;
LAB_0012838e:
        String::~String(this_03);
        return 2;
      }
      iVar6 = 2;
    }
    iVar7 = puVar10[1];
    iVar5 = puVar10[2];
    iVar14 = puVar10[3];
    if (iVar6 == 1) {
      pCVar3 = (Character *)Cafe::createCustomer(*(int *)(this_04 + 0x7e8));
      pCVar8 = *(CFPathFinder **)(*(int *)(*(int *)(this + 0xc) + 0x7e8) + 0x5c);
      this_00 = (CharacterInstance *)operator_new(0xdc);
      CharacterInstance::CharacterInstance(this_00,pCVar3,pCVar8);
      iVar6 = *(int *)(DAT_00128158 + (uint)*(byte *)(**(int **)(this_00 + 0x8c) + 0xb40) * 4 +
                      0x1280b6);
      if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
      (*(int **)(this_00 + 0x8c))[10] = iVar6;
      if (3 < iVar14) {
        iVar14 = 4;
      }
      *(int *)(*(int *)(this_00 + 0x8c) + 0x30) = iVar14;
      piVar15 = *(int **)(iVar11 + DAT_0012815c);
      piVar9 = *(int **)(iVar11 + DAT_00128160);
      piVar12 = *(int **)(iVar11 + DAT_00128164);
      lVar2 = Cafe::diamondToStaggeredCoords(*piVar15 + -1,*piVar9 + 1 + *piVar12);
      iVar11 = Cafe::staggeredCoordsToIndex(lVar2);
      lVar2 = Cafe::diamondToStaggeredCoords(*piVar15,*piVar9 + *piVar12);
      sVar1 = Cafe::staggeredCoordsToIndex(lVar2);
      CafeObject::setTileIndex((CafeObject *)this_00,sVar1,*(Cafe **)(*(int *)(this + 0xc) + 0x7e8))
      ;
      this_01 = (MoveTask *)operator_new(0x48);
      MoveTask::MoveTask(this_01,this_00,*(Cafe **)(this + 0x14),iVar11,'\0',false);
      CharacterInstance::addTask(this_00,(Task *)this_01);
      Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x28),this_00);
      Cafe::addCafeObject(*(Cafe **)(this + 0x14),(CafeObject *)this_00);
      completeInfect((CharacterInstance *)this,(GameStateCafe *)this_00);
      pCVar3 = *(Character **)(this_00 + 0x8c);
      fVar16 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy(pCVar3,fVar16);
      MakePicGiftDialog(this,(PicGiftBoxInfo *)**(undefined4 **)(*(int *)(this + 0xc) + 0x678));
      this_02 = (Vector<PicGiftBoxInfo*> *)(*(int *)(this + 0xc) + 0x670);
      goto LAB_0012822a;
    }
    String::String(aSStack_60,(char *)(DAT_00128488 + 0x128170));
    pCVar3 = (Character *)operator_new(0x6c);
    Character::Character
              (pCVar3,*(undefined4 *)(iVar7 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_0012848c)),2,1
               ,aSStack_60);
    String::~String(aSStack_60);
    iVar11 = *(int *)(DAT_00128490 + (uint)*(byte *)(*(int *)pCVar3 + 0xb40) * 4 + 0x1281e0);
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
    *(int *)(pCVar3 + 0x28) = iVar11;
    if (3 < iVar14) {
      iVar14 = 4;
    }
    *(int *)(pCVar3 + 0x30) = iVar14;
    fVar16 = (float)Character::getMaxEnergy();
    Character::setCurrentEnergy(pCVar3,fVar16);
    CharacterData::getRandomName(aCStack_58,*(bool *)(*(int *)pCVar3 + DAT_00128494),0);
    String::operator=((String *)(pCVar3 + 8),aCStack_58);
    String::~String((String *)aCStack_58);
    Platform::getAppTime();
    uVar4 = __fixdfsi();
    *(undefined4 *)(pCVar3 + 0x10) = uVar4;
    pCVar3[4] = (Character)0x1;
    pCVar3[5] = (Character)0x2;
    ZombieCafe::putZombieInMeetlocker(*(ZombieCafe **)(this + 0xc),pCVar3,(PullMenuElement *)0x0);
    goto LAB_001282b4;
  case 0xd:
  case 0x14:
    ZombieCafe::addCash(this_04,puVar10[2]);
    goto LAB_00128210;
  case 0xe:
  case 0x16:
    ZombieCafe::addXp(this_04,puVar10[2]);
    goto LAB_00128254;
  case 0xf:
  case 0x18:
    iVar5 = CheckCanFoodGiftReceived((int)this,puVar10[1],puVar10[3]);
    iVar6 = *(int *)(this + 0xc);
    iVar11 = iVar5;
    if (iVar5 == 0) goto LAB_001282d0;
    iVar11 = **(int **)(iVar6 + 0x678);
    ExecuteFoodGiftReceived(this,*(int *)(iVar11 + 4),*(int *)(iVar11 + 0xc),*(int *)(iVar11 + 8));
    goto LAB_00128254;
  case 0x10:
  case 0x17:
    iVar11 = CheckCanFurnitureGiftReceived(this,puVar10[1],puVar10[2]);
    this_04 = *(ZombieCafe **)(this + 0xc);
    if (iVar11 != 1) {
      if (iVar11 == 2) {
        pNVar13 = *(NoticeDialog **)(this + 0xd0);
        String::String(aSStack_50,
                       (String *)
                       (*(int *)(*(int *)(**(int **)(this_04 + 0x678) + 4) * 4 +
                                *(int *)(*(int *)(this + 0x14) + 0x94)) + 0x2c));
        operator+(aSStack_48,DAT_00128498 + 0x12830e,aSStack_50);
        String::operator+(aSStack_40,(char *)aSStack_48);
        String::valueOf((int)aSStack_38);
        String::operator+(aSStack_30,aSStack_40,aSStack_38);
        String::operator+(aSStack_28,(char *)aSStack_30);
        Vector<String>::elementAt((int)aSStack_20);
        NoticeDialog::show(pNVar13,aSStack_28,aSStack_20,0,0);
        String::~String(aSStack_20);
        String::~String(aSStack_28);
        String::~String(aSStack_30);
        String::~String(aSStack_38);
        String::~String(aSStack_40);
        String::~String(aSStack_48);
        this_03 = aSStack_50;
        goto LAB_0012838e;
      }
      goto LAB_001283d2;
    }
    ExecuteFurnitureGiftReceived
              (this,*(int *)(**(int **)(this_04 + 0x678) + 4),
               *(int *)(**(int **)(this_04 + 0x678) + 8));
LAB_001282b4:
    iVar11 = 1;
    MakePicGiftDialog(this,(PicGiftBoxInfo *)**(undefined4 **)(*(int *)(this + 0xc) + 0x678));
    iVar6 = *(int *)(this + 0xc);
    iVar5 = 0;
LAB_001282d0:
    Vector<PicGiftBoxInfo*>::removeElementAt((Vector<PicGiftBoxInfo*> *)(iVar6 + 0x670),iVar5);
    ZombieCafe::save();
    return iVar11;
  case 0x12:
  case 0x15:
    iVar11 = puVar10[2];
  }
  ZombieCafe::addToxin(this_04,iVar11,false);
LAB_00128254:
  MakePicGiftDialog(this,(PicGiftBoxInfo *)**(undefined4 **)(*(int *)(this + 0xc) + 0x678));
  this_02 = (Vector<PicGiftBoxInfo*> *)(*(int *)(this + 0xc) + 0x670);
LAB_0012822a:
  Vector<PicGiftBoxInfo*>::removeElementAt(this_02,0);
  ZombieCafe::save();
  return 1;
}


