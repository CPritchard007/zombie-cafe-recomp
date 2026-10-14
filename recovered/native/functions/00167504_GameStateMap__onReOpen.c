/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00167504 GameStateMap::onReOpen */

/* GameStateMap::onReOpen(GameStateMap*) */

void GameStateMap::onReOpen(GameStateMap *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *pZVar3;
  undefined4 uVar4;
  MALTAHoover *pMVar5;
  SServer *pSVar6;
  uint uVar7;
  int extraout_r1;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  NoticeDialog *pNVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  String aSStack_1d4 [8];
  String aSStack_1cc [8];
  MapCafe aMStack_1c4 [48];
  String aSStack_194 [36];
  MapCafe aMStack_170 [48];
  String aSStack_140 [8];
  undefined4 local_138;
  char acStack_11c [64];
  char acStack_dc [64];
  char acStack_9c [128];
  int local_1c;
  
  iVar14 = DAT_00167714 + 0x167510;
  piVar10 = *(int **)(iVar14 + DAT_00167718);
  local_1c = *piVar10;
  MapCafe::MapCafe(aMStack_1c4,
                   (MapCafe *)(*(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xa0) * 0x54));
  String::~String(aSStack_194);
  iVar11 = **(int **)(iVar14 + DAT_0016771c);
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
  if (iVar1 < iVar11) {
    pNVar15 = *(NoticeDialog **)(param_1 + DAT_00167720);
    if (pNVar15 != (NoticeDialog *)0x0) {
      String::String(aSStack_1d4,(char *)(DAT_00167724 + 0x16755c));
      Vector<String>::elementAt((int)aSStack_1cc);
      NoticeDialog::show(pNVar15,aSStack_1d4,aSStack_1cc,0,param_1);
      String::~String(aSStack_1cc);
      String::~String(aSStack_1d4);
    }
  }
  else {
    ZombieCafe::spendToxin(*(ZombieCafe **)(param_1 + 0xc),iVar11);
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + DAT_0016772c);
    MapCafe::MapCafe(aMStack_170,
                     (MapCafe *)(*(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xa0) * 0x54));
    pcVar16 = (char *)(DAT_00167734 + 0x1675be);
    __aeabi_idivmod(local_138,**(undefined1 **)(iVar14 + DAT_00167730));
    *(undefined4 *)(extraout_r1 * 4 + iVar1) = 1000;
    String::~String(aSStack_140);
    uVar2 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_00167738));
    pZVar3 = *(ZombieCafe **)(param_1 + 0xc);
    uVar12 = *(undefined4 *)(pZVar3 + 0x680);
    uVar8 = *(undefined4 *)(pZVar3 + DAT_0016773c);
    uVar9 = *(undefined4 *)(pZVar3 + DAT_00167740);
    uVar4 = ZombieCafe::getToxin(pZVar3);
    snprintf(acStack_9c,0x80,(char *)(DAT_00167744 + 0x16760a),pcVar16,uVar2,uVar12,uVar8,uVar9,
             uVar4,iVar11);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)(param_1 + 0xc) + DAT_00167748),DAT_0016774c + 0x167624,
               acStack_9c);
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar5,(char *)(DAT_00167750 + 0x167640),(char *)(DAT_00167754 + 0x167642),
                      pcVar16);
    memset(acStack_11c,0,0x40);
    pSVar6 = (SServer *)MALTAHoover::GetInstance();
    iVar1 = MALTAHoover::getFBID(pSVar6,(char *)**(undefined4 **)(iVar14 + DAT_00167758));
    if (iVar1 == 0) {
      L_PrintLog((char *)(DAT_0016775c + 0x16766c),acStack_11c);
    }
    memset(acStack_dc,0,0x40);
    snprintf(acStack_dc,0x40,(char *)(DAT_00167760 + 0x167686),acStack_11c,iVar11);
    snprintf(acStack_dc,0x40,(char *)(DAT_00167764 + 0x16769a),acStack_11c,iVar11,0);
    L_PrintLog((char *)(DAT_00167768 + 0x1676aa),(char *)(DAT_0016776c + 0x1676ac));
    pMVar5 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar17 = *(uint *)(*(ZombieCafe **)(param_1 + 0xc) + 0x680);
    uVar7 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
    pZVar3 = *(ZombieCafe **)(param_1 + 0xc);
    uVar13 = *(uint *)(pZVar3 + DAT_00167740);
    uVar18 = *(uint *)(pZVar3 + DAT_0016773c);
    iVar1 = ZombieCafe::calUserRankId(pZVar3,(uint)(byte)pZVar3[DAT_00167770]);
    MALTAHoover::send(pMVar5,(char *)(DAT_00167778 + 0x1676e8),uVar17,uVar7,uVar13,uVar18,iVar1,
                      acStack_dc,*(char **)(iVar14 + DAT_00167774));
  }
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


