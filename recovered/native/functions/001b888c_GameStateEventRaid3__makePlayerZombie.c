/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b888c GameStateEventRaid3::makePlayerZombie */

/* GameStateEventRaid3::makePlayerZombie() */

void __thiscall GameStateEventRaid3::makePlayerZombie(GameStateEventRaid3 *this)

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
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  CFPathFinder *pCVar16;
  CharacterInstance *pCVar17;
  code *pcVar18;
  int local_30;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  local_30 = 0;
  iVar12 = *(int *)(*(int *)(this + 0xc) + DAT_001b8a88 + 4);
  do {
    if (iVar12 + 1 <= local_30) {
      return;
    }
    piVar15 = *(int **)(local_30 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001b8a88 + 8));
    uVar1 = *(ushort *)(*piVar15 + DAT_001b8a8c);
    iVar4 = CharacterData::copy(*(CharacterData **)
                                 ((uint)uVar1 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001b8a90)));
    iVar5 = ZombieCafe::getSpecialAttackUnit(*(ZombieCafe **)(this + 0xc),(uint)uVar1);
    uVar10 = DAT_001b8aa4;
    uVar2 = DAT_001b8aa0;
    uVar7 = DAT_001b8a9c;
    iVar13 = DAT_001b8a98;
    if (iVar5 == 1) {
      *(short *)(iVar4 + DAT_001b8a94) = *(short *)(iVar4 + DAT_001b8a94) + 100;
      uVar6 = *(undefined4 *)(iVar4 + iVar13);
      uVar10 = uVar7;
LAB_001b8912:
      uVar7 = __addsf3(uVar6,uVar10);
      *(undefined4 *)(iVar4 + iVar13) = uVar7;
    }
    else {
      if (iVar5 == 2) {
        *(short *)(iVar4 + DAT_001b8a94) = *(short *)(iVar4 + DAT_001b8a94) + 500;
        uVar6 = *(undefined4 *)(iVar4 + iVar13);
        uVar10 = uVar2;
        goto LAB_001b8912;
      }
      if (iVar5 == 3) {
        *(short *)(iVar4 + DAT_001b8a94) = *(short *)(iVar4 + DAT_001b8a94) + 1000;
        uVar6 = *(undefined4 *)(iVar4 + iVar13);
        goto LAB_001b8912;
      }
    }
    String::String(aSStack_28,(char *)(DAT_001b8aa8 + 0x1b8922));
    pCVar8 = (Character *)operator_new(0x6c);
    Character::Character(pCVar8,iVar4,2,1,aSStack_28);
    pCVar16 = *(CFPathFinder **)(*(int *)(this + 0x84) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar8,pCVar16);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x128),this_00);
    pCVar17 = this_00 + 0x8c;
    String::~String(aSStack_28);
    *(int *)(*(int *)pCVar17 + 0x28) = piVar15[10];
    *(undefined1 *)(*(int *)pCVar17 + 0x36) = *(undefined1 *)((int)piVar15 + 0x36);
    iVar13 = 0;
    piVar11 = piVar15;
    do {
      iVar4 = iVar13 + 0x16;
      iVar13 = iVar13 + 1;
      *(int *)(iVar4 * 4 + *(int *)pCVar17) = piVar11[0x16];
      piVar11 = piVar11 + 1;
    } while (iVar13 != 5);
    iVar13 = *(int *)pCVar17;
    uVar7 = Character::getMaxEnergy();
    *(undefined4 *)(iVar13 + 0x40) = uVar7;
    iVar13 = *(int *)pCVar17;
    String::String(aSStack_20,(String *)(piVar15 + 2));
    String::operator=((String *)(iVar13 + 8),aSStack_20);
    pCVar17 = this_00 + 0x8c;
    String::~String(aSStack_20);
    *(int *)(*(int *)pCVar17 + 0x10) = piVar15[4];
    *(int *)(*(int *)pCVar17 + 0x14) = piVar15[5];
    *(int *)(*(int *)pCVar17 + 0x18) = piVar15[6];
    *(int *)(*(int *)pCVar17 + 0x1c) = piVar15[7];
    *(int *)(*(int *)pCVar17 + 0x20) = piVar15[8];
    uVar14 = **(int **)(DAT_001b8ab0 + 0x1b89f0) - 5;
    lVar9 = Cafe::diamondToStaggeredCoords
                      ((int)(uVar14 & 0xffff |
                            ((**(int **)(DAT_001b8aac + 0x1b89e6) + -4) - local_30) * 0x10000) >>
                       0x10,(int)(short)uVar14);
    sVar3 = Cafe::staggeredCoordsToIndex(lVar9);
    *(short *)(this_00 + 0x2c) = sVar3;
    pcVar18 = *(code **)(*(int *)this_00 + 0xc);
    uVar7 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x84),(int)sVar3);
    (*pcVar18)(this_00,uVar7);
    CharacterInstance::setCurrentAnimation(this_00,'\x01','\0',false);
    Cafe::addCafeObject(*(Cafe **)(this + 0x84),(CafeObject *)this_00);
    this_00[0x84] = (CharacterInstance)0x1;
    *(undefined1 *)(*(int *)pCVar17 + 0x44) = 0;
    *(int *)(*(int *)pCVar17 + 0x18) = *(int *)(*(int *)pCVar17 + 0x18) + 1;
    local_30 = local_30 + 1;
  } while( true );
}


