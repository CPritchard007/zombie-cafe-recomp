/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018c8dc GameStateRoulette::buyConfirmed */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0018ca1c) */
/* WARNING: Removing unreachable block (ram,0x0018ca1c) */
/* GameStateRoulette::buyConfirmed(GameStateRoulette*) */

void GameStateRoulette::buyConfirmed(GameStateRoulette *param_1)

{
  GameStateRoulette GVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  Character *this;
  ZombieCafe *pZVar5;
  MALTAHoover *pMVar6;
  SServer *pSVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  float fVar23;
  undefined4 uStack_4;
  undefined4 *puVar18;
  uint *puVar19;
  uint *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  
  iVar2 = DAT_0018cbb0;
  iVar15 = DAT_0018cbac + 0x18c8e8;
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_0018cbb0);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_0018cbb0);
  puVar19 = (uint *)(&stack0xffffffec + DAT_0018cbb0);
  puVar20 = (uint *)(&stack0xffffffec + DAT_0018cbb0);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_0018cbb0);
  puVar22 = (uint *)(&stack0xffffffec + DAT_0018cbb0);
  puVar13 = *(undefined4 **)(iVar15 + DAT_0018cbb4);
  *(undefined4 *)(&stack0xffffffec + DAT_0018cbb8 + DAT_0018cbb0) = *puVar13;
  uVar3 = lottery(param_1);
  iVar4 = DAT_0018cbbc;
  *(undefined4 *)(param_1 + 0xa00) = uVar3;
  GVar1 = param_1[iVar4];
  *(undefined4 **)(&stack0x00000030 + iVar2) = puVar13;
  if (GVar1 == (GameStateRoulette)0x0) {
    fVar23 = (float)ZombieCafe::addCash(*(ZombieCafe **)(param_1 + 0xc),
                                        -*(int *)(param_1 + DAT_0018cbc0));
    iVar4 = *(int *)(param_1 + 0xc);
  }
  else {
    fVar23 = (float)ZombieCafe::spendToxin
                              (*(ZombieCafe **)(param_1 + 0xc),*(int *)(param_1 + DAT_0018cbc0));
    iVar4 = *(int *)(param_1 + 0xc);
  }
  ZombieCafe::playEffect(iVar4,fVar23);
  *(uint *)(&stack0x0000001c + iVar2) =
       (uint)*(ushort *)(param_1 + (*(int *)(param_1 + 0xa00) + 0x1ce) * 4 + 4);
  if (param_1[DAT_0018cbc4] != (GameStateRoulette)0x0) goto LAB_0018ca62;
  String::String((String *)(&stack0x00000038 + iVar2),(char *)(DAT_0018cbc8 + 0x18c94e));
  this = (Character *)operator_new(0x6c);
  uVar3 = *(undefined4 *)
           (*(int *)(&stack0x0000001c + iVar2) * 4 +
           *(int *)(*(int *)(param_1 + 0xc) + DAT_0018cbcc));
  *puVar17 = (String *)(&stack0x00000038 + iVar2);
  Character::Character(this,uVar3,2,1);
  String::~String((String *)(&stack0x00000038 + iVar2));
  fVar23 = (float)__floatsisf((int)**(short **)(iVar15 + DAT_0018cbd0));
  Character::setCurrentEnergy(this,fVar23);
  CharacterData::getRandomName
            ((CharacterData *)(&stack0x00000040 + iVar2),*(bool *)(*(int *)this + DAT_0018cbd4),0);
  String::operator=((String *)(this + 8),&stack0x00000040 + iVar2);
  String::~String((String *)(&stack0x00000040 + iVar2));
  Platform::getAppTime();
  uVar3 = __fixdfsi();
  this[4] = (Character)0x1;
  *(undefined4 *)(this + 0x10) = uVar3;
  this[5] = (Character)0x2;
  pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
  iVar4 = *(int *)((Vector<Character*> *)(pZVar5 + DAT_0018cbd8) + 4);
  if (iVar4 + 1 <
      (int)*(short *)((*(int *)(pZVar5 + 0x680) + -1) * 2 + **(int **)(iVar15 + DAT_0018cbdc))) {
    iVar4 = iVar4 + 2;
    if (*(int *)(pZVar5 + DAT_0018cbd8) < iVar4) {
      iVar8 = *(int *)(pZVar5 + DAT_0018cbd8) * 2;
      if (iVar8 < iVar4) {
        iVar8 = iVar4;
      }
      Vector<Character*>::resize((Vector<Character*> *)(pZVar5 + DAT_0018cbd8),iVar8,-1);
    }
    iVar8 = *(int *)(pZVar5 + DAT_0018cbd8 + 4);
    iVar4 = DAT_0018cbd8 + 8;
    *(int *)(pZVar5 + DAT_0018cbd8 + 4) = iVar8 + 1;
    *(Character **)((iVar8 + 1) * 4 + *(int *)(pZVar5 + iVar4)) = this;
  }
  else {
    ZombieCafe::putZombieInMeetlocker(pZVar5,this,(PullMenuElement *)0x0);
  }
  if ((byte)param_1[DAT_0018cbe0] < 4) {
    iVar4 = *(int *)(param_1 + 0xc);
    switch(param_1[DAT_0018cbe0]) {
    case (GameStateRoulette)0x0:
      Quest::runQuest(*(int *)(iVar4 + 0x40),8,(int *)0xffffffff);
      goto LAB_0018ca5c;
    case (GameStateRoulette)0x1:
      iVar4 = *(int *)(iVar4 + 0x40);
      iVar8 = 9;
      break;
    case (GameStateRoulette)0x2:
      iVar4 = *(int *)(iVar4 + 0x40);
      iVar8 = 10;
      break;
    case (GameStateRoulette)0x3:
      iVar4 = *(int *)(iVar4 + 0x40);
      iVar8 = 0xb;
    }
    Quest::runQuest(iVar4,iVar8,(int *)0xffffffff);
    fVar23 = (float)Character::getMaxEnergy();
    Character::setCurrentEnergy(this,fVar23);
  }
