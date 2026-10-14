/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe5f4 ObjectiveSystem::checkForCompletion */

/* ObjectiveSystem::checkForCompletion(Objective*) */

void __thiscall ObjectiveSystem::checkForCompletion(ObjectiveSystem *this,Objective *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *__format;
  ZombieCafe *this_00;
  char acStack_9c [128];
  int local_1c;
  
  piVar9 = *(int **)(DAT_001fe6a4 + 0x1fe600);
  local_1c = *piVar9;
  iVar1 = CapcomApp::getInstance();
  this_00 = *(ZombieCafe **)(iVar1 + 4);
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 4)) {
    iVar1 = CCSecondsSince1970();
    iVar5 = *(int *)(this + 0x1c);
    __format = (char *)(DAT_001fe6a8 + 0x1fe628);
    uVar2 = CCServer::GetMyUserID(*(void **)(this_00 + DAT_001fe6ac));
    uVar6 = *(undefined4 *)(this_00 + 0x680);
    uVar7 = *(undefined4 *)(this_00 + DAT_001fe6b0);
    uVar8 = *(undefined4 *)(this_00 + DAT_001fe6b4);
    uVar3 = ZombieCafe::getToxin(this_00);
    iVar4 = DAT_001fe6b8 + 0x1fe652;
    __divsi3(*(undefined4 *)(this + 0x14),1000,iVar1 - iVar5,(int)*(short *)param_1,uVar2,uVar6,
             uVar7,uVar8,uVar3,(int)*(short *)param_1,iVar1 - iVar5);
    snprintf(acStack_9c,0x80,__format,iVar4);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this_00 + DAT_001fe6bc),DAT_001fe6c0 + 0x1fe68e,acStack_9c);
  }
  if (local_1c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


