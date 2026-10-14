/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166b74 GameStateMap::onReOpenHero */

/* GameStateMap::onReOpenHero(GameStateMap*) */

void GameStateMap::onReOpenHero(GameStateMap *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ZombieCafe *pZVar4;
  undefined4 uVar5;
  MALTAHoover *pMVar6;
  SServer *pSVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  NoticeDialog *pNVar18;
  undefined4 *puVar19;
  String aSStack_1ac [8];
  String aSStack_1a4 [8];
  undefined1 auStack_19c [64];
  undefined1 auStack_15c [64];
  char acStack_11c [128];
  char acStack_9c [128];
  int local_1c;
  
  iVar16 = DAT_00166d30 + 0x166b80;
  piVar17 = *(int **)(iVar16 + DAT_00166d34);
  local_1c = *piVar17;
  iVar12 = **(int **)(iVar16 + DAT_00166d38);
  iVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar2 < iVar12) {
    pNVar18 = *(NoticeDialog **)(param_1 + DAT_00166d3c);
    if (pNVar18 != (NoticeDialog *)0x0) {
      String::String(aSStack_1ac,(char *)(DAT_00166d40 + 0x166bae));
      Vector<String>::elementAt((int)aSStack_1a4);
      NoticeDialog::show(pNVar18,aSStack_1ac,aSStack_1a4,0,param_1);
      String::~String(aSStack_1a4);
      String::~String(aSStack_1ac);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),iVar12);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_00166d48) = 1000;
    iVar2 = DAT_00166d50;
    uVar3 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_00166d4c));
    pZVar4 = *(ZombieCafe **)(param_1 + 0xc);
    uVar13 = *(undefined4 *)(pZVar4 + 0x680);
    uVar9 = *(undefined4 *)(pZVar4 + DAT_00166d54);
    uVar14 = *(undefined4 *)(pZVar4 + DAT_00166d58);
    uVar5 = ZombieCafe::getToxin(pZVar4);
    iVar1 = DAT_00166d60;
    snprintf(acStack_11c,0x80,(char *)(DAT_00166d5c + 0x166c36),(char *)(iVar2 + 0x166c0e),uVar3,
             uVar13,uVar9,uVar14,uVar5,iVar12);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_00166d64),(char *)(iVar1 + 0x166c48),
               acStack_11c);
    pMVar6 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar6,(char *)(DAT_00166d68 + 0x166c6a),(char *)(DAT_00166d6c + 0x166c6c),
                      (char *)(iVar2 + 0x166c0e));
    memset(auStack_19c,0,0x40);
    pSVar7 = (SServer *)MALTAHoover::GetInstance();
    puVar19 = *(undefined4 **)(iVar16 + DAT_00166d70);
    MALTAHoover::getFBID(pSVar7,(char *)*puVar19);
    memset(auStack_15c,0,0x40);
    pSVar7 = (SServer *)MALTAHoover::GetInstance();
    MALTAHoover::getGCID(pSVar7,(char *)*puVar19);
    memset(acStack_9c,0,0x80);
    snprintf(acStack_9c,0x80,(char *)(DAT_00166d74 + 0x166cb8),auStack_19c,auStack_15c,iVar12,2);
    pMVar6 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar10 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
    uVar8 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
    pZVar4 = *(ZombieCafe **)(param_1 + 0xc);
    uVar11 = *(uint *)(pZVar4 + DAT_00166d54);
    uVar15 = *(uint *)(pZVar4 + DAT_00166d58);
    iVar2 = ZombieCafe::calUserRankId(pZVar4,(uint)(byte)pZVar4[DAT_00166d78]);
    MALTAHoover::send(pMVar6,(char *)(iVar1 + 0x166c48),uVar10,uVar8,uVar15,uVar11,iVar2,acStack_9c,
                      *(char **)(iVar16 + DAT_00166d7c));
  }
  if (local_1c == *piVar17) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


