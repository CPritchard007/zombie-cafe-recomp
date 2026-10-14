/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b3fe FUN_0015b3fe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0015b3fe(void)

{
  char *pcVar1;
  String *this;
  int iVar2;
  ccTexture2D *pcVar3;
  CFTexture *this_00;
  undefined4 uVar4;
  NoticeDialog *pNVar5;
  int unaff_r5;
  int unaff_r6;
  char *unaff_r7;
  char cVar6;
  undefined8 uVar7;
  undefined1 in_q10 [16];
  
  iVar2 = **(int **)(unaff_r6 + DAT_0015b6ac);
  if (iVar2 == 0) {
    iVar2 = FUN_0015c58a();
  }
  if (iVar2 == 1) {
    pcVar3 = (ccTexture2D *)calloc(1,0x2c);
    CCTexture2D::Init(pcVar3);
    CCGetWritableFilePath(&stack0x00000474,0x104,(char *)(DAT_0015b6c4 + 0x15b42a));
    iVar2 = CCTexture2D::LoadFromImageFile(pcVar3,&stack0x00000474);
    if (iVar2 != 0) {
      if (*(int *)(unaff_r5 + DAT_0015b680) == 0) {
        this_00 = (CFTexture *)operator_new(8);
        CFTexture::CFTexture(this_00,pcVar3);
        *(CFTexture **)(unaff_r5 + DAT_0015b680) = this_00;
      }
      pcVar1 = DAT_0015b688;
      unaff_r7 = DAT_0015b688;
      if (*(int *)(DAT_0015b688 + unaff_r5) == 0) {
        uVar4 = *(undefined4 *)(unaff_r5 + DAT_0015b680);
        String::String((String *)&stack0x000000c8,(char *)(DAT_0015b6c8 + 0x15b46a));
        uVar4 = CImage::createImageFromDownloadImage(uVar4,&stack0x000000c8);
        *(undefined4 *)(pcVar1 + unaff_r5) = uVar4;
        String::~String((String *)&stack0x000000c8);
        pcVar3 = *(ccTexture2D **)(unaff_r6 + DAT_0015b68c);
        unaff_r7 = (char *)(DAT_0015b6cc + 0x15b488);
        Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar3,*(CImage **)(pcVar1 + unaff_r5));
        L_PrintLog(unaff_r7,(char *)(DAT_0015b6d0 + 0x15b494));
        sprintf(&stack0x00000370,(char *)(DAT_0015b6d4 + 0x15b4a2),*(int *)(*(int *)pcVar3 + 4) + 1)
        ;
        L_PrintLog(unaff_r7,&stack0x00000370);
      }
      CCOptions::SetInt(*(CCOptions **)(*(int *)(unaff_r5 + 0xc) + 0xa00),
                        (void *)(DAT_0015b6d8 + 0x15b4c0),
                        (char *)**(undefined4 **)(unaff_r6 + DAT_0015b67c),
                        (int)*(undefined4 **)(unaff_r6 + DAT_0015b67c));
      FUN_0015c586();
    }
    CCTexture2D::Free(pcVar3);
    pcVar3 = *(ccTexture2D **)(unaff_r5 + DAT_0015b6a0);
    String::String((String *)&stack0x000000d0,(char *)(DAT_0015b6dc + 0x15b4dc));
    Vector<String>::elementAt((int)&stack0x000000d8);
    NoticeDialog::show((NoticeDialog *)pcVar3,&stack0x000000d0,&stack0x000000d8);
    String::~String((String *)&stack0x000000d8);
    String::~String((String *)&stack0x000000d0);
    *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x7000;
    FUN_0015c58a();
    CCTexture2D::Free(pcVar3);
    pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015af28);
    String::String((String *)&stack0x00000050,(char *)(DAT_0015af60 + 0x15aea2));
    Vector<String>::elementAt((int)&stack0x00000058);
    cVar6 = SCARRY4((int)pNVar5,0);
    NoticeDialog::show(pNVar5,&stack0x00000050,&stack0x00000058);
    String::~String((String *)&stack0x00000058);
    this = (String *)&stack0x00000050;
  }
  else {
    if (iVar2 != 2) {
      FUN_0015c58a();
    }
    pNVar5 = *(NoticeDialog **)(unaff_r5 + DAT_0015b6a0);
    String::String((String *)&stack0x000000e0,(char *)(DAT_0015b6e0 + 0x15b526));
    Vector<String>::elementAt((int)&stack0x000000e8);
    cVar6 = SCARRY4((int)pNVar5,0);
    NoticeDialog::show(pNVar5,&stack0x000000e0,&stack0x000000e8);
    String::~String((String *)&stack0x000000e8);
    this = (String *)&stack0x000000e0;
  }
  String::~String(this);
  *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x7000;
  FUN_0015c58a();
  FUN_000dfee2();
  *(NoticeDialog **)(unaff_r5 + 0xc) = pNVar5;
  if (unaff_r7 == (char *)0x0 || (int)unaff_r7 < 0 != (bool)cVar6) {
    uVar7 = VectorRoundShiftRightNarrow(in_q10,1,8,1);
    SatQ(uVar7,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


