/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f790 ZombieCafe::lotteryZombieFlowerZombieID */

/* ZombieCafe::lotteryZombieFlowerZombieID() */

void __thiscall ZombieCafe::lotteryZombieFlowerZombieID(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_e4 [17];
  undefined4 local_a0 [17];
  undefined4 local_5c [18];
  
  iVar1 = DAT_0023f87c;
  memcpy(local_e4,(void *)(DAT_0023f878 + 0x23f7dc),0x44);
  memcpy(local_a0,(void *)(iVar1 + 0x23f7a8),0x44);
  memcpy(local_5c,(void *)(iVar1 + 0x23f7ec),0x44);
  iVar1 = arc4random();
  __aeabi_idivmod(iVar1 + (iVar1 >> 0x1f) ^ iVar1 >> 0x1f,DAT_0023f880);
  if (*(short *)(this + 0x360) == 1) {
    uVar2 = getZombieFlowerPlantLottery(this);
    __aeabi_idivmod(uVar2,DAT_0023f880);
    puVar5 = local_a0;
    uVar2 = 0;
    iVar1 = 0;
    do {
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar3 = __aeabi_fcmpeq(uVar4,0);
      if (iVar3 == 0) {
        uVar4 = __mulsf3(uVar4,DAT_0023f884);
        uVar2 = __addsf3(uVar2,uVar4);
        uVar4 = __floatsisf(extraout_r1_00);
        iVar3 = __aeabi_fcmple(uVar4,uVar2);
        if (iVar3 != 0) goto LAB_0023f866;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x11);
  }
  else {
    puVar5 = local_e4;
    uVar2 = 0;
    iVar1 = 0;
    do {
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar3 = __aeabi_fcmpeq(uVar4,0);
      if (iVar3 == 0) {
        uVar4 = __mulsf3(uVar4,DAT_0023f884);
        uVar2 = __addsf3(uVar2,uVar4);
        uVar4 = __floatsisf(extraout_r1);
        iVar3 = __aeabi_fcmple(uVar4,uVar2);
        if (iVar3 != 0) goto LAB_0023f866;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x11);
  }
  iVar1 = 7;
LAB_0023f866:
  *(short *)(this + DAT_0023f888) = (short)local_5c[iVar1];
  return;
}


