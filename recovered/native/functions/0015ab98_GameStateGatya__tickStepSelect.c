/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015ab98 GameStateGatya::tickStepSelect */

/* WARNING: Control flow encountered bad instruction data */
/* GameStateGatya::tickStepSelect(long) */

void GameStateGatya::tickStepSelect(long param_1)

{
  undefined1 *puVar1;
  ccTexture2D *pcVar2;
  CFTexture *pCVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 in_r1;
  int extraout_r1;
  int iVar6;
  ccTexture2D *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  _func_void_void_ptr *p_Var11;
  undefined4 *puVar12;
  int *piVar13;
  NoticeDialog *pNVar14;
  int iVar15;
  ccTexture2D *unaff_r7;
  undefined4 *puVar16;
  char cVar25;
  undefined1 uVar26;
  char cVar27;
  undefined8 uVar28;
  undefined1 in_q10 [16];
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  
  iVar10 = iRam0015aee0;
  puVar16 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  puVar17 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  puVar18 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  puVar19 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  puVar20 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  puVar21 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  puVar22 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  puVar23 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  puVar24 = (undefined4 *)(&stack0xffffffec + iRam0015aee0);
  *(undefined4 *)(&stack0x00000014 + iRam0015aee0) = in_r1;
  iVar15 = iRam0015aee4 + 0x15aba8;
  puVar12 = *(undefined4 **)(iVar15 + iRam0015aee8);
  *(undefined4 *)(&stack0xffffffec + iRam0015aeec + iRam0015aee0) = *puVar12;
  loadTextureMessageTick();
  pcVar7 = (ccTexture2D *)0x310;
  iVar9 = *(int *)(param_1 + iRam0015aef0);
  *(undefined4 **)(&stack0x00000018 + iVar10) = puVar12;
  cVar27 = SBORROW4(iVar9,0x310);
  cVar25 = iVar9 + -0x310 < 0;
  uVar26 = iVar9 == 0x310;
  if ((bool)uVar26) {
    FUN_0015b3fe();
  }
  if ((bool)uVar26 || cVar25 != cVar27) {
    if (iVar9 == 0x200) {
      if ((*(char *)(param_1 + 0xec) != '\0') || (*(char *)(param_1 + 0x10c) == '\0')) {
        pcVar7 = (ccTexture2D *)calloc(1,0x2c);
        CCTexture2D::Init(pcVar7);
        CCGetWritableFilePath(&stack0x0000035c + iVar10,0x104,(char *)(DAT_0015b268 + 0x15afd4));
        iVar9 = CCOptions::GetInt(*(CCOptions **)(*(int *)(param_1 + 0xc) + 0xa00),
                                  (void *)(DAT_0015b26c + 0x15afe8),(char *)0xffffffff,0xa00);
        if (**(int **)(iVar15 + DAT_0015b270) != iVar9) {
          FUN_0015cb38();
        }
        iVar9 = CCTexture2D::LoadFromImageFile(pcVar7,&stack0x0000035c + iVar10);
        if (iVar9 == 0) {
          FUN_0015cb38();
        }
        pCVar3 = (CFTexture *)operator_new(8);
        CFTexture::CFTexture(pCVar3,pcVar7);
        iVar9 = DAT_0015b278;
        *(CFTexture **)(param_1 + DAT_0015b274) = pCVar3;
        String::String((String *)(&stack0x0000005c + iVar10),(char *)(iVar9 + 0x15b024));
        uVar4 = CImage::createImageFromDownloadImage(pCVar3,&stack0x0000005c + iVar10);
        *(undefined4 *)(param_1 + 0xec0) = uVar4;
        String::~String((String *)(&stack0x0000005c + iVar10));
        pcVar7 = *(ccTexture2D **)(iVar15 + DAT_0015b27c);
        unaff_r7 = (ccTexture2D *)(DAT_0015b280 + 0x15b046);
        Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar7,*(CImage **)(param_1 + 0xec0));
        L_PrintLog((char *)unaff_r7,(char *)(DAT_0015b284 + 0x15b052));
        sprintf(&stack0x00000460 + iVar10,(char *)(DAT_0015b288 + 0x15b060),
                *(int *)(*(int *)pcVar7 + 4) + 1);
        cVar25 = SCARRY4((int)(&stack0x000003e8 + iVar10),0x78);
        L_PrintLog((char *)unaff_r7,&stack0x00000460 + iVar10);
        iVar10 = 0xc0;
        goto LAB_0015b072;
      }
LAB_0015b1c6:
      iVar9 = 0xc0;
LAB_0015ae88:
      iVar9 = iVar9 << 2;
    }
    else {
      if (iVar9 < 0x201) {
        if (iVar9 == 0x100) goto LAB_0015ac6c;
        if (iVar9 != 0x110) goto LAB_0015ac3e;
        goto LAB_0015adc0;
      }
      if (iVar9 == 0x210) goto LAB_0015b0fe;
      if (iVar9 != 0x300) goto LAB_0015ac3e;
      if (*(char *)(param_1 + 300) != '\0') {
        pcVar7 = (ccTexture2D *)calloc(1,0x2c);
        CCTexture2D::Init(pcVar7);
        CCGetWritableFilePath(&stack0x0000035c + iVar10,0x104,(char *)(DAT_0015b674 + 0x15b2e4));
        iVar9 = CCOptions::GetInt(*(CCOptions **)(*(int *)(param_1 + 0xc) + 0xa00),
                                  (void *)(DAT_0015b678 + 0x15b2f8),(char *)0xffffffff,0xa00);
        if (**(int **)(iVar15 + DAT_0015b67c) != iVar9) {
          FUN_0015cb4a();
        }
        iVar9 = CCTexture2D::LoadFromImageFile(pcVar7,&stack0x0000035c + iVar10);
        if (iVar9 == 0) {
          FUN_0015cb4a();
        }
        pCVar3 = (CFTexture *)operator_new(8);
        CFTexture::CFTexture(pCVar3,pcVar7);
        iVar9 = DAT_0015b684;
        *(CFTexture **)(param_1 + DAT_0015b680) = pCVar3;
        String::String((String *)(&stack0x0000009c + iVar10),(char *)(iVar9 + 0x15b334));
        uVar4 = CImage::createImageFromDownloadImage(pCVar3,&stack0x0000009c + iVar10);
        iVar9 = DAT_0015b688;
        *(undefined4 *)(param_1 + DAT_0015b688) = uVar4;
        String::~String((String *)(&stack0x0000009c + iVar10));
        pcVar7 = *(ccTexture2D **)(iVar15 + DAT_0015b68c);
        unaff_r7 = (ccTexture2D *)(DAT_0015b690 + 0x15b354);
        Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar7,*(CImage **)(param_1 + iVar9));
        L_PrintLog((char *)unaff_r7,(char *)(DAT_0015b694 + 0x15b360));
        sprintf(&stack0x00000460 + iVar10,(char *)(DAT_0015b698 + 0x15b36e),
                *(int *)(*(int *)pcVar7 + 4) + 1);
        cVar25 = SCARRY4((int)(&stack0x000003e8 + iVar10),0x78);
        L_PrintLog((char *)unaff_r7,&stack0x00000460 + iVar10);
        iVar10 = 0x400;
        goto LAB_0015aed8;
      }
      iVar9 = 0x400;
    }
    *(int *)(param_1 + iRam0015aef0) = iVar9;
    FUN_0015c58a();
