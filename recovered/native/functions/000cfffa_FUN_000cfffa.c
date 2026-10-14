/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cfffa FUN_000cfffa */

void FUN_000cfffa(void)

{
  int iVar1;
  GameStateChooseChef *this;
  LoadingGameState *this_00;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  ScreenElement *this_01;
  uint uVar7;
  uint uVar8;
  int in_r3;
  CapcomGame *this_02;
  undefined4 *puVar9;
  ProgressBar *pPVar10;
  int unaff_r5;
  undefined4 uVar11;
  code *pcVar12;
  int unaff_r7;
  float extraout_s0;
  float fVar13;
  undefined4 in_stack_00000010;
  
  iVar1 = ScreenElement::contains
                    (*(ScreenElement **)(unaff_r5 + 0x124),*(long *)(in_r3 + DAT_000d0258));
  fVar13 = extraout_s0;
  if (iVar1 == 0) {
    fVar13 = (float)FUN_000d085c();
  }
  ZombieCafe::playEffect(*(int *)(unaff_r5 + 0x78),fVar13);
  this_02 = *(CapcomGame **)(unaff_r5 + 0x78);
  this = (GameStateChooseChef *)operator_new(0xec);
  GameStateChooseChef::GameStateChooseChef(this,true);
  this_00 = (LoadingGameState *)operator_new(0x2c);
  LoadingGameState::LoadingGameState(this_00,(GameState *)this,(CapcomFont *)0x0,0);
  *(int *)this_00 = *(int *)(unaff_r7 + DAT_000d027c) + 8;
  this_00[0x14] = (LoadingGameState)0x0;
  *(undefined4 *)(this_00 + 0x28) = 0;
  CapcomGame::setNextState(this_02,(GameState *)this_00);
  piVar2 = *(int **)(unaff_r5 + 0x108);
  uVar7 = piVar2[2] + *(int *)(unaff_r5 + 0x184);
  uVar8 = *(int *)(*(int *)(unaff_r5 + 0x104) + 0x10) - piVar2[4];
  uVar8 = uVar8 & (int)(uVar8 - 1 | uVar8) >> 0x1f;
  if ((int)uVar8 <= (int)uVar7) {
    uVar8 = (int)(uVar7 - 1 | uVar7) >> 0x1f & uVar7;
  }
  (**(code **)(*piVar2 + 0x14))(piVar2,0,uVar8);
  uVar3 = __floatsisf(*(undefined4 *)(unaff_r5 + 0x184));
  puVar9 = *(undefined4 **)(unaff_r7 + DAT_000d05e0);
  uVar4 = __floatsisf(in_stack_00000010);
  uVar4 = __mulsf3(uVar4,*puVar9);
  iVar1 = __aeabi_fcmplt(uVar4,0x3f800000);
  if (iVar1 == 0) {
    uVar4 = 0x3f800000;
  }
  uVar4 = __subsf3(0x3f800000,uVar4);
  __mulsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  *(undefined4 *)(unaff_r5 + 0x184) = uVar3;
  iVar1 = __floatsisf();
  iVar5 = __aeabi_fcmpge(iVar1,0);
  if (iVar5 == 0) {
    iVar1 = iVar1 + -0x80000000;
  }
  iVar1 = __aeabi_fcmplt(iVar1,**(undefined4 **)(unaff_r7 + DAT_000d05e4));
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_r5 + 0x184) = 0;
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0x78) + DAT_000d05d0) = 1;
  piVar2 = (int *)**(int **)(unaff_r5 + 0x138);
  iVar1 = *(int *)(*(int *)(unaff_r5 + 0x78) + DAT_000d05e8) * piVar2[3];
  uVar7 = iVar1 >> 0x1f;
  uVar7 = (iVar1 >> 0x12) + uVar7 ^ uVar7;
  (**(code **)(*piVar2 + 0x14))(piVar2,uVar7,*(int *)(unaff_r5 + 0x10) / 2);
  (**(code **)(*(int *)**(undefined4 **)(unaff_r5 + 0x13c) + 0x14))
            ((int *)**(undefined4 **)(unaff_r5 + 0x13c),*(int *)(unaff_r5 + 0xc) - uVar7,
             *(int *)(unaff_r5 + 0x10) / 2);
  String::String((String *)&stack0x00000050);
  String::String((String *)&stack0x00000058);
  uVar3 = Character::getAdditionEnergy(*(Character **)(unaff_r5 + 0x88));
  uVar4 = Character::getMaxEnergy();
  iVar5 = *(int *)(unaff_r5 + 0x88);
  uVar11 = *(undefined4 *)(iVar5 + 0x40);
  uVar6 = __floatsisf(*(undefined4 *)(unaff_r5 + 0x118));
  iVar1 = __aeabi_fcmpeq(uVar6,uVar11);
  if (iVar1 == 0) {
    uVar6 = __fixsfsi(uVar11);
    *(undefined4 *)(unaff_r5 + 0x118) = uVar6;
    iVar1 = __fixsfsi(*(undefined4 *)(iVar5 + 0x40));
    ProgressBar::setValue(*(ProgressBar **)(unaff_r5 + 0x110),iVar1,false);
  }
  iVar1 = __fixsfsi(uVar3);
  uVar3 = __floatsisf();
  __subsf3(uVar4,uVar3);
  iVar5 = __fixsfsi();
  if (*(int *)(unaff_r5 + 0x11c) < iVar5) {
    *(undefined4 *)(*(int *)(unaff_r5 + 0x114) + 0x8c) = DAT_000d05ec;
    String::valueOf((int)&stack0x00000060);
    String::operator=((String *)&stack0x00000050,&stack0x00000060);
    String::~String((String *)&stack0x00000060);
    ProgressBar::setMaximumValue
              (*(ProgressBar **)(unaff_r5 + 0x110),iVar1 + *(int *)(unaff_r5 + 0x11c));
    *(int *)(unaff_r5 + 0x11c) = *(int *)(unaff_r5 + 0x11c) + 10;
  }
  else if (*(int *)(unaff_r5 + 0x11c) == iVar5) {
    *(undefined4 *)(*(int *)(unaff_r5 + 0x114) + 0x8c) = 0xffffffff;
    String::valueOf((int)&stack0x00000068);
    String::operator=((String *)&stack0x00000050,&stack0x00000068);
    String::~String((String *)&stack0x00000068);
    pPVar10 = *(ProgressBar **)(unaff_r5 + 0x110);
    Character::getMaxEnergy();
    iVar1 = __fixsfsi();
    ProgressBar::setMaximumValue(pPVar10,iVar1);
    *(int *)(unaff_r5 + 0x11c) = *(int *)(unaff_r5 + 0x11c) + 10;
  }
  else {
    Character::getMaxEnergy();
    __fixsfsi();
    String::valueOf((int)&stack0x00000070);
    String::operator=((String *)&stack0x00000050,&stack0x00000070);
    String::~String((String *)&stack0x00000070);
    uVar3 = Character::getAdditionEnergy(*(Character **)(unaff_r5 + 0x88));
    iVar1 = __aeabi_fcmpeq(uVar3,0);
    if (iVar1 == 0) {
      uVar3 = Character::getMaxEnergy();
      uVar4 = Character::getAdditionEnergy(*(Character **)(unaff_r5 + 0x88));
      __subsf3(uVar3,uVar4);
      __fixsfsi();
      String::valueOf((int)&stack0x00000078);
      String::String((String *)&stack0x00000080,(char *)(DAT_000d08ac + 0xd0656));
      String::operator+((String *)&stack0x00000088,&stack0x00000078,&stack0x00000080);
      Character::getAdditionEnergy(*(Character **)(unaff_r5 + 0x88));
      __fixsfsi();
      String::valueOf((int)&stack0x00000090);
      String::operator+((String *)&stack0x00000098,&stack0x00000088,&stack0x00000090);
      String::operator=((String *)&stack0x00000050,&stack0x00000098);
      String::~String((String *)&stack0x00000098);
      String::~String((String *)&stack0x00000090);
      String::~String((String *)&stack0x00000088);
      String::~String((String *)&stack0x00000080);
      String::~String((String *)&stack0x00000078);
    }
    pPVar10 = *(ProgressBar **)(unaff_r5 + 0x110);
    Character::getMaxEnergy();
    iVar1 = __fixsfsi();
    ProgressBar::setMaximumValue(pPVar10,iVar1);
    pPVar10 = *(ProgressBar **)(unaff_r5 + 0x110);
    iVar1 = __fixsfsi(*(undefined4 *)(*(int *)(unaff_r5 + 0x88) + 0x40));
    ProgressBar::setValue(pPVar10,iVar1,false);
  }
  piVar2 = *(int **)(unaff_r5 + 0x114);
  pcVar12 = *(code **)(*piVar2 + 0x44);
  __fixsfsi(*(undefined4 *)(*(int *)(unaff_r5 + 0x88) + 0x40));
  String::valueOf((int)&stack0x000000a0);
  String::String((String *)&stack0x000000a8,(char *)(DAT_000d08b0 + 0xd06fe));
  String::operator+((String *)&stack0x000000b0,&stack0x000000a0,&stack0x000000a8);
  String::String((String *)&stack0x000000b8,(String *)&stack0x00000050);
  String::operator+((String *)&stack0x000000c0,&stack0x000000b0,&stack0x000000b8);
  (*pcVar12)(piVar2,&stack0x000000c0);
  String::~String((String *)&stack0x000000c0);
  String::~String((String *)&stack0x000000b8);
  String::~String((String *)&stack0x000000b0);
  String::~String((String *)&stack0x000000a8);
  String::~String((String *)&stack0x000000a0);
  this_01 = *(ScreenElement **)(unaff_r5 + 0x110);
  piVar2 = *(int **)(unaff_r5 + 0x114);
  iVar1 = ScreenElement::localToParentCoords
                    (this_01,*(int *)(this_01 + 0xc),*(int *)(this_01 + 0x10));
  (**(code **)(*piVar2 + 0x14))(piVar2,iVar1 >> 0x10,(int)(short)iVar1);
  (**(code **)(**(int **)(unaff_r5 + 0x110) + 8))(*(int **)(unaff_r5 + 0x110),in_stack_00000010);
  (**(code **)(**(int **)(unaff_r5 + 0x124) + 8))(*(int **)(unaff_r5 + 0x124),in_stack_00000010);
  String::~String((String *)&stack0x00000058);
  String::~String((String *)&stack0x00000050);
  FUN_000d08a8();
  return;
}


