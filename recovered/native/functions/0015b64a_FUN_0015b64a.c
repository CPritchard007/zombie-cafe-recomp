/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015b64a FUN_0015b64a */

void FUN_0015b64a(float param_1,float param_2)

{
  int iVar1;
  ZCImageButton *pZVar2;
  GameStateGatya *extraout_r1;
  int unaff_r4;
  NoticeDialog *pNVar3;
  GameStateGatya *unaff_r5;
  NoticeDialog *unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float fVar4;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float fVar5;
  int in_stack_00000018;
  
  iVar1 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x80),
                     *(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0015b6f0),param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x9c),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0015ba74),extraout_s0,extraout_s1);
    if (iVar1 == 0) {
      pZVar2 = *(ZCImageButton **)(unaff_r5 + 0xb8);
      fVar4 = extraout_s0_00;
      fVar5 = extraout_s1_00;
      if (pZVar2 == (ZCImageButton *)0x0) {
        pZVar2 = (ZCImageButton *)FUN_0015cb84();
        fVar4 = extraout_s0_01;
        fVar5 = extraout_s1_01;
      }
      iVar1 = ZCImageButton::contains
                        (pZVar2,*(long *)(*(int *)(unaff_r5 + 0xc) + DAT_0015ba74),fVar4,fVar5);
      fVar4 = extraout_s0_02;
      if (iVar1 == 0) {
        fVar4 = (float)FUN_0015cb84();
      }
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar4);
      in_stack_00000018 = 2;
    }
    else {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_00);
      in_stack_00000018 = 1;
    }
  }
  else {
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0);
  }
  GameStateGatya::setLineupWebWindow(unaff_r5,in_stack_00000018);
  pZVar2 = (ZCImageButton *)FUN_0015c58a();
  fVar4 = extraout_s0_03;
  fVar5 = extraout_s1_02;
  if (pZVar2[0x14] == (ZCImageButton)0x0) {
    pZVar2 = (ZCImageButton *)FUN_0015cb8e();
    fVar4 = extraout_s0_04;
    fVar5 = extraout_s1_03;
  }
  if (pZVar2[0x86] == (ZCImageButton)0x0) {
    pZVar2 = (ZCImageButton *)FUN_0015cb8e();
    fVar4 = extraout_s0_05;
    fVar5 = extraout_s1_04;
  }
  iVar1 = ZCImageButton::contains(pZVar2,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r4),fVar4,fVar5)
  ;
  fVar4 = extraout_s0_06;
  if (iVar1 == 0) {
    fVar4 = (float)FUN_0015cb8e();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar4);
  printf((char *)(DAT_0015ba78 + 0x15b79e));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5);
  if (iVar1 == 0) {
    pNVar3 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
    String::String((String *)&stack0x000000f0,(char *)(DAT_0015ba7c + 0x15b7b4));
    Vector<String>::elementAt((int)&stack0x000000f8);
    NoticeDialog::show(pNVar3,&stack0x000000f0,&stack0x000000f8);
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
  pNVar3 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
  String::String((String *)&stack0x00000110,(char *)(DAT_0015ba8c + 0x15b866));
  Vector<String>::elementAt((int)&stack0x00000118);
  NoticeDialog::show(pNVar3,&stack0x00000110,&stack0x00000118);
  String::~String((String *)&stack0x00000118);
  FUN_0015c478(&stack0x00000110);
  pNVar3 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
  String::String((String *)&stack0x00000120,(char *)(DAT_0015ba90 + 0x15b8a0));
  Vector<String>::elementAt((int)&stack0x00000128);
  NoticeDialog::show(pNVar3,&stack0x00000120,&stack0x00000128);
  String::~String((String *)&stack0x00000128);
  String::~String((String *)&stack0x00000120);
  FUN_0015c414(0x7000);
  *(undefined4 *)(unaff_r5 + DAT_0015ba98) = *(undefined4 *)(unaff_r5 + 0xe0);
  *(undefined4 *)(unaff_r5 + DAT_0015ba9c) = *(undefined4 *)(unaff_r5 + 0xe4);
  *(undefined4 *)(unaff_r5 + DAT_0015baa0) = *(undefined4 *)(unaff_r5 + 0xe8);
  GameStateGatya::buyConfirmed(unaff_r5,extraout_r1);
  pZVar2 = (ZCImageButton *)FUN_0015c58a();
  fVar4 = extraout_s0_07;
  fVar5 = extraout_s1_05;
  if (pZVar2[0x14] == (ZCImageButton)0x0) {
    pZVar2 = (ZCImageButton *)FUN_0015cbe6();
    fVar4 = extraout_s0_08;
    fVar5 = extraout_s1_06;
  }
  if (pZVar2[0x86] == (ZCImageButton)0x0) {
    pZVar2 = (ZCImageButton *)FUN_0015cbe6();
    fVar4 = extraout_s0_09;
    fVar5 = extraout_s1_07;
  }
  iVar1 = ZCImageButton::contains(pZVar2,*(long *)(pNVar3 + *(int *)(unaff_r5 + 0xc)),fVar4,fVar5);
  fVar4 = extraout_s0_10;
  if (iVar1 == 0) {
    fVar4 = (float)FUN_0015cbe6();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar4);
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
  pNVar3 = *(NoticeDialog **)(unaff_r5 + (int)unaff_r7);
  String::String((String *)&stack0x00000150,(char *)(DAT_0015bab0 + 0x15ba12));
  Vector<String>::elementAt((int)&stack0x00000158);
  NoticeDialog::show(pNVar3,&stack0x00000150,&stack0x00000158);
  String::~String((String *)&stack0x00000158);
  FUN_0015c478(&stack0x00000150);
  pNVar3 = *(NoticeDialog **)(unaff_r5 + (int)pNVar3);
  String::String((String *)&stack0x00000160,(char *)(DAT_0015bab4 + 0x15ba48));
  Vector<String>::elementAt((int)&stack0x00000168);
  NoticeDialog::show(pNVar3,&stack0x00000160,&stack0x00000168);
  String::~String((String *)&stack0x00000168);
  String::~String((String *)&stack0x00000160);
  *(undefined4 *)(unaff_r5 + DAT_0015c1f4) = 0x7000;
  FUN_0015c58a();
  return;
}


