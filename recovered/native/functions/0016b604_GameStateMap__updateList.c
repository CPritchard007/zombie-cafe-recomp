/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016b604 GameStateMap::updateList */

/* GameStateMap::updateList() */

void __thiscall GameStateMap::updateList(GameStateMap *this)

{
  int iVar1;
  int iVar2;
  char *__ptr;
  ZCImageButton *this_00;
  TrueTypeTextElement *pTVar3;
  void *__ptr_00;
  BitmapTextElement *pBVar4;
  ImageElement *pIVar5;
  CImage *pCVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  PackedImage *this_01;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uStack_4;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  
  iVar1 = DAT_0016b994;
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_0016b994);
  piVar15 = (int *)(&stack0xffffffec + DAT_0016b994);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_0016b994);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_0016b994);
  *(int *)(&stack0x0000000c + DAT_0016b994) = DAT_0016b998 + 0x16b612;
  puVar8 = *(undefined4 **)(DAT_0016b998 + 0x16b612 + DAT_0016b99c);
  *(undefined4 *)(&stack0x00000498 + DAT_0016b994) = *puVar8;
  iVar2 = CCServer::IsConnected(*(void **)(*(int *)(this + 0xc) + DAT_0016b9a0));
  *(undefined4 **)(&stack0x00000020 + iVar1) = puVar8;
  if (iVar2 != 0) {
    iVar7 = *(int *)(this + 0xc);
    iVar2 = *(int *)(iVar7 + DAT_0016b9a4 + 4) + 1;
    if (*(int *)(iVar7 + DAT_0016b9a8) < iVar2) {
      *(int *)(iVar7 + DAT_0016b9a8) = iVar2;
      CRAMHoover::beginTrackEvent(*(char **)(*(int *)(this + 0xc) + 0x840));
      ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(this + 0xc));
      CRAMHoover::addEventIntProperty
                (*(char **)(*(int *)(this + 0xc) + 0x840),DAT_0016b9b0 + 0x16b666);
      CRAMHoover::endTrackEvent();
    }
    iVar2 = 0;
    while( true ) {
      iVar7 = *(int *)(this + 0xc);
      *(int *)(&stack0x00000010 + iVar1) = iVar2;
      if (*(int *)(iVar7 + DAT_0016bd10 + 4) + 1 <= *(int *)(&stack0x00000010 + iVar1)) break;
      FriendData::FriendData
                ((FriendData *)(&stack0x0000023c + iVar1),
                 (FriendData *)
                 (*(int *)(iVar7 + DAT_0016bd10 + 8) + *(int *)(&stack0x00000010 + iVar1) * 0x5c));
      MapCafe::MapCafe((MapCafe *)(&stack0x00000098 + iVar1));
      for (iVar2 = 0; iVar2 < *(int *)(this + 200) + 1; iVar2 = iVar2 + 1) {
        iVar13 = *(int *)(&stack0x00000254 + iVar1);
        MapCafe::MapCafe((MapCafe *)(&stack0x000000ec + iVar1),
                         (MapCafe *)(*(int *)(this + 0xcc) + iVar2 * 0x54));
        iVar7 = *(int *)(&stack0x00000114 + iVar1);
        String::~String((String *)(&stack0x0000011c + iVar1));
        if (iVar13 == iVar7) goto LAB_0016b6be;
      }
      iVar2 = -1;
LAB_0016b6be:
      iVar7 = *(int *)(this + 0xc);
      *(int *)(&stack0x00000008 + iVar1) = iVar2;
      iVar2 = CCServer::IsFriendBanned
                        (*(void **)(iVar7 + DAT_0016b9a0),*(uint *)(&stack0x00000254 + iVar1));
      if (iVar2 == 0) {
        *(undefined4 *)(&stack0x00000018 + iVar1) =
             *(undefined4 *)(*(int *)(&stack0x0000000c + iVar1) + DAT_0016b9b4);
        if (*(int *)(&stack0x00000008 + iVar1) == -1) {
          (&stack0x000000e8)[iVar1] = 0;
          *(undefined4 *)(&stack0x000000c4 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
          *(undefined4 *)(&stack0x000000c0 + iVar1) = *(undefined4 *)(&stack0x00000254 + iVar1);
          String::String((String *)(&stack0x00000028 + iVar1),(String *)(&stack0x00000260 + iVar1));
          String::operator=((String *)(&stack0x000000c8 + iVar1),&stack0x00000028 + iVar1);
          String::~String((String *)(&stack0x00000028 + iVar1));
          *(undefined4 *)(&stack0x000000d0 + iVar1) = *(undefined4 *)(&stack0x0000027c + iVar1);
          *(undefined4 *)(&stack0x000000d8 + iVar1) = *(undefined4 *)(&stack0x00000280 + iVar1);
          *(undefined4 *)(&stack0x000000dc + iVar1) = *(undefined4 *)(&stack0x00000284 + iVar1);
          __ptr = (char *)String::getBytes((String *)(&stack0x000000c8 + iVar1));
          L_PrintLog((char *)(DAT_0016b9bc + 0x16b724),__ptr);
          free(__ptr);
          piVar11 = *(int **)(this + 0x14);
          iVar2 = *(int *)(this + 0xc);
          *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x2c);
          this_01 = *(PackedImage **)(iVar2 + 0x7f8);
          iVar2 = getCafeRank(this,*(int *)(&stack0x000000dc + iVar1));
          uVar9 = PackedImage::getImage
                            (this_01,*(int *)(iVar2 * 4 +
                                             *(int *)(*(int *)(&stack0x0000000c + iVar1) +
                                                     DAT_0016b9c0)),false);
          *(undefined4 *)(&stack0x00000014 + iVar1) = uVar9;
          this_00 = (ZCImageButton *)operator_new(0xa0);
          *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
          pCVar6 = *(CImage **)(&stack0x00000014 + iVar1);
          *puVar14 = 0;
          *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
          ZCImageButton::ZCImageButton
                    (this_00,'$',pCVar6,(CImage *)0x0,*piVar15,*(int *)(&stack0xfffffff0 + iVar1),
                     (bool)(&stack0xfffffff4)[iVar1]);
          *(ZCImageButton **)(&stack0x00000098 + iVar1) = this_00;
          (**(code **)(&stack0x00000008 + iVar1))(piVar11,this_00);
          if ((&stack0x00000288)[iVar1] != '\0') {
            *(undefined4 *)(*(int *)(&stack0x00000098 + iVar1) + 0x8c) =
                 **(undefined4 **)(*(int *)(&stack0x0000000c + iVar1) + DAT_0016b9c4);
          }
          piVar11 = *(int **)(this + 0x14);
          uVar9 = *(undefined4 *)(this + 0xc);
          *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x2c);
          String::String((String *)(&stack0x00000030 + iVar1),(String *)(&stack0x00000260 + iVar1));
          ZombieCafe::getFriendShortName(&stack0x00000038 + iVar1,uVar9,&stack0x00000030 + iVar1);
          pTVar3 = (TrueTypeTextElement *)operator_new(0xe4);
          *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x12;
          uVar9 = *(undefined4 *)(this + DAT_0016b9c8);
          *puVar16 = 0;
          *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
          *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
          TrueTypeTextElement::TrueTypeTextElement(pTVar3,&stack0x00000038 + iVar1,uVar9,0xffffffff)
          ;
          *(TrueTypeTextElement **)(&stack0x000000b8 + iVar1) = pTVar3;
          (**(code **)(&stack0x00000008 + iVar1))(piVar11,pTVar3);
          String::~String((String *)(&stack0x00000038 + iVar1));
          String::~String((String *)(&stack0x00000030 + iVar1));
          piVar11 = *(int **)(*(int *)(&stack0x0000000c + iVar1) + DAT_0016b9cc);
          Vector<TrueTypeTextElement*>::addElement
                    ((Vector<TrueTypeTextElement*> *)*piVar11,
                     *(TrueTypeTextElement **)(&stack0x000000b8 + iVar1));
          L_PrintLog((char *)(DAT_0016b9d0 + 0x16b7fc),(char *)(DAT_0016b9d4 + 0x16b7fe));
          sprintf(&stack0x00000398 + iVar1,(char *)(DAT_0016b9d8 + 0x16b80c),
                  *(int *)(*piVar11 + 4) + 1);
          L_PrintLog((char *)(DAT_0016b9dc + 0x16b818),&stack0x00000398 + iVar1);
          pTVar3 = *(TrueTypeTextElement **)(&stack0x000000b8 + iVar1);
          pTVar3[0x7f] = (TrueTypeTextElement)0x11;
          TrueTypeTextElement::setBaseTransform(pTVar3,(ccMat2x3 *)(this + 0x3f0));
          piVar11 = *(int **)(&stack0x000000b8 + iVar1);
          *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x18);
          uVar12 = *(undefined4 *)(*(int *)(&stack0x00000098 + iVar1) + 0xc);
          uVar9 = SmDev();
          *(undefined4 *)(&stack0x00000014 + iVar1) = uVar9;
          uVar9 = __floatsisf(uVar12);
          __addsf3(uVar9,*(undefined4 *)
                          (*(int *)(&stack0x00000018 + iVar1) +
                          *(int *)(&stack0x00000014 + iVar1) * 4));
          uVar9 = __fixsfsi();
          (**(code **)(&stack0x00000008 + iVar1))
                    (piVar11,uVar9,*(undefined4 *)(*(int *)(&stack0x00000098 + iVar1) + 0x10));
          Vector<String>::elementAt((int)(&stack0x00000040 + iVar1));
          __ptr_00 = (void *)String::getBytes((String *)(&stack0x00000040 + iVar1));
          String::~String((String *)(&stack0x00000040 + iVar1));
          sprintf(&stack0x00000298 + iVar1,(char *)(DAT_0016b9e0 + 0x16b88a),__ptr_00,
                  *(undefined4 *)(&stack0x000000d0 + iVar1));
          free(__ptr_00);
          piVar11 = *(int **)(this + 0x14);
          *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(*piVar11 + 0x2c);
          String::String((String *)(&stack0x00000048 + iVar1),&stack0x00000298 + iVar1);
          iVar7 = *(int *)(this + 0xc);
          iVar2 = SmDev();
          uVar9 = *(undefined4 *)
                   ((*(int *)(DAT_0016b9e4 + iVar2 * 4 + 0x16b8d6) + 0x136) * 4 + iVar7);
          pBVar4 = (BitmapTextElement *)operator_new(0xc0);
          *puVar17 = 0xff000000;
          *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
          *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0;
          *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
          *(undefined4 *)(&stack0x00000000 + iVar1) = 0;
          *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0x11;
          BitmapTextElement::BitmapTextElement(pBVar4,&stack0x00000048 + iVar1,uVar9,0xffffffff);
          *(BitmapTextElement **)(&stack0x000000bc + iVar1) = pBVar4;
          (**(code **)(&stack0x00000008 + iVar1))(piVar11,pBVar4);
          String::~String((String *)(&stack0x00000048 + iVar1));
          pBVar4 = *(BitmapTextElement **)(&stack0x000000bc + iVar1);
          pBVar4[0x7f] = (BitmapTextElement)0x11;
          BitmapTextElement::setBaseTransform(pBVar4,(ccMat2x3 *)(this + 0x3d8));
          (**(code **)(**(int **)(&stack0x000000bc + iVar1) + 0x18))
                    (*(int **)(&stack0x000000bc + iVar1),
                     *(undefined4 *)(*(int *)(&stack0x00000098 + iVar1) + 0xc),
                     *(undefined4 *)(*(int *)(&stack0x00000098 + iVar1) + 0x10));
          if ((&stack0xffffffec)[DAT_0016b9e8 + iVar1] == '\0') {
            *(undefined4 *)(&stack0x000000e4 + iVar1) = 0;
          }
          else {
            piVar11 = *(int **)(this + 0x14);
            pcVar10 = *(code **)(*piVar11 + 0x2c);
            pIVar5 = (ImageElement *)operator_new(0x98);
            ImageElement::ImageElement(pIVar5,*(CImage **)(&stack0x0000028c + iVar1),'\t',true);
            *(ImageElement **)(&stack0x000000e4 + iVar1) = pIVar5;
            (*pcVar10)(piVar11,pIVar5);
            (**(code **)(**(int **)(&stack0x000000e4 + iVar1) + 0x18))
                      (*(int **)(&stack0x000000e4 + iVar1),400,400);
            iVar2 = *(int *)(&stack0x000000e4 + iVar1);
            *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(this + 0x408);
            *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(this + 0x40c);
            *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(this + 0x410);
            *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(this + 0x414);
            *(undefined4 *)(iVar2 + 0x80) = *(undefined4 *)(this + 0x418);
            *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(this + 0x41c);
            *(undefined4 *)(iVar2 + 0x88) = 1;
          }
          MapCafe::MapCafe((MapCafe *)(&stack0x00000140 + iVar1),
                           (MapCafe *)(&stack0x00000098 + iVar1));
          Vector<GameStateMap::MapCafe>::insertElementAt
                    ((Vector<GameStateMap::MapCafe> *)(this + 0xc4),&stack0x00000140 + iVar1,
                     *(undefined4 *)(this + 200));
          String::~String((String *)(&stack0x00000170 + iVar1));
          if (**(int **)(*(int *)(&stack0x0000000c + iVar1) + DAT_0016bd04) <
              *(int *)(this + 200) + 1) {
            String::~String((String *)(&stack0x000000c8 + iVar1));
            FriendData::~FriendData((FriendData *)(&stack0x0000023c + iVar1));
            break;
          }
        }
        else {
          MapCafe::MapCafe((MapCafe *)(&stack0x00000194 + iVar1),
                           (MapCafe *)
                           (*(int *)(this + 0xcc) + *(int *)(&stack0x00000008 + iVar1) * 0x54));
          MapCafe::operator=((MapCafe *)(&stack0x00000098 + iVar1),
                             (MapCafe *)(&stack0x00000194 + iVar1));
          String::~String((String *)(&stack0x000001c4 + iVar1));
          (&stack0x000000e8)[iVar1] = 0;
          *(undefined4 *)(&stack0x000000c0 + iVar1) = *(undefined4 *)(&stack0x00000254 + iVar1);
          *(undefined4 *)(&stack0x000000c4 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
          String::String((String *)(&stack0x00000050 + iVar1),(String *)(&stack0x00000260 + iVar1));
          String::operator=((String *)(&stack0x000000c8 + iVar1),&stack0x00000050 + iVar1);
          String::~String((String *)(&stack0x00000050 + iVar1));
          *(undefined4 *)(&stack0x000000d0 + iVar1) = *(undefined4 *)(&stack0x0000027c + iVar1);
          uVar9 = *(undefined4 *)(this + 0xc);
          *(undefined4 *)(&stack0x000000d8 + iVar1) = *(undefined4 *)(&stack0x00000280 + iVar1);
          String::String((String *)(&stack0x00000060 + iVar1),(String *)(&stack0x00000260 + iVar1));
          ZombieCafe::getFriendShortName(&stack0x00000058 + iVar1,uVar9,&stack0x00000060 + iVar1);
          String::~String((String *)(&stack0x00000060 + iVar1));
          String::String((String *)(&stack0x00000068 + iVar1),(String *)(&stack0x00000058 + iVar1));
          iVar2 = operator==(&stack0x00000068 + iVar1,0);
          String::~String((String *)(&stack0x00000068 + iVar1));
          if (iVar2 != 0) {
            String::String((String *)(&stack0x00000070 + iVar1),(char *)(DAT_0016bd08 + 0x16baac));
            String::operator=((String *)(&stack0x00000058 + iVar1),&stack0x00000070 + iVar1);
            String::~String((String *)(&stack0x00000070 + iVar1));
          }
          piVar11 = *(int **)(&stack0x000000b8 + iVar1);
          pcVar10 = *(code **)(*piVar11 + 0x44);
          String::String((String *)(&stack0x00000078 + iVar1),(String *)(&stack0x00000058 + iVar1));
          (*pcVar10)(piVar11,&stack0x00000078 + iVar1);
          String::~String((String *)(&stack0x00000078 + iVar1));
          TrueTypeTextElement::setBaseTransform
                    (*(TrueTypeTextElement **)(&stack0x000000b8 + iVar1),(ccMat2x3 *)(this + 0x3f0))
          ;
          piVar11 = *(int **)(&stack0x000000b8 + iVar1);
          *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(*piVar11 + 0x18);
          uVar12 = *(undefined4 *)(*(int *)(&stack0x00000098 + iVar1) + 0xc);
          uVar9 = SmDev();
          *(undefined4 *)(&stack0x0000001c + iVar1) = uVar9;
          uVar9 = __floatsisf(uVar12);
          __addsf3(uVar9,*(undefined4 *)
                          (*(int *)(&stack0x00000018 + iVar1) +
                          *(int *)(&stack0x0000001c + iVar1) * 4));
          uVar9 = __fixsfsi();
          (**(code **)(&stack0x00000014 + iVar1))
                    (piVar11,uVar9,*(undefined4 *)(*(int *)(&stack0x00000098 + iVar1) + 0x10));
          piVar11 = *(int **)(&stack0x000000bc + iVar1);
          pcVar10 = *(code **)(*piVar11 + 0x44);
          Vector<String>::elementAt((int)(&stack0x00000080 + iVar1));
          String::valueOf((int)(&stack0x00000088 + iVar1));
          String::operator+((String *)(&stack0x00000090 + iVar1),&stack0x00000080 + iVar1,
                            &stack0x00000088 + iVar1);
          (*pcVar10)(piVar11,&stack0x00000090 + iVar1);
          String::~String((String *)(&stack0x00000090 + iVar1));
          String::~String((String *)(&stack0x00000088 + iVar1));
          String::~String((String *)(&stack0x00000080 + iVar1));
          if ((*(int *)(&stack0x000000e4 + iVar1) == 0) &&
             ((&stack0xffffffec)[DAT_0016bd0c + iVar1] != '\0')) {
            piVar11 = *(int **)(this + 0x14);
            pcVar10 = *(code **)(*piVar11 + 0x2c);
            pIVar5 = (ImageElement *)operator_new(0x98);
            ImageElement::ImageElement(pIVar5,*(CImage **)(&stack0x0000028c + iVar1),'\t',true);
            *(ImageElement **)(&stack0x000000e4 + iVar1) = pIVar5;
            (*pcVar10)(piVar11,pIVar5);
            (**(code **)(**(int **)(&stack0x000000e4 + iVar1) + 0x18))
                      (*(int **)(&stack0x000000e4 + iVar1),400,400);
            iVar2 = *(int *)(&stack0x000000e4 + iVar1);
            *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(this + 0x408);
            *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(this + 0x40c);
            *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(this + 0x410);
            *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(this + 0x414);
            *(undefined4 *)(iVar2 + 0x80) = *(undefined4 *)(this + 0x418);
            *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(this + 0x41c);
            *(undefined4 *)(iVar2 + 0x88) = 1;
          }
          MapCafe::MapCafe((MapCafe *)(&stack0x000001e8 + iVar1),
                           (MapCafe *)(&stack0x00000098 + iVar1));
          Vector<GameStateMap::MapCafe>::setElementAt
                    ((Vector<GameStateMap::MapCafe> *)(this + 0xc4),&stack0x000001e8 + iVar1,
                     *(undefined4 *)(&stack0x00000008 + iVar1));
          String::~String((String *)(&stack0x00000218 + iVar1));
          String::~String((String *)(&stack0x00000058 + iVar1));
        }
      }
      String::~String((String *)(&stack0x000000c8 + iVar1));
      FriendData::~FriendData((FriendData *)(&stack0x0000023c + iVar1));
      iVar2 = *(int *)(&stack0x00000010 + iVar1) + 1;
    }
  }
  if (*(int *)(&stack0x00000498 + iVar1) == **(int **)(&stack0x00000020 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