LAB_0015ae92:
    CCTexture2D::Free(pcVar7);
    pcVar7 = *(ccTexture2D **)(param_1 + DAT_0015af28);
    String::String((String *)(&stack0x0000003c + iVar10),(char *)(DAT_0015af60 + 0x15aea2));
    Vector<String>::elementAt((int)(&stack0x00000044 + iVar10));
    cVar25 = SCARRY4((int)pcVar7,0);
    *puVar19 = 0;
    NoticeDialog::show((NoticeDialog *)pcVar7,&stack0x0000003c + iVar10,&stack0x00000044 + iVar10);
    String::~String((String *)(&stack0x00000044 + iVar10));
    puVar1 = &stack0x0000003c;
  }
  else {
    iVar6 = 0x7000;
    if (iVar9 == 0x7000) {
      FUN_0015c4ea();
      iVar6 = extraout_r1;
    }
    iVar8 = 0x80;
    if (iVar9 <= iVar6) {
      if (iVar9 == 0x400) {
        FUN_0015b556();
      }
      iVar8 = 0x1000;
      if (iVar9 != 0x1000) goto LAB_0015ac3e;
      FUN_0015b576();
    }
    if (iVar9 == iVar8 * 0x200) {
      FUN_0015c578();
    }
    if (iVar9 == 0x11000) {
      FUN_0015c57e();
    }
LAB_0015ac3e:
    *(undefined4 *)(*(int *)(param_1 + 0xeb0) + 4) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + iRam0015aef4) + 4) = 0xffffffff;
    initSelectScreen((GameStateGatya *)param_1);
    (**(code **)(*(int *)param_1 + 0x10))(param_1);
    *(undefined4 *)(param_1 + iRam0015aef0) = 0x100;
    loadTextureMessageInit((GameStateGatya *)param_1);
