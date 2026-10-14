/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019eef4 GameStateEventRaid::rewardZombieLottery */

/* GameStateEventRaid::rewardZombieLottery() */

undefined8 __thiscall GameStateEventRaid::rewardZombieLottery(GameStateEventRaid *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  GameStateEventRaid *local_20;
  
  iVar6 = 0;
  local_20 = this;
  do {
    iVar1 = ZombieCafe::getEventRaid_dropID(*(ZombieCafe **)(this + 0xc),iVar6);
    if ((1 < iVar1 + 1U) &&
       (iVar2 = ZombieCafe::getEventRaid_dropLevel(*(ZombieCafe **)(this + 0xc),iVar6),
       iVar2 <= *(int *)(this + 0x58) + 1)) {
      local_20 = (GameStateEventRaid *)CapcomMath::random(DAT_0019ef6c);
      uVar3 = ZombieCafe::getEventRaid_dropProInit(*(ZombieCafe **)(this + 0xc),iVar6);
      uVar4 = ZombieCafe::getEventRaid_dropProPitch(*(ZombieCafe **)(this + 0xc),iVar6);
      uVar5 = __floatsisf(*(undefined4 *)(this + 0x58));
      uVar4 = __mulsf3(uVar4,uVar5);
      uVar3 = __addsf3(uVar3,uVar4);
      __mulsf3(uVar3,DAT_0019ef70);
      iVar2 = __fixsfsi();
      if ((int)local_20 <= iVar2) goto LAB_0019ef6a;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 6);
  iVar1 = -1;
LAB_0019ef6a:
  return CONCAT44(local_20,iVar1);
}


