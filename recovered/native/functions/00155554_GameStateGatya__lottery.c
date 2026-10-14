/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00155554 GameStateGatya::lottery */

/* GameStateGatya::lottery(bool) */

undefined4 __thiscall GameStateGatya::lottery(GameStateGatya *this,bool param_1)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [2];
  byte local_76;
  undefined1 auStack_70 [2];
  byte local_6e;
  undefined1 auStack_68 [2];
  byte local_66;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined1 auStack_58 [2];
  byte local_56;
  undefined1 auStack_50 [2];
  byte local_4e;
  undefined1 auStack_48 [2];
  byte local_46;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined1 auStack_38 [2];
  byte local_36;
  undefined1 auStack_30 [2];
  byte local_2e;
  undefined1 auStack_28 [2];
  byte local_26;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  if ((param_1) && (**(char **)(DAT_00155830 + 0x155564) != '\0')) {
    if (*(int *)(this + DAT_00155848) == 2) {
      uVar1 = ZombieCafe::GetLotteryRandom2(*(ZombieCafe **)(this + 0xc));
      ZombieCafe::NextLotteryRandom2(*(ZombieCafe **)(this + 0xc));
    }
    else {
      uVar1 = ZombieCafe::GetLotteryRandom(*(ZombieCafe **)(this + 0xc));
      ZombieCafe::NextLotteryRandom(*(ZombieCafe **)(this + 0xc));
    }
  }
  else {
    uVar1 = arc4random();
    param_1 = false;
  }
  iVar6 = *(int *)(this + DAT_00155834);
  iVar2 = iVar6 + *(int *)(this + DAT_00155838);
  iVar3 = iVar2 + *(int *)(this + DAT_0015583c);
  __aeabi_uidivmod(uVar1,iVar3);
  iVar7 = DAT_0015584c;
  iVar4 = DAT_00155844;
  iVar5 = DAT_00155840;
  if (iVar6 < extraout_r1) {
    if (iVar2 < extraout_r1) {
      if (extraout_r1 <= iVar3) goto LAB_00155756;
      goto LAB_001555c0;
    }
  }
  else {
LAB_001555c0:
    if (*(int *)(this + DAT_00155840 + 4) != -1) {
      if (param_1 == false) {
        local_80 = 0;
        for (iVar4 = 0; iVar4 < *(int *)(this + iVar5 + 4) + 1; iVar4 = iVar4 + 1) {
          Vector<GatyaLotteryData>::elementAt((int)auStack_70);
          local_80 = local_80 + (uint)local_6e;
        }
        local_80 = CapcomMath::random(local_80);
      }
      else {
        if (*(int *)(this + DAT_00155848) == 2) {
          local_80 = ZombieCafe::GetLotteryRandom2(*(ZombieCafe **)(this + 0xc));
          ZombieCafe::NextLotteryRandom2(*(ZombieCafe **)(this + 0xc));
        }
        else {
          local_80 = ZombieCafe::GetLotteryRandom(*(ZombieCafe **)(this + 0xc));
          ZombieCafe::NextLotteryRandom(*(ZombieCafe **)(this + 0xc));
        }
        iVar5 = DAT_00155840;
        iVar7 = 0;
        for (iVar4 = 0; iVar4 < *(int *)(this + iVar5 + 4) + 1; iVar4 = iVar4 + 1) {
          Vector<GatyaLotteryData>::elementAt((int)auStack_78);
          iVar7 = iVar7 + (uint)local_76;
        }
        __aeabi_idivmod(local_80,iVar7);
        local_80 = extraout_r1_00;
      }
      iVar5 = DAT_00155840;
      iVar4 = 0;
      iVar7 = 0;
      while( true ) {
        if (*(int *)(this + iVar5 + 4) + 1 <= iVar4) {
          return 0;
        }
        Vector<GatyaLotteryData>::elementAt((int)auStack_68);
        iVar7 = iVar7 + (uint)local_66;
        if (local_80 < iVar7) break;
        iVar4 = iVar4 + 1;
      }
      Vector<GatyaLotteryData>::elementAt((int)auStack_60);
      return local_5c;
    }
  }
  if (*(int *)(this + DAT_00155844 + 4) != -1) {
    if (param_1 == false) {
      local_80 = 0;
      for (iVar5 = 0; iVar5 < *(int *)(this + iVar4 + 4) + 1; iVar5 = iVar5 + 1) {
        Vector<GatyaLotteryData>::elementAt((int)auStack_50);
        local_80 = local_80 + (uint)local_4e;
      }
      local_80 = CapcomMath::random(local_80);
    }
    else {
      if (*(int *)(this + DAT_00155848) == 2) {
        local_7c = ZombieCafe::GetLotteryRandom2(*(ZombieCafe **)(this + 0xc));
        ZombieCafe::NextLotteryRandom2(*(ZombieCafe **)(this + 0xc));
      }
      else {
        local_7c = ZombieCafe::GetLotteryRandom(*(ZombieCafe **)(this + 0xc));
        ZombieCafe::NextLotteryRandom(*(ZombieCafe **)(this + 0xc));
      }
      iVar5 = DAT_00155844;
      local_80 = 0;
      for (iVar4 = 0; iVar4 < *(int *)(this + iVar5 + 4) + 1; iVar4 = iVar4 + 1) {
        Vector<GatyaLotteryData>::elementAt((int)auStack_58);
        local_80 = local_80 + (uint)local_56;
      }
      __aeabi_idivmod(local_7c,local_80);
      local_80 = extraout_r1_01;
    }
    iVar5 = DAT_00155844;
    iVar4 = 0;
    iVar7 = 0;
    while( true ) {
      if (*(int *)(this + iVar5 + 4) + 1 <= iVar4) {
        return 0;
      }
      Vector<GatyaLotteryData>::elementAt((int)auStack_48);
      iVar7 = iVar7 + (uint)local_46;
      if (local_80 < iVar7) break;
      iVar4 = iVar4 + 1;
    }
    Vector<GatyaLotteryData>::elementAt((int)auStack_40);
    return local_3c;
  }
