/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00152d18 GameStateGatya::updateScrollRoulette */

/* GameStateGatya::updateScrollRoulette(long, bool) */

void __thiscall GameStateGatya::updateScrollRoulette(GameStateGatya *this,long param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  float extraout_s0;
  GameStateGatya *local_2c;
  int local_28;
  
  iVar2 = DAT_00152fcc;
  iVar1 = DAT_00152fc8;
  iVar11 = DAT_00152fc4;
  if (param_2) {
    *(undefined4 *)(this + DAT_00152fc4) = 0;
    *(undefined4 *)(this + iVar1) = *(undefined4 *)(this + iVar2);
    this[DAT_00152fd0] = (GameStateGatya)0x1;
  }
  else if (this[DAT_00152fd8] == (GameStateGatya)0x0) {
    iVar5 = *(int *)(this + DAT_00152ff4);
    iVar2 = SmDev();
    uVar3 = __floatsisf((int)~(iVar5 - 1U) >> 0x1f & iVar5 - 1U);
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(DAT_00152ff8 + iVar2 * 4 + 0x152e5c));
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0xf10));
    iVar2 = __aeabi_fcmpge(*(undefined4 *)(this + iVar1),uVar3);
    if (iVar2 != 0) {
      *(undefined4 *)(this + iVar1) = uVar3;
    }
    iVar2 = __aeabi_fcmple(*(undefined4 *)(this + iVar1),0);
    if (iVar2 != 0) {
      *(undefined4 *)(this + DAT_00152fc8) = 0;
    }
    uVar4 = *(undefined4 *)(this + iVar11);
    puVar9 = *(undefined4 **)(DAT_00152ffc + 0x152e90);
    uVar3 = __floatsisf(param_1);
    uVar3 = __mulsf3(uVar3,*puVar9);
    iVar2 = __aeabi_fcmplt(uVar3,0x3f800000);
    if (iVar2 == 0) {
      uVar3 = 0x3f800000;
    }
    uVar3 = __subsf3(0x3f800000,uVar3);
    iVar2 = __mulsf3(uVar4,uVar3);
    *(int *)(this + iVar11) = iVar2;
    iVar5 = __aeabi_fcmpge(iVar2,0);
    if (iVar5 == 0) {
      iVar2 = iVar2 + -0x80000000;
    }
    iVar2 = __aeabi_fcmplt(iVar2,**(undefined4 **)(DAT_00153000 + 0x152edc));
    if (iVar2 != 0) {
      *(undefined4 *)(this + iVar11) = 0;
    }
  }
  else {
    uVar3 = __floatsisf(*(undefined4 *)(this + DAT_00152fdc));
    iVar2 = SmDev();
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(DAT_00152fe0 + iVar2 * 4 + 0x152d6c));
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0xf10));
    uVar4 = *(undefined4 *)(this + iVar1);
    iVar2 = __aeabi_fcmpge(uVar4,uVar3);
    if (iVar2 != 0) {
      uVar3 = __subsf3(uVar4,uVar3);
      *(undefined4 *)(this + iVar1) = uVar3;
    }
    uVar3 = __subsf3(*(undefined4 *)(this + iVar11),DAT_00152fe4);
    *(undefined4 *)(this + iVar11) = uVar3;
    iVar2 = __aeabi_fcmplt(uVar3,0);
    if (iVar2 != 0) {
      *(undefined4 *)(this + DAT_00152fc4) = 0;
    }
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(this + iVar11),0x3f800000);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(this + DAT_00152fcc);
      iVar5 = __fixsfsi(*(undefined4 *)(this + iVar1));
      iVar7 = __fixsfsi(uVar3);
      iVar2 = DAT_00152fc8;
      if (iVar5 == iVar7) {
        *(undefined4 *)(this + DAT_00152fc4) = 0;
        *(undefined4 *)(this + iVar2) = uVar3;
        this[DAT_00152fd0] = (GameStateGatya)0x1;
      }
      else {
        *(undefined4 *)(this + DAT_00152fc4) = 0x3f800000;
      }
    }
    iVar2 = DAT_00152fe8;
    uVar3 = __addsf3(*(undefined4 *)(this + DAT_00152fe8),*(undefined4 *)(this + iVar11));
    *(undefined4 *)(this + iVar2) = uVar3;
    iVar11 = DAT_00152fec;
    iVar2 = __aeabi_fcmpgt(*(undefined4 *)(this + DAT_00152fec),uVar3);
    if (iVar2 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0);
      uVar4 = *(undefined4 *)(this + iVar11);
      iVar2 = SmDev();
      uVar3 = __mulsf3(*(undefined4 *)(DAT_00152ff0 + iVar2 * 4 + 0x152e26),
                       *(undefined4 *)(this + 0xf10));
      uVar3 = __subsf3(uVar4,uVar3);
      *(undefined4 *)(this + iVar11) = uVar3;
    }
  }
  local_28 = 0;
  iVar11 = DAT_00152fd4 + 0x152d44;
  local_2c = this;
  do {
    if (*(int *)(local_2c + 0x214) != 0) {
      iVar2 = SmDev();
      uVar3 = __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 8),*(undefined4 *)(this + 0xf10));
      uVar4 = __floatsisf(local_28);
      uVar3 = __mulsf3(uVar3,uVar4);
      uVar3 = __subsf3(uVar3,*(undefined4 *)(this + iVar1));
      iVar2 = SmDev();
      piVar10 = *(int **)(local_2c + 0x214);
      pcVar8 = *(code **)(*piVar10 + 0xc);
      uVar4 = __mulsf3(*(undefined4 *)(iVar11 + iVar2 * 4 + 0x20),*(undefined4 *)(this + 0xf10));
      __addsf3(uVar3,uVar4);
      iVar2 = __fixsfsi();
      iVar5 = SmDev();
      __mulsf3(*(undefined4 *)(iVar11 + iVar5 * 4 + 0x38),*(undefined4 *)(this + DAT_00153004));
      uVar6 = __fixsfsi();
      (*pcVar8)(piVar10,uVar6 & 0xffff | iVar2 << 0x10);
      iVar5 = *(int *)(local_2c + DAT_00153008);
      if (iVar5 != 0) {
        iVar7 = SmDev();
        __mulsf3(*(undefined4 *)(iVar11 + iVar7 * 4 + 0x50),*(undefined4 *)(this + DAT_00153004));
        uVar6 = __fixsfsi();
        FUN_00149b04(iVar5,uVar6 & 0xffff | iVar2 << 0x10);
      }
    }
    local_28 = local_28 + 1;
    local_2c = local_2c + 4;
  } while (local_28 != 0xaa);
  return;
}


