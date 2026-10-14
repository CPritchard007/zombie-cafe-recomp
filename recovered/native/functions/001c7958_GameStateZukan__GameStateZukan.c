/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c7958 GameStateZukan::GameStateZukan */

/* GameStateZukan::GameStateZukan() */

undefined8 __thiscall GameStateZukan::GameStateZukan(GameStateZukan *this)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(DAT_001c7b30 + 0x1c796a) + 8;
  *(undefined4 *)(this + 0xcc) = 10;
  pvVar1 = operator_new__(0x28);
  *(void **)(this + 0xd4) = pvVar1;
  memset(pvVar1,0,*(int *)(this + 0xcc) << 2);
  *(undefined4 *)(this + 0xd0) = 0xffffffff;
  *(undefined4 *)(this + 0xd8) = 10;
  pvVar1 = operator_new__(10);
  *(void **)(this + 0xe0) = pvVar1;
  memset(pvVar1,0,*(size_t *)(this + 0xd8));
  iVar4 = 0;
  *(undefined4 *)(this + 0xdc) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  this[0x7c] = (GameStateZukan)0x0;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x84] = (GameStateZukan)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  do {
    iVar2 = iVar4 + 0x8c;
    iVar4 = iVar4 + 4;
    *(undefined4 *)(this + iVar2) = 0;
  } while (iVar4 != 0x24);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x88) = 0xff;
  iVar4 = CapcomApp::getInstance();
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar4 + 0x40);
  iVar2 = CapcomApp::getInstance();
  iVar4 = DAT_001c7b34;
  uVar6 = *(undefined4 *)(iVar2 + 0x44);
  uVar7 = *(undefined4 *)(this + 0x14);
  puVar5 = (undefined4 *)(DAT_001c7b34 + 0x1c7a1e);
  *(undefined4 *)(this + 0x18) = uVar6;
  uVar3 = __mulsf3(*puVar5,uVar7);
  *(undefined4 *)(iVar4 + 0x1c7a32) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 0x1c7a36),uVar6);
  *(undefined4 *)(iVar4 + 0x1c7a4a) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 0x1c7a4e),uVar7);
  *(undefined4 *)(iVar4 + 0x1c7a62) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 0x1c7a66),uVar7);
  *(undefined4 *)(iVar4 + 0x1c7a7a) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 0x1c7a7e),uVar6);
  *(undefined4 *)(iVar4 + 0x1c7a92) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 0x1c7a96),uVar7);
  iVar2 = DAT_001c7b38;
  *(undefined4 *)(iVar4 + 0x1c7aaa) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar2 + 0x1c7a78),uVar6);
  *(undefined4 *)(iVar2 + 0x1c7a8c) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar2 + 0x1c7a90),uVar6);
  *(undefined4 *)(iVar2 + 0x1c7aa4) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar2 + 0x1c7aa8),uVar6);
  *(undefined4 *)(iVar2 + 0x1c7abc) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar2 + 0x1c7ac0),uVar6);
  *(undefined4 *)(iVar2 + 0x1c7ad4) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar2 + 0x1c7ad8),uVar7);
  iVar4 = DAT_001c7b3c;
  *(undefined4 *)(iVar2 + 0x1c7aec) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 0x1c7aae),uVar7);
  *(undefined4 *)(iVar4 + 0x1c7ac2) = uVar3;
  uVar3 = __floatsisf(*(undefined4 *)(iVar4 + 0x1c7ac6));
  __mulsf3(uVar3,uVar6);
  uVar3 = __fixsfsi();
  *(undefined4 *)(iVar4 + 0x1c7ada) = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 0x1c7ade),uVar6);
  *(undefined4 *)(iVar4 + 0x1c7af2) = uVar3;
  uVar3 = __floatsisf(*(undefined4 *)(iVar4 + 0x1c7af6));
  __mulsf3(uVar3,uVar7);
  uVar3 = __fixsfsi();
  *(undefined4 *)(&UNK_001c7b0a + iVar4) = uVar3;
  uVar3 = __floatsisf(*(undefined4 *)(&UNK_001c7b0e + iVar4));
  __mulsf3(uVar3,uVar6);
  uVar3 = __fixsfsi();
  *(undefined4 *)(&UNK_001c7b22 + iVar4) = uVar3;
  iVar4 = DAT_001c7b40;
  uVar3 = __mulsf3(*(undefined4 *)(DAT_001c7b40 + 0x1c7af6),uVar6);
  *(undefined4 *)(&UNK_001c7b0a + iVar4) = uVar3;
  return CONCAT44(this,this);
}