LAB_00155756:
  if (param_1 == false) {
    local_80 = 0;
    for (iVar5 = 0; iVar5 < *(int *)(this + iVar7 + 4) + 1; iVar5 = iVar5 + 1) {
      Vector<GatyaLotteryData>::elementAt((int)auStack_30);
      local_80 = local_80 + (uint)local_2e;
    }
    local_80 = CapcomMath::random(local_80);
  }
  else {
    if (*(int *)(this + DAT_00155848) == 2) {
      local_7c = ZombieCafe::GetLotteryRandom2(*(ZombieCafe **)(this + 0xc));
      ZombieCafe::NextLotteryRandom2(*(ZombieCafe **)(this + 0xc));
    }
    else {
      local_7c = ZombieCafe::GetLotteryRandom(*(ZombieCafe **)(this + 0xc));
      ZombieCafe::NextLotteryRandom(*(ZombieCafe **)(this + 0xc));
    }
    iVar5 = DAT_0015584c;
    local_80 = 0;
    for (iVar4 = 0; iVar4 < *(int *)(this + iVar5 + 4) + 1; iVar4 = iVar4 + 1) {
      Vector<GatyaLotteryData>::elementAt((int)auStack_38);
      local_80 = local_80 + (uint)local_36;
    }
    __aeabi_idivmod(local_7c,local_80);
    local_80 = extraout_r1_02;
  }
  iVar5 = DAT_0015584c;
  iVar4 = 0;
  iVar7 = 0;
  while( true ) {
    if (*(int *)(this + iVar5 + 4) + 1 <= iVar4) {
      return 0;
    }
    Vector<GatyaLotteryData>::elementAt((int)auStack_28);
    iVar7 = iVar7 + (uint)local_26;
    if (local_80 < iVar7) break;
    iVar4 = iVar4 + 1;
  }
  Vector<GatyaLotteryData>::elementAt((int)auStack_20);
  return local_1c;
}


