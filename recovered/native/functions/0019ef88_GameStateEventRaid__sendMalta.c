/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ef88 GameStateEventRaid::sendMalta */

/* GameStateEventRaid::sendMalta(char*, char*) */

void __thiscall GameStateEventRaid::sendMalta(GameStateEventRaid *this,char *param_1,char *param_2)

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
  
  piVar7 = *(int **)(DAT_0019f06c + 0x19ef94);
  local_1c = *piVar7;
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  iVar4 = DAT_0019f07c;
  MALTAHoover::init(pMVar1,(char *)(DAT_0019f070 + 0x19efbc),(char *)(DAT_0019f074 + 0x19efbe),
                    (char *)(DAT_0019f078 + 0x19efba));
  memset(auStack_11c,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  puVar6 = *(undefined4 **)(iVar4 + 0x19efc4);
  MALTAHoover::getFBID(pSVar2,(char *)*puVar6);
  memset(auStack_dc,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar2,(char *)*puVar6);
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_0019f080 + 0x19f00a),auStack_11c,auStack_dc,param_2,
           *(undefined4 *)(DAT_0019f084 + 0x19f00e));
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar5 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  this_00 = *(ZombieCafe **)(this + 0xc);
  uVar8 = *(uint *)(this_00 + DAT_0019f088);
  uVar9 = *(uint *)(this_00 + DAT_0019f08c);
  iVar4 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_0019f090]);
  MALTAHoover::send(pMVar1,param_1,uVar5,uVar3,uVar8,uVar9,iVar4,acStack_9c,
                    *(char **)(DAT_0019f094 + 0x19f04a));
  if (local_1c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


