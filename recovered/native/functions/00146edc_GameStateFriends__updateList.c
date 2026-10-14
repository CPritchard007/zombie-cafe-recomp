/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00146edc GameStateFriends::updateList */

/* GameStateFriends::updateList(bool) */

void __thiscall GameStateFriends::updateList(GameStateFriends *this,bool param_1)

{
  int iVar1;
  int iVar2;
  ZCImageButton *this_00;
  TrueTypeTextElement *pTVar3;
  BitmapTextElement *pBVar4;
  RatingBar *this_01;
  String *this_02;
  int iVar5;
  CImage *pCVar6;
  undefined4 uVar7;
  CImage *pCVar8;
  int iVar9;
  CImage *pCVar10;
  undefined4 *puVar11;
  code *pcVar12;
  Vector<TrueTypeTextElement*> *this_03;
  int *piVar13;
  ImageElement *pIVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  float fVar24;
  float extraout_s0;
  undefined4 uStack_4;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  
  iVar1 = DAT_0014726c;
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_0014726c);
  piVar18 = (int *)(&stack0xffffffec + DAT_0014726c);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_0014726c);
  puVar20 = (undefined4 *)(&stack0xffffffec + DAT_0014726c);
  puVar21 = (undefined4 *)(&stack0xffffffec + DAT_0014726c);
  puVar22 = &stack0xffffffec + DAT_0014726c;
  puVar23 = (undefined4 *)(&stack0xffffffec + DAT_0014726c);
  *(uint *)(&stack0x0000002c + DAT_0014726c) = (uint)param_1;
  *(int *)(&stack0x00000014 + DAT_0014726c) = DAT_00147278 + 0x146ef0;
  puVar11 = *(undefined4 **)(DAT_00147278 + 0x146ef0 + DAT_00147270);
  *(undefined4 *)(&stack0x00000300 + DAT_0014726c) = *puVar11;
  iVar2 = CCServer::IsConnected(*(void **)(*(int *)(this + 0xc) + DAT_00147274));
  *(undefined4 **)(&stack0x00000030 + iVar1) = puVar11;
  *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
  if (iVar2 == 0) {
    L_PrintLog((char *)(DAT_0014727c + 0x146f12),(char *)(DAT_00147280 + 0x146f14));
  }
  else {
    while (*(int *)(&stack0x0000001c + iVar1) <
           *(int *)(*(int *)(this + 0xc) + DAT_00147284 + 4) + 1) {
      FriendData::FriendData((FriendData *)(&stack0x000000c8 + iVar1));
      FriendData::FriendData
                ((FriendData *)(&stack0x00000124 + iVar1),
                 (FriendData *)
                 (*(int *)(*(int *)(this + 0xc) + DAT_00147284 + 8) +
                 *(int *)(&stack0x0000001c + iVar1) * 0x5c));
      FriendData::operator=
                ((FriendData *)(&stack0x000000c8 + iVar1),(FriendData *)(&stack0x00000124 + iVar1));
      FriendData::~FriendData((FriendData *)(&stack0x00000124 + iVar1));
      iVar2 = *(int *)(this + 0x78);
      *(undefined4 *)(&stack0x00000020 + iVar1) = *(undefined4 *)(&stack0x000000e0 + iVar1);
      *(undefined4 *)(&stack0x00000010 + iVar1) = 0;
      *(undefined4 *)(&stack0x0000000c + iVar1) = 0;
      while (*(int *)(&stack0x0000000c + iVar1) < iVar2 + 1) {
        piVar13 = (int *)(*(int *)(this + 0x7c) + *(int *)(&stack0x00000010 + iVar1));
        if (*(int *)(&stack0x00000020 + iVar1) == *piVar13) {
          if (*(int *)(&stack0x0000000c + iVar1) != -1) {
            iVar2 = piVar13[1];
            iVar5 = piVar13[2];
            *(int *)(&stack0x000000b0 + iVar1) = *piVar13;
            *(int *)(&stack0x000000b4 + iVar1) = iVar2;
            *(int *)(&stack0x000000b8 + iVar1) = iVar5;
            iVar2 = piVar13[4];
            iVar5 = piVar13[5];
            *(int *)(&stack0x000000bc + iVar1) = piVar13[3];
            *(int *)(&stack0x000000c0 + iVar1) = iVar2;
            *(int *)(&stack0x000000c4 + iVar1) = iVar5;
            iVar9 = piVar13[1];
            iVar5 = piVar13[4];
            *(int *)(&stack0x00000004 + iVar1) = piVar13[2];
            piVar15 = (int *)piVar13[3];
            iVar2 = piVar13[5];
            *(int *)(&stack0x00000008 + iVar1) = iVar9;
            *(int *)(&stack0x00000028 + iVar1) = iVar5;
            *(int *)(&stack0x00000018 + iVar1) = iVar2;
            *(int *)(&stack0x00000098 + iVar1) = *(int *)(&stack0x000000b0 + iVar1);
            *(undefined4 *)(&stack0x0000009c + iVar1) = *(undefined4 *)(&stack0x000000b4 + iVar1);
            *(undefined4 *)(&stack0x000000a0 + iVar1) = *(undefined4 *)(&stack0x000000b8 + iVar1);
            *(undefined4 *)(&stack0x000000a4 + iVar1) = *(undefined4 *)(&stack0x000000bc + iVar1);
            *(undefined4 *)(&stack0x000000a8 + iVar1) = *(undefined4 *)(&stack0x000000c0 + iVar1);
            *(undefined4 *)(&stack0x000000ac + iVar1) = *(undefined4 *)(&stack0x000000c4 + iVar1);
            *(undefined4 *)(&stack0x0000009c + iVar1) = *(undefined4 *)(&stack0x00000008 + iVar1);
            *(int **)(&stack0x000000a4 + iVar1) = piVar15;
            *(undefined4 *)(&stack0x000000a8 + iVar1) = *(undefined4 *)(&stack0x00000028 + iVar1);
            *(undefined4 *)(&stack0x000000a0 + iVar1) = *(undefined4 *)(&stack0x00000004 + iVar1);
            iVar2 = **(int **)(&stack0x00000004 + iVar1);
            *(undefined4 *)(&stack0x000000ac + iVar1) = *(undefined4 *)(&stack0x00000018 + iVar1);
            pcVar12 = *(code **)(iVar2 + 0x44);
            String::String((String *)(&stack0x00000038 + iVar1),(String *)(&stack0x000000c8 + iVar1)
                          );
            (*pcVar12)(*(undefined4 *)(&stack0x00000004 + iVar1),&stack0x00000038 + iVar1);
            String::~String((String *)(&stack0x00000038 + iVar1));
            snprintf(&stack0x00000200 + iVar1,0x80,(char *)(DAT_00147288 + 0x146fe0),
                     *(undefined4 *)(&stack0x00000108 + iVar1));
            pcVar12 = *(code **)(*piVar15 + 0x44);
            String::String((String *)(&stack0x00000040 + iVar1),&stack0x00000200 + iVar1);
            (*pcVar12)(piVar15,&stack0x00000040 + iVar1);
            fVar24 = (float)String::~String((String *)(&stack0x00000040 + iVar1));
            if ((*(int *)(&stack0x00000008 + iVar1) == 0) && ((&stack0x00000115)[iVar1] != '\0')) {
              piVar13 = *(int **)(this + 0x3c);
              pcVar12 = *(code **)(*piVar13 + 0x2c);
              pIVar14 = (ImageElement *)operator_new(0x98);
              *(ImageElement **)(&stack0x00000008 + iVar1) = pIVar14;
              ImageElement::ImageElement(pIVar14,*(CImage **)(&stack0x00000118 + iVar1),'\t',true);
              fVar24 = (float)(*pcVar12)(piVar13,*(undefined4 *)(&stack0x00000008 + iVar1));
            }
            RatingBar::setValue(fVar24);
            if ((-1 < *(int *)(&stack0x0000000c + iVar1)) &&
               (*(int *)(&stack0x0000000c + iVar1) <= *(int *)(this + 0x78))) {
              puVar11 = (undefined4 *)(*(int *)(this + 0x7c) + *(int *)(&stack0x00000010 + iVar1));
              uVar7 = *(undefined4 *)(&stack0x00000008 + iVar1);
              *puVar11 = *(undefined4 *)(&stack0x00000020 + iVar1);
              puVar11[3] = piVar15;
              puVar11[1] = uVar7;
              uVar16 = *(undefined4 *)(&stack0x00000028 + iVar1);
              uVar7 = *(undefined4 *)(&stack0x00000018 + iVar1);
              puVar11[2] = *(undefined4 *)(&stack0x00000004 + iVar1);
              puVar11[4] = uVar16;
              puVar11[5] = uVar7;
            }
            goto LAB_00147212;
          }
          break;
        }
        *(int *)(&stack0x00000010 + iVar1) = *(int *)(&stack0x00000010 + iVar1) + 0x18;
        *(int *)(&stack0x0000000c + iVar1) = *(int *)(&stack0x0000000c + iVar1) + 1;
      }
      piVar13 = *(int **)(this + 0x3c);
      pcVar12 = *(code **)(*piVar13 + 0x2c);
      this_00 = (ZCImageButton *)operator_new(0xa0);
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = 1;
      pCVar6 = *(CImage **)(this + 0x6c);
      *(ZCImageButton **)(&stack0x0000000c + iVar1) = this_00;
      *puVar17 = 0;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0;
      ZCImageButton::ZCImageButton
                (this_00,'\"',pCVar6,(CImage *)0x0,*piVar18,*(int *)(&stack0xfffffff0 + iVar1),
                 (bool)(&stack0xfffffff4)[iVar1]);
      (*pcVar12)(piVar13,*(undefined4 *)(&stack0x0000000c + iVar1));
      piVar13 = *(int **)(this + 0x3c);
      pcVar12 = *(code **)(*piVar13 + 0x2c);
      String::String((String *)(&stack0x00000048 + iVar1),(String *)(&stack0x000000c8 + iVar1));
      pTVar3 = (TrueTypeTextElement *)operator_new(0xe4);
      uVar7 = *(undefined4 *)(this + 0x8c);
      *puVar19 = 1;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = 9;
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
      *(TrueTypeTextElement **)(&stack0x00000008 + iVar1) = pTVar3;
      TrueTypeTextElement::TrueTypeTextElement(pTVar3,&stack0x00000048 + iVar1,uVar7,0xffffffff);
      (*pcVar12)(piVar13,*(undefined4 *)(&stack0x00000008 + iVar1));
      String::~String((String *)(&stack0x00000048 + iVar1));
      piVar13 = *(int **)(*(int *)(&stack0x00000014 + iVar1) + DAT_0014728c);
      this_03 = (Vector<TrueTypeTextElement*> *)*piVar13;
      iVar2 = *(int *)(this_03 + 4) + 2;
      if (*(int *)this_03 < iVar2) {
        iVar5 = *(int *)this_03 * 2;
        if (iVar5 < iVar2) {
          iVar5 = iVar2;
        }
        Vector<TrueTypeTextElement*>::resize(this_03,iVar5,-1);
      }
      iVar2 = DAT_00147290;
      iVar9 = *(int *)(this_03 + 4);
      *(int *)(this_03 + 4) = iVar9 + 1;
      iVar5 = DAT_00147294;
      *(undefined4 *)((iVar9 + 1) * 4 + *(int *)(this_03 + 8)) =
           *(undefined4 *)(&stack0x00000008 + iVar1);
      L_PrintLog((char *)(iVar2 + 0x147100),(char *)(iVar5 + 0x147104));
      sprintf(&stack0x00000200 + iVar1,(char *)(DAT_00147298 + 0x147112),*(int *)(*piVar13 + 4) + 1)
      ;
      L_PrintLog((char *)(DAT_0014729c + 0x14711e),&stack0x00000200 + iVar1);
      snprintf(&stack0x00000180 + iVar1,0x80,(char *)(DAT_001472a0 + 0x14712a),
               *(undefined4 *)(&stack0x00000108 + iVar1));
      piVar13 = *(int **)(this + 0x3c);
      pcVar12 = *(code **)(*piVar13 + 0x2c);
      String::String((String *)(&stack0x00000050 + iVar1),&stack0x00000180 + iVar1);
      iVar5 = *(int *)(this + 0xc);
      iVar2 = SmDev();
      uVar7 = *(undefined4 *)((*(int *)(DAT_001472a4 + iVar2 * 4 + 0x147162) + 0x136) * 4 + iVar5);
      pBVar4 = (BitmapTextElement *)operator_new(0xc0);
      *puVar20 = 1;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
      *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x11;
      *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
      *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
      *(BitmapTextElement **)(&stack0x00000010 + iVar1) = pBVar4;
      BitmapTextElement::BitmapTextElement(pBVar4,&stack0x00000050 + iVar1,uVar7,0xffffffff);
      (*pcVar12)(piVar13,*(undefined4 *)(&stack0x00000010 + iVar1));
      String::~String((String *)(&stack0x00000050 + iVar1));
      pIVar14 = (ImageElement *)(uint)(byte)(&stack0x00000115)[iVar1];
      if (pIVar14 != (ImageElement *)0x0) {
        piVar13 = *(int **)(this + 0x3c);
        pcVar12 = *(code **)(*piVar13 + 0x2c);
        pIVar14 = (ImageElement *)operator_new(0x98);
        ImageElement::ImageElement(pIVar14,*(CImage **)(&stack0x00000118 + iVar1),'\t',true);
        (*pcVar12)(piVar13,pIVar14);
      }
      piVar13 = *(int **)(this + 0x3c);
      *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(*piVar13 + 0x2c);
      this_01 = (RatingBar *)operator_new(0x9c);
      pCVar6 = *(CImage **)(&stack0x0000010c + iVar1);
      pCVar8 = *(CImage **)(this + 0x84);
      pCVar10 = *(CImage **)(this + 0x88);
      *puVar21 = 0;
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = 1;
      RatingBar::RatingBar(this_01,extraout_s0,pCVar6,pCVar8,pCVar10,(bool)*puVar22);
      (**(code **)(&stack0x00000018 + iVar1))(piVar13,this_01);
      *(ImageElement **)(&stack0x0000009c + iVar1) = pIVar14;
      *(undefined4 *)(&stack0x00000098 + iVar1) = *(undefined4 *)(&stack0x00000020 + iVar1);
      *(RatingBar **)(&stack0x000000ac + iVar1) = this_01;
      *(undefined4 *)(&stack0x000000a0 + iVar1) = *(undefined4 *)(&stack0x00000008 + iVar1);
      *(undefined4 *)(&stack0x000000a4 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
      *(undefined4 *)(&stack0x000000a8 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
      *puVar23 = *(undefined4 *)(&stack0x00000010 + iVar1);
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
      *(RatingBar **)(&stack0xfffffff4 + iVar1) = this_01;
      Vector<GameStateFriends::FriendItem>::addElement
                (this + 0x74,*(undefined4 *)(&stack0x00000020 + iVar1),pIVar14,
                 *(undefined4 *)(&stack0x00000008 + iVar1));
LAB_00147212:
      FriendData::~FriendData((FriendData *)(&stack0x000000c8 + iVar1));
      *(int *)(&stack0x0000001c + iVar1) = *(int *)(&stack0x0000001c + iVar1) + 1;
    }
    LayoutList(this);
    if (*(int *)(this + 0x78) == -1) {
      StringBuffer::StringBuffer((StringBuffer *)(&stack0x000000c8 + iVar1));
      if (*(int *)(&stack0x0000002c + iVar1) == 0) {
        iVar2 = CCServer::IsConnected(*(void **)(*(int *)(this + 0xc) + DAT_0014744c));
        if (iVar2 == 0) {
          Vector<String>::elementAt((int)(&stack0x00000078 + iVar1));
          StringBuffer::append(&stack0x000000c8 + iVar1,&stack0x00000078 + iVar1);
          String::~String((String *)(&stack0x00000078 + iVar1));
          String::String((String *)(&stack0x00000080 + iVar1),(char *)(DAT_00147460 + 0x147330));
          StringBuffer::append(&stack0x000000c8 + iVar1,&stack0x00000080 + iVar1);
          String::~String((String *)(&stack0x00000080 + iVar1));
          Vector<String>::elementAt((int)(&stack0x00000088 + iVar1));
          StringBuffer::append(&stack0x000000c8 + iVar1,&stack0x00000088 + iVar1);
          this_02 = (String *)(&stack0x00000088 + iVar1);
        }
        else {
          Vector<String>::elementAt((int)(&stack0x00000060 + iVar1));
          StringBuffer::append(&stack0x000000c8 + iVar1,&stack0x00000060 + iVar1);
          String::~String((String *)(&stack0x00000060 + iVar1));
          String::String((String *)(&stack0x00000068 + iVar1),(char *)(DAT_00147454 + 0x1472e0));
          StringBuffer::append(&stack0x000000c8 + iVar1,&stack0x00000068 + iVar1);
          String::~String((String *)(&stack0x00000068 + iVar1));
          Vector<String>::elementAt((int)(&stack0x00000070 + iVar1));
          StringBuffer::append(&stack0x000000c8 + iVar1,&stack0x00000070 + iVar1);
          this_02 = (String *)(&stack0x00000070 + iVar1);
        }
      }
      else {
        Vector<String>::elementAt((int)(&stack0x00000058 + iVar1));
        StringBuffer::append(&stack0x000000c8 + iVar1,&stack0x00000058 + iVar1);
        this_02 = (String *)(&stack0x00000058 + iVar1);
      }
      String::~String(this_02);
      piVar13 = *(int **)(this + 0x44);
      pcVar12 = *(code **)(*piVar13 + 0x44);
      StringBuffer::toString();
      (*pcVar12)(piVar13,&stack0x00000090 + iVar1);
      String::~String((String *)(&stack0x00000090 + iVar1));
      (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),1);
      CapcomLinkedList<String>::~CapcomLinkedList
                ((CapcomLinkedList<String> *)(&stack0x000000c8 + iVar1));
    }
    else {
      (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),0);
    }
  }
  if (*(int *)(&stack0x00000300 + iVar1) == **(int **)(&stack0x00000030 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


