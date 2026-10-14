/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a5838 GameStateEventRaidMenu::setEnemyShopName */

/* GameStateEventRaidMenu::setEnemyShopName() */

void __thiscall GameStateEventRaidMenu::setEnemyShopName(GameStateEventRaidMenu *this)

{
  String *this_00;
  int iVar1;
  code *pcVar2;
  int *piVar3;
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
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
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  iVar1 = *(int *)(this + 0xa8);
  this_00 = aSStack_f0;
  piVar3 = *(int **)(this + 0x68);
  if (iVar1 == 1) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_f0,(char *)(DAT_001a5b38 + 0x1a5852));
    (*pcVar2)(piVar3,aSStack_f0);
  }
  else if (iVar1 == 2) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_e8,(char *)(DAT_001a5b3c + 0x1a586e));
    (*pcVar2)(piVar3,aSStack_e8);
    this_00 = aSStack_e8;
  }
  else if (iVar1 == 3) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_e0,(char *)(DAT_001a5b40 + 0x1a588a));
    (*pcVar2)(piVar3,aSStack_e0);
    this_00 = aSStack_e0;
  }
  else if (iVar1 == 4) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_d8,(char *)(DAT_001a5b44 + 0x1a58a6));
    (*pcVar2)(piVar3,aSStack_d8);
    this_00 = aSStack_d8;
  }
  else if (iVar1 == 5) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_d0,(char *)(DAT_001a5b48 + 0x1a58c2));
    (*pcVar2)(piVar3,aSStack_d0);
    this_00 = aSStack_d0;
  }
  else if (iVar1 == 6) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_c8,(char *)(DAT_001a5b4c + 0x1a58de));
    (*pcVar2)(piVar3,aSStack_c8);
    this_00 = aSStack_c8;
  }
  else if (iVar1 == 7) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_c0,(char *)(DAT_001a5b50 + 0x1a58fa));
    (*pcVar2)(piVar3,aSStack_c0);
    this_00 = aSStack_c0;
  }
  else if (iVar1 == 8) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_b8,(char *)(DAT_001a5b54 + 0x1a5916));
    (*pcVar2)(piVar3,aSStack_b8);
    this_00 = aSStack_b8;
  }
  else if (iVar1 == 9) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_b0,(char *)(DAT_001a5b58 + 0x1a5932));
    (*pcVar2)(piVar3,aSStack_b0);
    this_00 = aSStack_b0;
  }
  else if (iVar1 == 10) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_a8,(char *)(DAT_001a5b5c + 0x1a594e));
    (*pcVar2)(piVar3,aSStack_a8);
    this_00 = aSStack_a8;
  }
  else if (iVar1 == 0xb) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_a0,(char *)(DAT_001a5b60 + 0x1a596a));
    (*pcVar2)(piVar3,aSStack_a0);
    this_00 = aSStack_a0;
  }
  else if (iVar1 == 0xc) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_98,(char *)(DAT_001a5b64 + 0x1a5986));
    (*pcVar2)(piVar3,aSStack_98);
    this_00 = aSStack_98;
  }
  else if (iVar1 == 0xd) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_90,(char *)(DAT_001a5b68 + 0x1a59a2));
    (*pcVar2)(piVar3,aSStack_90);
    this_00 = aSStack_90;
  }
  else if (iVar1 == 0xe) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_88,(char *)(DAT_001a5b6c + 0x1a59be));
    (*pcVar2)(piVar3,aSStack_88);
    this_00 = aSStack_88;
  }
  else if (iVar1 == 0xf) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_80,(char *)(DAT_001a5b70 + 0x1a59da));
    (*pcVar2)(piVar3,aSStack_80);
    this_00 = aSStack_80;
  }
  else if (iVar1 == 0x10) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_78,(char *)(DAT_001a5b74 + 0x1a59f6));
    (*pcVar2)(piVar3,aSStack_78);
    this_00 = aSStack_78;
  }
  else if (iVar1 == 0x11) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_70,(char *)(DAT_001a5b78 + 0x1a5a12));
    (*pcVar2)(piVar3,aSStack_70);
    this_00 = aSStack_70;
  }
  else if (iVar1 == 0x12) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_68,(char *)(DAT_001a5b7c + 0x1a5a2e));
    (*pcVar2)(piVar3,aSStack_68);
    this_00 = aSStack_68;
  }
  else if (iVar1 == 0x13) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_60,(char *)(DAT_001a5b80 + 0x1a5a4a));
    (*pcVar2)(piVar3,aSStack_60);
    this_00 = aSStack_60;
  }
  else if (iVar1 == 0x14) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_58,(char *)(DAT_001a5b84 + 0x1a5a66));
    (*pcVar2)(piVar3,aSStack_58);
    this_00 = aSStack_58;
  }
  else if (iVar1 == 0x15) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_50,(char *)(DAT_001a5b88 + 0x1a5a82));
    (*pcVar2)(piVar3,aSStack_50);
    this_00 = aSStack_50;
  }
  else if (iVar1 == 0x16) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_48,(char *)(DAT_001a5b8c + 0x1a5a9e));
    (*pcVar2)(piVar3,aSStack_48);
    this_00 = aSStack_48;
  }
  else if (iVar1 == 0x17) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_40,(char *)(DAT_001a5b90 + 0x1a5aba));
    (*pcVar2)(piVar3,aSStack_40);
    this_00 = aSStack_40;
  }
  else if (iVar1 == 0x18) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_38,(char *)(DAT_001a5b94 + 0x1a5ad6));
    (*pcVar2)(piVar3,aSStack_38);
    this_00 = aSStack_38;
  }
  else if (iVar1 == 0x19) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_30,(char *)(DAT_001a5b98 + 0x1a5af2));
    (*pcVar2)(piVar3,aSStack_30);
    this_00 = aSStack_30;
  }
  else if (iVar1 == 0x1a) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_28,(char *)(DAT_001a5b9c + 0x1a5b0e));
    (*pcVar2)(piVar3,aSStack_28);
    this_00 = aSStack_28;
  }
  else if (iVar1 == 0x1b) {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_20,(char *)(DAT_001a5ba0 + 0x1a5b2a));
    (*pcVar2)(piVar3,aSStack_20);
    this_00 = aSStack_20;
  }
  else {
    pcVar2 = *(code **)(*piVar3 + 0x44);
    String::String(aSStack_18,(char *)(DAT_001a5ca4 + 0x1a5bae));
    (*pcVar2)(piVar3,aSStack_18);
    this_00 = aSStack_18;
  }
  String::~String(this_00);
  return;
}


