/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b3be FUN_0015b3be */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0015b3be(void)

{
  _func_void_void_ptr *p_Var1;
  String *this;
  int iVar2;
  ccTexture2D *pcVar3;
  CFTexture *this_00;
  void *pvVar4;
  undefined4 unaff_r4;
  undefined4 uVar5;
  NoticeDialog *pNVar6;
  int unaff_r5;
  int unaff_r6;
  ccTexture2D *unaff_r7;
  _func_void_void_ptr *p_Var7;
  char cVar8;
  undefined8 uVar9;
  undefined1 in_q10 [16];
  
  snprintf(&stack0x00000474,0x400,(char *)(DAT_0015b6a8 + 0x15b3c8));
  CCTexture2D::Init(unaff_r7);
  iVar2 = DAT_0015b6b0;
  pvVar4 = *(void **)(unaff_r5 + 0xc);
  **(undefined4 **)(unaff_r6 + DAT_0015b6ac) = 0;
  p_Var7 = *(_func_void_void_ptr **)(unaff_r6 + iVar2);
  CCServer::LoadImageFromURL
            (*(void **)((int)pvVar4 + DAT_0015b6b4),&stack0x00000474,
             (char *)(DAT_0015b6b8 + 0x15b3ee),*(_func_void_void_ptr **)(unaff_r6 + DAT_0015b6bc),
             p_Var7,pvVar4);
  *(undefined4 *)(unaff_r5 + DAT_0015b6c0) = unaff_r4;
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
      p_Var1 = DAT_0015b688;
      p_Var7 = DAT_0015b688;
      if (*(int *)(DAT_0015b688 + unaff_r5) == 0) {
        uVar5 = *(undefined4 *)(unaff_r5 + DAT_0015b680);
        String::String((String *)&stack0x000000c8,(char *)(DAT_0015b6c8 + 0x15b46a));
        uVar5 = CImage::createImageFromDownloadImage(uVar5,&stack0x000000c8);
        *(undefined4 *)(p_Var1 + unaff_r5) = uVar5;
        String::~String((String *)&stack0x000000c8);
        pcVar3 = *(ccTexture2D **)(unaff_r6 + DAT_0015b68c);
        p_Var7 = (_func_void_void_ptr *)(DAT_0015b6cc + 0x15b488);
        Vector<CImage*>::addElement(*(Vector<CImage*> **)pcVar3,*(CImage **)(p_Var1 + unaff_r5));
        L_PrintLog((char *)p_Var7,(char *)(DAT_0015b6d0 + 0x15b494));
        sprintf(&stack0x00000370,(char *)(DAT_0015b6d4 + 0x15b4a2),*(int *)(*(int *)pcVar3 + 4) + 1)
        ;
        L_PrintLog((char *)p_Var7,&stack0x00000370);
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
    pNVar6 = *(NoticeDialog **)(unaff_r5 + DAT_0015af28);
    String::String((String *)&stack0x00000050,(char *)(DAT_0015af60 + 0x15aea2));
    Vector<String>::elementAt((int)&stack0x00000058);
    cVar8 = SCARRY4((int)pNVar6,0);
    NoticeDialog::show(pNVar6,&stack0x00000050,&stack0x00000058);
    String::~String((String *)&stack0x00000058);
    this = (String *)&stack0x00000050;
  }
  else {
    if (iVar2 != 2) {
      FUN_0015c58a();
    }
    pNVar6 = *(NoticeDialog **)(unaff_r5 + DAT_0015b6a0);
    String::String((String *)&stack0x000000e0,(char *)(DAT_0015b6e0 + 0x15b526));
    Vector<String>::elementAt((int)&stack0x000000e8);
    cVar8 = SCARRY4((int)pNVar6,0);
    NoticeDialog::show(pNVar6,&stack0x000000e0,&stack0x000000e8);
    String::~String((String *)&stack0x000000e8);
    this = (String *)&stack0x000000e0;
  }
  String::~String(this);
  *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x7000;
  FUN_0015c58a();
  FUN_000dfee2();
  *(NoticeDialog **)(unaff_r5 + 0xc) = pNVar6;
  if (p_Var7 == (_func_void_void_ptr *)0x0 || (int)p_Var7 < 0 != (bool)cVar8) {
    uVar9 = VectorRoundShiftRightNarrow(in_q10,1,8,1);
    SatQ(uVar9,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


