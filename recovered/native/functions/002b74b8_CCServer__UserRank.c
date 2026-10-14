/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b74b8 CCServer::UserRank */

/* CCServer::UserRank(void*, void (*)(void*, ccUserRankResult, char const*, unsigned int), void*) */

void CCServer::UserRank(void *param_1,_func_void_void_ptr_ccUserRankResult_char_ptr_uint *param_2,
                       void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  MALTAHoover *this;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b7604;
  piVar9 = (int *)(&stack0xffffffec + DAT_002b7604);
  *(_func_void_void_ptr_ccUserRankResult_char_ptr_uint **)(&stack0x0000002c + DAT_002b7604) =
       param_2;
  iVar5 = DAT_002b760c + 0x2b74cc;
  puVar7 = *(undefined4 **)(iVar5 + DAT_002b7608);
  *(undefined4 *)(&stack0x00000478 + DAT_002b7604) = *puVar7;
  L_PrintLog((char *)(DAT_002b7610 + 0x2b74d8),(char *)(DAT_002b7614 + 0x2b74de));
  iVar3 = *(int *)((int)param_1 + 0x3d0);
  uVar2 = 0;
  *(undefined4 **)(&stack0x00000030 + iVar1) = puVar7;
  if (iVar3 == 0) {
    memset(&stack0x00000038 + iVar1,0,0x40);
    piVar4 = *(int **)(iVar5 + DAT_002b7618);
    *(int **)(&stack0x00000020 + iVar1) = piVar4;
    this = *(MALTAHoover **)(iVar5 + DAT_002b761c);
    if ((-1 < *piVar4 << 0x1f) &&
       (iVar3 = FUN_002e9da0(*(undefined4 *)(&stack0x00000020 + iVar1)), iVar3 != 0)) {
      MALTAHoover::MALTAHoover(this);
      FUN_002e9e08(*(undefined4 *)(&stack0x00000020 + iVar1));
      __aeabi_atexit(this,*(undefined4 *)(iVar5 + DAT_002b7620),
                     *(undefined4 *)(iVar5 + DAT_002b7624));
    }
    MALTAHoover::getFBID((SServer *)this,(char *)**(undefined4 **)(iVar5 + DAT_002b7628));
    *(uint *)(&stack0x00000028 + iVar1) = (uint)*(byte *)((int)param_3 + DAT_002b762c);
    uVar2 = getMyUdid(param_1);
    *(undefined4 *)(&stack0x00000020 + iVar1) = uVar2;
    uVar8 = *(undefined4 *)((int)param_3 + 0x680);
    uVar2 = ZombieCafe::getToxin((ZombieCafe *)param_3);
    *(undefined4 *)(&stack0x00000024 + iVar1) = uVar2;
    uVar2 = ZombieCafe::getCash((ZombieCafe *)param_3);
    *piVar9 = (int)(&stack0x00000038 + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0x4e;
    *(undefined4 *)((int)&uStack_4 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(&stack0x00000028 + iVar1);
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000024 + iVar1);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar8;
    iVar3 = DAT_002b7630 + 0x2b7576;
    *(int *)(&stack0x00000004 + iVar1) = iVar3;
    *(int *)(&stack0x00000008 + iVar1) = iVar3;
    *(int *)(&stack0x0000000c + iVar1) = iVar3;
    *(int *)(&stack0x00000010 + iVar1) = iVar3;
    *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(iVar5 + DAT_002b7634);
    pcVar6 = (char *)(DAT_002b763c + 0x2b7592);
    *(int *)(&stack0x00000018 + iVar1) = DAT_002b7640 + 0x2b7594;
    snprintf(&stack0x00000078 + iVar1,0x400,(char *)(DAT_002b7638 + 0x2b758a),
             *(undefined4 *)(&stack0x00000020 + iVar1));
    L_PrintLog(pcVar6,&stack0x00000078 + iVar1);
    iVar3 = DAT_002b7644;
    uVar2 = *(undefined4 *)(&stack0x0000002c + iVar1);
    *(void **)((int)param_1 + 0x3dc) = param_3;
    *(undefined4 *)((int)param_1 + 0x3d8) = uVar2;
    L_PrintLog((char *)(iVar3 + 0x2b75b8),&stack0x00000078 + iVar1);
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000078 + iVar1,0x35,param_1);
    iVar3 = DAT_002b7648;
    *(undefined4 *)((int)param_1 + 0x3d0) = uVar2;
    L_PrintLog(pcVar6,(char *)(iVar3 + 0x2b75d6));
    uVar2 = *(undefined4 *)((int)param_1 + 0x3d0);
  }
  if (*(int *)(&stack0x00000478 + iVar1) == **(int **)(&stack0x00000030 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


