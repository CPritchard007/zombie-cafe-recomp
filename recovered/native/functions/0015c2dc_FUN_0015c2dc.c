/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015c2dc FUN_0015c2dc */

void FUN_0015c2dc(float param_1,float param_2,ZCImageButton *param_3)

{
  int iVar1;
  int unaff_r4;
  GameStateGatya *unaff_r5;
  int unaff_r7;
  NoticeDialog *pNVar2;
  ConfirmDialog *pCVar3;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar4;
  float extraout_s1;
  float extraout_s1_00;
  
  if (param_3[0x14] == (ZCImageButton)0x0) {
    param_3 = (ZCImageButton *)FUN_0015cd82();
    param_1 = extraout_s0;
    param_2 = extraout_s1;
  }
  if (param_3[0x86] == (ZCImageButton)0x0) {
    param_3 = (ZCImageButton *)FUN_0015cd82();
    param_1 = extraout_s0_00;
    param_2 = extraout_s1_00;
  }
  iVar1 = ZCImageButton::contains
                    (param_3,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r4),param_1,param_2);
  fVar4 = extraout_s0_01;
  if (iVar1 == 0) {
    fVar4 = (float)FUN_0015cd82();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar4);
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5);
  if (iVar1 == 0) {
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    String::String((String *)&stack0x00000328,(char *)(DAT_0015c534 + 0x15c32c));
    Vector<String>::elementAt((int)&stack0x00000330);
    NoticeDialog::show(pNVar2,&stack0x00000328,&stack0x00000330);
    String::~String((String *)&stack0x00000330);
    FUN_0015c478(&stack0x00000328);
    return;
  }
  iVar1 = ZombieCafe::getGatyaTicket(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (iVar1 == 0) {
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    String::String((String *)&stack0x00000338,(char *)(DAT_0015c538 + 0x15c36a));
    Vector<String>::elementAt((int)&stack0x00000340);
    NoticeDialog::show(pNVar2,&stack0x00000338,&stack0x00000340);
    String::~String((String *)&stack0x00000340);
    FUN_0015c478(&stack0x00000338);
    return;
  }
  *(undefined4 *)(unaff_r5 + DAT_0015c53c) = 2;
  *(undefined4 *)(unaff_r5 + DAT_0015c540) = 1;
  *(undefined4 *)(unaff_r5 + 0xe70) = 0;
  unaff_r5[DAT_0015c544] = (GameStateGatya)0x4;
  *(undefined4 *)(unaff_r5 + DAT_0015c548) = *(undefined4 *)(unaff_r5 + 0x150);
  *(undefined4 *)(unaff_r5 + DAT_0015c54c) = *(undefined4 *)(unaff_r5 + 0x154);
  *(undefined4 *)(unaff_r5 + DAT_0015c550) = *(undefined4 *)(unaff_r5 + 0x158);
  unaff_r5[0xe60] = (GameStateGatya)0x1;
  *(undefined4 *)(unaff_r5 + DAT_0015c554) = 1;
  iVar1 = GameStateGatya::SetRewardGatyaArr();
  if (iVar1 == 0) {
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    String::String((String *)&stack0x00000348,(char *)(DAT_0015c558 + 0x15c3e2));
    Vector<String>::elementAt((int)&stack0x00000350);
    NoticeDialog::show(pNVar2,&stack0x00000348,&stack0x00000350);
    String::~String((String *)&stack0x00000350);
    String::~String((String *)&stack0x00000348);
    *(undefined4 *)(unaff_r5 + DAT_0015c55c) = 0x7000;
    FUN_0015c58a();
    return;
  }
  pCVar3 = *(ConfirmDialog **)(unaff_r5 + DAT_0015c514);
  String::String((String *)&stack0x00000358,(char *)(DAT_0015c560 + 0x15c424));
  Vector<String>::elementAt((int)&stack0x00000360);
  Vector<String>::elementAt((int)&stack0x00000368);
  ConfirmDialog::show(pCVar3,&stack0x00000358,&stack0x00000360,&stack0x00000368);
  String::~String((String *)&stack0x00000368);
  String::~String((String *)&stack0x00000360);
  String::~String((String *)&stack0x00000358);
  FUN_0015c58a();
  return;
}


