/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011bbd8 GameStateCafe::sendFlowerZomibeStartLog */

/* GameStateCafe::sendFlowerZomibeStartLog() */

void __thiscall GameStateCafe::sendFlowerZomibeStartLog(GameStateCafe *this)

{
  SServer *pSVar1;
  undefined4 uVar2;
  int iVar3;
  MALTAHoover *pMVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ZombieCafe *this_00;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_11c [64];
  undefined1 auStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  piVar8 = *(int **)(DAT_0011bcd8 + 0x11bbe4);
  local_1c = *piVar8;
  puVar7 = (undefined4 *)(DAT_0011bcdc + 0x11bbf2);
  memset(auStack_11c,0,0x40);
  pSVar1 = (SServer *)MALTAHoover::GetInstance();
  puVar7 = (undefined4 *)*puVar7;
  MALTAHoover::getFBID(pSVar1,(char *)*puVar7);
  memset(auStack_dc,0,0x40);
  pSVar1 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getGCID(pSVar1,(char *)*puVar7);
  memset(acStack_9c,0,0x80);
  uVar2 = ZombieCafe::getZombieFlowerZombieID(*(ZombieCafe **)(this + 0xc));
  iVar3 = ZombieCafe::getZombieFlowerFlowerType(*(ZombieCafe **)(this + 0xc));
  pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar4,(char *)(DAT_0011bce0 + 0x11bc5a),(char *)(DAT_0011bce4 + 0x11bc5c),
                    (char *)(DAT_0011bce8 + 0x11bc5e));
  snprintf(acStack_9c,0x80,(char *)(DAT_0011bcec + 0x11bc6c),auStack_11c,auStack_dc,
           (int)(short)(-(ushort)(iVar3 == 1) & 0x14),uVar2);
  iVar3 = CapcomApp::getInstance();
  this_00 = *(ZombieCafe **)(iVar3 + 4);
  pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar6 = *(uint *)(this_00 + 0x680);
  uVar5 = ZombieCafe::getToxin(this_00);
  uVar9 = *(uint *)(this_00 + DAT_0011bcf0);
  uVar10 = *(uint *)(this_00 + DAT_0011bcf4);
  iVar3 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_0011bcf8]);
  MALTAHoover::send(pMVar4,(char *)(DAT_0011bd00 + 0x11bcbc),uVar6,uVar5,uVar9,uVar10,iVar3,
                    acStack_9c,*(char **)(DAT_0011bcfc + 0x11bcb6));
  if (local_1c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


