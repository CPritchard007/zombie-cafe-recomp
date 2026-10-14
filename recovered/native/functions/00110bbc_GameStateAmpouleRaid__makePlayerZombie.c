/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00110bbc GameStateAmpouleRaid::makePlayerZombie */

/* GameStateAmpouleRaid::makePlayerZombie() */

void __thiscall GameStateAmpouleRaid::makePlayerZombie(GameStateAmpouleRaid *this)

{
  short sVar1;
  undefined4 uVar2;
  Character *pCVar3;
  CharacterInstance *this_00;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CFPathFinder *pCVar9;
  int iVar10;
  int *piVar11;
  code *pcVar12;
  CharacterInstance *pCVar13;
  int local_34;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar6 = *(int *)(*(int *)(this + 0xc) + DAT_00110d74 + 4);
  pcVar4 = (char *)(DAT_00110d78 + 0x110bd2);
  local_34 = 0;
  while (local_34 < iVar6 + 1) {
    piVar11 = *(int **)(local_34 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00110d74 + 8));
    uVar2 = CharacterData::copy(*(CharacterData **)
                                 ((uint)*(ushort *)(*piVar11 + DAT_00110d7c) * 4 +
                                 *(int *)(*(int *)(this + 0xc) + DAT_00110d80)));
    String::String(aSStack_28,pcVar4);
    pCVar3 = (Character *)operator_new(0x6c);
    Character::Character(pCVar3,uVar2,2,1,aSStack_28);
    pCVar9 = *(CFPathFinder **)(*(int *)(this + 100) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar3,pCVar9);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x100),this_00);
    String::~String(aSStack_28);
    pCVar13 = this_00 + 0x8c;
    *(int *)(*(int *)pCVar13 + 0x28) = piVar11[10];
    *(undefined1 *)(*(int *)pCVar13 + 0x36) = *(undefined1 *)((int)piVar11 + 0x36);
    iVar7 = 0;
    piVar5 = piVar11;
    do {
      iVar10 = iVar7 + 0x16;
      iVar7 = iVar7 + 1;
      *(int *)(iVar10 * 4 + *(int *)pCVar13) = piVar5[0x16];
      piVar5 = piVar5 + 1;
    } while (iVar7 != 5);
    iVar7 = *(int *)pCVar13;
    uVar2 = Character::getMaxEnergy();
    *(undefined4 *)(iVar7 + 0x40) = uVar2;
    iVar7 = *(int *)pCVar13;
    String::String(aSStack_20,(String *)(piVar11 + 2));
    String::operator=((String *)(iVar7 + 8),aSStack_20);
    String::~String(aSStack_20);
    pCVar13 = this_00 + 0x8c;
    *(int *)(*(int *)pCVar13 + 0x10) = piVar11[4];
    *(int *)(*(int *)pCVar13 + 0x14) = piVar11[5];
    *(int *)(*(int *)pCVar13 + 0x18) = piVar11[6];
    *(int *)(*(int *)pCVar13 + 0x1c) = piVar11[7];
    *(int *)(*(int *)pCVar13 + 0x20) = piVar11[8];
    uVar8 = **(int **)(DAT_00110d88 + 0x110ccc) - 5;
    uVar2 = Cafe::diamondToStaggeredCoords
                      ((int)(uVar8 & 0xffff |
                            ((**(int **)(DAT_00110d84 + 0x110cc2) + -4) - local_34) * 0x10000) >>
                       0x10,(int)(short)uVar8);
    sVar1 = (short)((uint)uVar2 >> 0x10) +
            (short)uVar2 * (short)**(undefined4 **)(DAT_00110d8c + 0x110cee);
    *(short *)(this_00 + 0x2c) = sVar1;
    pcVar12 = *(code **)(*(int *)this_00 + 0xc);
    uVar2 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 100),(int)sVar1);
    (*pcVar12)(this_00,uVar2);
    CharacterInstance::setCurrentAnimation(this_00,'\x01','\0',false);
    Cafe::addCafeObject(*(Cafe **)(this + 100),(CafeObject *)this_00);
    this_00[0x84] = (CharacterInstance)0x1;
    local_34 = local_34 + 1;
    *(undefined1 *)(*(int *)pCVar13 + 0x44) = 0;
    *(int *)(*(int *)pCVar13 + 0x18) = *(int *)(*(int *)pCVar13 + 0x18) + 1;
  }
  return;
}


