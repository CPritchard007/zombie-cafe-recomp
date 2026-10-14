/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b760 FUN_0015b760 */

void FUN_0015b760(float param_1,float param_2,ZCImageButton *param_3)

{
  int iVar1;
  ZCImageButton *this;
  GameStateGatya *extraout_r1;
  int unaff_r4;
  NoticeDialog *pNVar2;
  GameStateGatya *unaff_r5;
  NoticeDialog *unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar3;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float fVar4;
  
  if (param_3[0x14] == (ZCImageButton)0x0) {
    param_3 = (ZCImageButton *)FUN_0015cb8e();
    param_1 = extraout_s0;
    param_2 = extraout_s1;
  }
  if (param_3[0x86] == (ZCImageButton)0x0) {
    param_3 = (ZCImageButton *)FUN_0015cb8e();
    param_1 = extraout_s0_00;
    param_2 = extraout_s1_00;
  }
  iVar1 = ZCImageButton::contains
                    (param_3,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r4),param_1,param_2);
  fVar3 = extraout_s0_01;
  if (iVar1 == 0) {
    fVar3 = (float)FUN_0015cb8e();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar3);
  printf((char *)(DAT_0015ba78 + 0x15b79e));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5);
  if (iVar1 == 0) {
    pNVar2 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
    String::String((String *)&stack0x000000f0,(char *)(DAT_0015ba7c + 0x15b7b4));
    Vector<String>::elementAt((int)&stack0x000000f8);
    NoticeDialog::show(pNVar2,&stack0x000000f0,&stack0x000000f8);
    String::~String((String *)&stack0x000000f8);
    FUN_0015c478(&stack0x000000f0);
  }
  iVar1 = *(int *)(unaff_r5 + 0xd0);
  if (iVar1 == 0) {
    if (*(int *)(unaff_r5 + 0xd4) <= *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015ba84)) {
      FUN_0015cb9a();
    }
    unaff_r7 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
    Vector<String>::elementAt((int)&stack0x00000100);
    Vector<String>::elementAt((int)&stack0x00000108);
    iVar1 = 0;
    NoticeDialog::show(unaff_r7,&stack0x00000100,&stack0x00000108);
    String::~String((String *)&stack0x00000108);
    FUN_0015c478(&stack0x00000100);
  }
  if (iVar1 != 1) {
    FUN_0015cb9a();
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (*(int *)(unaff_r5 + 0xd4) <= iVar1) {
    FUN_0015cb9a();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
  String::String((String *)&stack0x00000110,(char *)(DAT_0015ba8c + 0x15b866));
  Vector<String>::elementAt((int)&stack0x00000118);
  NoticeDialog::show(pNVar2,&stack0x00000110,&stack0x00000118);
  String::~String((String *)&stack0x00000118);
  FUN_0015c478(&stack0x00000110);
  pNVar2 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
  String::String((String *)&stack0x00000120,(char *)(DAT_0015ba90 + 0x15b8a0));
  Vector<String>::elementAt((int)&stack0x00000128);
  NoticeDialog::show(pNVar2,&stack0x00000120,&stack0x00000128);
  String::~String((String *)&stack0x00000128);
  String::~String((String *)&stack0x00000120);
  FUN_0015c414(0x7000);
  *(undefined4 *)(unaff_r5 + DAT_0015ba98) = *(undefined4 *)(unaff_r5 + 0xe0);
  *(undefined4 *)(unaff_r5 + DAT_0015ba9c) = *(undefined4 *)(unaff_r5 + 0xe4);
  *(undefined4 *)(unaff_r5 + DAT_0015baa0) = *(undefined4 *)(unaff_r5 + 0xe8);
  GameStateGatya::buyConfirmed(unaff_r5,extraout_r1);
  this = (ZCImageButton *)FUN_0015c58a();
  fVar3 = extraout_s0_02;
  fVar4 = extraout_s1_01;
  if (this[0x14] == (ZCImageButton)0x0) {
    this = (ZCImageButton *)FUN_0015cbe6();
    fVar3 = extraout_s0_03;
    fVar4 = extraout_s1_02;
  }
  if (this[0x86] == (ZCImageButton)0x0) {
    this = (ZCImageButton *)FUN_0015cbe6();
    fVar3 = extraout_s0_04;
    fVar4 = extraout_s1_03;
  }
  iVar1 = ZCImageButton::contains(this,*(long *)(pNVar2 + *(int *)(unaff_r5 + 0xc)),fVar3,fVar4);
  fVar3 = extraout_s0_05;
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


