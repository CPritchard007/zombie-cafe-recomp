/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00136984 GameStateColosseum::sendMalta */

/* GameStateColosseum::sendMalta(char*, char*) */

void __thiscall GameStateColosseum::sendMalta(GameStateColosseum *this,char *param_1,char *param_2)

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
  
  piVar6 = *(int **)(DAT_00136a4c + 0x136990);
  local_1c = *piVar6;
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar1,(char *)(DAT_00136a50 + 0x1369b2),(char *)(DAT_00136a54 + 0x1369b6),
                    (char *)(DAT_00136a58 + 0x1369b4));
  memset(auStack_dc,0,0x40);
  pSVar2 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getFBID(pSVar2,(char *)**(undefined4 **)(DAT_00136a5c + 0x1369d0));
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_00136a64 + 0x1369ee),auStack_dc,param_2,
           *(undefined4 *)(DAT_00136a60 + 0x1369ea));
  pMVar1 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar5 = *(uint *)(*(ZombieCafe **)(this + 0xc) + 0x680);
  uVar3 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  this_00 = *(ZombieCafe **)(this + 0xc);
  uVar7 = *(uint *)(this_00 + DAT_00136a68);
  uVar8 = *(uint *)(this_00 + DAT_00136a6c);
  iVar4 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_00136a70]);
  MALTAHoover::send(pMVar1,param_1,uVar5,uVar3,uVar7,uVar8,iVar4,acStack_9c,
                    *(char **)(DAT_00136a74 + 0x136a2a));
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


