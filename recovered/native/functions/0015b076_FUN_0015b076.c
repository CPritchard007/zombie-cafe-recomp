/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b076 FUN_0015b076 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0015b076(void)

{
  String *pSVar1;
  int iVar2;
  ccTexture2D *pcVar3;
  CFTexture *this;
  void *pvVar4;
  NoticeDialog *pNVar5;
  undefined4 uVar6;
  int unaff_r5;
  int unaff_r6;
  ccTexture2D *unaff_r7;
  char cVar7;
  undefined8 uVar8;
  undefined1 in_q10 [16];
  
  pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015b260);
  String::String((String *)&stack0x00000078,(char *)(DAT_0015b28c + 0x15b080));
  Vector<String>::elementAt((int)&stack0x00000080);
  NoticeDialog::show(pNVar5,&stack0x00000078,&stack0x00000080);
  String::~String((String *)&stack0x00000080);
  pSVar1 = (String *)&stack0x00000078;
  while( true ) {
    String::~String(pSVar1);
    FUN_0015c586();
    snprintf(&stack0x00000474,0x400,(char *)(DAT_0015b290 + 0x15b0c4));
    CCTexture2D::Init(unaff_r7);
    iVar2 = DAT_0015b298;
    pvVar4 = *(void **)(unaff_r5 + 0xc);
    **(undefined4 **)(unaff_r6 + DAT_0015b294) = 0;
    CCServer::LoadImageFromURL
              (*(void **)((int)pvVar4 + DAT_0015b29c),&stack0x00000474,
               (char *)(DAT_0015b2a0 + 0x15b0ea),*(_func_void_void_ptr **)(unaff_r6 + DAT_0015b2a4),
               *(_func_void_void_ptr **)(unaff_r6 + iVar2),pvVar4);
    *(undefined4 *)(unaff_r5 + DAT_0015b2a8) = 0x210;
    iVar2 = **(int **)(unaff_r6 + DAT_0015b294);
    if (iVar2 == 0) {
      iVar2 = FUN_0015c58a();
    }
    if (iVar2 == 1) break;
    if (iVar2 != 2) {
      FUN_0015c58a();
    }
    pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015b260);
    String::String((String *)&stack0x000000a0,(char *)(DAT_0015b2c8 + 0x15b21c));
    Vector<String>::elementAt((int)&stack0x000000a8);
    NoticeDialog::show(pNVar5,&stack0x000000a0,&stack0x000000a8);
    String::~String((String *)&stack0x000000a8);
    pSVar1 = (String *)&stack0x000000a0;
  }
  pcVar3 = (ccTexture2D *)calloc(1,0x2c);
  CCTexture2D::Init(pcVar3);
  CCGetWritableFilePath(&stack0x00000474,0x104,(char *)(DAT_0015b2ac + 0x15b12a));
  iVar2 = CCTexture2D::LoadFromImageFile(pcVar3,&stack0x00000474);
  if (iVar2 == 0) {
    CCTexture2D::Free(pcVar3);
    pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015b260);
    String::String((String *)&stack0x00000090,(char *)(DAT_0015b2c4 + 0x15b1da));
    Vector<String>::elementAt((int)&stack0x00000098);
    cVar7 = SCARRY4((int)pNVar5,0);
    NoticeDialog::show(pNVar5,&stack0x00000090,&stack0x00000098);
    String::~String((String *)&stack0x00000098);
    pSVar1 = (String *)&stack0x00000090;
  }
  else {
    if (*(int *)(unaff_r5 + DAT_0015b274) == 0) {
      this = (CFTexture *)operator_new(8);
      CFTexture::CFTexture(this,pcVar3);
      *(CFTexture **)(unaff_r5 + DAT_0015b274) = this;
    }
    unaff_r7 = (ccTexture2D *)0xec0;
    if (*(int *)(unaff_r5 + 0xec0) == 0) {
      uVar6 = *(undefined4 *)(unaff_r5 + DAT_0015b274);
      String::String((String *)&stack0x00000088,(char *)(DAT_0015b2b0 + 0x15b16c));
      uVar6 = CImage::createImageFromDownloadImage(uVar6,&stack0x00000088);
      *(undefined4 *)(unaff_r5 + 0xec0) = uVar6;
      String::~String((String *)&stack0x00000088);
      pcVar3 = *(ccTexture2D **)(unaff_r6 + DAT_0015b27c);
      unaff_r7 = (ccTexture2D *)(DAT_0015b2b4 + 0x15b18a);
      Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar3,*(CImage **)(unaff_r5 + 0xec0));
      L_PrintLog((char *)unaff_r7,(char *)(DAT_0015b2b8 + 0x15b196));
      sprintf(&stack0x00000370,(char *)(DAT_0015b2bc + 0x15b1a4),*(int *)(*(int *)pcVar3 + 4) + 1);
      L_PrintLog((char *)unaff_r7,&stack0x00000370);
    }
    CCOptions::SetInt(*(CCOptions **)(*(int *)(unaff_r5 + 0xc) + 0xa00),
                      (void *)(DAT_0015b2c0 + 0x15b1c2),
                      (char *)**(undefined4 **)(unaff_r6 + DAT_0015b270),
                      (int)*(undefined4 **)(unaff_r6 + DAT_0015b270));
    *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x300;
    FUN_0015c58a();
    CCTexture2D::Free(pcVar3);
    pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015af28);
    String::String((String *)&stack0x00000050,(char *)(DAT_0015af60 + 0x15aea2));
    Vector<String>::elementAt((int)&stack0x00000058);
    cVar7 = SCARRY4((int)pNVar5,0);
    NoticeDialog::show(pNVar5,&stack0x00000050,&stack0x00000058);
    String::~String((String *)&stack0x00000058);
    pSVar1 = (String *)&stack0x00000050;
  }
  String::~String(pSVar1);
  *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x7000;
  FUN_0015c58a();
  FUN_000dfee2();
  *(NoticeDialog **)(unaff_r5 + 0xc) = pNVar5;
  if (unaff_r7 == (ccTexture2D *)0x0 || (int)unaff_r7 < 0 != (bool)cVar7) {
    uVar8 = VectorRoundShiftRightNarrow(in_q10,1,8,1);
    SatQ(uVar8,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