LAB_0015ac6c:
    cVar25 = '\0';
    if (*(char *)(param_1 + 0xce) == '\0') {
      iVar10 = 0x80;
LAB_0015b072:
      iVar10 = iVar10 << 2;
      goto LAB_0015aed8;
    }
    pcVar7 = (ccTexture2D *)calloc(1,0x2c);
    CCTexture2D::Init(pcVar7);
    CCGetWritableFilePath(&stack0x0000035c + iVar10,0x104,(char *)(iRam0015aef8 + 0x15ac92));
    iVar9 = CCOptions::GetInt(*(CCOptions **)(*(int *)(param_1 + 0xc) + 0xa00),
                              (void *)(iRam0015aefc + 0x15aca6),(char *)0xffffffff,0xa00);
    if (**(int **)(iVar15 + DAT_0015af00) != iVar9) {
      FUN_0015cb28();
    }
    iVar9 = CCTexture2D::LoadFromImageFile(pcVar7,&stack0x0000035c + iVar10);
    if (iVar9 == 0) {
      FUN_0015cb28();
    }
    pCVar3 = (CFTexture *)operator_new(8);
    CFTexture::CFTexture(pCVar3,pcVar7);
    iVar9 = DAT_0015af08;
    *(CFTexture **)(param_1 + DAT_0015af04) = pCVar3;
    String::String((String *)(&stack0x0000001c + iVar10),(char *)(iVar9 + 0x15ace2));
    uVar4 = CImage::createImageFromDownloadImage(pCVar3,&stack0x0000001c + iVar10);
    pcVar7 = DAT_0015af0c;
    *(undefined4 *)(DAT_0015af0c + param_1) = uVar4;
    String::~String((String *)(&stack0x0000001c + iVar10));
    piVar13 = *(int **)(iVar15 + DAT_0015af10);
    unaff_r7 = (ccTexture2D *)(DAT_0015af14 + 0x15ad02);
    Vector<CImage*>::addElement((Vector<CImage*> *)*piVar13,*(CImage **)(pcVar7 + param_1));
    L_PrintLog((char *)unaff_r7,(char *)(DAT_0015af18 + 0x15ad0e));
    sprintf(&stack0x00000460 + iVar10,(char *)(DAT_0015af1c + 0x15ad1c),*(int *)(*piVar13 + 4) + 1);
    L_PrintLog((char *)unaff_r7,&stack0x00000460 + iVar10);
    FUN_0015c586();
    if (**(char **)(iVar15 + DAT_0015af20) == '\0') {
      pNVar14 = *(NoticeDialog **)(param_1 + DAT_0015af28);
      String::String((String *)(&stack0x00000024 + iVar10),(char *)(DAT_0015af24 + 0x15ad48));
      Vector<String>::elementAt((int)(&stack0x0000002c + iVar10));
      *puVar16 = 0;
      NoticeDialog::show(pNVar14,&stack0x00000024 + iVar10,&stack0x0000002c + iVar10);
      String::~String((String *)(&stack0x0000002c + iVar10));
      FUN_0015b50a(&stack0x00000024 + iVar10);
    }
    snprintf(&stack0x00000460 + iVar10,0x400,(char *)(DAT_0015af30 + 0x15ad84));
    iVar9 = DAT_0015af38;
    iVar6 = *(int *)(param_1 + 0xc);
    **(undefined4 **)(iVar15 + DAT_0015af34) = 0;
    uVar4 = *(undefined4 *)(iVar15 + iVar9);
    pvVar5 = *(void **)(iVar6 + DAT_0015af3c);
    p_Var11 = *(_func_void_void_ptr **)(iVar15 + DAT_0015af44);
    *(int *)(&stack0xfffffff0 + iVar10) = iVar6;
    *puVar17 = uVar4;
    CCServer::LoadImageFromURL
              (pvVar5,&stack0x00000460 + iVar10,(char *)(DAT_0015af40 + 0x15ada4),p_Var11,
               (_func_void_void_ptr *)*puVar18,*(void **)(&stack0xfffffff0 + iVar10));
    *(undefined4 *)(param_1 + iRam0015aef0) = 0x110;
