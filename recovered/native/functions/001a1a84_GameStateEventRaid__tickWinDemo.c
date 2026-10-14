/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a1a84 GameStateEventRaid::tickWinDemo */

/* GameStateEventRaid::tickWinDemo(long) */

void GameStateEventRaid::tickWinDemo(long param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  FoodStack *this;
  Character *pCVar4;
  undefined4 uVar5;
  EventRaidRewardScreen *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_r1;
  char *pcVar9;
  short *psVar10;
  uint uVar11;
  ZombieCafe *this_01;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  uint local_54;
  uint local_50;
  uint local_4c;
  String aSStack_38 [8];
  CharacterData aCStack_30 [8];
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  iVar6 = DAT_001a1d70 + 0x1a1a90;
  if (*(int *)(param_1 + 0x3c) < 0xfa1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 6;
  iVar2 = ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(param_1 + 0xc));
  ZombieCafe::getEventRaid_cafeLevelNext(*(ZombieCafe **)(param_1 + 0xc));
  ZombieCafe::setEventRaid_cafeLevelNext
            (*(ZombieCafe **)(param_1 + 0xc),(short)((uint)((iVar2 + 1) * 0x10000) >> 0x10));
  iVar3 = ZombieCafe::isEventRaid_FirstHalf();
  iVar7 = DAT_001a1d78;
  if (iVar3 != 0) {
    iVar7 = DAT_001a1d74;
  }
  psVar10 = (short *)(*(int *)(*(int *)(param_1 + 0x1c) * 4 + *(int *)(iVar6 + iVar7)) +
                     iVar2 * 0x10);
  sVar1 = *psVar10;
  local_4c = *(uint *)(psVar10 + 4);
  uVar14 = *(uint *)(psVar10 + 2);
  iVar7 = (int)sVar1;
  uVar11 = *(uint *)(psVar10 + 6);
  uVar15 = uVar14;
  local_54 = local_4c;
  if (sVar1 == 0) {
    ZombieCafe::addCash(*(ZombieCafe **)(param_1 + 0xc),uVar14);
LAB_001a1fac:
    local_4c = 0;
    uVar14 = uVar15;
LAB_001a1c5a:
    local_50 = rewardZombieLottery((GameStateEventRaid *)param_1);
    if (local_50 == 0xffffffff) goto LAB_001a1ed4;
  }
  else {
    if (iVar7 == 2) {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x988) + uVar14) == '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001a1d7c) = 1;
      }
      if ((-1 < (int)uVar14) && ((int)uVar14 <= *(int *)(*(int *)(param_1 + 0xc) + 0x984))) {
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x988) + uVar14) = 1;
      }
      if ((-1 < (int)uVar14) &&
         (iVar2 = *(int *)(param_1 + 0xc) + DAT_001a1d80, (int)uVar14 <= *(int *)(iVar2 + 4))) {
        *(undefined1 *)(*(int *)(iVar2 + 8) + uVar14) = 1;
      }
      goto LAB_001a1fac;
    }
    if ((iVar7 != 7) && (iVar7 != 3)) {
      if ((ushort)(sVar1 - 5U) < 2) {
        if ((uVar14 != 0) && (local_4c != 0)) {
          uVar15 = local_4c;
          if (uVar11 == 0) {
            iVar2 = CapcomMath::random(2);
            if (iVar2 != 0) {
              uVar15 = uVar14;
            }
          }
          else {
            iVar2 = CapcomMath::random(3);
            if ((iVar2 != 0) && (uVar15 = uVar14, iVar2 == 1)) {
              uVar15 = uVar11;
            }
          }
        }
        iVar2 = CapcomMath::random(100);
        piVar12 = (int *)(DAT_001a1d88 + 0x1a1c0a);
        for (local_54 = 0; (int)local_54 < **(int **)(iVar6 + DAT_001a1d84); local_54 = local_54 + 1
            ) {
          iVar3 = *piVar12;
          piVar12 = piVar12 + 1;
          if (iVar2 < iVar3) goto LAB_001a1bc0;
        }
        local_54 = 1;
LAB_001a1bc0:
        iVar2 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(param_1 + 0xc));
        if (iVar2 != 0) {
          iVar3 = *(int *)(param_1 + 0xc);
          this = (FoodStack *)operator_new(0x24);
          FoodStack::FoodStack(this,(uchar)uVar15,(uchar)local_54);
          iVar2 = *(int *)((Vector<FoodStack*> *)(iVar3 + DAT_001a1d8c) + 4) + 2;
          if (*(int *)(iVar3 + DAT_001a1d8c) < iVar2) {
            iVar8 = *(int *)(iVar3 + DAT_001a1d8c) * 2;
            if (iVar8 < iVar2) {
              iVar8 = iVar2;
            }
            Vector<FoodStack*>::resize((Vector<FoodStack*> *)(iVar3 + DAT_001a1d8c),iVar8,-1);
          }
          iVar3 = iVar3 + DAT_001a1d8c;
          iVar2 = *(int *)(iVar3 + 4) + 1;
          *(int *)(iVar3 + 4) = iVar2;
          *(FoodStack **)(iVar2 * 4 + *(int *)(iVar3 + 8)) = this;
          uVar5 = arc4random();
          __aeabi_uidivmod(uVar5,0x14);
          *(int *)(this + 4) = extraout_r1 + 10;
        }
      }
      else if (iVar7 == 8) {
        if (uVar14 - 1 < 0x1e) {
          ZombieCafe::addToxin(*(ZombieCafe **)(param_1 + 0xc),uVar14,iVar7 == 3);
        }
      }
      else if ((iVar7 == 9) && (uVar14 - 1 < 10)) {
        ZombieCafe::addGatyaTicket(*(ZombieCafe **)(param_1 + 0xc),uVar14);
      }
      goto LAB_001a1fac;
    }
    local_50 = uVar14;
    if (uVar14 == 0xffffffff) goto LAB_001a1c5a;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + DAT_001a1d90) + local_50 * 4);
  if ((*(int *)(iVar2 + 0x560) != 0) && (*(int *)(iVar2 + DAT_001a1d94) != 0)) {
    iVar2 = isMaterialZombie((GameStateEventRaid *)param_1,local_50);
    pcVar9 = *(char **)(iVar6 + DAT_001a1fe4);
    if ((iVar2 == 0) ||
       (iVar2 = EvolutionZombie((GameStateEventRaid *)param_1,local_50), iVar2 == 0)) {
      String::String(aSStack_28,(char *)(DAT_001a1fcc + 0x1a1da8));
      pCVar4 = (Character *)operator_new(0x6c);
      Character::Character
                (pCVar4,*(undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0xc) + DAT_001a1fd0) + local_50 * 4),2,1,
                 aSStack_28);
      String::~String(aSStack_28);
      if ((local_4c != 0) && ((int)local_4c < 100)) {
        *(uint *)(pCVar4 + 0x28) = local_4c;
      }
      fVar16 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy(pCVar4,fVar16);
      CharacterData::getRandomName(aCStack_20,*(bool *)(*(int *)pCVar4 + DAT_001a1fd4),0);
      String::operator=((String *)(pCVar4 + 8),aCStack_20);
      String::~String((String *)aCStack_20);
      Platform::getAppTime();
      uVar5 = __fixdfsi();
      pCVar4[4] = (Character)0x1;
      *(undefined4 *)(pCVar4 + 0x10) = uVar5;
      pCVar4[5] = (Character)0x2;
      this_01 = *(ZombieCafe **)(param_1 + 0xc);
      iVar2 = *(int *)((Vector<Character*> *)(this_01 + DAT_001a1fd8) + 4);
      if (iVar2 + 1 <
          (int)*(short *)((*(int *)(this_01 + 0x680) + -1) * 2 + **(int **)(iVar6 + DAT_001a1fdc)))
      {
        iVar2 = iVar2 + 2;
        if (*(int *)(this_01 + DAT_001a1fd8) < iVar2) {
          iVar3 = *(int *)(this_01 + DAT_001a1fd8) * 2;
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          Vector<Character*>::resize((Vector<Character*> *)(this_01 + DAT_001a1fd8),iVar3,-1);
        }
        iVar3 = *(int *)(this_01 + DAT_001a1fd8 + 4);
        iVar2 = DAT_001a1fd8 + 8;
        *(int *)(this_01 + DAT_001a1fd8 + 4) = iVar3 + 1;
        *(Character **)((iVar3 + 1) * 4 + *(int *)(this_01 + iVar2)) = pCVar4;
      }
      else {
        ZombieCafe::putZombieInMeetlocker(this_01,pCVar4,(PullMenuElement *)0x0);
      }
      Vector<int>::addElement((Vector<int> *)(param_1 + 0xc0),(uint)(byte)pCVar4[0x44]);
      Vector<long>::addElement((Vector<long> *)(param_1 + 0xcc),*(long *)(pCVar4 + 0x48));
      fVar16 = (float)Vector<int>::addElement
                                ((Vector<int> *)(param_1 + 0xd8),(uint)(byte)pCVar4[0x4c]);
      piVar12 = (int *)(param_1 + 0x90);
      Vector<float>::addElement((Vector<float> *)(param_1 + 0xe4),fVar16);
      *(undefined1 *)(*piVar12 + 0x60) = 1;
      CharacterDetails::setCharacter((CharacterDetails *)*piVar12,pCVar4);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 5;
      iVar2 = getMaterialItemId((GameStateEventRaid *)param_1,local_50);
      pCVar4 = *(Character **)(param_1 + 0x98);
      if (pCVar4 != (Character *)0x0) {
        Character::~Character(pCVar4);
        operator_delete(pCVar4);
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      String::String(aSStack_38,(char *)(DAT_001a1d98 + 0x1a1cd6));
      pCVar4 = (Character *)operator_new(0x6c);
      Character::Character
                (pCVar4,*(undefined4 *)
                         (iVar2 * 4 + *(int *)(*(int *)(param_1 + 0xc) + DAT_001a1d90)),2,1,
                 aSStack_38);
      piVar12 = (int *)(param_1 + 0x98);
      *piVar12 = (int)pCVar4;
      String::~String(aSStack_38);
      if ((local_4c != 0) && ((int)local_4c < 100)) {
        *(uint *)(*piVar12 + 0x28) = local_4c;
      }
      pCVar4 = (Character *)*piVar12;
      fVar16 = (float)Character::getMaxEnergy();
      Character::setCurrentEnergy(pCVar4,fVar16);
      piVar12 = (int *)*piVar12;
      CharacterData::getRandomName(aCStack_30,*(bool *)(*piVar12 + DAT_001a1d9c),0);
      String::operator=((String *)(piVar12 + 2),aCStack_30);
      piVar13 = (int *)(param_1 + 0x98);
      String::~String((String *)aCStack_30);
      iVar2 = *piVar13;
      Platform::getAppTime();
      uVar5 = __fixdfsi();
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      *(undefined1 *)(*piVar13 + 4) = 1;
      piVar12 = (int *)(param_1 + 0x94);
      *(undefined1 *)(*piVar13 + 5) = 2;
      CharacterEvolution::setCharacterItem((CharacterEvolution *)*piVar12,(Character *)*piVar13);
    }
    ScreenElement::setOrder((ScreenElement *)*piVar12,(int)*pcVar9);
    (**(code **)(*(int *)*piVar12 + 0x20))((int *)*piVar12,1);
  }
