/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015be38 FUN_0015be38 */

void FUN_0015be38(float param_1,float param_2,ZCImageButton *param_3)

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
    param_3 = (ZCImageButton *)FUN_0015ccb6();
    param_1 = extraout_s0;
    param_2 = extraout_s1;
  }
  if (param_3[0x86] == (ZCImageButton)0x0) {
    param_3 = (ZCImageButton *)FUN_0015ccb6();
    param_1 = extraout_s0_00;
    param_2 = extraout_s1_00;
  }
  iVar1 = ZCImageButton::contains
                    (param_3,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r4),param_1,param_2);
  fVar3 = extraout_s0_01;
  if (iVar1 == 0) {
    fVar3 = (float)FUN_0015ccb6();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar3);
  printf((char *)(DAT_0015c1d8 + 0x15be76));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5);
  if (iVar1 == 0) {
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    String::String((String *)&stack0x00000238,(char *)(DAT_0015c1dc + 0x15be8c));
    Vector<String>::elementAt((int)&stack0x00000240);
    NoticeDialog::show(pNVar2,&stack0x00000238,&stack0x00000240);
    String::~String((String *)&stack0x00000240);
    FUN_0015c478(&stack0x00000238);
    return;
  }
  if (*(int *)(unaff_r5 + 0x130) == 0) {
    if (*(int *)(unaff_r5 + 0x134) <= *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015c1e4)) {
      FUN_0015ccc6();
    }
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    Vector<String>::elementAt((int)&stack0x00000248);
    Vector<String>::elementAt((int)&stack0x00000250);
    NoticeDialog::show(pNVar2,&stack0x00000248,&stack0x00000250);
    String::~String((String *)&stack0x00000250);
    FUN_0015c478(&stack0x00000248);
    return;
  }
  if (*(int *)(unaff_r5 + 0x130) != 1) {
    FUN_0015ccc6();
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (*(int *)(unaff_r5 + 0x134) <= iVar1) {
    FUN_0015ccc6();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
  String::String((String *)&stack0x00000258,(char *)(DAT_0015c1ec + 0x15bf36));
  Vector<String>::elementAt((int)&stack0x00000260);
  NoticeDialog::show(pNVar2,&stack0x00000258,&stack0x00000260);
  String::~String((String *)&stack0x00000260);
  FUN_0015c478(&stack0x00000258);
  return;
}


