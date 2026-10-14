/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b0ba FUN_0015b0ba */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0015b0ba(void)

{
  String *this;
  int iVar1;
  ccTexture2D *pcVar2;
  CFTexture *this_00;
  void *pvVar3;
  undefined4 uVar4;
  NoticeDialog *pNVar5;
  int unaff_r5;
  int unaff_r6;
  ccTexture2D *unaff_r7;
  char cVar6;
  undefined8 uVar7;
  undefined1 in_q10 [16];
  
  while( true ) {
    snprintf(&stack0x00000474,0x400,(char *)(DAT_0015b290 + 0x15b0c4));
    CCTexture2D::Init(unaff_r7);
    iVar1 = DAT_0015b298;
    pvVar3 = *(void **)(unaff_r5 + 0xc);
    **(undefined4 **)(unaff_r6 + DAT_0015b294) = 0;
    CCServer::LoadImageFromURL
              (*(void **)((int)pvVar3 + DAT_0015b29c),&stack0x00000474,
               (char *)(DAT_0015b2a0 + 0x15b0ea),*(_func_void_void_ptr **)(unaff_r6 + DAT_0015b2a4),
               *(_func_void_void_ptr **)(unaff_r6 + iVar1),pvVar3);
    *(undefined4 *)(unaff_r5 + DAT_0015b2a8) = 0x210;
    iVar1 = **(int **)(unaff_r6 + DAT_0015b294);
    if (iVar1 == 0) {
      iVar1 = FUN_0015c58a();
    }
    if (iVar1 == 1) break;
    if (iVar1 != 2) {
      FUN_0015c58a();
    }
    pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015b260);
    String::String((String *)&stack0x000000a0,(char *)(DAT_0015b2c8 + 0x15b21c));
    Vector<String>::elementAt((int)&stack0x000000a8);
    NoticeDialog::show(pNVar5,&stack0x000000a0,&stack0x000000a8);
    String::~String((String *)&stack0x000000a8);
    String::~String((String *)&stack0x000000a0);
    FUN_0015c586();
  }
  pcVar2 = (ccTexture2D *)calloc(1,0x2c);
  CCTexture2D::Init(pcVar2);
  CCGetWritableFilePath(&stack0x00000474,0x104,(char *)(DAT_0015b2ac + 0x15b12a));
  iVar1 = CCTexture2D::LoadFromImageFile(pcVar2,&stack0x00000474);
  if (iVar1 == 0) {
    CCTexture2D::Free(pcVar2);
    pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015b260);
    String::String((String *)&stack0x00000090,(char *)(DAT_0015b2c4 + 0x15b1da));
    Vector<String>::elementAt((int)&stack0x00000098);
    cVar6 = SCARRY4((int)pNVar5,0);
    NoticeDialog::show(pNVar5,&stack0x00000090,&stack0x00000098);
    String::~String((String *)&stack0x00000098);
    this = (String *)&stack0x00000090;
  }
  else {
    if (*(int *)(unaff_r5 + DAT_0015b274) == 0) {
      this_00 = (CFTexture *)operator_new(8);
      CFTexture::CFTexture(this_00,pcVar2);
      *(CFTexture **)(unaff_r5 + DAT_0015b274) = this_00;
    }
    unaff_r7 = (ccTexture2D *)0xec0;
    if (*(int *)(unaff_r5 + 0xec0) == 0) {
      uVar4 = *(undefined4 *)(unaff_r5 + DAT_0015b274);
      String::String((String *)&stack0x00000088,(char *)(DAT_0015b2b0 + 0x15b16c));
      uVar4 = CImage::createImageFromDownloadImage(uVar4,&stack0x00000088);
      *(undefined4 *)(unaff_r5 + 0xec0) = uVar4;
      String::~String((String *)&stack0x00000088);
      pcVar2 = *(ccTexture2D **)(unaff_r6 + DAT_0015b27c);
      unaff_r7 = (ccTexture2D *)(DAT_0015b2b4 + 0x15b18a);
      Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar2,*(CImage **)(unaff_r5 + 0xec0));
      L_PrintLog((char *)unaff_r7,(char *)(DAT_0015b2b8 + 0x15b196));
      sprintf(&stack0x00000370,(char *)(DAT_0015b2bc + 0x15b1a4),*(int *)(*(int *)pcVar2 + 4) + 1);
      L_PrintLog((char *)unaff_r7,&stack0x00000370);
    }
    CCOptions::SetInt(*(CCOptions **)(*(int *)(unaff_r5 + 0xc) + 0xa00),
                      (void *)(DAT_0015b2c0 + 0x15b1c2),
                      (char *)**(undefined4 **)(unaff_r6 + DAT_0015b270),
                      (int)*(undefined4 **)(unaff_r6 + DAT_0015b270));
    *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x300;
    FUN_0015c58a();
    CCTexture2D::Free(pcVar2);
    pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015af28);
    String::String((String *)&stack0x00000050,(char *)(DAT_0015af60 + 0x15aea2));
    Vector<String>::elementAt((int)&stack0x00000058);
    cVar6 = SCARRY4((int)pNVar5,0);
    NoticeDialog::show(pNVar5,&stack0x00000050,&stack0x00000058);
    String::~String((String *)&stack0x00000058);
    this = (String *)&stack0x00000050;
  }
  String::~String(this);
  *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x7000;
  FUN_0015c58a();
  FUN_000dfee2();
  *(NoticeDialog **)(unaff_r5 + 0xc) = pNVar5;
  if (unaff_r7 == (ccTexture2D *)0x0 || (int)unaff_r7 < 0 != (bool)cVar6) {
    uVar7 = VectorRoundShiftRightNarrow(in_q10,1,8,1);
    SatQ(uVar7,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


