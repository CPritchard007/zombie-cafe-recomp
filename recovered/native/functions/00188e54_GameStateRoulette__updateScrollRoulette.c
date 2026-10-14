/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00188e54 GameStateRoulette::updateScrollRoulette */

/* GameStateRoulette::updateScrollRoulette(long, bool) */

void __thiscall
GameStateRoulette::updateScrollRoulette(GameStateRoulette *this,long param_1,bool param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  float extraout_s0;
  GameStateRoulette *local_28;
  int local_24;
  
  iVar2 = DAT_001890c8;
  iVar6 = DAT_001890c4;
  if (param_2) {
    *(undefined4 *)(this + DAT_001890c4) = 0;
    *(undefined4 *)(this + DAT_001890cc) = *(undefined4 *)(this + iVar2);
    this[DAT_001890d0] = (GameStateRoulette)0x1;
  }
  else if (this[0x9f0] == (GameStateRoulette)0x0) {
    iVar4 = *(int *)(this + 0x738);
    iVar2 = SmDev();
    uVar3 = __floatsisf((int)~(iVar4 - 1U) >> 0x1f & iVar4 - 1U);
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(DAT_001890e8 + iVar2 * 4 + 0x188f92));
    iVar2 = __aeabi_fcmpge(*(undefined4 *)(this + DAT_001890cc),uVar3);
    if (iVar2 != 0) {
      *(undefined4 *)(this + DAT_001890cc) = uVar3;
    }
    iVar2 = __aeabi_fcmple(*(undefined4 *)(this + DAT_001890cc),0);
    if (iVar2 != 0) {
      *(undefined4 *)(this + DAT_001890cc) = 0;
    }
    iVar2 = DAT_001890ec;
    uVar3 = __floatsisf(param_1);
    uVar8 = *(undefined4 *)(this + iVar6);
    uVar3 = __mulsf3(uVar3,**(undefined4 **)(iVar2 + 0x188fbc));
    iVar2 = __aeabi_fcmplt(uVar3,0x3f800000);
    if (iVar2 == 0) {
      uVar3 = 0x3f800000;
    }
    uVar3 = __subsf3(0x3f800000,uVar3);
    iVar2 = __mulsf3(uVar8,uVar3);
    *(int *)(this + iVar6) = iVar2;
    iVar4 = __aeabi_fcmpge(iVar2,0);
    if (iVar4 == 0) {
      iVar2 = iVar2 + -0x80000000;
    }
    iVar2 = __aeabi_fcmplt(iVar2,**(undefined4 **)(DAT_001890f0 + 0x189004));
    if (iVar2 != 0) {
      *(undefined4 *)(this + iVar6) = 0;
    }
  }
  else {
    uVar3 = __floatsisf(*(undefined4 *)(this + 0x738));
    iVar2 = SmDev();
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(DAT_001890d8 + iVar2 * 4 + 0x188eb8));
    uVar8 = *(undefined4 *)(this + DAT_001890cc);
    iVar2 = __aeabi_fcmpge(uVar8,uVar3);
    if (iVar2 != 0) {
      uVar3 = __subsf3(uVar8,uVar3);
      *(undefined4 *)(this + DAT_001890cc) = uVar3;
    }
    uVar3 = __subsf3(*(undefined4 *)(this + iVar6),DAT_001890dc);
    *(undefined4 *)(this + iVar6) = uVar3;
    iVar2 = __aeabi_fcmplt(uVar3,0);
    if (iVar2 != 0) {
      *(undefined4 *)(this + DAT_001890c4) = 0;
    }
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(this + iVar6),0x3f800000);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(this + DAT_001890c8);
      iVar2 = __fixsfsi(*(undefined4 *)(this + DAT_001890cc));
      iVar4 = __fixsfsi(uVar3);
      if (iVar2 == iVar4) {
        *(undefined4 *)(this + DAT_001890c4) = 0;
        *(undefined4 *)(this + DAT_001890cc) = uVar3;
        this[DAT_001890d0] = (GameStateRoulette)0x1;
      }
      else {
        *(undefined4 *)(this + DAT_001890c4) = 0x3f800000;
      }
    }
    uVar3 = __addsf3(*(undefined4 *)(this + 0xa10),*(undefined4 *)(this + iVar6));
    *(undefined4 *)(this + 0xa10) = uVar3;
    iVar6 = DAT_001890e0;
    iVar2 = __aeabi_fcmpgt(*(undefined4 *)(this + DAT_001890e0),uVar3);
    if (iVar2 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0);
      uVar3 = *(undefined4 *)(this + iVar6);
      iVar2 = SmDev();
      uVar3 = __subsf3(uVar3,*(undefined4 *)(DAT_001890e4 + iVar2 * 4 + 0x188f6c));
      *(undefined4 *)(this + iVar6) = uVar3;
    }
  }
  iVar6 = DAT_001890d4 + 0x188e7e;
  local_24 = 0;
  local_28 = this;
  do {
    if (*(int *)(local_28 + 0x94) != 0) {
      iVar2 = SmDev();
      uVar3 = __floatsisf(local_24);
      uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar6 + iVar2 * 4 + 0x10));
      uVar3 = __subsf3(uVar3,*(undefined4 *)(this + DAT_001890cc));
      iVar2 = SmDev();
      piVar10 = *(int **)(local_28 + 0x94);
      iVar9 = DAT_001890f4 + 0x18904e;
      pcVar7 = *(code **)(*piVar10 + 0xc);
      __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + iVar9));
      iVar2 = __fixsfsi();
      iVar4 = SmDev();
      uVar5 = __fixsfsi(*(undefined4 *)(iVar9 + iVar4 * 4 + 0x78));
      (*pcVar7)(piVar10,uVar5 & 0xffff | iVar2 << 0x10);
      piVar10 = *(int **)(local_28 + 0x33c);
      if (piVar10 != (int *)0x0) {
        iVar4 = SmDev();
        uVar1 = __fixsfsi(*(undefined4 *)(iVar6 + iVar4 * 4 + 0x40));
        (**(code **)(*piVar10 + 0x14))
                  (piVar10,(int)(iVar2 << 0x10 | (uint)uVar1) >> 0x10,(int)(short)uVar1);
      }
    }
    local_24 = local_24 + 1;
    local_28 = local_28 + 4;
  } while (local_24 != 0xaa);
  return;
}


