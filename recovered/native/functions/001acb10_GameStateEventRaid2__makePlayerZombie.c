/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001acb10 GameStateEventRaid2::makePlayerZombie */

/* GameStateEventRaid2::makePlayerZombie() */

void __thiscall GameStateEventRaid2::makePlayerZombie(GameStateEventRaid2 *this)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Character *pCVar8;
  CharacterInstance *this_00;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  Character *this_01;
  CFPathFinder *pCVar14;
  CharacterInstance *pCVar15;
  code *pcVar16;
  int local_30;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  local_30 = 0;
  iVar11 = *(int *)(*(int *)(this + 0xc) + DAT_001acd14 + 4);
  do {
    if (iVar11 + 1 <= local_30) {
      return;
    }
    this_01 = *(Character **)(local_30 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001acd14 + 8));
    uVar1 = *(ushort *)(*(int *)this_01 + DAT_001acd18);
    iVar4 = CharacterData::copy(*(CharacterData **)
                                 ((uint)uVar1 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001acd1c)));
    iVar5 = ZombieCafe::getSpecialAttackUnit(*(ZombieCafe **)(this + 0xc),(uint)uVar1);
    uVar10 = DAT_001acd30;
    uVar2 = DAT_001acd2c;
    uVar7 = DAT_001acd28;
    iVar13 = DAT_001acd24;
    if (iVar5 == 1) {
      *(short *)(iVar4 + DAT_001acd20) = *(short *)(iVar4 + DAT_001acd20) + 100;
      uVar6 = *(undefined4 *)(iVar4 + iVar13);
      uVar10 = uVar7;
LAB_001acb92:
      uVar7 = __addsf3(uVar6,uVar10);
      *(undefined4 *)(iVar4 + iVar13) = uVar7;
    }
    else {
      if (iVar5 == 2) {
        *(short *)(iVar4 + DAT_001acd20) = *(short *)(iVar4 + DAT_001acd20) + 200;
        uVar6 = *(undefined4 *)(iVar4 + iVar13);
        uVar10 = uVar2;
        goto LAB_001acb92;
      }
      if (iVar5 == 3) {
        *(short *)(iVar4 + DAT_001acd20) = *(short *)(iVar4 + DAT_001acd20) + 400;
        uVar6 = *(undefined4 *)(iVar4 + iVar13);
        goto LAB_001acb92;
      }
    }
    String::String(aSStack_28,(char *)(DAT_001acd34 + 0x1acba2));
    pCVar8 = (Character *)operator_new(0x6c);
    Character::Character(pCVar8,iVar4,2,1,aSStack_28);
    pCVar14 = *(CFPathFinder **)(*(int *)(this + 0x80) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar8,pCVar14);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x11c),this_00);
    pCVar15 = this_00 + 0x8c;
    String::~String(aSStack_28);
    *(undefined4 *)(*(int *)pCVar15 + 0x28) = *(undefined4 *)(this_01 + 0x28);
    *(Character *)(*(int *)pCVar15 + 0x36) = this_01[0x36];
    iVar13 = *(int *)pCVar15;
    uVar7 = Character::getSameZombiePowerupNum(this_01);
    *(undefined4 *)(iVar13 + 0x30) = uVar7;
    iVar13 = 0;
    pCVar8 = this_01;
    do {
      iVar4 = iVar13 + 0x16;
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar4 * 4 + *(int *)pCVar15) = *(undefined4 *)(pCVar8 + 0x58);
      pCVar8 = pCVar8 + 4;
    } while (iVar13 != 5);
    iVar13 = *(int *)pCVar15;
    uVar7 = Character::getMaxEnergy();
    *(undefined4 *)(iVar13 + 0x40) = uVar7;
    iVar13 = *(int *)pCVar15;
    String::String(aSStack_20,(String *)(this_01 + 8));
    String::operator=((String *)(iVar13 + 8),aSStack_20);
    pCVar15 = this_00 + 0x8c;
    String::~String(aSStack_20);
    *(undefined4 *)(*(int *)pCVar15 + 0x10) = *(undefined4 *)(this_01 + 0x10);
    *(undefined4 *)(*(int *)pCVar15 + 0x14) = *(undefined4 *)(this_01 + 0x14);
    *(undefined4 *)(*(int *)pCVar15 + 0x18) = *(undefined4 *)(this_01 + 0x18);
    *(undefined4 *)(*(int *)pCVar15 + 0x1c) = *(undefined4 *)(this_01 + 0x1c);
    *(undefined4 *)(*(int *)pCVar15 + 0x20) = *(undefined4 *)(this_01 + 0x20);
    uVar12 = **(int **)(DAT_001acd3c + 0x1acc7a) - 5;
    lVar9 = Cafe::diamondToStaggeredCoords
                      ((int)(uVar12 & 0xffff |
                            ((**(int **)(DAT_001acd38 + 0x1acc70) + -4) - local_30) * 0x10000) >>
                       0x10,(int)(short)uVar12);
    sVar3 = Cafe::staggeredCoordsToIndex(lVar9);
    *(short *)(this_00 + 0x2c) = sVar3;
    pcVar16 = *(code **)(*(int *)this_00 + 0xc);
    uVar7 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x80),(int)sVar3);
    (*pcVar16)(this_00,uVar7);
    CharacterInstance::setCurrentAnimation(this_00,'\x01','\0',false);
    Cafe::addCafeObject(*(Cafe **)(this + 0x80),(CafeObject *)this_00);
    this_00[0x84] = (CharacterInstance)0x1;
    *(undefined1 *)(*(int *)pCVar15 + 0x44) = 0;
    *(int *)(*(int *)pCVar15 + 0x18) = *(int *)(*(int *)pCVar15 + 0x18) + 1;
    local_30 = local_30 + 1;
  } while( true );
}


