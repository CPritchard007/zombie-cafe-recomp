/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002143a0 RecipeBook::setRecipe */

/* RecipeBook::setRecipe(int) */

void __thiscall RecipeBook::setRecipe(RecipeBook *this,int param_1)

{
  char cVar1;
  RecipeBook RVar2;
  undefined1 uVar3;
  int iVar4;
  String *pSVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  uint uVar15;
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  Recipe aRStack_34 [20];
  short sStack_20;
  
  this[0x160] = SUB41(param_1,0);
  iVar9 = param_1 * 0x1c;
  Recipe::Recipe(aRStack_34,(Recipe *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + iVar9));
  iVar4 = CapcomApp::getInstance();
  iVar4 = *(int *)(iVar4 + 4);
  uVar15 = 0;
  do {
    uVar3 = FUN_00212962(param_1,uVar15 & 0xff,*(undefined4 *)(this + 0x164));
    iVar10 = uVar15 * 4;
    uVar15 = uVar15 + 1;
    *(undefined1 *)(*(int *)(*(int *)(this + 0xb0) + iVar10) + 0x86) = uVar3;
    *(undefined1 *)(*(int *)(*(int *)(this + 0xb0) + iVar10) + 0x85) = 1;
  } while (uVar15 != 10);
  RVar2 = this[0x160];
  uVar12 = *(undefined4 *)(this + 0x164);
  uVar15 = 0;
  do {
    iVar10 = FUN_00212962(RVar2,uVar15 & 0xff,uVar12);
    if (iVar10 != 0) {
      piVar14 = *(int **)(this + 0xfc);
      pcVar11 = *(code **)(*piVar14 + 0x44);
      String::String(aSStack_74,(String *)aRStack_34);
      (*pcVar11)(piVar14,aSStack_74);
      String::~String(aSStack_74);
      iVar10 = *(int *)(this + 0xe4);
      uVar3 = 0;
      goto LAB_00214464;
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 10);
  piVar14 = *(int **)(this + 0xfc);
  pcVar11 = *(code **)(*piVar14 + 0x44);
  String::String(aSStack_6c,(char *)(DAT_002147a4 + 0x21475a));
  (*pcVar11)(piVar14,aSStack_6c);
  String::~String(aSStack_6c);
  iVar10 = *(int *)(this + 0xe4);
  uVar3 = 1;
LAB_00214464:
  *(undefined1 *)(iVar10 + 0x91) = uVar3;
  RVar2 = this[0x160];
  uVar12 = *(undefined4 *)(this + 0x164);
  uVar15 = 0;
  do {
    iVar10 = FUN_00212962(RVar2,uVar15 & 0xff,uVar12);
    if (iVar10 != 0) {
      (**(code **)(**(int **)(this + 0x11c) + 0x20))(*(int **)(this + 0x11c),0);
      goto LAB_00214540;
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 10);
  cVar1 = *(char *)(*(int *)(iVar4 + 0x4e8) + iVar9 + 0x18);
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(this + 0x11c) + 0x20))(*(int **)(this + 0x11c),1);
    piVar14 = *(int **)(this + 0x11c);
    pcVar11 = *(code **)(*piVar14 + 0x44);
    Vector<String>::elementAt((int)aSStack_64);
    (*pcVar11)(piVar14,aSStack_64);
    pSVar5 = aSStack_64;
  }
  else {
    piVar14 = *(int **)(this + 0x11c);
    if (cVar1 != '\x01') {
      (**(code **)(*piVar14 + 0x20))(piVar14,0);
      goto LAB_00214540;
    }
    (**(code **)(*piVar14 + 0x20))();
    piVar14 = *(int **)(this + 0x11c);
    pcVar11 = *(code **)(*piVar14 + 0x44);
    Vector<String>::elementAt((int)aSStack_5c);
    String::valueOf((int)aSStack_54);
    String::operator+(aSStack_4c,aSStack_5c,aSStack_54);
    (*pcVar11)(piVar14,aSStack_4c);
    String::~String(aSStack_4c);
    String::~String(aSStack_54);
    pSVar5 = aSStack_5c;
  }
  String::~String(pSVar5);
