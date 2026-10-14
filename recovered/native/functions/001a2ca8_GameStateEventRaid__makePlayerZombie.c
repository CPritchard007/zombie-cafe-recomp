/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a2ca8 GameStateEventRaid::makePlayerZombie */

/* GameStateEventRaid::makePlayerZombie() */

void __thiscall GameStateEventRaid::makePlayerZombie(GameStateEventRaid *this)

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
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  Character *this_01;
  code *pcVar15;
  CFPathFinder *pCVar16;
  CharacterInstance *pCVar17;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar10 = 0;
  iVar12 = *(int *)(*(int *)(this + 0xc) + DAT_001a2eb0 + 4);
  do {
    if (iVar12 + 1 <= iVar10) {
      return;
    }
    this_01 = *(Character **)(iVar10 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001a2eb0 + 8));
    uVar1 = *(ushort *)(*(int *)this_01 + DAT_001a2eb4);
    iVar4 = CharacterData::copy(*(CharacterData **)
                                 ((uint)uVar1 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001a2eb8)));
    iVar5 = ZombieCafe::getSpecialAttackUnit(*(ZombieCafe **)(this + 0xc),(uint)uVar1);
    uVar11 = DAT_001a2ed0;
    uVar2 = DAT_001a2ec8;
    uVar7 = DAT_001a2ec4;
    iVar13 = DAT_001a2ec0;
    if (iVar5 == 1) {
      *(short *)(iVar4 + DAT_001a2ebc) = *(short *)(iVar4 + DAT_001a2ebc) + 100;
      uVar6 = *(undefined4 *)(iVar4 + iVar13);
      uVar11 = uVar7;
LAB_001a2d34:
      uVar7 = __addsf3(uVar6,uVar11);
      *(undefined4 *)(iVar4 + iVar13) = uVar7;
    }
    else {
      if (iVar5 == 2) {
        *(short *)(iVar4 + DAT_001a2ebc) = *(short *)(iVar4 + DAT_001a2ebc) + 0xfa;
        *(short *)(iVar4 + DAT_001a2ecc) = *(short *)(iVar4 + DAT_001a2ecc) + 0x32;
        uVar6 = *(undefined4 *)(iVar4 + iVar13);
        uVar11 = uVar2;
        goto LAB_001a2d34;
      }
      if (iVar5 == 3) {
        *(short *)(iVar4 + DAT_001a2ebc) = *(short *)(iVar4 + DAT_001a2ebc) + 500;
        *(short *)(iVar4 + DAT_001a2ecc) = *(short *)(iVar4 + DAT_001a2ecc) + 100;
        uVar6 = *(undefined4 *)(iVar4 + iVar13);
        goto LAB_001a2d34;
      }
    }
    String::String(aSStack_28,(char *)(DAT_001a2ed4 + 0x1a2d42));
    pCVar8 = (Character *)operator_new(0x6c);
    Character::Character(pCVar8,iVar4,2,1,aSStack_28);
    pCVar16 = *(CFPathFinder **)(*(int *)(this + 0x5c) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar8,pCVar16);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0xfc),this_00);
    String::~String(aSStack_28);
    pCVar17 = this_00 + 0x8c;
    *(undefined4 *)(*(int *)pCVar17 + 0x28) = *(undefined4 *)(this_01 + 0x28);
    *(Character *)(*(int *)pCVar17 + 0x36) = this_01[0x36];
    iVar13 = 0;
    pCVar8 = this_01;
    do {
      iVar4 = iVar13 + 0x16;
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar4 * 4 + *(int *)pCVar17) = *(undefined4 *)(pCVar8 + 0x58);
      pCVar8 = pCVar8 + 4;
    } while (iVar13 != 5);
    iVar13 = *(int *)pCVar17;
    uVar7 = Character::getSameZombiePowerupNum(this_01);
    *(undefined4 *)(iVar13 + 0x30) = uVar7;
    iVar13 = *(int *)pCVar17;
    uVar7 = Character::getMaxEnergy();
    *(undefined4 *)(iVar13 + 0x40) = uVar7;
    iVar13 = *(int *)pCVar17;
    String::String(aSStack_20,(String *)(this_01 + 8));
    String::operator=((String *)(iVar13 + 8),aSStack_20);
    String::~String(aSStack_20);
    pCVar17 = this_00 + 0x8c;
    *(undefined4 *)(*(int *)pCVar17 + 0x10) = *(undefined4 *)(this_01 + 0x10);
    *(undefined4 *)(*(int *)pCVar17 + 0x14) = *(undefined4 *)(this_01 + 0x14);
    *(undefined4 *)(*(int *)pCVar17 + 0x18) = *(undefined4 *)(this_01 + 0x18);
    *(undefined4 *)(*(int *)pCVar17 + 0x1c) = *(undefined4 *)(this_01 + 0x1c);
    *(undefined4 *)(*(int *)pCVar17 + 0x20) = *(undefined4 *)(this_01 + 0x20);
    uVar14 = **(int **)(DAT_001a2edc + 0x1a2e16) - 5;
    lVar9 = Cafe::diamondToStaggeredCoords
                      ((int)(uVar14 & 0xffff |
                            ((**(int **)(DAT_001a2ed8 + 0x1a2e0c) + -4) - iVar10) * 0x10000) >> 0x10
                       ,(int)(short)uVar14);
    sVar3 = Cafe::staggeredCoordsToIndex(lVar9);
    *(short *)(this_00 + 0x2c) = sVar3;
    pcVar15 = *(code **)(*(int *)this_00 + 0xc);
    uVar7 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x5c),(int)sVar3);
    (*pcVar15)(this_00,uVar7);
    CharacterInstance::setCurrentAnimation(this_00,'\x01','\0',false);
    Cafe::addCafeObject(*(Cafe **)(this + 0x5c),(CafeObject *)this_00);
    this_00[0x84] = (CharacterInstance)0x1;
    iVar10 = iVar10 + 1;
    *(undefined1 *)(*(int *)pCVar17 + 0x44) = 0;
    *(int *)(*(int *)pCVar17 + 0x18) = *(int *)(*(int *)pCVar17 + 0x18) + 1;
  } while( true );
}


