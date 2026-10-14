/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00139684 GameStateColosseum::makePlayerZombie */

/* GameStateColosseum::makePlayerZombie() */

void __thiscall GameStateColosseum::makePlayerZombie(GameStateColosseum *this)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  Character *pCVar4;
  CharacterInstance *this_00;
  undefined4 uVar5;
  short sVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  CFPathFinder *pCVar11;
  int *piVar12;
  code *pcVar13;
  CharacterInstance *pCVar14;
  int local_38;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar9 = *(int *)(*(int *)(this + 0xc) + DAT_00139878 + 4);
  pcVar7 = (char *)(DAT_0013987c + 0x13969a);
  local_38 = 0;
  do {
    if (iVar9 + 1 <= local_38) {
      return;
    }
    piVar12 = *(int **)(local_38 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00139878 + 8));
    uVar1 = *(ushort *)(*piVar12 + DAT_00139880);
    iVar2 = CharacterData::copy(*(CharacterData **)
                                 ((uint)uVar1 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00139884)));
    iVar3 = ZombieCafe::getSpecialAttackUnit(*(ZombieCafe **)(this + 0xc),(uint)uVar1);
    if (iVar3 == 1) {
      sVar6 = *(short *)(iVar2 + DAT_00139888) + 100;
LAB_001396f4:
      *(short *)(iVar2 + DAT_00139888) = sVar6;
    }
    else {
      if (iVar3 == 2) {
        sVar6 = *(short *)(iVar2 + DAT_00139888) + 500;
        goto LAB_001396f4;
      }
      if (iVar3 == 3) {
        sVar6 = *(short *)(iVar2 + DAT_00139888) + 1000;
        goto LAB_001396f4;
      }
    }
    *(short *)(iVar2 + DAT_0013988c) = *(short *)(iVar2 + DAT_0013988c) + 100;
    String::String(aSStack_28,pcVar7);
    pCVar4 = (Character *)operator_new(0x6c);
    Character::Character(pCVar4,iVar2,2,1,aSStack_28);
    pCVar11 = *(CFPathFinder **)(*(int *)(this + 0x70) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar4,pCVar11);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x114),this_00);
    String::~String(aSStack_28);
    pCVar14 = this_00 + 0x8c;
    *(int *)(*(int *)pCVar14 + 0x28) = piVar12[10];
    *(undefined1 *)(*(int *)pCVar14 + 0x36) = *(undefined1 *)((int)piVar12 + 0x36);
    iVar2 = 0;
    piVar8 = piVar12;
    do {
      iVar3 = iVar2 + 0x16;
      iVar2 = iVar2 + 1;
      *(int *)(iVar3 * 4 + *(int *)pCVar14) = piVar8[0x16];
      piVar8 = piVar8 + 1;
    } while (iVar2 != 5);
    iVar2 = *(int *)pCVar14;
    uVar5 = Character::getMaxEnergy();
    *(undefined4 *)(iVar2 + 0x40) = uVar5;
    iVar2 = *(int *)pCVar14;
    String::String(aSStack_20,(String *)(piVar12 + 2));
    String::operator=((String *)(iVar2 + 8),aSStack_20);
    String::~String(aSStack_20);
    pCVar14 = this_00 + 0x8c;
    *(int *)(*(int *)pCVar14 + 0x10) = piVar12[4];
    *(int *)(*(int *)pCVar14 + 0x14) = piVar12[5];
    *(int *)(*(int *)pCVar14 + 0x18) = piVar12[6];
    *(int *)(*(int *)pCVar14 + 0x1c) = piVar12[7];
    *(int *)(*(int *)pCVar14 + 0x20) = piVar12[8];
    uVar10 = **(int **)(DAT_00139894 + 0x1397d4) - 5;
    uVar5 = Cafe::diamondToStaggeredCoords
                      ((int)(uVar10 & 0xffff |
                            ((**(int **)(DAT_00139890 + 0x1397c4) + -4) - local_38) * 0x10000) >>
                       0x10,(int)(short)uVar10);
    sVar6 = (short)((uint)uVar5 >> 0x10) +
            (short)uVar5 * (short)**(undefined4 **)(DAT_00139898 + 0x1397f2);
    *(short *)(this_00 + 0x2c) = sVar6;
    pcVar13 = *(code **)(*(int *)this_00 + 0xc);
    uVar5 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x70),(int)sVar6);
    (*pcVar13)(this_00,uVar5);
    CharacterInstance::setCurrentAnimation(this_00,'\x01','\0',false);
    Cafe::addCafeObject(*(Cafe **)(this + 0x70),(CafeObject *)this_00);
    this_00[0x84] = (CharacterInstance)0x1;
    local_38 = local_38 + 1;
    *(undefined1 *)(*(int *)pCVar14 + 0x44) = 0;
    *(int *)(*(int *)pCVar14 + 0x18) = *(int *)(*(int *)pCVar14 + 0x18) + 1;
  } while( true );
}


