/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fb184 FridgeDialog::setSelectRecipeInfo */

/* FridgeDialog::setSelectRecipeInfo() */

void __thiscall FridgeDialog::setSelectRecipeInfo(FridgeDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Recipe *this_00;
  byte bVar5;
  uint uVar6;
  code *pcVar7;
  FoodStack *this_01;
  int *piVar8;
  String *pSVar9;
  undefined4 uVar10;
  code *local_14c;
  code *local_148;
  String aSStack_138 [8];
  String aSStack_130 [8];
  String aSStack_128 [8];
  String aSStack_120 [8];
  String aSStack_118 [8];
  String aSStack_110 [8];
  String aSStack_108 [8];
  String aSStack_100 [8];
  String aSStack_f8 [8];
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
  StringBuffer aSStack_50 [28];
  StringBuffer aSStack_34 [32];
  
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x44);
  this_01 = *(FoodStack **)(*(int *)(this + 0xe8) * 4 + *(int *)(*(int *)(this + 200) + 8));
  if (this_01 == (FoodStack *)0x0) {
    return;
  }
  FoodStack::getRecipe(this_01);
  piVar8 = *(int **)(this + 0xa8);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  Recipe::getFullName((char)&stack0xffffffec + 0xdc);
  (*pcVar7)(piVar8,aSStack_138);
  String::~String(aSStack_138);
  piVar8 = *(int **)(this + 0xa8);
  (**(code **)(*piVar8 + 0x20))(piVar8,1);
  StringBuffer::StringBuffer(aSStack_50);
  String::String(aSStack_130,(String *)(this_01 + 0xc));
  iVar1 = operator!=(aSStack_130,0);
  if (iVar1 != 0) {
    String::String(aSStack_128,(String *)(this_01 + 0x14));
    iVar1 = operator!=(aSStack_128,0);
    String::~String(aSStack_128);
  }
  String::~String(aSStack_130);
  pSVar9 = (String *)(this_01 + 0x14);
  if (iVar1 == 0) {
    String::String(aSStack_108,pSVar9);
    iVar1 = operator!=(aSStack_108,0);
    String::~String(aSStack_108);
    if (iVar1 == 0) {
      piVar8 = *(int **)(this + 0xa4);
      local_148 = *(code **)(*piVar8 + 0x14);
      iVar1 = SmDev();
      uVar10 = *(undefined4 *)(DAT_000fb5f4 + iVar1 * 4 + 0xfb424);
      iVar1 = SmDev();
      uVar10 = __floatsisf(uVar10);
      __mulsf3(uVar10,uVar2);
      uVar10 = __fixsfsi();
      uVar4 = *(undefined4 *)(DAT_000fb5f8 + iVar1 * 4 + 0xfb476);
      goto LAB_000fb402;
    }
    String::String(aSStack_100);
    String::String(aSStack_f8,(char *)(DAT_000fb5e0 + 0xfb310));
    String::operator=(aSStack_100,aSStack_f8);
    String::~String(aSStack_f8);
    String::String(aSStack_f0,pSVar9);
    StringBuffer::append(aSStack_50,aSStack_f0);
    String::~String(aSStack_f0);
    String::String(aSStack_e8,(char *)(DAT_000fb5e4 + 0xfb33e));
    StringBuffer::append(aSStack_50,aSStack_e8);
    String::~String(aSStack_e8);
    String::String(aSStack_e0,(char *)(DAT_000fb5e8 + 0xfb356));
    StringBuffer::append(aSStack_50,aSStack_e0);
    String::~String(aSStack_e0);
    piVar8 = *(int **)(this + 0xa4);
    pcVar7 = *(code **)(*piVar8 + 0x14);
    iVar1 = SmDev();
    uVar10 = *(undefined4 *)(DAT_000fb5ec + iVar1 * 4 + 0xfb3c6);
    iVar1 = SmDev();
    uVar10 = __floatsisf(uVar10);
    __mulsf3(uVar10,uVar2);
    uVar10 = __fixsfsi();
    uVar4 = __floatsisf(*(undefined4 *)(DAT_000fb5f0 + iVar1 * 4 + 0xfb402));
    __mulsf3(uVar4,uVar3);
    uVar4 = __fixsfsi();
    (*pcVar7)(piVar8,uVar10,uVar4);
    String::~String(aSStack_100);
  }
  else {
    String::String(aSStack_120,pSVar9);
    StringBuffer::append(aSStack_50,aSStack_120);
    String::~String(aSStack_120);
    String::String(aSStack_118,(char *)(DAT_000fb5d0 + 0xfb262));
    StringBuffer::append(aSStack_50,aSStack_118);
    String::~String(aSStack_118);
    String::String(aSStack_110,(char *)(DAT_000fb5d4 + 0xfb27a));
    StringBuffer::append(aSStack_50,aSStack_110);
    String::~String(aSStack_110);
    (**(code **)(**(int **)(this + 0xf0) + 0x20))(*(int **)(this + 0xf0),0);
    (**(code **)(**(int **)(this + 0xf4) + 0x20))(*(int **)(this + 0xf4),0);
    piVar8 = *(int **)(this + 0xa4);
    local_148 = *(code **)(*piVar8 + 0x14);
    iVar1 = SmDev();
    uVar10 = *(undefined4 *)(DAT_000fb5d8 + iVar1 * 4 + 0xfb306);
    iVar1 = SmDev();
    uVar10 = __floatsisf(uVar10);
    __mulsf3(uVar10,uVar2);
    uVar10 = __fixsfsi();
    uVar4 = *(undefined4 *)(DAT_000fb5dc + iVar1 * 4 + 0xfb340);
LAB_000fb402:
    uVar4 = __floatsisf(uVar4);
    __mulsf3(uVar4,uVar3);
    uVar4 = __fixsfsi();
    (*local_148)(piVar8,uVar10,uVar4);
  }
  Vector<String>::elementAt((int)aSStack_d8);
  StringBuffer::append(aSStack_50,aSStack_d8);
  String::~String(aSStack_d8);
  String::String(aSStack_d0,(char *)(DAT_000fb600 + 0xfb446));
  StringBuffer::append(aSStack_50,aSStack_d0);
  String::~String(aSStack_d0);
  Vector<String>::elementAt((int)aSStack_c8);
  StringBuffer::append(aSStack_50,aSStack_c8);
  String::~String(aSStack_c8);
  String::String(aSStack_c0,(char *)(DAT_000fb608 + 0xfb47e));
  StringBuffer::append(aSStack_50,aSStack_c0);
  String::~String(aSStack_c0);
  piVar8 = *(int **)(this + 0xa4);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  StringBuffer::toString();
  (*pcVar7)(piVar8,aSStack_b8);
  String::~String(aSStack_b8);
  (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),1);
  StringBuffer::StringBuffer(aSStack_34);
  String::String(aSStack_b0,(String *)(this_01 + 0xc));
  iVar1 = operator!=(aSStack_b0,0);
  if (iVar1 != 0) {
    String::String(aSStack_a8,(String *)(this_01 + 0x14));
    iVar1 = operator!=(aSStack_a8,0);
    String::~String(aSStack_a8);
  }
  String::~String(aSStack_b0);
  if (iVar1 == 0) {
    String::String(aSStack_98,(String *)(this_01 + 0x14));
    iVar1 = operator!=(aSStack_98,0);
    String::~String(aSStack_98);
    if (iVar1 == 0) {
      piVar8 = *(int **)(this + 0xac);
      local_14c = *(code **)(*piVar8 + 0x14);
      iVar1 = SmDev();
      uVar10 = *(undefined4 *)(DAT_000fb958 + iVar1 * 4 + 0xfb64c);
      iVar1 = SmDev();
      uVar10 = __floatsisf(uVar10);
      __mulsf3(uVar10,uVar2);
      uVar2 = __fixsfsi();
      uVar10 = *(undefined4 *)(DAT_000fb95c + iVar1 * 4 + 0xfb6d6);
      goto LAB_000fb662;
    }
    String::String(aSStack_90,(char *)(DAT_000fb618 + 0xfb580));
    StringBuffer::append(aSStack_34,aSStack_90);
    String::~String(aSStack_90);
    piVar8 = *(int **)(this + 0xac);
    local_14c = *(code **)(*piVar8 + 0x14);
    iVar1 = SmDev();
    uVar10 = *(undefined4 *)(DAT_000fb61c + iVar1 * 4 + 0xfb5b8);
    local_148 = (code *)SmDev();
    uVar10 = __floatsisf(uVar10);
    __mulsf3(uVar10,uVar2);
    uVar2 = __fixsfsi();
    iVar1 = DAT_000fb620 + 0xfb5c8;
  }
  else {
    String::String(aSStack_a0,(char *)(DAT_000fb60c + 0xfb512));
    StringBuffer::append(aSStack_34,aSStack_a0);
    String::~String(aSStack_a0);
    piVar8 = *(int **)(this + 0xac);
    local_14c = *(code **)(*piVar8 + 0x14);
    iVar1 = SmDev();
    uVar10 = *(undefined4 *)(DAT_000fb610 + iVar1 * 4 + 0xfb54a);
    local_148 = (code *)SmDev();
    uVar10 = __floatsisf(uVar10);
    __mulsf3(uVar10,uVar2);
    uVar2 = __fixsfsi();
    iVar1 = DAT_000fb614 + 0xfb55a;
  }
  uVar10 = *(undefined4 *)(iVar1 + (int)local_148 * 4 + 0x60);
