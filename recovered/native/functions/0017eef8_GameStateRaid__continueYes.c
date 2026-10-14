/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017eef8 GameStateRaid::continueYes */

/* GameStateRaid::continueYes(GameStateRaid*) */

void GameStateRaid::continueYes(GameStateRaid *param_1)

{
  MALTAHoover *pMVar1;
  SServer *pSVar2;
  uint uVar3;
  ZombieCafe *this;
  int *piVar4;
  int iVar5;
  uint uVar6;
  Character *this_00;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_11c [64];
  undefined1 auStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0017f028 + 0x17ef04);
  iVar10 = 0;
  local_1c = *piVar4;
  while( true ) {
    iVar5 = *(int *)(param_1 + 0xb0) + 1;
    if (iVar5 <= iVar10) break;
    iVar5 = iVar10 * 4;
    this_00 = *(Character **)(*(int *)(*(int *)(param_1 + 0xb4) + iVar5) + 0x8c);
    fVar11 = (float)Character::getMaxEnergy();
    Character::setCurrentEnergy(this_00,fVar11);
    *(undefined4 *)(this_00 + 0x50) = 0;
    this_00[0x44] = (Character)0x0;
    iVar10 = iVar10 + 1;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xb4) + iVar5) + 0x84) = 1;
  }
  ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),iVar5);
  ZombieCafe::save();
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar10 = DAT_0017f038;
  MALTAHoover::init(pMVar1,(char *)(DAT_0017f02c + 0x17ef78),(char *)(DAT_0017f030 + 0x17ef7a),
                    (char *)(DAT_0017f034 + 0x17ef76));
  memset(auStack_11c,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar7 = *(undefined4 **)(iVar10 + 0x17ef80);
  MALTAHoover::getFBID(pSVar2,(char *)*puVar7);
  memset(auStack_dc,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar2,(char *)*puVar7);
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_0017f03c + 0x17efc6),auStack_11c,auStack_dc,iVar5);
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar6 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
  uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  this = *(ZombieCafe **)(param_1 + 0xc);
  uVar8 = *(uint *)(this + DAT_0017f040);
  uVar9 = *(uint *)(this + DAT_0017f044);
  iVar10 = ZombieCafe::calUserRankId(this,(uint)(byte)this[DAT_0017f048]);
  MALTAHoover::send(pMVar1,(char *)(DAT_0017f050 + 0x17f004),uVar6,uVar3,uVar8,uVar9,iVar10,
                    acStack_9c,*(char **)(DAT_0017f04c + 0x17f000));
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


