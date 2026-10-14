/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00201c80 CompleteOrder::tick */

/* CompleteOrder::tick(long) */

void CompleteOrder::tick(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  Recipe *pRVar4;
  char *pcVar5;
  void *pvVar6;
  int *piVar7;
  MALTAHoover *this;
  SServer *pSVar8;
  ConfirmDialog *pCVar9;
  char *pcVar10;
  ushort *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  FoodStack *pFVar16;
  char *pcVar17;
  undefined4 uVar18;
  ZombieCafe *this_00;
  int iVar19;
  undefined4 *puVar20;
  float extraout_s0;
  float extraout_s0_00;
  float fVar29;
  float extraout_s1;
  float extraout_s1_00;
  undefined4 uStack_4;
  uint *puVar21;
  int *piVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  int *piVar25;
  undefined4 *puVar26;
  uint *puVar27;
  undefined4 *puVar28;
  
  iVar2 = DAT_00201fd0;
  iVar19 = DAT_00201fc8 + 0x201c8c;
  puVar13 = *(undefined4 **)(iVar19 + DAT_00201fcc);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_00201fd0);
  puVar21 = (uint *)(&stack0xffffffec + DAT_00201fd0);
  piVar22 = (int *)(&stack0xffffffec + DAT_00201fd0);
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_00201fd0);
  puVar24 = (undefined4 *)(&stack0xffffffec + DAT_00201fd0);
  piVar25 = (int *)(&stack0xffffffec + DAT_00201fd0);
  puVar26 = (undefined4 *)(&stack0xffffffec + DAT_00201fd0);
  puVar27 = (uint *)(&stack0xffffffec + DAT_00201fd0);
  puVar28 = (undefined4 *)(&stack0xffffffec + DAT_00201fd0);
  *(undefined4 *)(&stack0x00000410 + DAT_00201fd0) = *puVar13;
  iVar12 = *(int *)(param_1 + 0x60);
  *(undefined4 **)(&stack0x00000020 + DAT_00201fd0) = puVar13;
  if (*(char *)(*(int *)(iVar12 + 0xb4) + 0x14) != '\0') {
    iVar12 = CapcomApp::getInstance();
    this_00 = *(ZombieCafe **)(iVar12 + 4);
    iVar3 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    iVar12 = DAT_00201fd4;
    if ((iVar3 != 0) &&
       (iVar3 = ScreenElement::contains
                          (*(ScreenElement **)(*(int *)(param_1 + 0x60) + 0x98),
                           *(int *)(this_00 + DAT_00201fd4) >> 0x10,
                           (int)(short)*(int *)(this_00 + DAT_00201fd4)), iVar3 != 0)) {
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0x7c),*(long *)(this_00 + iVar12),extraout_s0
                         ,extraout_s1);
      if (iVar3 == 0) {
        iVar12 = ZCImageButton::contains
                           (*(ZCImageButton **)(param_1 + 0x80),*(long *)(this_00 + iVar12),
                            extraout_s0_00,extraout_s1_00);
        if (iVar12 != 0) {
          pcVar17 = (char *)(DAT_00202124 + 0x202048);
          fVar29 = (float)L_PrintLog(pcVar17,(char *)(DAT_00202128 + 0x20204c));
          ZombieCafe::playEffect((int)this_00,fVar29);
          L_PrintLog(pcVar17,(char *)(DAT_0020212c + 0x202062));
          *(undefined4 *)(&stack0x00000008 + iVar2) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x60) + 100) + 0x80);
          Vector<String>::elementAt((int)(&stack0x00000040 + iVar2));
          Vector<String>::elementAt((int)(&stack0x00000048 + iVar2));
          Vector<String>::elementAt((int)(&stack0x00000050 + iVar2));
          pCVar9 = *(ConfirmDialog **)(&stack0x00000008 + iVar2);
          uVar15 = *(undefined4 *)(iVar19 + DAT_0020213c);
          *(long *)(&stack0xfffffff0 + iVar2) = param_1;
          *puVar28 = uVar15;
          ConfirmDialog::show(pCVar9,&stack0x00000040 + iVar2,&stack0x00000048 + iVar2,
                              &stack0x00000050 + iVar2);
          String::~String((String *)(&stack0x00000050 + iVar2));
          String::~String((String *)(&stack0x00000048 + iVar2));
          String::~String((String *)(&stack0x00000040 + iVar2));
          this_00[DAT_00202140] = (ZombieCafe)0x1;
        }
      }
      else {
        fVar29 = (float)L_PrintLog((char *)(DAT_00201fd8 + 0x201cf2),
                                   (char *)(DAT_00201fdc + 0x201cf4));
        ZombieCafe::playEffect((int)this_00,fVar29);
        uVar15 = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(&stack0x0000000c + iVar2) = 0;
        *(undefined4 *)(&stack0x00000008 + iVar2) = uVar15;
        iVar3 = *(int *)(this_00 + DAT_00201fe0 + 4);
        for (iVar12 = 0; iVar12 <= iVar3; iVar12 = iVar12 + 1) {
          if (*(int *)(iVar12 * 4 + *(int *)(this_00 + DAT_00201fe0 + 8)) ==
              *(int *)(&stack0x00000008 + iVar2)) {
            *(int *)(&stack0x0000000c + iVar2) = iVar12;
            goto LAB_00201d2c;
          }
        }
        *(undefined4 *)(&stack0x0000000c + iVar2) = 0xffffffff;
LAB_00201d2c:
        for (iVar12 = 0; iVar12 <= iVar3; iVar12 = iVar12 + 1) {
          if (*(int *)(iVar12 * 4 + *(int *)((Vector<FoodStack*> *)(this_00 + DAT_00201fe0) + 8)) ==
              *(int *)(&stack0x00000008 + iVar2)) goto LAB_00201d4e;
        }
        iVar12 = -1;
LAB_00201d4e:
        uVar15 = Vector<FoodStack*>::removeElementAt
                           ((Vector<FoodStack*> *)(this_00 + DAT_00201fe0),iVar12);
        pFVar16 = *(FoodStack **)(param_1 + 0x78);
        *(undefined4 *)(&stack0x00000014 + iVar2) = uVar15;
        pRVar4 = (Recipe *)FoodStack::getRecipe(pFVar16);
        uVar15 = Recipe::getServings(pRVar4,(uchar)pFVar16[8]);
        pFVar16 = *(FoodStack **)(param_1 + 0x78);
        *(undefined4 *)(&stack0x00000018 + iVar2) = uVar15;
        pRVar4 = (Recipe *)FoodStack::getRecipe(pFVar16);
        uVar15 = Recipe::getSellPrice(pRVar4,(uchar)pFVar16[8]);
        iVar12 = *(int *)(param_1 + 0x78);
        *(undefined4 *)(&stack0x0000001c + iVar2) = uVar15;
        StringUtil::getEncodingString((StringUtil *)(&stack0x00000028 + iVar2),'\0');
        *puVar20 = 0;
        uVar15 = String::getBytes((String *)(iVar12 + 0xc),&stack0x00000028 + iVar2,0);
        *(undefined4 *)(&stack0x00000010 + iVar2) = uVar15;
        String::~String((String *)(&stack0x00000028 + iVar2));
        uVar1 = **(ushort **)(param_1 + 0x78);
        iVar12 = 0;
        *puVar21 = (uint)(byte)(*(ushort **)(param_1 + 0x78))[4];
        snprintf(&stack0x00000190 + iVar2,0x80,(char *)(DAT_00201fe4 + 0x201da4),(uint)uVar1);
        FriendData::FriendData((FriendData *)(&stack0x00000058 + iVar2));
        while( true ) {
          *(int *)(&stack0x00000008 + iVar2) = iVar12;
          if (*(int *)(this_00 + DAT_00201fe8 + 4) + 1 <= *(int *)(&stack0x00000008 + iVar2)) break;
          FriendData::FriendData
                    ((FriendData *)(&stack0x000000b4 + iVar2),
                     (FriendData *)
                     (*(int *)(this_00 + DAT_00201fe8 + 8) +
                     *(int *)(&stack0x00000008 + iVar2) * 0x5c));
          FriendData::operator=
                    ((FriendData *)(&stack0x00000058 + iVar2),
                     (FriendData *)(&stack0x000000b4 + iVar2));
          FriendData::~FriendData((FriendData *)(&stack0x000000b4 + iVar2));
          String::String((String *)(&stack0x00000030 + iVar2),
                         (String *)(*(int *)(param_1 + 0x78) + 0xc));
          iVar12 = String::equals((String *)(&stack0x0000007c + iVar2),&stack0x00000030 + iVar2);
          String::~String((String *)(&stack0x00000030 + iVar2));
          if (iVar12 != 0) break;
          iVar12 = *(int *)(&stack0x00000008 + iVar2) + 1;
        }
        iVar12 = DAT_00201fec;
        if (*(int *)(&stack0x00000094 + iVar2) << 0x1f < 0) {
          iVar3 = CCFacebook::IsLoggedIn(*(void **)(this_00 + DAT_00201fec));
          if (iVar3 == 0) {
            pcVar17 = (char *)(DAT_00201ff4 + 0x201e2c);
          }
          else {
            pcVar17 = (char *)CCFacebook::GetMyName(*(void **)(this_00 + iVar12));
          }
        }
        else {
          pcVar17 = (char *)(DAT_00201ff0 + 0x201e26);
        }
        if ((*(int *)(&stack0x00000094 + iVar2) << 0x1f < 0) &&
           (iVar12 = CCFacebook::IsLoggedIn(*(void **)(this_00 + DAT_00201fec)), iVar12 != 0)) {
          pcVar5 = (char *)CCFacebook::GetUserIdAsString(*(void **)(this_00 + DAT_00201fec));
        }
        else {
          pcVar5 = (char *)CCServer::GetMyGameCenterId(*(void **)(this_00 + DAT_00201ff8));
        }
        pcVar10 = *(char **)(&stack0x00000010 + iVar2);
        pvVar6 = *(void **)(this_00 + DAT_00201ffc);
        *piVar22 = (int)(&stack0x00000190 + iVar2);
        *(undefined4 *)(&stack0xfffffff0 + iVar2) = 0;
        *(undefined4 *)(&stack0xfffffff4 + iVar2) = 0;
        *(long *)(&stack0xfffffff8 + iVar2) = param_1;
        iVar12 = GiftManager::FillOrder
                           (pvVar6,pcVar10,pcVar17,pcVar5,(char *)*puVar23,
                            *(_func_void_void_ptr **)(&stack0xfffffff0 + iVar2),
                            *(_func_void_void_ptr **)(&stack0xfffffff4 + iVar2),
                            *(void **)(&stack0xfffffff8 + iVar2));
        if (iVar12 == 0) {
          PendingOrderDialog::sendGiftFailed3(*(void **)(param_1 + 0x60));
        }
        else {
          PendingOrderDialog::sendGiftSuccessful3(*(void **)(param_1 + 0x60));
          CapcomLinkedList<PendingItem*>::remove
                    ((CapcomLinkedList<PendingItem*> *)(*(int *)(param_1 + 0x60) + 0xbc),
                     (PendingItem *)param_1);
          piVar7 = *(int **)(*(int *)(param_1 + 0x60) + 0xb4);
          (**(code **)(*piVar7 + 0x34))(piVar7,param_1);
          (**(code **)(**(int **)(param_1 + 0x60) + 0x20))(*(int **)(param_1 + 0x60),0);
          *(int *)(this_00 + DAT_00202000) =
               *(int *)(this_00 + DAT_00202000) +
               *(int *)(&stack0x00000018 + iVar2) * *(int *)(&stack0x0000001c + iVar2);
        }
        PendingOrderDialog::setSendFood
                  (*(PendingOrderDialog **)(param_1 + 0x60),*(FoodStack **)(param_1 + 0x78),
                   *(int *)(&stack0x0000000c + iVar2));
        free(*(void **)(&stack0x00000010 + iVar2));
        this = (MALTAHoover *)MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::GetInstance();
        MALTAHoover::init(this,(char *)(DAT_00202004 + 0x201ed2),(char *)(DAT_00202008 + 0x201ed4),
                          (char *)(DAT_0020200c + 0x201ed6));
        memset(&stack0x00000110 + iVar2,0,0x40);
        pSVar8 = (SServer *)MALTAHoover::GetInstance();
        puVar13 = *(undefined4 **)(iVar19 + DAT_00202010);
        MALTAHoover::getFBID(pSVar8,(char *)*puVar13);
        memset(&stack0x00000150 + iVar2,0,0x40);
        pSVar8 = (SServer *)MALTAHoover::GetInstance();
        MALTAHoover::getGCID(pSVar8,(char *)*puVar13);
        iVar12 = *(int *)(param_1 + 0x78);
        StringUtil::getEncodingString((StringUtil *)(&stack0x00000038 + iVar2),'\0');
        *puVar24 = 0;
        pvVar6 = (void *)String::getBytes((String *)(iVar12 + 0xc),&stack0x00000038 + iVar2,0);
        String::~String((String *)(&stack0x00000038 + iVar2));
        memset(&stack0x00000210 + iVar2,0,0x200);
        puVar11 = *(ushort **)(&stack0x00000014 + iVar2);
        *piVar25 = (int)(&stack0x00000150 + iVar2);
        *(uint *)(&stack0xfffffff0 + iVar2) = (uint)*puVar11;
        *(uint *)(&stack0xfffffff4 + iVar2) = (uint)(byte)puVar11[4];
        *(void **)(&stack0xfffffff8 + iVar2) = pvVar6;
        *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(&stack0x00000098 + iVar2);
        snprintf(&stack0x00000210 + iVar2,0x200,(char *)(DAT_00202014 + 0x201f4e),
                 &stack0x00000110 + iVar2);
        uVar15 = MALTAHoover::GetInstance();
        uVar14 = *(undefined4 *)(this_00 + 0x680);
        *(undefined4 *)(&stack0x00000008 + iVar2) = uVar15;
        *(undefined4 *)(&stack0x0000000c + iVar2) = uVar14;
        uVar15 = ZombieCafe::getToxin(this_00);
        *(undefined4 *)(&stack0x00000010 + iVar2) = uVar15;
        uVar18 = *(undefined4 *)(this_00 + DAT_00202000);
        *(undefined4 *)(&stack0x00000014 + iVar2) = *(undefined4 *)(this_00 + DAT_00202018);
        uVar15 = ZombieCafe::calUserRankId(this_00,(uint)(byte)this_00[DAT_0020201c]);
        uVar14 = *(undefined4 *)(&stack0x00000014 + iVar2);
        *(undefined4 *)(&stack0xfffffff4 + iVar2) = uVar15;
        *puVar26 = uVar18;
        *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar14;
        *(undefined1 **)(&stack0xfffffff8 + iVar2) = &stack0x00000210 + iVar2;
        *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(iVar19 + DAT_00202020);
        MALTAHoover::send(*(MALTAHoover **)(&stack0x00000008 + iVar2),
                          (char *)(DAT_00202024 + 0x201f9e),*(uint *)(&stack0x0000000c + iVar2),
                          *(uint *)(&stack0x00000010 + iVar2),*puVar27,
                          *(uint *)(&stack0xfffffff0 + iVar2),*(int *)(&stack0xfffffff4 + iVar2),
                          *(char **)(&stack0xfffffff8 + iVar2),*(char **)((int)&uStack_4 + iVar2));
        free(pvVar6);
        Quest::runQuest(*(int *)(this_00 + 0x40),0x20,(int *)0xffffffff);
        this_00[DAT_00202028] = (ZombieCafe)0x1;
        FriendData::~FriendData((FriendData *)(&stack0x00000058 + iVar2));
      }
    }
  }
  if (*(int *)(&stack0x00000410 + iVar2) == **(int **)(&stack0x00000020 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


