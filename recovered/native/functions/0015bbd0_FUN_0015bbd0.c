/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015bbd0 FUN_0015bbd0 */

void FUN_0015bbd0(float param_1,float param_2,ZCImageButton *param_3)

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
    param_3 = (ZCImageButton *)FUN_0015cc52();
    param_1 = extraout_s0;
    param_2 = extraout_s1;
  }
  if (param_3[0x86] == (ZCImageButton)0x0) {
    param_3 = (ZCImageButton *)FUN_0015cc52();
    param_1 = extraout_s0_00;
    param_2 = extraout_s1_00;
  }
  iVar1 = ZCImageButton::contains
                    (param_3,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r4),param_1,param_2);
  fVar3 = extraout_s0_01;
  if (iVar1 == 0) {
    fVar3 = (float)FUN_0015cc52();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar3);
  pNVar2 = (NoticeDialog *)(unaff_r5 + 0xfc);
  printf((char *)(DAT_0015be20 + 0x15bc12));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5,*(int *)(unaff_r5 + 0x118));
  if (iVar1 == 0) {
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    String::String((String *)&stack0x000001c0,(char *)(DAT_0015be24 + 0x15bc2e));
    Vector<String>::elementAt((int)&stack0x000001c8);
    NoticeDialog::show(pNVar2,&stack0x000001c0,&stack0x000001c8);
    String::~String((String *)&stack0x000001c8);
    FUN_0015c478(&stack0x000001c0);
  }
  iVar1 = *(int *)(pNVar2 + 0x14);
  if (iVar1 == 0) {
    if (*(int *)(pNVar2 + 0x18) <= *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015be28)) {
      FUN_0015cc62();
    }
    pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
    Vector<String>::elementAt((int)&stack0x000001d0);
    Vector<String>::elementAt((int)&stack0x000001d8);
    iVar1 = 0;
    NoticeDialog::show(pNVar2,&stack0x000001d0,&stack0x000001d8);
    String::~String((String *)&stack0x000001d8);
    FUN_0015c478(&stack0x000001d0);
  }
  if (iVar1 != 1) {
    FUN_0015cc62();
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (*(int *)(pNVar2 + 0x18) <= iVar1) {
    FUN_0015cc62();
  }
  pNVar2 = *(NoticeDialog **)(unaff_r5 + unaff_r7);
  String::String((String *)&stack0x000001e0,(char *)(DAT_0015be30 + 0x15bcd8));
  Vector<String>::elementAt((int)&stack0x000001e8);
  NoticeDialog::show(pNVar2,&stack0x000001e0,&stack0x000001e8);
  String::~String((String *)&stack0x000001e8);
  FUN_0015c478(&stack0x000001e0);
  return;
}


