/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fdea4 ObjectiveSystem::completeObjective */

/* ObjectiveSystem::completeObjective(int) */

void __thiscall ObjectiveSystem::completeObjective(ObjectiveSystem *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ZombieCafe *this_00;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short *psVar11;
  char acStack_9c [128];
  int local_1c;
  
  iVar2 = DAT_001fdf60;
  iVar1 = DAT_001fdf5c;
  piVar6 = *(int **)(DAT_001fdf58 + 0x1fdeb0);
  local_1c = *piVar6;
  if (param_1 < *(int *)(this + 8) + 1) {
    psVar11 = *(short **)(param_1 * 4 + *(int *)(this + 0xc));
    *(undefined1 *)(psVar11 + 7) = 1;
    iVar3 = CCSecondsSince1970();
    iVar7 = *(int *)(this + 0x1c);
    uVar4 = CCServer::GetMyUserID(*(void **)(*(int *)this + DAT_001fdf64));
    this_00 = *(ZombieCafe **)this;
    uVar8 = *(undefined4 *)(this_00 + 0x680);
    uVar9 = *(undefined4 *)(this_00 + DAT_001fdf68);
    uVar10 = *(undefined4 *)(this_00 + DAT_001fdf6c);
    uVar5 = ZombieCafe::getToxin(this_00);
    __divsi3(*(undefined4 *)(this + 0x14),1000,0,iVar3 - iVar7,uVar4,uVar8,uVar9,uVar10,uVar5,
             (int)*psVar11,iVar3 - iVar7);
    snprintf(acStack_9c,0x80,(char *)(iVar1 + 0x1fded8),iVar2 + 0x1fdee0);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)this + DAT_001fdf70),DAT_001fdf74 + 0x1fdf40,acStack_9c);
  }
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


