/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00138860 GameStateColosseum::makeEnemyZombie */

/* GameStateColosseum::makeEnemyZombie(bool) */

void __thiscall GameStateColosseum::makeEnemyZombie(GameStateColosseum *this,bool param_1)

{
  short sVar1;
  bool bVar2;
  Character *pCVar3;
  CharacterInstance *this_00;
  undefined4 uVar4;
  SpawnTask *this_01;
  uint uVar5;
  int extraout_r1;
  char *pcVar6;
  CFPathFinder *pCVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  code *pcVar11;
  int *piVar12;
  int iVar13;
  CharacterInstance *pCVar14;
  float fVar15;
  String aSStack_88 [8];
  CharacterData aCStack_80 [8];
  int local_78 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar8 = DAT_00138ad8 + 0x138872;
  if (*(int *)(this + 0x10c) < 9) {
    iVar9 = *(int *)(this + 0x5c);
    if ((iVar9 == 0) || (__aeabi_idivmod(iVar9,0x14), extraout_r1 != 0)) {
      iVar9 = CapcomMath::random(100);
      if (iVar9 == 0) {
        iVar9 = CapcomMath::random(2);
        piVar12 = (int *)(DAT_00138adc + iVar9 * 0x20 + 0x138918);
        bVar2 = false;
      }
      else {
        iVar9 = getColosseumLevel(this);
        bVar2 = false;
        piVar12 = *(int **)(iVar9 * 4 + *(int *)(iVar8 + DAT_00138ae0));
        iVar9 = CapcomMath::random(*piVar12);
        piVar12 = piVar12 + iVar9 * 8 + 1;
      }
    }
    else {
      iVar13 = *(int *)(*(int *)(*(int *)(iVar8 + DAT_00138b0c) + 0x88) * 4 +
                       *(int *)(iVar8 + DAT_00138b10));
      iVar9 = __divsi3(iVar9,0x14);
      uVar5 = iVar9 - 1;
      if (8 < (int)uVar5) {
        uVar5 = (uVar5 & 7) + 8;
      }
      piVar12 = (int *)(iVar13 + uVar5 * 0x20);
      bVar2 = true;
    }
    iVar13 = *piVar12;
    iVar9 = CharacterData::copy(*(CharacterData **)
                                 (piVar12[1] * 4 + *(int *)(*(int *)(this + 0xc) + DAT_00138ae4)));
    pcVar6 = (char *)(DAT_00138aec + 0x1388fc);
    *(short *)(iVar9 + DAT_00138ae8) = *(short *)(iVar9 + DAT_00138ae8) + 100;
    String::String(aSStack_88,pcVar6);
    pCVar3 = (Character *)operator_new(0x6c);
    Character::Character(pCVar3,iVar9,3,1,aSStack_88);
    String::~String(aSStack_88);
    pCVar7 = *(CFPathFinder **)(*(int *)(this + 0x70) + 0x5c);
    this_00 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(this_00,pCVar3,pCVar7);
    Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(this + 0x108),this_00);
    if (bVar2) {
      uVar10 = **(undefined4 **)(iVar8 + DAT_00138af0);
      uVar4 = __mulsf3(uVar10,DAT_00138af4);
      fVar15 = (float)__addsf3(uVar10,uVar4);
      CharacterInstance::setScale(this_00,fVar15);
    }
    pCVar14 = this_00 + 0x8c;
    *(int *)(*(int *)pCVar14 + 0x28) = iVar13;
    *(undefined1 *)(*(int *)pCVar14 + 0x36) = 0;
    iVar13 = *(int *)pCVar14;
    uVar4 = Character::getMaxEnergy();
    *(undefined4 *)(iVar13 + 0x40) = uVar4;
    iVar13 = *(int *)pCVar14;
    CharacterData::getRandomName(aCStack_80,*(bool *)(iVar9 + DAT_00138af8),0);
    String::operator=((String *)(iVar13 + 8),aCStack_80);
    String::~String((String *)aCStack_80);
    local_78[0] = *(int *)(DAT_00138afc + 0x1389ca);
    local_78[1] = *(undefined4 *)(DAT_00138afc + 0x1389ce);
    local_78[2] = *(undefined4 *)(DAT_00138afc + 0x1389d2);
    local_78[3] = *(undefined4 *)(DAT_00138afc + 0x1389d6);
    uStack_68 = *(undefined4 *)(DAT_00138afc + 0x1389da);
    uStack_64 = *(undefined4 *)(DAT_00138afc + 0x1389de);
    local_60 = *(undefined4 *)(DAT_00138afc + 0x1389e2);
    uStack_5c = *(undefined4 *)(DAT_00138afc + 0x1389e6);
    uStack_58 = *(undefined4 *)(DAT_00138afc + 0x1389ea);
    local_54 = *(undefined4 *)(DAT_00138afc + 0x1389ee);
    uStack_50 = *(undefined4 *)(DAT_00138afc + 0x1389f2);
    uStack_4c = *(undefined4 *)(DAT_00138afc + 0x1389f6);
    local_48[0] = *(int *)(DAT_00138afc + 0x1389fa);
    local_48[1] = *(undefined4 *)(DAT_00138afc + 0x1389fe);
    local_48[2] = *(undefined4 *)(DAT_00138afc + 0x138a02);
    local_48[3] = *(undefined4 *)(DAT_00138afc + 0x138a06);
    uStack_38 = *(undefined4 *)(DAT_00138afc + 0x138a0a);
    uStack_34 = *(undefined4 *)(DAT_00138afc + 0x138a0e);
    local_30 = *(undefined4 *)(DAT_00138afc + 0x138a12);
    uStack_2c = *(undefined4 *)(DAT_00138afc + 0x138a16);
    uStack_28 = *(undefined4 *)(DAT_00138afc + 0x138a1a);
    local_24 = *(undefined4 *)(DAT_00138afc + 0x138a1e);
    uStack_20 = *(undefined4 *)(DAT_00138afc + 0x138a22);
    uStack_1c = *(undefined4 *)(DAT_00138afc + 0x138a26);
    iVar9 = CapcomMath::random(0xc);
    uVar4 = Cafe::diamondToStaggeredCoords
                      (**(int **)(iVar8 + DAT_00138b00) - local_78[iVar9],
                       **(int **)(iVar8 + DAT_00138b04) + local_48[iVar9]);
    sVar1 = (short)((uint)uVar4 >> 0x10) +
            (short)**(undefined4 **)(iVar8 + DAT_00138b08) * (short)uVar4;
    *(short *)(this_00 + 0x2c) = sVar1;
    pcVar11 = *(code **)(*(int *)this_00 + 0xc);
    uVar4 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x70),(int)sVar1);
    (*pcVar11)(this_00,uVar4);
    Cafe::addCafeObject(*(Cafe **)(this + 0x70),(CafeObject *)this_00);
    *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 1;
    if (param_1) {
      *(undefined1 *)(*(int *)(this_00 + 0x8c) + 0x44) = 4;
    }
    CharacterInstance::clearTasks();
    if (iVar9 < 4) {
      this_01 = (SpawnTask *)operator_new(0x28);
      SpawnTask::SpawnTask(this_01,this_00,'\x03');
    }
    else {
      this_01 = (SpawnTask *)operator_new(0x28);
      SpawnTask::SpawnTask(this_01,this_00,'\x02');
    }
    CharacterInstance::addTask(this_00,(Task *)this_01);
    *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
  }
  return;
}


