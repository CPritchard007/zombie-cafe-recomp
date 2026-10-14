/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001890f8 GameStateRoulette::updateScrollFurniture */

/* GameStateRoulette::updateScrollFurniture(long, bool) */

void __thiscall
GameStateRoulette::updateScrollFurniture(GameStateRoulette *this,long param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  float extraout_s0;
  int local_24;
  GameStateRoulette *local_20;
  
  iVar1 = DAT_00189338;
  iVar8 = DAT_00189334;
  if (param_2) {
    *(undefined4 *)(this + DAT_00189334) = 0;
    *(undefined4 *)(this + DAT_0018933c) = *(undefined4 *)(this + iVar1);
    this[DAT_00189340] = (GameStateRoulette)0x1;
  }
  else if (this[0x9f0] == (GameStateRoulette)0x0) {
    iVar3 = *(int *)(this + DAT_00189348);
    iVar1 = SmDev();
    uVar2 = __floatsisf((int)~(iVar3 - 1U) >> 0x1f & iVar3 - 1U);
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(DAT_0018935c + iVar1 * 4 + 0x189230));
    iVar1 = __aeabi_fcmpge(*(undefined4 *)(this + DAT_0018933c),uVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(this + DAT_0018933c) = uVar2;
    }
    iVar1 = __aeabi_fcmple(*(undefined4 *)(this + DAT_0018933c),0);
    if (iVar1 != 0) {
      *(undefined4 *)(this + DAT_0018933c) = 0;
    }
    iVar1 = DAT_00189360;
    uVar2 = __floatsisf(param_1);
    uVar6 = *(undefined4 *)(this + iVar8);
    uVar2 = __mulsf3(uVar2,**(undefined4 **)(iVar1 + 0x18925a));
    iVar1 = __aeabi_fcmplt(uVar2,0x3f800000);
    if (iVar1 == 0) {
      uVar2 = 0x3f800000;
    }
    uVar2 = __subsf3(0x3f800000,uVar2);
    iVar1 = __mulsf3(uVar6,uVar2);
    *(int *)(this + iVar8) = iVar1;
    iVar3 = __aeabi_fcmpge(iVar1,0);
    if (iVar3 == 0) {
      iVar1 = iVar1 + -0x80000000;
    }
    iVar1 = __aeabi_fcmplt(iVar1,**(undefined4 **)(DAT_00189364 + 0x1892a2));
    if (iVar1 != 0) {
      *(undefined4 *)(this + iVar8) = 0;
    }
  }
  else {
    uVar2 = __floatsisf(*(undefined4 *)(this + DAT_00189348));
    iVar1 = SmDev();
    uVar2 = __mulsf3(uVar2,*(undefined4 *)(DAT_0018934c + iVar1 * 4 + 0x189156));
    uVar6 = *(undefined4 *)(this + DAT_0018933c);
    iVar1 = __aeabi_fcmpge(uVar6,uVar2);
    if (iVar1 != 0) {
      uVar2 = __subsf3(uVar6,uVar2);
      *(undefined4 *)(this + DAT_0018933c) = uVar2;
    }
    uVar2 = __subsf3(*(undefined4 *)(this + iVar8),DAT_00189350);
    *(undefined4 *)(this + iVar8) = uVar2;
    iVar1 = __aeabi_fcmplt(uVar2,0);
    if (iVar1 != 0) {
      *(undefined4 *)(this + DAT_00189334) = 0;
    }
    iVar1 = __aeabi_fcmplt(*(undefined4 *)(this + iVar8),0x3f800000);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(this + DAT_00189338);
      iVar1 = __fixsfsi(*(undefined4 *)(this + DAT_0018933c));
      iVar3 = __fixsfsi(uVar2);
      if (iVar1 == iVar3) {
        *(undefined4 *)(this + DAT_00189334) = 0;
        *(undefined4 *)(this + DAT_0018933c) = uVar2;
        this[DAT_00189340] = (GameStateRoulette)0x1;
      }
      else {
        *(undefined4 *)(this + DAT_00189334) = 0x3f800000;
      }
    }
    uVar2 = __addsf3(*(undefined4 *)(this + 0xa10),*(undefined4 *)(this + iVar8));
    *(undefined4 *)(this + 0xa10) = uVar2;
    iVar8 = DAT_00189354;
    iVar1 = __aeabi_fcmpgt(*(undefined4 *)(this + DAT_00189354),uVar2);
    if (iVar1 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0);
      uVar2 = *(undefined4 *)(this + iVar8);
      iVar1 = SmDev();
      uVar2 = __subsf3(uVar2,*(undefined4 *)(DAT_00189358 + iVar1 * 4 + 0x18920a));
      *(undefined4 *)(this + iVar8) = uVar2;
    }
  }
  local_24 = 0;
  iVar8 = DAT_00189344 + 0x189124;
  local_20 = this;
  do {
    if (*(int *)(local_20 + 0xa20) != 0) {
      iVar1 = SmDev();
      uVar2 = __floatsisf(local_24);
      uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar8 + iVar1 * 4 + 0x10));
      uVar2 = __subsf3(uVar2,*(undefined4 *)(this + DAT_0018933c));
      iVar1 = SmDev();
      piVar7 = *(int **)(local_20 + 0xa20);
      pcVar5 = *(code **)(*piVar7 + 0xc);
      __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + DAT_00189368 + 0x1892f6));
      iVar1 = __fixsfsi();
      iVar3 = SmDev();
      uVar4 = __fixsfsi(*(undefined4 *)(iVar8 + iVar3 * 4 + 0x58));
      (*pcVar5)(piVar7,uVar4 & 0xffff | iVar1 << 0x10);
    }
    local_24 = local_24 + 1;
    local_20 = local_20 + 4;
  } while (local_24 != 0xaa);
  return;
}


