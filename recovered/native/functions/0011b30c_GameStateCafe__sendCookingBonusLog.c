/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011b30c GameStateCafe::sendCookingBonusLog */

/* GameStateCafe::sendCookingBonusLog() */

void __thiscall GameStateCafe::sendCookingBonusLog(GameStateCafe *this)

{
  SServer *pSVar1;
  undefined4 uVar2;
  MALTAHoover *pMVar3;
  undefined4 uVar4;
  uint uVar5;
  ZombieCafe *this_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined1 auStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar10 = *(int **)(DAT_0011b3f8 + 0x11b318);
  pcVar11 = (char *)(DAT_0011b3fc + 0x11b31c);
  local_1c = *piVar10;
  L_PrintLog(pcVar11,(char *)(DAT_0011b400 + 0x11b324));
  memset(auStack_dc,0,0x40);
  pSVar1 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getFBID(pSVar1,(char *)**(undefined4 **)(DAT_0011b404 + 0x11b342));
  memset(acStack_9c,0,0x80);
  uVar2 = ZombieCafe::isEventFryerFlag();
  pMVar3 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar3,(char *)(DAT_0011b408 + 0x11b372),(char *)(DAT_0011b40c + 0x11b374),
                    (char *)(DAT_0011b410 + 0x11b376));
  uVar4 = ZombieCafe::frequentFryerLevelGet(*(ZombieCafe **)(this + 0xc));
  snprintf(acStack_9c,0x80,(char *)(DAT_0011b414 + 0x11b38c),auStack_dc,uVar4,uVar2);
  pMVar3 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar7 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  uVar5 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  this_00 = *(ZombieCafe **)(this + 0xc);
  uVar9 = *(uint *)(this_00 + DAT_0011b418);
  uVar8 = *(uint *)(this_00 + DAT_0011b41c);
  iVar6 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_0011b420]);
  MALTAHoover::send(pMVar3,(char *)(DAT_0011b424 + 0x11b3cc),uVar7,uVar5,uVar9,uVar8,iVar6,
                    acStack_9c,*(char **)(DAT_0011b428 + 0x11b3d0));
  L_PrintLog(pcVar11,(char *)(DAT_0011b42c + 0x11b3e6));
  if (local_1c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