LAB_001a1ed4:
  iVar2 = ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(param_1 + 0xc));
  ZombieCafe::addEventRaid_cafeLevel(*(ZombieCafe **)(param_1 + 0xc));
  ZombieCafe::setEventRaid_status(*(ZombieCafe **)(param_1 + 0xc),2);
  ZombieCafe::subEventRaid_attackPoint(*(ZombieCafe **)(param_1 + 0xc));
  ZombieCafe::save();
  this_00 = (EventRaidRewardScreen *)operator_new(0xd0);
  EventRaidRewardScreen::EventRaidRewardScreen(this_00,iVar7,uVar14,local_54,iVar2 + 1,true);
  *(EventRaidRewardScreen **)(param_1 + 0x14) = this_00;
  (**(code **)(*(int *)this_00 + 0x1c))(this_00,0x12);
  iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))
            (*(int **)(param_1 + 0x14),(iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1,(int)(short)iVar7 / 2)
  ;
  ScreenElement::setOrder
            (*(ScreenElement **)(param_1 + 0x14),(int)**(char **)(iVar6 + DAT_001a1fe0));
  (**(code **)(**(int **)(param_1 + 100) + 0x2c))
            (*(int **)(param_1 + 100),*(undefined4 *)(param_1 + 0x14));
  sendEventRaidResult((GameStateEventRaid *)param_1,0,local_50 & -(uint)(local_50 != 0xffffffff),
                      iVar2);
  return;
}


