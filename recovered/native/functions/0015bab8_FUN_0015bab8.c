/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015bab8 FUN_0015bab8 */

void FUN_0015bab8(void)

{
  ZCImageButton *this;
  int iVar1;
  ConfirmDialog *pCVar2;
  int unaff_r4;
  NoticeDialog *pNVar3;
  GameStateGatya *unaff_r5;
  int unaff_r6;
  int iVar4;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar5;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar6;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  
  iVar4 = *(int *)(unaff_r6 + DAT_0015bdf8);
  uStack00000020 = *(undefined4 *)(unaff_r6 + DAT_0015be00);
  uStack00000024 = *(undefined4 *)(unaff_r6 + DAT_0015be04);
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0015bdfc) == '\0') {
    pCVar2 = *(ConfirmDialog **)(unaff_r5 + DAT_0015be08);
    String::String((String *)&stack0x00000170,(char *)(DAT_0015be0c + 0x15bade));
    Vector<String>::elementAt((int)&stack0x00000178);
    Vector<String>::elementAt((int)&stack0x00000180);
    ConfirmDialog::show(pCVar2,&stack0x00000170,&stack0x00000178);
    String::~String((String *)&stack0x00000180);
    String::~String((String *)&stack0x00000178);
    FUN_0015c478(&stack0x00000170);
  }
  pCVar2 = *(ConfirmDialog **)(unaff_r5 + DAT_0015be08);
  Vector<String>::elementAt((int)&stack0x00000188);
  String::valueOf((int)&stack0x00000190);
  String::operator+((String *)&stack0x00000198,&stack0x00000188,&stack0x00000190);
  Vector<String>::elementAt((int)&stack0x000001a0);
  String::operator+((String *)&stack0x000001a8,&stack0x00000198,&stack0x000001a0);
  Vector<String>::elementAt((int)&stack0x000001b0);
  Vector<String>::elementAt((int)&stack0x000001b8);
  ConfirmDialog::show(pCVar2,&stack0x000001a8,&stack0x000001b0,&stack0x000001b8);
  String::~String((String *)&stack0x000001b8);
  String::~String((String *)&stack0x000001b0);
  String::~String((String *)&stack0x000001a8);
  String::~String((String *)&stack0x000001a0);
  String::~String((String *)&stack0x00000198);
  String::~String((String *)&stack0x00000190);
  this = (ZCImageButton *)FUN_0015c478(&stack0x00000188);
  fVar5 = extraout_s0;
  fVar6 = extraout_s1;
  if (this[0x14] == (ZCImageButton)0x0) {
    this = (ZCImageButton *)FUN_0015cc52();
    fVar5 = extraout_s0_00;
    fVar6 = extraout_s1_00;
  }
  if (this[0x86] == (ZCImageButton)0x0) {
    this = (ZCImageButton *)FUN_0015cc52();
    fVar5 = extraout_s0_01;
    fVar6 = extraout_s1_01;
  }
  iVar1 = ZCImageButton::contains(this,*(long *)(*(int *)(unaff_r5 + 0xc) + unaff_r4),fVar5,fVar6);
  fVar5 = extraout_s0_02;
  if (iVar1 == 0) {
    fVar5 = (float)FUN_0015cc52();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar5);
  pNVar3 = (NoticeDialog *)(unaff_r5 + 0xfc);
  printf((char *)(DAT_0015be20 + 0x15bc12));
  iVar1 = GameStateGatya::checkStaffNum(unaff_r5,*(int *)(unaff_r5 + 0x118));
  if (iVar1 == 0) {
    pNVar3 = *(NoticeDialog **)(unaff_r5 + iVar4);
    String::String((String *)&stack0x000001c0,(char *)(DAT_0015be24 + 0x15bc2e));
    Vector<String>::elementAt((int)&stack0x000001c8);
    NoticeDialog::show(pNVar3,&stack0x000001c0,&stack0x000001c8);
    String::~String((String *)&stack0x000001c8);
    FUN_0015c478(&stack0x000001c0);
  }
  iVar1 = *(int *)(pNVar3 + 0x14);
  if (iVar1 == 0) {
    if (*(int *)(pNVar3 + 0x18) <= *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0015be28)) {
      FUN_0015cc62();
    }
    pNVar3 = *(NoticeDialog **)(unaff_r5 + iVar4);
    Vector<String>::elementAt((int)&stack0x000001d0);
    Vector<String>::elementAt((int)&stack0x000001d8);
    iVar1 = 0;
    NoticeDialog::show(pNVar3,&stack0x000001d0,&stack0x000001d8);
    String::~String((String *)&stack0x000001d8);
    FUN_0015c478(&stack0x000001d0);
  }
  if (iVar1 != 1) {
    FUN_0015cc62();
  }
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(unaff_r5 + 0xc));
  if (*(int *)(pNVar3 + 0x18) <= iVar1) {
    FUN_0015cc62();
  }
  pNVar3 = *(NoticeDialog **)(unaff_r5 + iVar4);
  String::String((String *)&stack0x000001e0,(char *)(DAT_0015be30 + 0x15bcd8));
  Vector<String>::elementAt((int)&stack0x000001e8);
  NoticeDialog::show(pNVar3,&stack0x000001e0,&stack0x000001e8);
  String::~String((String *)&stack0x000001e8);
  FUN_0015c478(&stack0x000001e0);
  return;
}


