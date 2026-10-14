/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aed2c GameStateEventRaid2Menu::sendEventRaid2ReopenLog */

/* GameStateEventRaid2Menu::sendEventRaid2ReopenLog(GameStateEventRaid2Menu*, int) */

void __thiscall
GameStateEventRaid2Menu::sendEventRaid2ReopenLog
          (GameStateEventRaid2Menu *this,GameStateEventRaid2Menu *param_1,int param_2)

{
  MALTAHoover *pMVar1;
  SServer *pSVar2;
  uint uVar3;
  ZombieCafe *this_00;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_11c [64];
  undefined1 auStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar7 = *(int **)(DAT_001aee0c + 0x1aed38);
  local_1c = *piVar7;
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar4 = DAT_001aee1c;
  MALTAHoover::init(pMVar1,(char *)(DAT_001aee10 + 0x1aed5e),(char *)(DAT_001aee14 + 0x1aed60),
                    (char *)(DAT_001aee18 + 0x1aed5c));
  memset(auStack_11c,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar6 = *(undefined4 **)(iVar4 + 0x1aed66);
  MALTAHoover::getFBID(pSVar2,(char *)*puVar6);
  memset(auStack_dc,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar2,(char *)*puVar6);
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_001aee20 + 0x1aedac),auStack_11c,auStack_dc,param_2,2);
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar5 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
  uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  this_00 = *(ZombieCafe **)(param_1 + 0xc);
  uVar8 = *(uint *)(this_00 + DAT_001aee24);
  uVar9 = *(uint *)(this_00 + DAT_001aee28);
  iVar4 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_001aee2c]);
  MALTAHoover::send(pMVar1,(char *)(DAT_001aee34 + 0x1aedee),uVar5,uVar3,uVar8,uVar9,iVar4,
                    acStack_9c,*(char **)(DAT_001aee30 + 0x1aede8));
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


