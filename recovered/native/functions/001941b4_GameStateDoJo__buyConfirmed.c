/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001941b4 GameStateDoJo::buyConfirmed */

/* GameStateDoJo::buyConfirmed(GameStateDoJo*) */

void GameStateDoJo::buyConfirmed(GameStateDoJo *param_1)

{
  GameStateDoJo GVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ZombieCafe *pZVar5;
  undefined4 uVar6;
  MALTAHoover *pMVar7;
  SServer *pSVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined1 auStack_15c [64];
  char acStack_11c [128];
  char acStack_9c [128];
  int local_1c;
  
  piVar12 = *(int **)(DAT_00194394 + 0x1941c0);
  local_1c = *piVar12;
  do {
    iVar2 = lottery(param_1);
    GVar1 = param_1[(iVar2 + 0x348) * 2 + 4];
  } while (*(GameStateDoJo *)(*(int *)(param_1 + 0x30) + 0x36) == GVar1);
  *(int *)(param_1 + 0x6d8) = iVar2;
  *(GameStateDoJo *)(*(int *)(param_1 + 0x30) + 0x36) = GVar1;
  iVar2 = DAT_00194398;
  if (param_1[0x6d0] == (GameStateDoJo)0x0) {
    fVar18 = (float)ZombieCafe::addCash(*(ZombieCafe **)(param_1 + 0xc),
                                        -*(int *)(param_1 + DAT_00194398));
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    fVar18 = (float)ZombieCafe::spendToxin
                              (*(ZombieCafe **)(param_1 + 0xc),*(int *)(param_1 + DAT_00194398));
    iVar3 = *(int *)(param_1 + 0xc);
  }
  ZombieCafe::playEffect(iVar3,fVar18);
  GVar1 = param_1[DAT_0019439c];
  if (GVar1 == (GameStateDoJo)0x1) {
    iVar10 = 0x29;
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x40);
  }
  else if (GVar1 == (GameStateDoJo)0x0) {
    iVar10 = 0x28;
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x40);
  }
  else {
    if (GVar1 != (GameStateDoJo)0x2) goto LAB_0019424a;
    iVar10 = 0x2a;
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x40);
  }
  Quest::runQuest(iVar3,iVar10,(int *)0xffffffff);
LAB_0019424a:
  save();
  iVar3 = DAT_001943a4;
  uVar4 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_001943a0));
  pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
  uVar13 = *(undefined4 *)(pZVar5 + 0x680);
  uVar11 = *(undefined4 *)(pZVar5 + DAT_001943a8);
  uVar14 = *(undefined4 *)(pZVar5 + DAT_001943ac);
  uVar6 = ZombieCafe::getToxin(pZVar5);
  iVar10 = DAT_001943b4;
  snprintf(acStack_11c,0x80,(char *)(DAT_001943b0 + 0x19428a),(char *)(iVar3 + 0x19426c),uVar4,
           uVar13,uVar11,uVar14,uVar6,(uint)(byte)param_1[DAT_0019439c],(uint)(byte)param_1[0x6d0],
           *(undefined4 *)(param_1 + iVar2));
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_001943b8),(char *)(iVar10 + 0x1942b4),
             acStack_11c);
  pMVar7 = (MALTAHoover *)MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::GetInstance();
  MALTAHoover::init(pMVar7,(char *)(DAT_001943bc + 0x1942d4),(char *)(DAT_001943c0 + 0x1942d6),
                    (char *)(iVar3 + 0x19426c));
  memset(auStack_15c,0,0x40);
  pSVar8 = (SServer *)MALTAHoover::GetInstance();
  MALTAHoover::getFBID(pSVar8,(char *)**(undefined4 **)(DAT_001943c4 + 0x1942f2));
  memset(acStack_9c,0,0x80);
  snprintf(acStack_9c,0x80,(char *)(DAT_001943c8 + 0x194316),auStack_15c,
           (uint)(byte)param_1[DAT_0019439c],(uint)(byte)param_1[0x6d0],
           *(undefined4 *)(param_1 + iVar2));
  pMVar7 = (MALTAHoover *)MALTAHoover::GetInstance();
  uVar15 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
  uVar9 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
  uVar16 = *(uint *)(pZVar5 + DAT_001943a8);
  uVar17 = *(uint *)(pZVar5 + DAT_001943ac);
  iVar2 = ZombieCafe::calUserRankId(pZVar5,(uint)(byte)pZVar5[DAT_001943cc]);
  MALTAHoover::send(pMVar7,(char *)(iVar10 + 0x1942b4),uVar15,uVar9,uVar17,uVar16,iVar2,acStack_9c,
                    *(char **)(DAT_001943d0 + 0x194356));
  param_1[DAT_001943d4] = (GameStateDoJo)0x4;
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  changeMessageWindow((int)param_1,false);
  if (local_1c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


