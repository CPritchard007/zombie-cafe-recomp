/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001feb04 ObjectiveSystem::completeSet */

/* ObjectiveSystem::completeSet() */

void __thiscall ObjectiveSystem::completeSet(ObjectiveSystem *this)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *__format;
  int *piVar12;
  char acStack_9c [128];
  int local_1c;
  
  iVar1 = DAT_001febe4;
  iVar6 = *(int *)(this + 0x18);
  piVar12 = *(int **)(DAT_001febdc + 0x1feb10);
  local_1c = *piVar12;
  if (1 < iVar6) {
    iVar6 = 2;
  }
  uVar7 = *(int *)(**(int **)(DAT_001febe0 + 0x1feb24) + iVar6 * 8) + *(int *)(this + 0x14);
  *(uint *)(this + 0x14) = uVar7;
  uVar5 = **(uint **)(iVar1 + 0x1feb36);
  uVar8 = (*(uint **)(iVar1 + 0x1feb36))[1];
  if (((int)uVar8 < (int)uVar7 >> 0x1f) || (((int)uVar7 >> 0x1f == uVar8 && (uVar5 < uVar7)))) {
    *(uint *)(this + 0x14) = uVar5;
  }
  iVar6 = CCSecondsSince1970();
  iVar1 = DAT_001febf0;
  iVar6 = iVar6 - *(int *)(this + 0x1c);
  __format = (char *)(DAT_001febe8 + 0x1feb5c);
  uVar2 = CCServer::GetMyUserID(*(void **)(*(int *)this + DAT_001febec));
  this_00 = *(ZombieCafe **)this;
  uVar9 = *(undefined4 *)(this_00 + 0x680);
  uVar10 = *(undefined4 *)(this_00 + DAT_001febf4);
  uVar11 = *(undefined4 *)(this_00 + DAT_001febf8);
  uVar3 = ZombieCafe::getToxin(this_00);
  uVar4 = __divsi3(*(undefined4 *)(this + 0x14),1000);
  snprintf(acStack_9c,0x80,__format,iVar1 + 0x1feb6e,uVar2,uVar9,uVar10,uVar11,uVar3,iVar6,uVar4);
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(*(int *)this + DAT_001febfc),DAT_001fec00 + 0x1febb8,acStack_9c);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x14);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  loadNewSet(this);
  if (local_1c != *piVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