LAB_00214540:
  iVar10 = 0;
  while( true ) {
    if (*(int *)(*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x154) + 0x14) <= iVar10)
    goto LAB_002145da;
    pbVar6 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                               (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x154),iVar10);
    if ((uint)*pbVar6 == param_1) break;
    iVar10 = iVar10 + 1;
  }
  uVar15 = 0;
  do {
    if (this[0x162] == (RecipeBook)0x0) {
      piVar14 = *(int **)(*(int *)(this + 0xbc) + uVar15 * 4);
      iVar8 = CapcomOrderableList<RecipeAndVariants*>::get
                        (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x154),iVar10);
      (**(code **)(*piVar14 + 0x20))(piVar14,*(undefined1 *)(*(int *)(iVar8 + 0xc) + uVar15));
    }
    else {
      piVar14 = *(int **)(*(int *)(this + 0xbc) + uVar15 * 4);
      pcVar11 = *(code **)(*piVar14 + 0x20);
      uVar7 = FUN_00212962(param_1,uVar15 & 0xff,*(undefined4 *)(this + 0x164));
      if (uVar7 != 0) {
        uVar7 = FUN_00212962(param_1,uVar15 & 0xff,*(undefined4 *)(iVar4 + 0x1c));
        uVar7 = (uVar7 ^ 1) & 0xff;
      }
      (*pcVar11)(piVar14,uVar7);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 10);
LAB_002145da:
  piVar14 = *(int **)(this + 0x104);
  if (*(char *)(*(int *)(iVar4 + 0x4e8) + iVar9 + 0x18) == '\x04') {
    (**(code **)(*piVar14 + 0x20))(piVar14,0);
    piVar14 = *(int **)(this + 0x10c);
    pcVar11 = *(code **)(*piVar14 + 0x44);
    Vector<String>::elementAt((int)aSStack_44);
    (*pcVar11)(piVar14,aSStack_44);
    pSVar5 = aSStack_44;
  }
  else {
    (**(code **)(*piVar14 + 0x20))(piVar14,1);
    piVar14 = *(int **)(this + 0x10c);
    pcVar11 = *(code **)(*piVar14 + 0x44);
    String::valueOf((int)aSStack_3c);
    (*pcVar11)(piVar14,aSStack_3c);
    pSVar5 = aSStack_3c;
  }
  String::~String(pSVar5);
  *(undefined4 *)(*(int *)(this + 0xe4) + 100) =
       *(undefined4 *)(sStack_20 * 4 + *(int *)(this + 0x13c));
  piVar14 = *(int **)(this + 0xe4);
  if (param_1 == 0x8c) {
    pcVar11 = *(code **)(*piVar14 + 0x14);
    iVar4 = SmDev();
    uVar13 = *(undefined4 *)(DAT_00214784 + iVar4 * 4 + 0x2146e8);
    iVar4 = SmDev();
    iVar9 = DAT_00214788 + 0x214684;
  }
  else if (param_1 == 0x8d) {
    pcVar11 = *(code **)(*piVar14 + 0x14);
    iVar4 = SmDev();
    uVar13 = *(undefined4 *)(&UNK_0021470a + DAT_0021478c + iVar4 * 4);
    iVar4 = SmDev();
    iVar9 = DAT_00214790 + 0x2146a6;
  }
  else {
    pcVar11 = *(code **)(*piVar14 + 0x14);
    if (param_1 != 0xa2) {
      iVar4 = SmDev();
      uVar13 = *(undefined4 *)(&UNK_00214748 + DAT_0021479c + iVar4 * 4);
      iVar4 = SmDev();
      uVar12 = *(undefined4 *)(DAT_002147a0 + iVar4 * 4 + 0x2146ee);
      goto LAB_002146e8;
    }
    iVar4 = SmDev();
    uVar13 = *(undefined4 *)(&UNK_00214730 + DAT_00214794 + iVar4 * 4);
    iVar4 = SmDev();
    iVar9 = DAT_00214798 + 0x2146cc;
  }
  uVar12 = *(undefined4 *)(iVar4 * 4 + iVar9);
LAB_002146e8:
  (*pcVar11)(piVar14,uVar13,uVar12);
  setVariant(this,0);
  String::~String((String *)aRStack_34);
  return;
}


