/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00113268 GameStateAmpouleRaidMenu::Layout_Default */

/* GameStateAmpouleRaidMenu::Layout_Default() */

void __thiscall GameStateAmpouleRaidMenu::Layout_Default(GameStateAmpouleRaidMenu *this)

{
  int iVar1;
  int *piVar2;
  String *this_00;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
  String aSStack_e4 [8];
  String aSStack_dc [8];
  String aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  GameStateAmpouleRaid aGStack_7c [8];
  String aSStack_74 [8];
  StringBuffer aSStack_6c [28];
  StringBuffer aSStack_50 [28];
  StringBuffer aSStack_34 [32];
  
  (**(code **)(**(int **)(this + 0x38) + 0x20))(*(int **)(this + 0x38),1);
  iVar1 = ZombieCafe::getAmpouleRaid_reopenTimer(*(ZombieCafe **)(this + 0xc));
  piVar2 = *(int **)(this + 0x40);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0x20))(piVar2,1);
    (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),0);
    (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
  }
  else {
    (**(code **)(*piVar2 + 0x20))(piVar2,0);
    (**(code **)(**(int **)(this + 0x44) + 0x20))(*(int **)(this + 0x44),1);
    (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),1);
    drawReOpenTimer(this);
  }
  iVar1 = ZombieCafe::getAmpouleRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  GameStateAmpouleRaid::getAmpouleRaidBossMaxEnergy(iVar1);
  iVar1 = ZombieCafe::getAmpouleRaid_status(*(ZombieCafe **)(this + 0xc));
  if ((iVar1 != 2) && (iVar1 != 0)) {
    ZombieCafe::getAmpouleRaid_bossEnergy(*(ZombieCafe **)(this + 0xc));
  }
  StringBuffer::StringBuffer(aSStack_6c);
  String::String(aSStack_fc,(char *)(DAT_00113328 + 0x1132f6));
  StringBuffer::append(aSStack_6c,aSStack_fc);
  String::~String(aSStack_fc);
  iVar1 = ZombieCafe::isAmpouleRaid_FirstHalf();
  if (iVar1 == 0) {
    String::String(aSStack_ec,(char *)(DAT_00113718 + 0x113338));
    StringBuffer::append(aSStack_6c,aSStack_ec);
    this_00 = aSStack_ec;
  }
  else {
    String::String(aSStack_f4,(char *)(DAT_0011332c + 0x113318));
    StringBuffer::append(aSStack_6c,aSStack_f4);
    this_00 = aSStack_f4;
  }
  String::~String(this_00);
  piVar2 = *(int **)(this + 0x5c);
  pcVar4 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar2,aSStack_e4);
  String::~String(aSStack_e4);
  piVar2 = *(int **)(this + 0x5c);
  pcVar4 = *(code **)(*piVar2 + 0x14);
  iVar5 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  uVar6 = *(undefined4 *)(this + 0x90);
  iVar1 = SmDev();
  uVar3 = __floatsisf(iVar5 / 2);
  uVar6 = __mulsf3(uVar6,0x42000000);
  __subsf3(uVar3,uVar6);
  uVar3 = __fixsfsi();
  uVar6 = __floatsisf(*(undefined4 *)(DAT_0011371c + iVar1 * 4 + 0x1133e8));
  __mulsf3(uVar6,*(undefined4 *)(this + 0x94));
  uVar6 = __fixsfsi();
  (*pcVar4)(piVar2,uVar3,uVar6);
  (**(code **)(**(int **)(this + 0x5c) + 0x20))(*(int **)(this + 0x5c),1);
  StringBuffer::StringBuffer(aSStack_50);
  String::String(aSStack_dc,(char *)(DAT_00113720 + 0x1133de));
  StringBuffer::append(aSStack_50,aSStack_dc);
  String::~String(aSStack_dc);
  ZombieCafe::getAmpouleRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  String::valueOf((int)aSStack_d4);
  StringBuffer::append(aSStack_50,aSStack_d4);
  String::~String(aSStack_d4);
  String::String(aSStack_cc,(char *)(DAT_00113724 + 0x113412));
  StringBuffer::append(aSStack_50,aSStack_cc);
  String::~String(aSStack_cc);
  ZombieCafe::getAmpouleRaid_cafeLevelMax(*(ZombieCafe **)(this + 0xc));
  String::valueOf((int)aSStack_c4);
  StringBuffer::append(aSStack_50,aSStack_c4);
  String::~String(aSStack_c4);
  String::String(aSStack_bc,(char *)(DAT_00113728 + 0x113446));
  StringBuffer::append(aSStack_50,aSStack_bc);
  String::~String(aSStack_bc);
  piVar2 = *(int **)(this + 0x60);
  pcVar4 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar2,aSStack_b4);
  String::~String(aSStack_b4);
  piVar2 = *(int **)(this + 0x60);
  pcVar4 = *(code **)(*piVar2 + 0x14);
  iVar5 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  uVar6 = *(undefined4 *)(this + 0x90);
  iVar1 = SmDev();
  uVar3 = __floatsisf(iVar5 / 2);
  uVar6 = __mulsf3(uVar6,0x42000000);
  __addsf3(uVar3,uVar6);
  uVar3 = __fixsfsi();
  uVar6 = __floatsisf(*(undefined4 *)(DAT_0011372c + iVar1 * 4 + 0x11350e));
  __mulsf3(uVar6,*(undefined4 *)(this + 0x94));
  uVar6 = __fixsfsi();
  (*pcVar4)(piVar2,uVar3,uVar6);
  (**(code **)(**(int **)(this + 0x60) + 0x20))(*(int **)(this + 0x60),1);
  piVar2 = *(int **)(this + 100);
  pcVar4 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_ac,(char *)(DAT_00113730 + 0x1134ea));
  (*pcVar4)(piVar2,aSStack_ac);
  String::~String(aSStack_ac);
  piVar2 = *(int **)(this + 100);
  pcVar4 = *(code **)(*piVar2 + 0x14);
  iVar5 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  uVar6 = *(undefined4 *)(this + 0x90);
  iVar1 = SmDev();
  uVar3 = __floatsisf(iVar5 / 2);
  uVar6 = __mulsf3(uVar6,0x42000000);
  __subsf3(uVar3,uVar6);
  uVar3 = __fixsfsi();
  uVar6 = __floatsisf(*(undefined4 *)(DAT_00113734 + iVar1 * 4 + 0x1135b0));
  __mulsf3(uVar6,*(undefined4 *)(this + 0x94));
  uVar6 = __fixsfsi();
  (*pcVar4)(piVar2,uVar3,uVar6);
  (**(code **)(**(int **)(this + 100) + 0x20))(*(int **)(this + 100),1);
  StringBuffer::StringBuffer(aSStack_34);
  String::valueOf((int)aSStack_a4);
  StringBuffer::append(aSStack_34,aSStack_a4);
  String::~String(aSStack_a4);
  String::String(aSStack_9c,(char *)(DAT_00113738 + 0x11358c));
  StringBuffer::append(aSStack_34,aSStack_9c);
  String::~String(aSStack_9c);
  String::valueOf((int)aSStack_94);
  StringBuffer::append(aSStack_34,aSStack_94);
  String::~String(aSStack_94);
  piVar2 = *(int **)(this + 0x68);
  pcVar4 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar4)(piVar2,aSStack_8c);
  String::~String(aSStack_8c);
  piVar2 = *(int **)(this + 0x68);
  pcVar4 = *(code **)(*piVar2 + 0x14);
  iVar5 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  uVar6 = *(undefined4 *)(this + 0x90);
  iVar1 = SmDev();
  uVar3 = __floatsisf(iVar5 / 2);
  uVar6 = __mulsf3(uVar6,0x42000000);
  __addsf3(uVar3,uVar6);
  uVar3 = __fixsfsi();
  uVar6 = __floatsisf(*(undefined4 *)(DAT_0011373c + iVar1 * 4 + 0x11361a));
  __mulsf3(uVar6,*(undefined4 *)(this + 0x94));
  uVar6 = __fixsfsi();
  (*pcVar4)(piVar2,uVar3,uVar6);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),1);
  piVar2 = *(int **)(this + 0x6c);
  pcVar4 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_84,(char *)(DAT_00113740 + 0x113646));
  (*pcVar4)(piVar2,aSStack_84);
  String::~String(aSStack_84);
  piVar2 = *(int **)(this + 0x6c);
  pcVar4 = *(code **)(*piVar2 + 0x14);
  iVar5 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00113744 + iVar1 * 4 + 0x113692));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x94));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar2,iVar5 / 2,uVar3);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),1);
  GameStateAmpouleRaid::getAmpouleRaidRewardText(aGStack_7c);
  piVar2 = *(int **)(this + 0x70);
  pcVar4 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_74,(String *)aGStack_7c);
  (*pcVar4)(piVar2,aSStack_74);
  String::~String(aSStack_74);
  piVar2 = *(int **)(this + 0x70);
  pcVar4 = *(code **)(*piVar2 + 0x14);
  iVar5 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_00113748 + iVar1 * 4 + 0x11370c));
  __mulsf3(uVar3,*(undefined4 *)(this + 0x94));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar2,iVar5 / 2,uVar3);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),1);
  String::~String((String *)aGStack_7c);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_50);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_6c);
  return;
}


