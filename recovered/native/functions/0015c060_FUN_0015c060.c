/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015c060 FUN_0015c060 */

void FUN_0015c060(float param_1,float param_2,ZCImageButton *param_3)

{
  int iVar1;
  int unaff_r4;
  NoticeDialog *pNVar2;
  GameStateGatya *unaff_r5;
  int unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar3;
  float extraout_s1;
  float extraout_s1_00;
  
  if (param_3[0x14] == (ZCImageButton)0x0) {
    param_3 = (ZCImageButton *)FUN_0015cd1a();
    param_1 = extraout_s0;
    param_2 = extraout_s1;
  }
  if (param_3[0x86] == (ZCImageButton)0x0) {
    param_3 = (ZCImageButton *)FUN_0015cd1a();
    param_1 = extraout_s0_00;
    param_2 = extraout_s1_00;
  }
  iVar1 = ZCImageButton::contains
                    (param_3,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r4),param_1,param_2);
  fVar3 = extraout_s0_01;
  if (iVar1 == 0) {
    fVar3 = (float)FUN_0015cd1a();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar3);
  printf((char *)(DAT_0015c214 + 0x15c0a2));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5,*(int *)(unaff_r5 + 0x138) * 0xb);
  if (iVar1 == 0) {
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    String::String((String *)&stack0x000002b0,(char *)(DAT_0015c218 + 0x15c0c4));
    Vector<String>::elementAt((int)&stack0x000002b8);
    NoticeDialog::show(pNVar2,&stack0x000002b0,&stack0x000002b8);
    String::~String((String *)&stack0x000002b8);
    FUN_0015c478(&stack0x000002b0);
    return;
  }
  if (*(int *)(unaff_r5 + 0x130) == 0) {
    if (*(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015c1e4) + *(int *)(unaff_r5 + 0x134) * -10 < 0 ==
        SBORROW4(*(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015c1e4),*(int *)(unaff_r5 + 0x134) * 10))
    {
      FUN_0015cd2a();
    }
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    Vector<String>::elementAt((int)&stack0x000002c0);
    Vector<String>::elementAt((int)&stack0x000002c8);
    NoticeDialog::show(pNVar2,&stack0x000002c0,&stack0x000002c8);
    String::~String((String *)&stack0x000002c8);
    FUN_0015c478(&stack0x000002c0);
    return;
  }
  if (*(int *)(unaff_r5 + 0x130) != 1) {
    FUN_0015cd2a();
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (iVar1 + *(int *)(unaff_r5 + 0x134) * -10 < 0 ==
      SBORROW4(iVar1,*(int *)(unaff_r5 + 0x134) * 10)) {
    FUN_0015cd2a();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
  String::String((String *)&stack0x000002d0,(char *)(DAT_0015c21c + 0x15c172));
  Vector<String>::elementAt((int)&stack0x000002d8);
  NoticeDialog::show(pNVar2,&stack0x000002d0,&stack0x000002d8);
  String::~String((String *)&stack0x000002d8);
  FUN_0015c478(&stack0x000002d0);
  return;
}


