/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011c8e0 GameStateCafe::sendMalta */

/* GameStateCafe::sendMalta(char*, char*) */

void __thiscall GameStateCafe::sendMalta(GameStateCafe *this,char *param_1,char *param_2)

{
  MALTAHoover *pMVar1;
  SServer *pSVar2;
  uint uVar3;
  ZombieCafe *this_00;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0011c9a8 + 0x11c8ec);
  local_1c = *piVar6;
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar1,(char *)(DAT_0011c9ac + 0x11c90e),(char *)(DAT_0011c9b0 + 0x11c912),
                    (char *)(DAT_0011c9b4 + 0x11c910));
  memset(auStack_dc,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getFBID(pSVar2,(char *)**(undefined4 **)(DAT_0011c9b8 + 0x11c92c));
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_0011c9c0 + 0x11c94a),auStack_dc,param_2,
           *(undefined4 *)(DAT_0011c9bc + 0x11c946));
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar5 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  this_00 = *(ZombieCafe **)(this + 0xc);
  uVar7 = *(uint *)(this_00 + DAT_0011c9c4);
  uVar8 = *(uint *)(this_00 + DAT_0011c9c8);
  iVar4 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_0011c9cc]);
  MALTAHoover::send(pMVar1,param_1,uVar5,uVar3,uVar7,uVar8,iVar4,acStack_9c,
                    *(char **)(DAT_0011c9d0 + 0x11c986));
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


