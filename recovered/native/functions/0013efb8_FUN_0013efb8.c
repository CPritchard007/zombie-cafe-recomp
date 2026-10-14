/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013efb8 FUN_0013efb8 */

void FUN_0013efb8(void)

{
  int iVar1;
  ushort *puVar2;
  char *__ptr;
  void *pvVar3;
  MALTAHoover *pMVar4;
  SServer *pSVar5;
  uint uVar6;
  ZombieCafe *this;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  String *this_00;
  uint uVar10;
  void *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint uVar11;
  FoodStack *unaff_r7;
  Vector<FoodStack*> *this_01;
  char *pcVar12;
  int in_stack_00000020;
  undefined4 in_stack_00000334;
  undefined4 in_stack_00000338;
  
  FoodStack::~FoodStack(unaff_r7);
  operator_delete(unaff_r7);
  this_01 = (Vector<FoodStack*> *)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f0dc);
  iVar1 = Vector<FoodStack*>::removeElementAt
                    (*(Vector<FoodStack*> **)((int)unaff_r4 + unaff_r6),in_stack_00000020);
  for (iVar8 = 0; iVar8 <= *(int *)(this_01 + 4); iVar8 = iVar8 + 1) {
    if (*(int *)(iVar8 * 4 + *(int *)(this_01 + 8)) == iVar1) goto LAB_0013eff6;
  }
  iVar8 = -1;
