/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b8da FUN_0015b8da */

void FUN_0015b8da(undefined4 param_1,GameStateGatya *param_2)

{
  ZCImageButton *this;
  int iVar1;
  int unaff_r4;
  GameStateGatya *unaff_r5;
  NoticeDialog *unaff_r7;
  NoticeDialog *pNVar2;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar3;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar4;
  
  *(undefined4 *)(unaff_r5 + DAT_0015ba98) = *(undefined4 *)(unaff_r5 + 0xe0);
  *(undefined4 *)(unaff_r5 + DAT_0015ba9c) = *(undefined4 *)(unaff_r5 + 0xe4);
  *(undefined4 *)(unaff_r5 + DAT_0015baa0) = *(undefined4 *)(unaff_r5 + 0xe8);
  GameStateGatya::buyConfirmed(unaff_r5,param_2);
  this = (ZCImageButton *)FUN_0015c58a();
  fVar3 = extraout_s0;
  fVar4 = extraout_s1;
  if (this[0x14] == (ZCImageButton)0x0) {
    this = (ZCImageButton *)FUN_0015cbe6();
    fVar3 = extraout_s0_00;
    fVar4 = extraout_s1_00;
  }
  if (this[0x86] == (ZCImageButton)0x0) {
    this = (ZCImageButton *)FUN_0015cbe6();
    fVar3 = extraout_s0_01;
    fVar4 = extraout_s1_01;
  }
  iVar1 = ZCImageButton::contains(this,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r4),fVar3,fVar4);
  fVar3 = extraout_s0_02;
  if (iVar1 == 0) {
    fVar3 = (float)FUN_0015cbe6();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar3);
  printf((char *)(DAT_0015baa4 + 0x15b944));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5);
  if (iVar1 == 0) {
    unaff_r7 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
    String::String((String *)&stack0x00000130,(char *)(DAT_0015baa8 + 0x15b95a));
    Vector<String>::elementAt((int)&stack0x00000138);
    NoticeDialog::show(unaff_r7,&stack0x00000130,&stack0x00000138);
    String::~String((String *)&stack0x00000138);
    FUN_0015c478(&stack0x00000130);
  }
  iVar1 = *(int *)(unaff_r5 + 0xf0);
  if (iVar1 == 0) {
    if (*(int *)(unaff_r5 + 0xf4) <= *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015ba84)) {
      FUN_0015cbf2();
    }
    unaff_r7 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
    Vector<String>::elementAt((int)&stack0x00000140);
    Vector<String>::elementAt((int)&stack0x00000148);
    iVar1 = 0;
    NoticeDialog::show(unaff_r7,&stack0x00000140,&stack0x00000148);
    String::~String((String *)&stack0x00000148);
    FUN_0015c478(&stack0x00000140);
  }
  if (iVar1 != 1) {
    FUN_0015cbf2();
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (*(int *)(unaff_r5 + 0xf4) <= iVar1) {
    FUN_0015cbf2();
  }
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0015baac) == '\0') {
    FUN_0015cbf2();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
  String::String((String *)&stack0x00000150,(char *)(DAT_0015bab0 + 0x15ba12));
  Vector<String>::elementAt((int)&stack0x00000158);
  NoticeDialog::show(pNVar2,&stack0x00000150,&stack0x00000158);
  String::~String((String *)&stack0x00000158);
  FUN_0015c478(&stack0x00000150);
  pNVar2 = *(NoticeDialog **)(unaff_r5 + (int)pNVar2);
  String::String((String *)&stack0x00000160,(char *)(DAT_0015bab4 + 0x15ba48));
  Vector<String>::elementAt((int)&stack0x00000168);
  NoticeDialog::show(pNVar2,&stack0x00000160,&stack0x00000168);
  String::~String((String *)&stack0x00000168);
  String::~String((String *)&stack0x00000160);
  *(undefined4 *)(unaff_r5 + DAT_0015c1f4) = 0x7000;
  FUN_0015c58a();
  return;
}


