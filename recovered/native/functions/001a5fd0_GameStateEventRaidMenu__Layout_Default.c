/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a5fd0 GameStateEventRaidMenu::Layout_Default */

/* GameStateEventRaidMenu::Layout_Default() */

void __thiscall GameStateEventRaidMenu::Layout_Default(GameStateEventRaidMenu *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  GameStateEventRaid aGStack_60 [8];
  String aSStack_58 [8];
  StringBuffer aSStack_50 [28];
  StringBuffer aSStack_34 [32];
  
  CapcomApp::getInstance();
  (**(code **)(**(int **)(this + 0x54) + 0x20))(*(int **)(this + 0x54),1);
  iVar1 = ZombieCafe::getEventRaid_attackPoint(*(ZombieCafe **)(this + 0xc));
  piVar2 = *(int **)(this + 0x5c);
  if (iVar1 == 3) {
    (**(code **)(*piVar2 + 0x20))(piVar2,1);
    (**(code **)(**(int **)(this + 0x60) + 0x20))(*(int **)(this + 0x60),0);
    (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
  }
  else {
    (**(code **)(*piVar2 + 0x20))(piVar2,0);
    (**(code **)(**(int **)(this + 0x60) + 0x20))(*(int **)(this + 0x60),1);
    (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),1);
    drawReOpenTimer(this);
  }
  drawEventRaidSoul(this);
  iVar1 = ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  GameStateEventRaid::getEventRaidBossMaxEnergy(iVar1);
  iVar1 = ZombieCafe::getEventRaid_status(*(ZombieCafe **)(this + 0xc));
  if ((iVar1 != 2) && (iVar1 != 0)) {
    ZombieCafe::getEventRaid_bossEnergy(*(ZombieCafe **)(this + 0xc));
  }
  setEnemyShopName(this);
  piVar2 = *(int **)(this + 0x68);
  iVar6 = DAT_001a6418 + 0x1a6078;
  pcVar5 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x48));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xb0));
  uVar3 = __fixsfsi();
  iVar1 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar6 + iVar1 * 4 + 0x60));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xb4));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar2,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),1);
  StringBuffer::StringBuffer(aSStack_50);
  String::String(aSStack_c0,(char *)(DAT_001a641c + 0x1a60d6));
  StringBuffer::append(aSStack_50,aSStack_c0);
  String::~String(aSStack_c0);
  ZombieCafe::getEventRaid_cafeLevel(*(ZombieCafe **)(this + 0xc));
  String::valueOf((int)aSStack_b8);
  StringBuffer::append(aSStack_50,aSStack_b8);
  String::~String(aSStack_b8);
  String::String(aSStack_b0,(char *)(DAT_001a6420 + 0x1a610a));
  StringBuffer::append(aSStack_50,aSStack_b0);
  String::~String(aSStack_b0);
  ZombieCafe::getEventRaid_cafeLevelMax(*(ZombieCafe **)(this + 0xc));
  String::valueOf((int)aSStack_a8);
  StringBuffer::append(aSStack_50,aSStack_a8);
  String::~String(aSStack_a8);
  String::String(aSStack_a0,(char *)(DAT_001a6424 + 0x1a613e));
  StringBuffer::append(aSStack_50,aSStack_a0);
  String::~String(aSStack_a0);
  piVar2 = *(int **)(this + 0x6c);
  pcVar5 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar5)(piVar2,aSStack_98);
  String::~String(aSStack_98);
  piVar2 = *(int **)(this + 0x6c);
  pcVar5 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar3 = *(undefined4 *)(DAT_001a6428 + iVar1 * 4 + 0x1a61f4);
  uVar4 = *(undefined4 *)(this + 0xb0);
  iVar1 = SmDev();
  uVar3 = __floatsisf(uVar3);
  __mulsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  uVar4 = __floatsisf(*(undefined4 *)(DAT_001a642c + iVar1 * 4 + 0x1a61b6));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xb4));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar2,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),1);
  piVar2 = *(int **)(this + 0x70);
  pcVar5 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_90,(char *)(DAT_001a6430 + 0x1a61da));
  (*pcVar5)(piVar2,aSStack_90);
  String::~String(aSStack_90);
  piVar2 = *(int **)(this + 0x70);
  pcVar5 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar3 = *(undefined4 *)(DAT_001a6434 + iVar1 * 4 + 0x1a6226);
  uVar4 = *(undefined4 *)(this + 0xb0);
  iVar1 = SmDev();
  uVar3 = __floatsisf(uVar3);
  __mulsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  uVar4 = __floatsisf(*(undefined4 *)(DAT_001a6438 + iVar1 * 4 + 0x1a6268));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xb4));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar2,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),1);
  StringBuffer::StringBuffer(aSStack_34);
  String::valueOf((int)aSStack_88);
  StringBuffer::append(aSStack_34,aSStack_88);
  String::~String(aSStack_88);
  String::String(aSStack_80,(char *)(DAT_001a643c + 0x1a6274));
  StringBuffer::append(aSStack_34,aSStack_80);
  String::~String(aSStack_80);
  String::valueOf((int)aSStack_78);
  StringBuffer::append(aSStack_34,aSStack_78);
  String::~String(aSStack_78);
  piVar2 = *(int **)(this + 0x74);
  pcVar5 = *(code **)(*piVar2 + 0x44);
  StringBuffer::toString();
  (*pcVar5)(piVar2,aSStack_70);
  String::~String(aSStack_70);
  piVar2 = *(int **)(this + 0x74);
  pcVar5 = *(code **)(*piVar2 + 0x14);
  iVar1 = SmDev();
  uVar3 = *(undefined4 *)(DAT_001a6440 + iVar1 * 4 + 0x1a6320);
  uVar4 = *(undefined4 *)(this + 0xb0);
  iVar1 = SmDev();
  uVar3 = __floatsisf(uVar3);
  __mulsf3(uVar3,uVar4);
  uVar3 = __fixsfsi();
  uVar4 = __floatsisf(*(undefined4 *)(DAT_001a6444 + iVar1 * 4 + 0x1a6362));
  __mulsf3(uVar4,*(undefined4 *)(this + 0xb4));
  uVar4 = __fixsfsi();
  (*pcVar5)(piVar2,uVar3,uVar4);
  (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),1);
  piVar2 = *(int **)(this + 0x78);
  pcVar5 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_68,(char *)(DAT_001a6448 + 0x1a6326));
  (*pcVar5)(piVar2,aSStack_68);
  String::~String(aSStack_68);
  piVar2 = *(int **)(this + 0x78);
  pcVar5 = *(code **)(*piVar2 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001a644c + iVar1 * 4 + 0x1a635a));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xb4));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar2,iVar6 / 2,uVar3);
  (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),1);
  GameStateEventRaid::getEventRaidRewardText(aGStack_60);
  piVar2 = *(int **)(this + 0x7c);
  pcVar5 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_58,(String *)aGStack_60);
  (*pcVar5)(piVar2,aSStack_58);
  String::~String(aSStack_58);
  piVar2 = *(int **)(this + 0x7c);
  pcVar5 = *(code **)(*piVar2 + 0x14);
  iVar6 = *(int *)(*(int *)(this + 0x1c) + 0xc);
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(DAT_001a6450 + iVar1 * 4 + 0x1a63d4));
  __mulsf3(uVar3,*(undefined4 *)(this + 0xb4));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar2,iVar6 / 2,uVar3);
  (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),1);
  String::~String((String *)aGStack_60);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_50);
  return;
}