LAB_000fb662:
  uVar10 = __floatsisf(uVar10);
  __mulsf3(uVar10,uVar3);
  uVar3 = __fixsfsi();
  (*local_14c)(piVar8,uVar2,uVar3);
  String::valueOf((int)aSStack_88);
  StringBuffer::append(aSStack_34,aSStack_88);
  String::~String(aSStack_88);
  String::String(aSStack_80,(char *)(DAT_000fb960 + 0xfb698));
  StringBuffer::append(aSStack_34,aSStack_80);
  String::~String(aSStack_80);
  this_00 = (Recipe *)FoodStack::getRecipe(this_01);
  Recipe::getSellPrice(this_00,(uchar)this_01[8]);
  String::valueOf((int)aSStack_78);
  StringBuffer::append(aSStack_34,aSStack_78);
  String::~String(aSStack_78);
  String::String(aSStack_70,(char *)(DAT_000fb964 + 0xfb6d4));
  StringBuffer::append(aSStack_34,aSStack_70);
  String::~String(aSStack_70);
  piVar8 = *(int **)(this + 0xac);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  StringBuffer::toString();
  (*pcVar7)(piVar8,aSStack_68);
  String::~String(aSStack_68);
  (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),1);
  piVar8 = *(int **)(this + 0xb0);
  pcVar7 = *(code **)(*piVar8 + 0x44);
  if (this[0xd1] == (FridgeDialog)0x0) {
    Vector<String>::elementAt((int)aSStack_58);
    (*pcVar7)(piVar8,aSStack_58);
    pSVar9 = aSStack_58;
  }
  else {
    Vector<String>::elementAt((int)aSStack_60);
    (*pcVar7)(piVar8,aSStack_60);
    pSVar9 = aSStack_60;
  }
  String::~String(pSVar9);
  (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),1);
  (**(code **)(**(int **)(this + 0xec) + 0x20))(*(int **)(this + 0xec),1);
  piVar8 = *(int **)(this + 0xf0);
  pcVar7 = *(code **)(*piVar8 + 0x20);
  iVar1 = ZombieCafe::isRecipeUnlocked
                    (*(ZombieCafe **)(this + 0x60),(uint)*(ushort *)this_01,(uchar)this_01[8]);
  bVar5 = 0;
  if (iVar1 == 0) {
    bVar5 = (byte)this[0xd1] ^ 1;
  }
  (*pcVar7)(piVar8,bVar5);
  piVar8 = *(int **)(this + 0xb4);
  pcVar7 = *(code **)(*piVar8 + 0x20);
  iVar1 = ZombieCafe::isRecipeUnlocked
                    (*(ZombieCafe **)(this + 0x60),(uint)*(ushort *)this_01,(uchar)this_01[8]);
  bVar5 = 0;
  if (iVar1 == 0) {
    bVar5 = (byte)this[0xd1] ^ 1;
  }
  (*pcVar7)(piVar8,bVar5);
  piVar8 = *(int **)(this + 0xf4);
  if (*(char *)(*(int *)(this + 0xf0) + 0x14) == '\0') {
    (**(code **)(*piVar8 + 0x20))(piVar8,(byte)this[0xd1] ^ 1);
    piVar8 = *(int **)(this + 0xb8);
    bVar5 = (byte)this[0xd1] ^ 1;
    pcVar7 = *(code **)(*piVar8 + 0x20);
  }
  else {
    (**(code **)(*piVar8 + 0x20))(piVar8,0);
    piVar8 = *(int **)(this + 0xb8);
    bVar5 = 0;
    pcVar7 = *(code **)(*piVar8 + 0x20);
  }
  (*pcVar7)(piVar8,bVar5);
  uVar6 = *(int *)(this + 0xe8) - *(int *)(this + 0xe4);
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 & -((uint)(uVar6 < 5) - ((int)uVar6 >> 0x1f));
  }
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),*(undefined4 *)(*(int *)(this + (uVar6 + 0x20) * 4) + 4),
             *(int *)(*(int *)(this + (uVar6 + 0x20) * 4) + 8) + -0x80);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),1);
  drawRecipeCount(this);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_50);
  return;
}


