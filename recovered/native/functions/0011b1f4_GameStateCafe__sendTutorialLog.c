/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011b1f4 GameStateCafe::sendTutorialLog */

/* GameStateCafe::sendTutorialLog(int) */

void __thiscall GameStateCafe::sendTutorialLog(GameStateCafe *this,int param_1)

{
  SServer *pSVar1;
  MALTAHoover *pMVar2;
  uint uVar3;
  ZombieCafe *this_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 auStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar7 = *(int **)(DAT_0011b2d4 + 0x11b200);
  local_1c = *piVar7;
  pcVar9 = (char *)(DAT_0011b2d8 + 0x11b20a);
  L_PrintLog(pcVar9,(char *)(DAT_0011b2dc + 0x11b20e));
  memset(auStack_dc,0,0x40);
  pSVar1 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getFBID(pSVar1,(char *)**(undefined4 **)(DAT_0011b2e0 + 0x11b22c));
  memset(acStack_9c,0,0x80);
  pMVar2 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar2,(char *)(DAT_0011b2e4 + 0x11b254),(char *)(DAT_0011b2e8 + 0x11b256),
                    (char *)(DAT_0011b2ec + 0x11b258));
  snprintf(acStack_9c,0x80,(char *)(DAT_0011b2f0 + 0x11b268),auStack_dc,param_1);
  pMVar2 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar5 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  this_00 = *(ZombieCafe **)(this + 0xc);
  uVar8 = *(uint *)(this_00 + DAT_0011b2f4);
  uVar6 = *(uint *)(this_00 + DAT_0011b2f8);
  iVar4 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_0011b2fc]);
  MALTAHoover::send(pMVar2,(char *)(DAT_0011b300 + 0x11b2a6),uVar5,uVar3,uVar8,uVar6,iVar4,
                    acStack_9c,*(char **)(DAT_0011b304 + 0x11b2aa));
  L_PrintLog(pcVar9,(char *)(DAT_0011b308 + 0x11b2c0));
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


