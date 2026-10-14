/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e2b2 FUN_0013e2b2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0013e2b2(uint param_1)

{
  uint uVar1;
  int unaff_r4;
  NoticeDialog *pNVar2;
  
  if (param_1 < 0xe4) {
    FUN_0013f72e();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000054);
  Vector<String>::elementAt((int)&stack0x0000005c);
  NoticeDialog::show(pNVar2,&stack0x00000054,&stack0x0000005c);
  String::~String((String *)&stack0x0000005c);
  uVar1 = FUN_0013efb0(&stack0x00000054);
  if (uVar1 < 0xe0) {
    FUN_0013f738();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000064);
  Vector<String>::elementAt((int)&stack0x0000006c);
  NoticeDialog::show(pNVar2,&stack0x00000064,&stack0x0000006c);
  String::~String((String *)&stack0x0000006c);
  uVar1 = FUN_0013efb0(&stack0x00000064);
  if (uVar1 < 0xde) {
    FUN_0013f742();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000074);
  Vector<String>::elementAt((int)&stack0x0000007c);
  NoticeDialog::show(pNVar2,&stack0x00000074,&stack0x0000007c);
  String::~String((String *)&stack0x0000007c);
  uVar1 = FUN_0013efb0(&stack0x00000074);
  if (uVar1 < 0xdc) {
    FUN_0013f74c();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000084);
  Vector<String>::elementAt((int)&stack0x0000008c);
  NoticeDialog::show(pNVar2,&stack0x00000084,&stack0x0000008c);
  String::~String((String *)&stack0x0000008c);
  uVar1 = FUN_0013efb0(&stack0x00000084);
  if (uVar1 < 0xd9) {
    FUN_0013f756();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x00000094);
  Vector<String>::elementAt((int)&stack0x0000009c);
  NoticeDialog::show(pNVar2,&stack0x00000094,&stack0x0000009c);
  String::~String((String *)&stack0x0000009c);
  uVar1 = FUN_0013efb0(&stack0x00000094);
  if (uVar1 < 0xd5) {
    FUN_0013f760();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000000a4);
  Vector<String>::elementAt((int)&stack0x000000ac);
  NoticeDialog::show(pNVar2,&stack0x000000a4,&stack0x000000ac);
  String::~String((String *)&stack0x000000ac);
  uVar1 = FUN_0013efb0(&stack0x000000a4);
  if (uVar1 < 0xd2) {
    FUN_0013f76a();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000000b4);
  Vector<String>::elementAt((int)&stack0x000000bc);
  NoticeDialog::show(pNVar2,&stack0x000000b4,&stack0x000000bc);
  String::~String((String *)&stack0x000000bc);
  uVar1 = FUN_0013efb0(&stack0x000000b4);
  if (uVar1 < 0xcf) {
    FUN_0013f774();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000000c4);
  Vector<String>::elementAt((int)&stack0x000000cc);
  NoticeDialog::show(pNVar2,&stack0x000000c4,&stack0x000000cc);
  String::~String((String *)&stack0x000000cc);
  uVar1 = FUN_0013efb0(&stack0x000000c4);
  if (uVar1 < 0xcc) {
    FUN_0013f77e();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000000d4);
  Vector<String>::elementAt((int)&stack0x000000dc);
  NoticeDialog::show(pNVar2,&stack0x000000d4,&stack0x000000dc);
  String::~String((String *)&stack0x000000dc);
  uVar1 = FUN_0013efb0(&stack0x000000d4);
  if (uVar1 < 199) {
    FUN_0013f788();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r4 + 0x1b0);
  Vector<String>::elementAt((int)&stack0x000000e4);
  Vector<String>::elementAt((int)&stack0x000000ec);
  NoticeDialog::show(pNVar2,&stack0x000000e4,&stack0x000000ec);
  String::~String((String *)&stack0x000000ec);
  FUN_0013efb0(&stack0x000000e4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