LAB_0013eff6:
  puVar2 = (ushort *)Vector<FoodStack*>::removeElementAt(this_01,iVar8);
  *(ushort **)((int)unaff_r4 + 0x218) = puVar2;
  *(undefined1 *)((int)unaff_r4 + 0x38) = 4;
  String::String((String *)&stack0x00000324,(String *)(puVar2 + 6));
  iVar8 = operator!=(&stack0x00000324,0);
  String::~String((String *)&stack0x00000324);
  if (iVar8 == 0) {
    this_00 = (String *)((int)unaff_r4 + 0x1dc);
    __ptr = (char *)String::getBytes(this_00);
    snprintf(&stack0x000003cc,0x80,(char *)(DAT_0013f480 + 0x13f176),(uint)*puVar2);
    StringUtil::getEncodingString((StringUtil *)&stack0x0000033c,'\0');
    pvVar3 = (void *)String::getBytes(this_00,&stack0x0000033c,0,0);
    String::~String((String *)&stack0x0000033c);
    CCServer::GetMyUserID(*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f470));
    ZombieCafe::getToxin(*(ZombieCafe **)((int)unaff_r4 + 0xc));
    pcVar12 = (char *)(DAT_0013f48c + 0x13f1e2);
    snprintf(&stack0x0000044c,0x80,(char *)(DAT_0013f490 + 0x13f1e8),pcVar12);
    free(pvVar3);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f494),DAT_0013f498 + 0x13f206
               ,&stack0x0000044c);
    pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar4,(char *)(DAT_0013f49c + 0x13f222),(char *)(DAT_0013f4a0 + 0x13f224),
                      pcVar12);
    memset(&stack0x0000034c,0,0x40);
    pSVar5 = (SServer *)MALTAHoover::GetInstance();
    MALTAHoover::getFBID(pSVar5,(char *)**(undefined4 **)(unaff_r5 + DAT_0013f4a4));
    memset(&stack0x0000038c,0,0x40);
    StringUtil::getEncodingString((StringUtil *)&stack0x00000344,'\0');
    pvVar3 = (void *)String::getBytes(this_00,&stack0x00000344,0);
    String::~String((String *)&stack0x00000344);
    memset(&stack0x000004cc,0,0x200);
    snprintf(&stack0x000004cc,0x200,(char *)(DAT_0013f4a8 + 0x13f296),&stack0x0000034c);
    pMVar4 = (MALTAHoover *)MALTAHoover::GetInstance();
    uVar10 = *(uint *)(*(ZombieCafe **)((int)unaff_r4 + 0xc) + 0x680);
    uVar6 = ZombieCafe::getToxin(*(ZombieCafe **)((int)unaff_r4 + 0xc));
    this = *(ZombieCafe **)((int)unaff_r4 + 0xc);
    uVar9 = *(uint *)(this + DAT_0013f484);
    uVar11 = *(uint *)(this + DAT_0013f488);
    iVar8 = ZombieCafe::calUserRankId(this,(uint)(byte)this[DAT_0013f4ac]);
    MALTAHoover::send(pMVar4,(char *)(DAT_0013f4b4 + 0x13f2e0),uVar10,uVar6,uVar11,uVar9,iVar8,
                      &stack0x000004cc,*(char **)(unaff_r5 + DAT_0013f4b0));
    free(pvVar3);
    Quest::runQuest(*(int *)(*(int *)((int)unaff_r4 + 0xc) + 0x40),0x20,(int *)0xffffffff);
    iVar8 = DAT_0013f46c;
    if (*(int *)((int)unaff_r4 + 0x78) << 0x1f < 0) {
      iVar1 = CCFacebook::IsLoggedIn(*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f46c));
      if (iVar1 == 0) {
        pcVar12 = (char *)(DAT_0013f4bc + 0x13f328);
      }
      else {
        pcVar12 = (char *)CCFacebook::GetMyName(*(void **)(*(int *)((int)unaff_r4 + 0xc) + iVar8));
      }
    }
    else {
      pcVar12 = (char *)(DAT_0013f4b8 + 0x13f322);
    }
    iVar8 = DAT_0013f46c;
    if ((*(int *)((int)unaff_r4 + 0x78) << 0x1f < 0) &&
       (iVar1 = CCFacebook::IsLoggedIn(*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f46c)),
       iVar1 != 0)) {
      pcVar7 = (char *)CCFacebook::GetUserIdAsString
                                 (*(void **)(*(int *)((int)unaff_r4 + 0xc) + iVar8));
    }
    else {
      pcVar7 = (char *)CCServer::GetMyGameCenterId
                                 (*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f470));
    }
    L_PrintLog((char *)(DAT_0013f4c4 + 0x13f35a),(char *)(DAT_0013f4c0 + 0x13f358));
    iVar8 = GiftManager::GiveGift
                      (*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f474),&stack0x000003cc,0,0
                       ,__ptr,pcVar12,pcVar7,*(_func_void_void_ptr **)(unaff_r5 + DAT_0013f4c8),
                       *(_func_void_void_ptr **)(unaff_r5 + DAT_0013f4cc),unaff_r4);
    if (iVar8 == 0) {
      GameStateFriendCafe::sendGiftFailed(unaff_r4);
    }
    else {
      GameStateFriendCafe::sendGiftSuccessful(unaff_r4);
    }
    ObjectiveSystem::giftFood(*(ObjectiveSystem **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f4d0));
  }
  else {
    StringUtil::getEncodingString((StringUtil *)&stack0x0000032c,'\0');
    __ptr = (char *)String::getBytes((String *)((int)unaff_r4 + 0x1dc),&stack0x0000032c,0);
    String::~String((String *)&stack0x0000032c);
    snprintf(&stack0x000004cc,0x80,(char *)(DAT_0013f0e0 + 0x13f05a),(uint)*puVar2);
    CRAMHoover::beginTrackEvent(*(char **)(*(int *)((int)unaff_r4 + 0xc) + 0x840));
    ZombieCafe::addMixPanelHeader(*(ZombieCafe **)((int)unaff_r4 + 0xc));
    pcVar12 = *(char **)(*(int *)((int)unaff_r4 + 0xc) + 0x840);
    CapcomDate::now((CapcomDate *)&stack0x00000334);
    CapcomDate::secondsBetween
              (*(undefined4 *)(puVar2 + 0xe),*(undefined4 *)(puVar2 + 0x10),in_stack_00000334,
               in_stack_00000338);
    CRAMHoover::addEventIntProperty(pcVar12,DAT_0013f0e8 + 0x13f09a);
    CRAMHoover::endTrackEvent();
    iVar8 = DAT_0013f0ec;
    if (*(int *)((int)unaff_r4 + 0x78) << 0x1f < 0) {
      iVar1 = CCFacebook::IsLoggedIn(*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f0ec));
      if (iVar1 == 0) {
        pcVar12 = (char *)(DAT_0013f468 + 0x13f0fa);
      }
      else {
        pcVar12 = (char *)CCFacebook::GetMyName(*(void **)(*(int *)((int)unaff_r4 + 0xc) + iVar8));
      }
    }
    else {
      pcVar12 = &UNK_0013f0ca + DAT_0013f0f0;
    }
    iVar8 = DAT_0013f46c;
    if ((*(int *)((int)unaff_r4 + 0x78) << 0x1f < 0) &&
       (iVar1 = CCFacebook::IsLoggedIn(*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f46c)),
       iVar1 != 0)) {
      pcVar7 = (char *)CCFacebook::GetUserIdAsString
                                 (*(void **)(*(int *)((int)unaff_r4 + 0xc) + iVar8));
    }
    else {
      pcVar7 = (char *)CCServer::GetMyGameCenterId
                                 (*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f470));
    }
    iVar8 = GiftManager::FillOrder
                      (*(void **)(*(int *)((int)unaff_r4 + 0xc) + DAT_0013f474),__ptr,pcVar12,pcVar7
                       ,&stack0x000004cc,*(_func_void_void_ptr **)(unaff_r5 + DAT_0013f478),
                       *(_func_void_void_ptr **)(unaff_r5 + DAT_0013f47c),unaff_r4);
    if (iVar8 == 0) {
      GameStateFriendCafe::sendGiftFailed2(unaff_r4);
    }
    else {
      GameStateFriendCafe::sendGiftSuccessful2(unaff_r4);
    }
  }
  free(__ptr);
  ZombieCafe::save();
  FridgeDialog::refreshPage(*(FridgeDialog **)((int)unaff_r4 + 0x1bc));
  FUN_0013f90e();
  return;
}