LAB_0018ca5c:
  save();
LAB_0018ca62:
  iVar8 = DAT_0018cbec;
  iVar4 = DAT_0018cbe8;
  if (param_1[DAT_0018cbbc] == (GameStateRoulette)0x0) {
    *(undefined4 *)(&stack0x00000018 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(param_1 + DAT_0018cbc0);
  }
  else {
    *(undefined4 *)(&stack0x00000014 + iVar2) = 0;
    *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(param_1 + DAT_0018cbc0);
  }
  uVar3 = CCServer::GetMyUserID(*(void **)(*(int *)(param_1 + 0xc) + DAT_0018cbe4));
  *(undefined4 *)(&stack0x00000020 + iVar2) = uVar3;
  pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
  uVar11 = *(undefined4 *)(pZVar5 + 0x680);
  uVar3 = *(undefined4 *)(pZVar5 + DAT_0018cbf0);
  *(undefined4 *)(&stack0x00000028 + iVar2) = *(undefined4 *)(pZVar5 + iVar4);
  *(undefined4 *)(&stack0x00000024 + iVar2) = uVar11;
  *(undefined4 *)(&stack0x0000002c + iVar2) = uVar3;
  uVar3 = ZombieCafe::getToxin(pZVar5);
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000024 + iVar2);
  uVar11 = *(undefined4 *)(&stack0x0000002c + iVar2);
  *puVar18 = *(undefined4 *)(&stack0x00000020 + iVar2);
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = uVar11;
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x00000028 + iVar2);
  pcVar14 = (char *)(iVar8 + 0x18cabe);
  *(uint *)(&stack0x00000000 + iVar2) = (uint)(byte)param_1[DAT_0018cbe0];
  *(undefined4 *)((int)&uStack_4 + iVar2) = uVar3;
  *(undefined4 *)(&stack0x00000008 + iVar2) = *(undefined4 *)(&stack0x00000018 + iVar2);
  *(undefined4 *)(&stack0x00000004 + iVar2) = *(undefined4 *)(&stack0x00000014 + iVar2);
  *(undefined4 *)(&stack0x0000000c + iVar2) = *(undefined4 *)(&stack0x0000001c + iVar2);
  snprintf(&stack0x00000088 + iVar2,0x80,(char *)(DAT_0018cbf4 + 0x18cac4),pcVar14);
  iVar4 = *(int *)(param_1 + 0xc);
  *(uint *)(&stack0x00000020 + iVar2) = (uint)(byte)param_1[DAT_0018cbc4];
  puVar13 = *(undefined4 **)(iVar15 + DAT_0018cbfc);
  *(undefined4 *)(&stack0x00000024 + iVar2) = *(undefined4 *)(iVar15 + DAT_0018cc00);
  if (*(int *)(&stack0x00000020 + iVar2) == 0) {
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(iVar4 + DAT_0018cbf8),DAT_0018cd40 + 0x18cc30,
               &stack0x00000088 + iVar2);
    pMVar6 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar6,(char *)(DAT_0018cd44 + 0x18cc4a),(char *)(DAT_0018cd48 + 0x18cc4c),
                      pcVar14);
    memset(&stack0x00000048 + iVar2,*(int *)(&stack0x00000020 + iVar2),0x40);
    pSVar7 = (SServer *)MALTAHoover::GetInstance();
    iVar4 = MALTAHoover::getFBID(pSVar7,(char *)*puVar13);
    if (iVar4 == 0) {
      L_PrintLog((char *)(DAT_0018cd4c + 0x18cc72),&stack0x00000048 + iVar2);
    }
    pcVar14 = &stack0x00000108 + iVar2;
    memset(pcVar14,0,0x400);
    uVar3 = *(undefined4 *)(&stack0x00000018 + iVar2);
    *puVar20 = (uint)(byte)param_1[DAT_0018cd50];
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar3;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000014 + iVar2);
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = *(undefined4 *)(&stack0x0000001c + iVar2);
    snprintf(pcVar14,0x400,(char *)(DAT_0018cd54 + 0x18cc90),&stack0x00000048 + iVar2);
    L_PrintLog((char *)(DAT_0018cd58 + 0x18ccac),(char *)(DAT_0018cd5c + 0x18ccae));
    uVar3 = MALTAHoover::GetInstance();
    *(undefined4 *)(&stack0x00000014 + iVar2) = uVar3;
    pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
    *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(pZVar5 + 0x680);
    uVar3 = ZombieCafe::getToxin(pZVar5);
    *(undefined4 *)(&stack0x0000001c + iVar2) = uVar3;
    pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
    uVar11 = *(undefined4 *)(pZVar5 + DAT_0018cd60);
    uVar16 = *(undefined4 *)(pZVar5 + DAT_0018cd64);
    uVar3 = ZombieCafe::calUserRankId(pZVar5,(uint)(byte)pZVar5[DAT_0018cd68]);
    pcVar9 = (char *)(DAT_0018cd6c + 0x18ccde);
  }
  else {
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(iVar4 + DAT_0018cbf8),DAT_0018cc04 + 0x18cb00,
               &stack0x00000088 + iVar2);
    pMVar6 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar6,(char *)(DAT_0018cc08 + 0x18cb1a),(char *)(DAT_0018cc0c + 0x18cb1c),
                      pcVar14);
    memset(&stack0x00000048 + iVar2,0,0x40);
    pSVar7 = (SServer *)MALTAHoover::GetInstance();
    iVar4 = MALTAHoover::getFBID(pSVar7,(char *)*puVar13);
    if (iVar4 == 0) {
      L_PrintLog((char *)(DAT_0018cc10 + 0x18cb42),&stack0x00000048 + iVar2);
    }
    pcVar14 = &stack0x00000108 + iVar2;
    memset(pcVar14,0,0x40);
    uVar3 = *(undefined4 *)(&stack0x00000018 + iVar2);
    *puVar19 = (uint)(byte)param_1[DAT_0018cbe0];
    *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar3;
    *(undefined4 *)(&stack0xfffffff0 + iVar2) = *(undefined4 *)(&stack0x00000014 + iVar2);
    *(undefined4 *)(&stack0xfffffff8 + iVar2) = *(undefined4 *)(&stack0x0000001c + iVar2);
    snprintf(pcVar14,0x40,(char *)(DAT_0018cc14 + 0x18cb5e),&stack0x00000048 + iVar2);
    L_PrintLog((char *)(DAT_0018cc18 + 0x18cb78),(char *)(DAT_0018cc1c + 0x18cb7a));
    uVar3 = MALTAHoover::GetInstance();
    *(undefined4 *)(&stack0x00000014 + iVar2) = uVar3;
    pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
    *(undefined4 *)(&stack0x00000018 + iVar2) = *(undefined4 *)(pZVar5 + 0x680);
    uVar3 = ZombieCafe::getToxin(pZVar5);
    *(undefined4 *)(&stack0x0000001c + iVar2) = uVar3;
    pZVar5 = *(ZombieCafe **)(param_1 + 0xc);
    uVar11 = *(undefined4 *)(pZVar5 + DAT_0018cbf0);
    uVar16 = *(undefined4 *)(pZVar5 + DAT_0018cbe8);
    uVar3 = ZombieCafe::calUserRankId(pZVar5,(uint)(byte)pZVar5[DAT_0018cc20]);
    pcVar9 = &UNK_0018cbaa + DAT_0018cc24;
  }
  *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar3;
  uVar10 = *(uint *)(&stack0x00000018 + iVar2);
  *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(&stack0x00000024 + iVar2);
  pMVar6 = *(MALTAHoover **)(&stack0x00000014 + iVar2);
  uVar12 = *(uint *)(&stack0x0000001c + iVar2);
  *puVar21 = uVar11;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar16;
  *(char **)(&stack0xfffffff8 + iVar2) = pcVar14;
  MALTAHoover::send(pMVar6,pcVar9,uVar10,uVar12,*puVar22,*(uint *)(&stack0xfffffff0 + iVar2),
                    *(int *)(&stack0xfffffff4 + iVar2),*(char **)(&stack0xfffffff8 + iVar2),
                    *(char **)((int)&uStack_4 + iVar2));
  param_1[DAT_0018cd70] = (GameStateRoulette)0x1;
  *(undefined4 *)(param_1 + DAT_0018cd74) = 0;
  *(undefined4 *)(param_1 + DAT_0018cd78) = 0;
  changeMessageWindow(SUB41(param_1,0));
  if (*(int *)(&stack0xffffffec + DAT_0018cd7c + iVar2) == **(int **)(&stack0x00000030 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


