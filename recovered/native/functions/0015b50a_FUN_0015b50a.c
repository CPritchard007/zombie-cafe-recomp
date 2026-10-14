/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b50a FUN_0015b50a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0015b50a(String *param_1)

{
  NoticeDialog *pNVar1;
  ccTexture2D *unaff_r4;
  int unaff_r5;
  int unaff_r7;
  char cVar2;
  undefined8 uVar3;
  undefined1 in_q10 [16];
  
  String::~String(param_1);
  *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x7000;
  FUN_0015c58a();
  CCTexture2D::Free(unaff_r4);
  pNVar1 = *(NoticeDialog **)(unaff_r5 + DAT_0015af28);
  String::String((String *)&stack0x00000050,(char *)(DAT_0015af60 + 0x15aea2));
  Vector<String>::elementAt((int)&stack0x00000058);
  cVar2 = SCARRY4((int)pNVar1,0);
  NoticeDialog::show(pNVar1,&stack0x00000050,&stack0x00000058);
  String::~String((String *)&stack0x00000058);
  String::~String((String *)&stack0x00000050);
  *(undefined4 *)(unaff_r5 + iRam0015aef0) = 0x7000;
  FUN_0015c58a();
  FUN_000dfee2();
  *(NoticeDialog **)(unaff_r5 + 0xc) = pNVar1;
  if (unaff_r7 == 0 || unaff_r7 < 0 != (bool)cVar2) {
    uVar3 = VectorRoundShiftRightNarrow(in_q10,1,8,1);
    SatQ(uVar3,8,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


