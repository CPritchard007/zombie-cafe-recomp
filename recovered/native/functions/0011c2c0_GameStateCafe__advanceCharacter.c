/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011c2c0 GameStateCafe::advanceCharacter */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0011c31c) */
/* WARNING: Removing unreachable block (ram,0x0011c31c) */
/* GameStateCafe::advanceCharacter(CharacterInstance*, long long) */

void __thiscall
GameStateCafe::advanceCharacter(GameStateCafe *this,CharacterInstance *param_1,longlong param_2)

{
  Character CVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  Stove *this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ReanimateTask *this_01;
  RestTask *this_02;
  int iVar8;
  undefined4 uVar9;
  uint in_r2;
  CharacterInstance *pCVar10;
  Character *pCVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  Character *this_03;
  code *pcVar17;
  uint uVar18;
  Cafe *this_04;
  int *piVar19;
  uint local_44;
  uint local_40;
  
  this_03 = *(Character **)(param_1 + 0x8c);
  iVar3 = DAT_0011c638 + 0x11c2d8;
  iVar4 = __aeabi_fcmple(*(undefined4 *)(this_03 + 0x40),0);
  if (((iVar4 != 0) && (this_03[0x44] != (Character)0x6)) && (this_03[5] == (Character)0x2)) {
    this_03[0x44] = (Character)0x6;
    *(int *)(this_03 + 0x50) = DAT_0011c640 * *(short *)(*(int *)this_03 + DAT_0011c63c);
  }
  pCVar11 = this_03 + 0x44;
  local_44 = in_r2;
  local_40 = in_r2;
LAB_0011c59c:
  iVar4 = DAT_0011c650;
  if ((int)local_44 < 1) goto LAB_0011c5a4;
  switch(*pCVar11) {
  case (Character)0x1:
    break;
  case (Character)0x2:
    lVar7 = Cafe::worldToDiamondCoords(*(long *)(this_03 + 0x48));
    lVar7 = Cafe::diamondToStaggeredCoords(lVar7);
    sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
    CafeObject::setTileIndex((CafeObject *)param_1,sVar2,*(Cafe **)(this + 0x14));
    iVar4 = Cafe::getNextTile((int)*(short *)(param_1 + 0x2c),(uint)(byte)this_03[0x4c]);
    this_00 = (Stove *)Cafe::getFurniture(*(Cafe **)(this + 0x14),iVar4);
    if (((this_00 != (Stove *)0x0) && (*(char *)(*(int *)(this_00 + 0x38) + 0x44) == '\x01')) &&
       (*(FoodStack **)(this_00 + 100) != (FoodStack *)0x0)) {
      iVar4 = FoodStack::getCookTimeSeconds(*(FoodStack **)(this_00 + 100));
      iVar8 = iVar4 * 1000 - *(int *)(this_00 + 0x70);
      uVar9 = __floatsisf(local_44);
      uVar6 = *(undefined4 *)(*(int *)(this_00 + 0x38) + 0x60);
      uVar14 = __floatsisf(iVar8);
      uVar5 = __mulsf3(uVar6,*(undefined4 *)(**(int **)(param_1 + 0x8c) + 0xb30));
      uVar5 = __mulsf3(uVar9,uVar5);
      iVar4 = __aeabi_fcmplt(uVar5,uVar14);
      puVar13 = *(undefined4 **)(iVar3 + DAT_0011c648);
      if (iVar4 != 0) {
        uVar14 = __mulsf3(uVar6,*(undefined4 *)(**(int **)(*(int *)(this + 0xc) + 0x590) + 0xb30));
        __mulsf3(uVar9,uVar14);
        lVar7 = __fixsfsi();
        Stove::use(this_00,param_1,lVar7);
        uVar9 = __mulsf3(uVar9,*puVar13);
        __mulsf3(uVar9,DAT_0011c64c);
        lVar7 = __fixsfsi();
        Character::work(this_03,lVar7);
        this_02 = (RestTask *)operator_new(0x34);
        CookTask::CookTask((CookTask *)this_02,param_1,this_00,*(Cafe **)(this + 0x14));
        goto LAB_0011c6b2;
      }
      Stove::use(this_00,param_1,iVar8);
      uVar9 = __mulsf3(uVar14,*puVar13);
      __mulsf3(uVar9,DAT_0011c64c);
      lVar7 = __fixsfsi();
      Character::work(this_03,lVar7);
      local_44 = local_44 - iVar8;
    }
    *pCVar11 = (Character)0x0;
    goto LAB_0011c59c;
  case (Character)0x3:
    uVar14 = *(undefined4 *)(*(int *)*(Character **)(*(int *)(this + 0xc) + 0x590) + DAT_0011c650);
    uVar9 = Character::getAdditionRegeneration(*(Character **)(*(int *)(this + 0xc) + 0x590));
    uVar9 = __addsf3(uVar14,uVar9);
    uVar15 = *(undefined4 *)(*(int *)this_03 + iVar4);
    uVar14 = Character::getAdditionRegeneration(this_03);
    uVar5 = __floatsisf(local_44);
    uVar5 = __mulsf3(uVar5,**(undefined4 **)(iVar3 + DAT_0011c648));
    uVar6 = __floatunsisf(*(undefined1 *)(*(int *)(this + 0x14) + 0xcb));
    uVar9 = __addsf3(uVar6,uVar9);
    uVar14 = __addsf3(uVar15,uVar14);
    uVar9 = __addsf3(uVar9,uVar14);
    uVar9 = __subsf3(uVar9,0x3f800000);
    __mulsf3(uVar5,uVar9);
    lVar7 = __fixsfsi();
    Character::rest(this_03,lVar7);
    goto LAB_0011c5a4;
  case (Character)0x4:
    *pCVar11 = (Character)0x0;
    goto LAB_0011c59c;
  default:
    Character::getMaxEnergy();
    goto LAB_0011c5a4;
  case (Character)0x6:
    iVar4 = *(int *)(this_03 + 0x50);
    uVar18 = iVar4 - local_40;
    uVar18 = uVar18 & (int)~uVar18 >> 0x1f;
    *(uint *)(this_03 + 0x50) = uVar18;
    if (uVar18 != 0) goto LAB_0011c5a4;
    local_40 = local_40 - iVar4;
    local_44 = local_40 & (int)~local_40 >> 0x1f;
    setRemainCharacter(this,param_1,false);
    goto LAB_0011c59c;
  }
  iVar4 = DAT_0011c644 + *(int *)(this + 0xc);
  iVar8 = 0;
  for (iVar12 = 0; iVar12 < *(int *)(iVar4 + 4) + 1; iVar12 = iVar12 + 1) {
    iVar8 = iVar8 + (uint)(*(char *)(*(int *)(iVar12 * 4 + *(int *)(iVar4 + 8)) + 0x44) == '\x01');
  }
  iVar8 = iVar8 + (uint)(*(char *)(*(int *)(*(int *)(this + 0xc) + 0x590) + 0x44) == '\x01');
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  __divsi3(*(undefined4 *)(this + 0x1a0),iVar8);
  uVar9 = __floatsisf();
  uVar9 = __mulsf3(uVar9,**(undefined4 **)(iVar3 + DAT_0011c648));
  __mulsf3(uVar9,DAT_0011c64c);
  lVar7 = __fixsfsi();
  Character::work(this_03,lVar7);
LAB_0011c5a4:
  iVar4 = DAT_0011c654;
  if ((*(int *)(this_03 + 0x50) < 1) || (this_03[5] != (Character)0x2)) {
    if (this_03[0x44] != (Character)0x3) {
      lVar7 = Cafe::worldToDiamondCoords(*(long *)(this_03 + 0x48));
      lVar7 = Cafe::diamondToStaggeredCoords(lVar7);
      iVar4 = Cafe::staggeredCoordsToIndex(lVar7);
      iVar4 = Cafe::isInside(*(Cafe **)(this + 0x14),iVar4);
      if (iVar4 != 0) {
        lVar7 = Cafe::worldToDiamondCoords(*(long *)(this_03 + 0x48));
        lVar7 = Cafe::diamondToStaggeredCoords(lVar7);
        sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
        CafeObject::setTileIndex((CafeObject *)param_1,sVar2,*(Cafe **)(this + 0x14));
        iVar4 = Cafe::getFurniture(*(Cafe **)(this + 0x14),(int)*(short *)(param_1 + 0x2c));
        if (iVar4 == 0) {
          return;
        }
      }
      CVar1 = (Character)CapcomMath::random(4);
      this_03[0x4c] = CVar1;
      iVar4 = 10;
LAB_0011c70a:
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        CharacterInstance::setCurrentAnimation(param_1,'\x01','\x02',false);
        piVar19 = *(int **)(iVar3 + DAT_0011c7e8);
        piVar16 = *(int **)(iVar3 + DAT_0011c7ec);
        iVar4 = 0;
        do {
          lVar7 = Cafe::diamondToStaggeredCoords
                            (*piVar19,*piVar16 + **(int **)(iVar3 + DAT_0011c7f8) + 2 + iVar4);
          sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
          *(short *)(param_1 + 0x2c) = sVar2;
          iVar8 = -1;
          while( true ) {
            if (*(int *)(this + 0x20) + 1 <= iVar8) goto LAB_0011c7a4;
            if (iVar8 == -1) {
              pCVar10 = *(CharacterInstance **)(this + 0x18);
            }
            else {
              pCVar10 = *(CharacterInstance **)(iVar8 * 4 + *(int *)(this + 0x24));
            }
            if ((pCVar10 != param_1) && (*(short *)(pCVar10 + 0x2c) == sVar2)) break;
            iVar8 = iVar8 + 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xb);
      }
      else {
        this_04 = *(Cafe **)(this + 0x14);
        sVar2 = CapcomMath::random(**(int **)(iVar3 + DAT_0011c7f0) *
                                   **(int **)(iVar3 + DAT_0011c7f4));
        *(short *)(param_1 + 0x2c) = sVar2;
        iVar8 = Cafe::isInside(this_04,(int)sVar2);
        if ((iVar8 == 0) ||
           (iVar8 = Cafe::getFurniture(*(Cafe **)(this + 0x14),(int)*(short *)(param_1 + 0x2c)),
           iVar8 != 0)) goto LAB_0011c70a;
      }
LAB_0011c7a4:
      pcVar17 = *(code **)(*(int *)param_1 + 0xc);
      uVar9 = Cafe::indexToWorldCoordsCenter
                        (*(Cafe **)(this + 0x14),(int)*(short *)(param_1 + 0x2c));
      (*pcVar17)(param_1,uVar9);
      return;
    }
    this_03[0x4c] = (Character)0x0;
    lVar7 = Cafe::diamondToStaggeredCoords
                      (**(int **)(iVar3 + DAT_0011c7e8) + -1,
                       (uint)*(byte *)(*(int *)(this + 0x14) + 0xa1) +
                       **(int **)(iVar3 + DAT_0011c7ec) + 1);
    sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
    CafeObject::setTileIndex((CafeObject *)param_1,sVar2,*(Cafe **)(this + 0x14));
    this_02 = (RestTask *)operator_new(0x40);
    RestTask::RestTask(this_02,param_1,*(Cafe **)(this + 0x14));
LAB_0011c6b2:
    CharacterInstance::addTask(param_1,(Task *)this_02);
  }
  else {
    this_03[0x4c] = (Character)0x0;
    if (**(int **)(iVar3 + iVar4) <= *(int *)(this + 0x1b4)) {
      *(undefined4 *)(this + 0x1b4) = 0;
      *(int *)(this + 0x1b8) = *(int *)(this + 0x1b8) + 1;
    }
    lVar7 = Cafe::diamondToStaggeredCoords
                      ((**(int **)(iVar3 + DAT_0011c658) + -1) - *(int *)(this + 0x1b4),
                       (uint)*(byte *)(*(int *)(this + 0x14) + 0xa1) +
                       **(int **)(iVar3 + DAT_0011c65c) + 1 + *(int *)(this + 0x1b8));
    sVar2 = Cafe::staggeredCoordsToIndex(lVar7);
    CafeObject::setTileIndex((CafeObject *)param_1,sVar2,*(Cafe **)(this + 0x14));
    this_01 = (ReanimateTask *)operator_new(0x28);
    ReanimateTask::ReanimateTask(this_01,param_1,*(Cafe **)(this + 0x14));
    CharacterInstance::addTask(param_1,(Task *)this_01);
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0011c660),'E',true)
    ;
    *(int *)(this + 0x1b4) = *(int *)(this + 0x1b4) + 1;
  }
  return;
}


