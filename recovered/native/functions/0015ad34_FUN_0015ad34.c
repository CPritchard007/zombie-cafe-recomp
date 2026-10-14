/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015ad34 FUN_0015ad34 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0015ad34(void)

{
  ccTexture2D *pcVar1;
  int iVar2;
  String *pSVar3;
  ccTexture2D *pcVar4;
  CFTexture *pCVar5;
  void *pvVar6;
  NoticeDialog *pNVar7;
  undefined4 uVar8;
  int unaff_r5;
  int unaff_r6;
  ccTexture2D *unaff_r7;
  char cVar9;
  undefined8 uVar10;
  undefined1 in_q10 [16];
  
  if (**(char **)(unaff_r6 + DAT_0015af20) == '\0') {
    pNVar7 = *(NoticeDialog **)(unaff_r5 + DAT_0015af28);
    String::String((String *)&stack0x00000038,(char *)(DAT_0015af24 + 0x15ad48));
    Vector<String>::elementAt((int)&stack0x00000040);
    NoticeDialog::show(pNVar7,&stack0x00000038,&stack0x00000040);
    String::~String((String *)&stack0x00000040);
    FUN_0015b50a(&stack0x00000038);
  }
  snprintf(&stack0x00000474,0x400,(char *)(DAT_0015af30 + 0x15ad84));
  iVar2 = DAT_0015af38;
  pvVar6 = *(void **)(unaff_r5 + 0xc);
  **(undefined4 **)(unaff_r6 + DAT_0015af34) = 0;
  CCServer::LoadImageFromURL
            (*(void **)((int)pvVar6 + DAT_0015af3c),&stack0x00000474,
             (char *)(DAT_0015af40 + 0x15ada4),*(_func_void_void_ptr **)(unaff_r6 + DAT_0015af44),
             *(_func_void_void_ptr **)(unaff_r6 + iVar2),pvVar6);
  *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x110;
  iVar2 = **(int **)(unaff_r6 + DAT_0015af34);
  if (iVar2 == 0) {
    iVar2 = FUN_0015c58a();
  }
  if (iVar2 == 1) {
    pcVar4 = (ccTexture2D *)calloc(1,0x2c);
    CCTexture2D::Init(pcVar4);
    CCGetWritableFilePath(&stack0x00000474,0x104,(char *)(DAT_0015af48 + 0x15adec));
    iVar2 = CCTexture2D::LoadFromImageFile(pcVar4,&stack0x00000474);
    if (iVar2 != 0) {
      if (*(int *)(unaff_r5 + DAT_0015af04) == 0) {
        pCVar5 = (CFTexture *)operator_new(8);
        CFTexture::CFTexture(pCVar5,pcVar4);
        *(CFTexture **)(unaff_r5 + DAT_0015af04) = pCVar5;
      }
      pcVar1 = DAT_0015af0c;
      unaff_r7 = DAT_0015af0c;
      if (*(int *)(DAT_0015af0c + unaff_r5) == 0) {
        uVar8 = *(undefined4 *)(unaff_r5 + DAT_0015af04);
        String::String((String *)&stack0x00000048,(char *)(DAT_0015af4c + 0x15ae2c));
        uVar8 = CImage::createImageFromDownloadImage(uVar8,&stack0x00000048);
        *(undefined4 *)(pcVar1 + unaff_r5) = uVar8;
        String::~String((String *)&stack0x00000048);
        pcVar4 = *(ccTexture2D **)(unaff_r6 + DAT_0015af10);
        unaff_r7 = (ccTexture2D *)(DAT_0015af50 + 0x15ae4a);
        Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar4,*(CImage **)(pcVar1 + unaff_r5));
        L_PrintLog((char *)unaff_r7,(char *)(DAT_0015af54 + 0x15ae56));
        sprintf(&stack0x00000370,(char *)(DAT_0015af58 + 0x15ae64),*(int *)(*(int *)pcVar4 + 4) + 1)
        ;
        L_PrintLog((char *)unaff_r7,&stack0x00000370);
      }
      CCOptions::SetInt(*(CCOptions **)(*(int *)(unaff_r5 + 0xc) + 0xa00),
                        (void *)(DAT_0015af5c + 0x15ae82),
                        (char *)**(undefined4 **)(unaff_r6 + DAT_0015af00),
                        (int)*(undefined4 **)(unaff_r6 + DAT_0015af00));
      iVar2 = 0x80;
      goto LAB_0015ae88;
    }
  }
  else {
    if (iVar2 != 2) {
      FUN_0015c58a();
    }
    pNVar7 = *(NoticeDialog **)(unaff_r5 + DAT_0015b260);
    String::String((String *)&stack0x00000060,(char *)(DAT_0015b25c + 0x15af76));
    Vector<String>::elementAt((int)&stack0x00000068);
    NoticeDialog::show(pNVar7,&stack0x00000060,&stack0x00000068);
    String::~String((String *)&stack0x00000068);
    pSVar3 = (String *)&stack0x00000060;
    while( true ) {
      String::~String(pSVar3);
      FUN_0015c586();
      snprintf(&stack0x00000474,0x400,(char *)(DAT_0015b290 + 0x15b0c4));
      CCTexture2D::Init(unaff_r7);
      iVar2 = DAT_0015b298;
      pvVar6 = *(void **)(unaff_r5 + 0xc);
      **(undefined4 **)(unaff_r6 + DAT_0015b294) = 0;
      CCServer::LoadImageFromURL
                (*(void **)((int)pvVar6 + DAT_0015b29c),&stack0x00000474,
                 (char *)(DAT_0015b2a0 + 0x15b0ea),
                 *(_func_void_void_ptr **)(unaff_r6 + DAT_0015b2a4),
                 *(_func_void_void_ptr **)(unaff_r6 + iVar2),pvVar6);
      *(undefined4 *)(unaff_r5 + DAT_0015b2a8) = 0x210;
      iVar2 = **(int **)(unaff_r6 + DAT_0015b294);
      if (iVar2 == 0) {
        iVar2 = FUN_0015c58a();
      }
      if (iVar2 == 1) break;
      if (iVar2 != 2) {
        FUN_0015c58a();
      }
      pNVar7 = *(NoticeDialog **)(unaff_r5 + DAT_0015b260);
      String::String((String *)&stack0x000000a0,(char *)(DAT_0015b2c8 + 0x15b21c));
      Vector<String>::elementAt((int)&stack0x000000a8);
      NoticeDialog::show(pNVar7,&stack0x000000a0,&stack0x000000a8);
      String::~String((String *)&stack0x000000a8);
      pSVar3 = (String *)&stack0x000000a0;
    }
    pcVar4 = (ccTexture2D *)calloc(1,0x2c);
    CCTexture2D::Init(pcVar4);
    CCGetWritableFilePath(&stack0x00000474,0x104,(char *)(DAT_0015b2ac + 0x15b12a));
    iVar2 = CCTexture2D::LoadFromImageFile(pcVar4,&stack0x00000474);
    if (iVar2 == 0) {
      CCTexture2D::Free(pcVar4);
      pNVar7 = *(NoticeDialog **)(unaff_r5 + DAT_0015b260);
      String::String((String *)&stack0x00000090,(char *)(DAT_0015b2c4 + 0x15b1da));
      Vector<String>::elementAt((int)&stack0x00000098);
      cVar9 = SCARRY4((int)pNVar7,0);
      NoticeDialog::show(pNVar7,&stack0x00000090,&stack0x00000098);
      String::~String((String *)&stack0x00000098);
      pSVar3 = (String *)&stack0x00000090;
      goto LAB_0015aed0;
    }
    if (*(int *)(unaff_r5 + DAT_0015b274) == 0) {
      pCVar5 = (CFTexture *)operator_new(8);
      CFTexture::CFTexture(pCVar5,pcVar4);
      *(CFTexture **)(unaff_r5 + DAT_0015b274) = pCVar5;
    }
    unaff_r7 = (ccTexture2D *)0xec0;
    if (*(int *)(unaff_r5 + 0xec0) == 0) {
      uVar8 = *(undefined4 *)(unaff_r5 + DAT_0015b274);
      String::String((String *)&stack0x00000088,(char *)(DAT_0015b2b0 + 0x15b16c));
      uVar8 = CImage::createImageFromDownloadImage(uVar8,&stack0x00000088);
      *(undefined4 *)(unaff_r5 + 0xec0) = uVar8;
      String::~String((String *)&stack0x00000088);
      pcVar4 = *(ccTexture2D **)(unaff_r6 + DAT_0015b27c);
      unaff_r7 = (ccTexture2D *)(DAT_0015b2b4 + 0x15b18a);
      Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar4,*(CImage **)(unaff_r5 + 0xec0));
      L_PrintLog((char *)unaff_r7,(char *)(DAT_0015b2b8 + 0x15b196));
      sprintf(&stack0x00000370,(char *)(DAT_0015b2bc + 0x15b1a4),*(int *)(*(int *)pcVar4 + 4) + 1);
      L_PrintLog((char *)unaff_r7,&stack0x00000370);
    }
    CCOptions::SetInt(*(CCOptions **)(*(int *)(unaff_r5 + 0xc) + 0xa00),
                      (void *)(DAT_0015b2c0 + 0x15b1c2),
                      (char *)**(undefined4 **)(unaff_r6 + DAT_0015b270),
                      (int)*(undefined4 **)(unaff_r6 + DAT_0015b270));
    iVar2 = 0xc0;
LAB_0015ae88:
    *(int *)(unaff_r5 + iRam0015aef0) = iVar2 << 2;
    FUN_0015c58a();
  }
  CCTexture2D::Free(pcVar4);
  pNVar7 = *(NoticeDialog **)(unaff_r5 + DAT_0015af28);
  String::String((String *)&stack0x00000050,(char *)(DAT_0015af60 + 0x15aea2));
  Vector<String>::elementAt((int)&stack0x00000058);
  cVar9 = SCARRY4((int)pNVar7,0);
  NoticeDialog::show(pNVar7,&stack0x00000050,&stack0x00000058);
  String::~String((String *)&stack0x00000058);
  pSVar3 = (String *)&stack0x00000050;
LAB_0015aed0:
  String::~String(pSVar3);
  *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x7000;
  FUN_0015c58a();
  FUN_000dfee2();
  *(NoticeDialog **)(unaff_r5 + 0xc) = pNVar7;
  if (unaff_r7 == (ccTexture2D *)0x0 || (int)unaff_r7 < 0 != (bool)cVar9) {
    uVar10 = VectorRoundShiftRightNarrow(in_q10,1,8,1);
    SatQ(uVar10,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


