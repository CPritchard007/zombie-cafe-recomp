/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb174 GameStateEventRaid3Menu::sendEventRaid3ReopenLog */

/* GameStateEventRaid3Menu::sendEventRaid3ReopenLog(GameStateEventRaid3Menu*, int) */

void __thiscall
GameStateEventRaid3Menu::sendEventRaid3ReopenLog
          (GameStateEventRaid3Menu *this,GameStateEventRaid3Menu *param_1,int param_2)

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
  
  piVar7 = *(int **)(DAT_001bb254 + 0x1bb180);
  local_1c = *piVar7;
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar4 = DAT_001bb264;
  MALTAHoover::init(pMVar1,(char *)(DAT_001bb258 + 0x1bb1a6),(char *)(DAT_001bb25c + 0x1bb1a8),
                    (char *)(DAT_001bb260 + 0x1bb1a4));
  memset(auStack_11c,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar6 = *(undefined4 **)(iVar4 + 0x1bb1ae);
  MALTAHoover::getFBID(pSVar2,(char *)*puVar6);
  memset(auStack_dc,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar2,(char *)*puVar6);
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_001bb268 + 0x1bb1f4),auStack_11c,auStack_dc,param_2,2);
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar5 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
  uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  this_00 = *(ZombieCafe **)(param_1 + 0xc);
  uVar8 = *(uint *)(this_00 + DAT_001bb26c);
  uVar9 = *(uint *)(this_00 + DAT_001bb270);
  iVar4 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_001bb274]);
  MALTAHoover::send(pMVar1,(char *)(DAT_001bb27c + 0x1bb236),uVar5,uVar3,uVar8,uVar9,iVar4,
                    acStack_9c,*(char **)(DAT_001bb278 + 0x1bb230));
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