LAB_0015adc0:
    iVar9 = **(int **)(iVar15 + DAT_0015af34);
    if (iVar9 == 0) {
      iVar9 = FUN_0015c58a();
    }
    if (iVar9 == 1) {
      pcVar7 = (ccTexture2D *)calloc(1,0x2c);
      CCTexture2D::Init(pcVar7);
      CCGetWritableFilePath(&stack0x00000460 + iVar10,0x104,(char *)(DAT_0015af48 + 0x15adec));
      iVar9 = CCTexture2D::LoadFromImageFile(pcVar7,&stack0x00000460 + iVar10);
      if (iVar9 != 0) {
        if (*(int *)(param_1 + DAT_0015af04) == 0) {
          pCVar3 = (CFTexture *)operator_new(8);
          CFTexture::CFTexture(pCVar3,pcVar7);
          *(CFTexture **)(param_1 + DAT_0015af04) = pCVar3;
        }
        pcVar2 = DAT_0015af0c;
        unaff_r7 = DAT_0015af0c;
        if (*(int *)(DAT_0015af0c + param_1) == 0) {
          uVar4 = *(undefined4 *)(param_1 + DAT_0015af04);
          String::String((String *)(&stack0x00000034 + iVar10),(char *)(DAT_0015af4c + 0x15ae2c));
          uVar4 = CImage::createImageFromDownloadImage(uVar4,&stack0x00000034 + iVar10);
          *(undefined4 *)(pcVar2 + param_1) = uVar4;
          String::~String((String *)(&stack0x00000034 + iVar10));
          pcVar7 = *(ccTexture2D **)(iVar15 + DAT_0015af10);
          unaff_r7 = (ccTexture2D *)(DAT_0015af50 + 0x15ae4a);
          Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar7,*(CImage **)(pcVar2 + param_1));
          L_PrintLog((char *)unaff_r7,(char *)(DAT_0015af54 + 0x15ae56));
          sprintf(&stack0x0000035c + iVar10,(char *)(DAT_0015af58 + 0x15ae64),
                  *(int *)(*(int *)pcVar7 + 4) + 1);
          L_PrintLog((char *)unaff_r7,&stack0x0000035c + iVar10);
        }
        CCOptions::SetInt(*(CCOptions **)(*(int *)(param_1 + 0xc) + 0xa00),
                          (void *)(DAT_0015af5c + 0x15ae82),
                          (char *)**(undefined4 **)(iVar15 + DAT_0015af00),
                          (int)*(undefined4 **)(iVar15 + DAT_0015af00));
        iVar9 = 0x80;
        goto LAB_0015ae88;
      }
      goto LAB_0015ae92;
    }
    if (iVar9 != 2) {
      FUN_0015c58a();
    }
    pNVar14 = *(NoticeDialog **)(param_1 + DAT_0015b260);
    String::String((String *)(&stack0x0000004c + iVar10),(char *)(DAT_0015b25c + 0x15af76));
    Vector<String>::elementAt((int)(&stack0x00000054 + iVar10));
    *puVar20 = 0;
    NoticeDialog::show(pNVar14,&stack0x0000004c + iVar10,&stack0x00000054 + iVar10);
    String::~String((String *)(&stack0x00000054 + iVar10));
    puVar1 = &stack0x0000004c;
    while( true ) {
      String::~String((String *)(puVar1 + iVar10));
      FUN_0015c586();
      snprintf(&stack0x00000460 + iVar10,0x400,(char *)(DAT_0015b290 + 0x15b0c4));
      CCTexture2D::Init(unaff_r7);
      iVar9 = DAT_0015b298;
      iVar6 = *(int *)(param_1 + 0xc);
      **(undefined4 **)(iVar15 + DAT_0015b294) = 0;
      uVar4 = *(undefined4 *)(iVar15 + iVar9);
      pvVar5 = *(void **)(iVar6 + DAT_0015b29c);
      p_Var11 = *(_func_void_void_ptr **)(iVar15 + DAT_0015b2a4);
      *(int *)(&stack0xfffffff0 + iVar10) = iVar6;
      *puVar21 = uVar4;
      CCServer::LoadImageFromURL
                (pvVar5,&stack0x00000460 + iVar10,(char *)(DAT_0015b2a0 + 0x15b0ea),p_Var11,
                 (_func_void_void_ptr *)*puVar22,*(void **)(&stack0xfffffff0 + iVar10));
      *(undefined4 *)(param_1 + DAT_0015b2a8) = 0x210;
LAB_0015b0fe:
      iVar9 = **(int **)(iVar15 + DAT_0015b294);
      if (iVar9 == 0) {
        iVar9 = FUN_0015c58a();
      }
      if (iVar9 == 1) break;
      if (iVar9 != 2) {
        FUN_0015c58a();
      }
      pNVar14 = *(NoticeDialog **)(param_1 + DAT_0015b260);
      String::String((String *)(&stack0x0000008c + iVar10),(char *)(DAT_0015b2c8 + 0x15b21c));
      Vector<String>::elementAt((int)(&stack0x00000094 + iVar10));
      *puVar24 = 0;
      NoticeDialog::show(pNVar14,&stack0x0000008c + iVar10,&stack0x00000094 + iVar10);
      String::~String((String *)(&stack0x00000094 + iVar10));
      puVar1 = &stack0x0000008c;
    }
    pcVar7 = (ccTexture2D *)calloc(1,0x2c);
    CCTexture2D::Init(pcVar7);
    CCGetWritableFilePath(&stack0x00000460 + iVar10,0x104,(char *)(DAT_0015b2ac + 0x15b12a));
    iVar9 = CCTexture2D::LoadFromImageFile(pcVar7,&stack0x00000460 + iVar10);
    if (iVar9 != 0) {
      if (*(int *)(param_1 + DAT_0015b274) == 0) {
        pCVar3 = (CFTexture *)operator_new(8);
        CFTexture::CFTexture(pCVar3,pcVar7);
        *(CFTexture **)(param_1 + DAT_0015b274) = pCVar3;
      }
      unaff_r7 = (ccTexture2D *)0xec0;
      if (*(int *)(param_1 + 0xec0) == 0) {
        uVar4 = *(undefined4 *)(param_1 + DAT_0015b274);
        String::String((String *)(&stack0x00000074 + iVar10),(char *)(DAT_0015b2b0 + 0x15b16c));
        uVar4 = CImage::createImageFromDownloadImage(uVar4,&stack0x00000074 + iVar10);
        *(undefined4 *)(param_1 + 0xec0) = uVar4;
        String::~String((String *)(&stack0x00000074 + iVar10));
        pcVar7 = *(ccTexture2D **)(iVar15 + DAT_0015b27c);
        unaff_r7 = (ccTexture2D *)(DAT_0015b2b4 + 0x15b18a);
        Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar7,*(CImage **)(param_1 + 0xec0));
        L_PrintLog((char *)unaff_r7,(char *)(DAT_0015b2b8 + 0x15b196));
        sprintf(&stack0x0000035c + iVar10,(char *)(DAT_0015b2bc + 0x15b1a4),
                *(int *)(*(int *)pcVar7 + 4) + 1);
        L_PrintLog((char *)unaff_r7,&stack0x0000035c + iVar10);
      }
      CCOptions::SetInt(*(CCOptions **)(*(int *)(param_1 + 0xc) + 0xa00),
                        (void *)(DAT_0015b2c0 + 0x15b1c2),
                        (char *)**(undefined4 **)(iVar15 + DAT_0015b270),
                        (int)*(undefined4 **)(iVar15 + DAT_0015b270));
      goto LAB_0015b1c6;
    }
    CCTexture2D::Free(pcVar7);
    pcVar7 = *(ccTexture2D **)(param_1 + DAT_0015b260);
    String::String((String *)(&stack0x0000007c + iVar10),(char *)(DAT_0015b2c4 + 0x15b1da));
    Vector<String>::elementAt((int)(&stack0x00000084 + iVar10));
    cVar25 = SCARRY4((int)pcVar7,0);
    *puVar23 = 0;
    NoticeDialog::show((NoticeDialog *)pcVar7,&stack0x0000007c + iVar10,&stack0x00000084 + iVar10);
    String::~String((String *)(&stack0x00000084 + iVar10));
    puVar1 = &stack0x0000007c;
  }
  String::~String((String *)(puVar1 + iVar10));
  iVar10 = 0x7000;
LAB_0015aed8:
  *(int *)(param_1 + iRam0015aef0) = iVar10;
  FUN_0015c58a();
  FUN_000dfee2();
  *(ccTexture2D **)(param_1 + 0xc) = pcVar7;
  if (unaff_r7 != (ccTexture2D *)0x0 && (int)unaff_r7 < 0 == (bool)cVar25) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar28 = VectorRoundShiftRightNarrow(in_q10,1,8,1);
  SatQ(uVar28,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


