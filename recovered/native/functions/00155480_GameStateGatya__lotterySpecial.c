/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00155480 GameStateGatya::lotterySpecial */

/* GameStateGatya::lotterySpecial(bool) */

undefined4 __thiscall GameStateGatya::lotterySpecial(GameStateGatya *this,bool param_1)

{
  undefined4 uVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_3c;
  undefined1 auStack_38 [2];
  byte local_36;
  undefined1 auStack_30 [2];
  byte local_2e;
  undefined1 auStack_28 [2];
  byte local_26;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  uVar3 = (uint)param_1;
  local_3c = uVar3;
  if ((uVar3 == 0) ||
     (uVar3 = (uint)**(byte **)(DAT_00155550 + 0x155492), local_3c = uVar3, uVar3 == 0)) {
    for (; (int)uVar3 < *(int *)(this + 0xe34) + 1; uVar3 = uVar3 + 1) {
      Vector<GatyaLotteryData>::elementAt((int)auStack_30);
      local_3c = local_3c + local_2e;
    }
    local_3c = CapcomMath::random(local_3c);
  }
  else {
    uVar1 = ZombieCafe::GetLotteryRandom(*(ZombieCafe **)(this + 0xc));
    ZombieCafe::NextLotteryRandom(*(ZombieCafe **)(this + 0xc));
    iVar4 = 0;
    for (iVar2 = 0; iVar2 < *(int *)(this + 0xe34) + 1; iVar2 = iVar2 + 1) {
      Vector<GatyaLotteryData>::elementAt((int)auStack_38);
      iVar4 = iVar4 + (uint)local_36;
    }
    __aeabi_idivmod(uVar1,iVar4);
    ZombieCafe::NextLotteryRandom(*(ZombieCafe **)(this + 0xc));
    local_3c = extraout_r1;
  }
  iVar2 = 0;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(this + 0xe34) + 1 <= iVar2) {
      return 0;
    }
    Vector<GatyaLotteryData>::elementAt((int)auStack_28);
    iVar4 = iVar4 + (uint)local_26;
    if ((int)local_3c <= iVar4) break;
    iVar2 = iVar2 + 1;
  }
  Vector<GatyaLotteryData>::elementAt((int)auStack_20);
  return local_1c;
}


