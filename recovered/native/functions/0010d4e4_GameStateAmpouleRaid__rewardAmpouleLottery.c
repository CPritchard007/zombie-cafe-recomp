/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d4e4 GameStateAmpouleRaid::rewardAmpouleLottery */

/* GameStateAmpouleRaid::rewardAmpouleLottery(short) */

undefined4 __thiscall
GameStateAmpouleRaid::rewardAmpouleLottery(GameStateAmpouleRaid *this,short param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int local_24;
  
  iVar5 = (int)param_1;
  CapcomMath::random(DAT_0010d5e0);
  uVar1 = __floatsisf();
  CapcomMath::random(DAT_0010d5e0);
  uVar2 = __floatsisf();
  iVar3 = __aeabi_fcmplt(uVar2,DAT_0010d5e4);
  iVar6 = DAT_0010d5ec;
  if (iVar3 != 0) {
    uVar2 = 0;
    printf((char *)(DAT_0010d5e8 + 0x10d516));
    printf((char *)(DAT_0010d5f0 + 0x10d522),iVar5);
    local_24 = 0;
    do {
      iVar3 = ZombieCafe::isAmpouleRaid_FirstHalf();
      if (iVar3 == 0) {
        iVar3 = iVar6 + 0x10d528;
      }
      else {
        iVar3 = DAT_0010d5f4 + 0x10d546;
      }
      uVar2 = __addsf3(uVar2,*(undefined4 *)(iVar3 + iVar5 * 0x4c + local_24));
      local_24 = local_24 + 4;
    } while (local_24 != 0x4c);
    uVar8 = __extendsfdf2();
    uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
    printf((char *)(DAT_0010d5f8 + 0x10d570),uVar7,(int)uVar8,uVar7);
    iVar6 = 0;
    uVar7 = 0;
    do {
      iVar3 = ZombieCafe::isAmpouleRaid_FirstHalf();
      if (iVar3 == 0) {
        iVar3 = DAT_0010d600 + 0x10d598;
      }
      else {
        iVar3 = DAT_0010d5fc + 0x10d594;
      }
      uVar7 = __addsf3(uVar7,*(undefined4 *)(iVar3 + iVar5 * 0x4c + iVar6 * 4));
      uVar4 = __divsf3(uVar7,uVar2);
      uVar4 = __mulsf3(uVar4,DAT_0010d5e4);
      iVar3 = __aeabi_fcmpge(uVar4,uVar1);
      if (iVar3 != 0) {
        printf((char *)(DAT_0010d604 + 0x10d5c6),iVar6);
        return *(undefined4 *)(DAT_0010d608 + iVar6 * 4 + 0x10d5d2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x13);
  }
  return 0xffffffff;
}


