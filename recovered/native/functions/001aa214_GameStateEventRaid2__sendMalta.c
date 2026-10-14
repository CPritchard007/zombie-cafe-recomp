/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aa214 GameStateEventRaid2::sendMalta */

/* GameStateEventRaid2::sendMalta(char*, char*) */

void __thiscall
GameStateEventRaid2::sendMalta(GameStateEventRaid2 *this,char *param_1,char *param_2)

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
  
  piVar7 = *(int **)(DAT_001aa2f8 + 0x1aa220);
  local_1c = *piVar7;
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar4 = DAT_001aa308;
  MALTAHoover::init(pMVar1,(char *)(DAT_001aa2fc + 0x1aa248),(char *)(DAT_001aa300 + 0x1aa24a),
                    (char *)(DAT_001aa304 + 0x1aa246));
  memset(auStack_11c,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar6 = *(undefined4 **)(iVar4 + 0x1aa250);
  MALTAHoover::getFBID(pSVar2,(char *)*puVar6);
  memset(auStack_dc,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar2,(char *)*puVar6);
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_001aa30c + 0x1aa296),auStack_11c,auStack_dc,param_2,
           *(undefined4 *)(DAT_001aa310 + 0x1aa29a));
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar5 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  this_00 = *(ZombieCafe **)(this + 0xc);
  uVar8 = *(uint *)(this_00 + DAT_001aa314);
  uVar9 = *(uint *)(this_00 + DAT_001aa318);
  iVar4 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_001aa31c]);
  MALTAHoover::send(pMVar1,param_1,uVar5,uVar3,uVar8,uVar9,iVar4,acStack_9c,
                    *(char **)(DAT_001aa320 + 0x1aa2d6));
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


