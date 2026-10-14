/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f028 GameStateCafe::advanceTimeSection */

/* GameStateCafe::advanceTimeSection(long long, int, int, int, bool) */

void GameStateCafe::advanceTimeSection
               (longlong param_1,int param_2,int param_3,int param_4,bool param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  StatusNote *pSVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  Cafe *this;
  int iVar13;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar14;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  undefined8 uVar15;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  undefined4 in_stack_00000008;
  char in_stack_0000000c;
  undefined4 in_stack_ffffff6c;
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar13 = DAT_0011f324 + 0x11f038;
  puVar10 = *(undefined4 **)(iVar13 + DAT_0011f32c);
  if (in_stack_0000000c == '\0') {
    fVar14 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(param_2 + 0xc));
    uVar15 = customerEntryRate((GameStateCafe *)param_2,fVar14);
    uVar15 = customerDepartureRate
                       ((GameStateCafe *)param_2,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    uVar8 = cafeFullProbability((GameStateCafe *)param_2,(int)param_1,(float)uVar15,
                                (float)((ulonglong)uVar15 >> 0x20));
    iVar13 = numCustomersLeft(extraout_s0_05,CONCAT44(in_stack_ffffff6c,uVar8),extraout_s1_04);
    iVar9 = numCustomersNotServed
                      (extraout_s0_06,CONCAT44(0x3f800000,uVar8),extraout_s1_05,extraout_s2_01);
    uVar8 = __floatsisf(iVar13 + iVar9);
    iVar13 = *(int *)(param_2 + 0xc);
    uVar8 = __mulsf3(uVar8,*puVar10);
    uVar8 = __subsf3(*(undefined4 *)(iVar13 + 0x688),uVar8);
  }
  else {
    fVar14 = (float)ZombieCafe::getModifiedRating(*(ZombieCafe **)(param_2 + 0xc));
    iVar9 = customerEntryRate((GameStateCafe *)param_2,fVar14);
    uVar8 = customerNotServedProbability((GameStateCafe *)param_2,extraout_s0,iVar9,extraout_s1);
    uVar15 = customerDepartureRate((GameStateCafe *)param_2,extraout_s0_00,extraout_s1_00);
    uVar1 = cafeFullProbability((GameStateCafe *)param_2,(int)param_1,(float)uVar15,
                                (float)((ulonglong)uVar15 >> 0x20));
    iVar9 = numCustomersLeft(extraout_s0_01,CONCAT44(in_stack_ffffff6c,uVar1),extraout_s1_01);
    iVar2 = numCustomersNotServed(extraout_s0_02,CONCAT44(uVar8,uVar1),extraout_s1_02,extraout_s2);
    uVar11 = *puVar10;
    iVar3 = numCustomersServed(extraout_s0_03,CONCAT44(uVar8,uVar1),extraout_s1_03,extraout_s2_00);
    iVar4 = Cafe::getRandomFoodSales(*(Cafe **)(param_2 + 0x14),iVar3);
    ObjectiveSystem::serveCustomers
              (*(ObjectiveSystem **)(*(int *)(param_2 + 0xc) + DAT_0011f330),iVar3);
    uVar8 = **(undefined4 **)(iVar13 + DAT_0011f334);
    if (0 < iVar4) {
      StringBuffer::StringBuffer(aSStack_34);
      String::valueOf((int)aSStack_64);
      StringBuffer::append(aSStack_34,aSStack_64);
      String::~String(aSStack_64);
      uVar1 = __floatsisf(iVar4);
      uVar1 = __mulsf3(uVar1,DAT_0011f338);
      uVar5 = __floatsisf(in_stack_00000008);
      uVar1 = __mulsf3(uVar1,uVar5);
      __divsf3(uVar1,DAT_0011f33c);
      iVar6 = __fixsfsi();
      iVar12 = *(int *)(param_2 + 0xc);
      iVar6 = iVar6 * *(int *)(**(int **)(iVar12 + 0x590) + DAT_0011f340);
      fVar14 = extraout_s0_04;
      if (iVar6 != 0) {
        String::String(aSStack_5c,(char *)(DAT_0011f344 + 0x11f142));
        StringBuffer::append(aSStack_34,aSStack_5c);
        String::~String(aSStack_5c);
        String::valueOf((int)aSStack_54);
        StringBuffer::append(aSStack_34,aSStack_54);
        String::~String(aSStack_54);
        String::String(aSStack_4c,(char *)(DAT_0011f348 + 0x11f170));
        StringBuffer::append(aSStack_34,aSStack_4c);
        String::~String(aSStack_4c);
        Vector<String>::elementAt((int)aSStack_44);
        StringBuffer::append(aSStack_34,aSStack_44);
        String::~String(aSStack_44);
        fVar14 = (float)ZombieCafe::addCash(*(ZombieCafe **)(param_2 + 0xc),iVar6);
        iVar12 = *(int *)(param_2 + 0xc);
      }
      ZombieCafe::playEffect(iVar12,fVar14);
      this = *(Cafe **)(param_2 + 0x14);
      StringBuffer::toString();
      pSVar7 = (StatusNote *)operator_new(0x30);
      StatusNote::StatusNote
                (pSVar7,*(undefined4 *)(param_2 + 0x18),0,aSStack_3c,
                 **(undefined4 **)(iVar13 + DAT_0011f350),0xffffffff,0);
      Cafe::addStatusNote(this,pSVar7);
      String::~String(aSStack_3c);
      ZombieCafe::addCash(*(ZombieCafe **)(param_2 + 0xc),iVar4);
      CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
    }
    iVar13 = *(int *)(param_2 + 0xc);
    uVar1 = __floatsisf(iVar9 + iVar2);
    uVar1 = __mulsf3(uVar11,uVar1);
    uVar1 = __subsf3(0,uVar1);
    uVar11 = __floatsisf(iVar3);
    uVar8 = __mulsf3(uVar8,uVar11);
    uVar8 = __addsf3(uVar1,uVar8);
    uVar8 = __addsf3(*(undefined4 *)(iVar13 + 0x688),uVar8);
  }
  *(undefined4 *)(iVar13 + 0x688) = uVar8;
  iVar9 = *(int *)(param_2 + 0xc);
  uVar8 = *(undefined4 *)(iVar9 + 0x688);
  iVar13 = __aeabi_fcmplt(uVar8,0);
  if (iVar13 == 0) {
    iVar13 = __aeabi_fcmpgt(uVar8,0x3f800000);
    if (iVar13 != 0) {
      uVar8 = 0x3f800000;
    }
  }
  else {
    uVar8 = 0;
  }
  *(undefined4 *)(iVar9 + 0x688) = uVar8;
  return;
}


