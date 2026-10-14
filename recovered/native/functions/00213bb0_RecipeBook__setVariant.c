/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00213bb0 RecipeBook::setVariant */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00213ce2) */
/* WARNING: Removing unreachable block (ram,0x00213ce2) */
/* RecipeBook::setVariant(int) */

void __thiscall RecipeBook::setVariant(RecipeBook *this,int param_1)

{
  RecipeBook RVar1;
  byte bVar2;
  undefined4 uVar3;
  RecipeBook *pRVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  code *pcVar14;
  uint local_b8;
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  StringUtil aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  Recipe aRStack_34 [32];
  
  iVar10 = DAT_00213ee8 + 0x213bbe;
  Recipe::Recipe(aRStack_34,
                 (Recipe *)
                 (*(int *)(*(int *)(this + 0x60) + 0x4e8) + (uint)(byte)this[0x160] * 0x1c));
  uVar13 = param_1 & 0xff;
  RVar1 = SUB41(param_1,0);
  this[DAT_00213eec] = RVar1;
  (**(code **)(**(int **)(this + 0xe8) + 0x20))(*(int **)(this + 0xe8),1);
  piVar12 = *(int **)(this + 0xec);
  bVar2 = FUN_00212962(this[0x160],uVar13,*(undefined4 *)(this + 0x164));
  (**(code **)(*piVar12 + 0x20))(piVar12,bVar2 ^ 1);
  piVar12 = *(int **)(this + 0xd8);
  uVar3 = FUN_00212962(this[0x160],uVar13,*(undefined4 *)(this + 0x164));
  (**(code **)(*piVar12 + 0x20))(piVar12,uVar3);
  (**(code **)(**(int **)(this + 0x130) + 0x20))(*(int **)(this + 0x130),param_1 == 6);
  local_b8 = (uint)(byte)this[0x162];
  if (local_b8 == 0) {
    for (; (int)local_b8 <
           *(int *)(*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x154) + 0x14);
        local_b8 = local_b8 + 1) {
      pRVar4 = (RecipeBook *)
               CapcomOrderableList<RecipeAndVariants*>::get
                         (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x154),local_b8);
      if (*pRVar4 == this[0x160]) {
        if ((-1 < param_1) && (param_1 <= *(int *)(pRVar4 + 8))) {
          *(undefined1 *)(*(int *)(pRVar4 + 0xc) + param_1) = 0;
        }
        piVar12 = *(int **)(param_1 * 4 + *(int *)(this + 0xbc));
        (**(code **)(*piVar12 + 0x20))(piVar12,0);
        piVar12 = *(int **)(*(int *)(this + 0x98) + local_b8 * 4);
        (**(code **)(*piVar12 + 0x20))(piVar12,0);
        iVar5 = 0;
        goto LAB_00213ca4;
      }
    }
  }
  goto LAB_00213cd6;
  while (iVar5 = iVar5 + 1, iVar5 != 10) {
LAB_00213ca4:
    if (*(char *)(*(int *)(pRVar4 + 0xc) + iVar5) != '\0') {
      piVar12 = *(int **)(*(int *)(this + 0x98) + local_b8 * 4);
      (**(code **)(*piVar12 + 0x20))(piVar12,1);
      break;
    }
  }
LAB_00213cd6:
  switch(param_1) {
  case 0:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    String::String(aSStack_ac,0);
    (*pcVar14)(piVar12,aSStack_ac);
    String::~String(aSStack_ac);
    *(undefined4 *)(*(int *)(this + 0xe8) + 100) = 0;
    (**(code **)(**(int **)(this + 0xe8) + 0x20))();
    goto switchD_00213ce2_default;
  case 1:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_a4);
    (*pcVar14)(piVar12,aSStack_a4);
    String::~String(aSStack_a4);
    iVar5 = *(int *)(this + 0x138);
    iVar8 = *(int *)(this + 0xe8);
    iVar7 = 0x99;
    break;
  case 2:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_9c);
    (*pcVar14)(piVar12,aSStack_9c);
    String::~String(aSStack_9c);
    iVar5 = *(int *)(this + 0x138);
    iVar8 = *(int *)(this + 0xe8);
    iVar7 = 0x9f;
    break;
  case 3:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_94);
    (*pcVar14)(piVar12,aSStack_94);
    String::~String(aSStack_94);
    iVar5 = *(int *)(this + 0x138);
    iVar8 = *(int *)(this + 0xe8);
    iVar7 = 0x91;
    break;
  case 4:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_8c);
    (*pcVar14)(piVar12,aSStack_8c);
    String::~String(aSStack_8c);
    iVar5 = *(int *)(this + 0x138);
    iVar8 = *(int *)(this + 0xe8);
    iVar7 = 0x9b;
    break;
  case 5:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_84);
    (*pcVar14)(piVar12,aSStack_84);
    String::~String(aSStack_84);
    iVar5 = *(int *)(this + 0x138);
    iVar8 = *(int *)(this + 0xe8);
    iVar7 = 0x8f;
    break;
  case 6:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_7c);
    (*pcVar14)(piVar12,aSStack_7c);
    String::~String(aSStack_7c);
    iVar5 = *(int *)(this + 0x138);
    iVar8 = *(int *)(this + 0xe8);
    iVar7 = 0x93;
    break;
  case 7:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_74);
    (*pcVar14)(piVar12,aSStack_74);
    String::~String(aSStack_74);
    iVar5 = *(int *)(this + 0x138);
    iVar8 = *(int *)(this + 0xe8);
    iVar7 = 0x95;
    break;
  case 8:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_6c);
    (*pcVar14)(piVar12,aSStack_6c);
    String::~String(aSStack_6c);
    iVar5 = *(int *)(this + 0x138);
    iVar8 = *(int *)(this + 0xe8);
    iVar7 = 0x97;
    break;
  case 9:
    piVar12 = *(int **)(this + 0x110);
    pcVar14 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_64);
    (*pcVar14)(piVar12,aSStack_64);
    String::~String(aSStack_64);
    iVar8 = *(int *)(this + 0xe8);
    iVar5 = *(int *)(this + 0x138);
    iVar7 = 0x9d;
    break;
  default:
    goto switchD_00213ce2_default;
  }
  *(undefined4 *)(iVar8 + 100) = *(undefined4 *)(iVar5 + iVar7 * 4);
switchD_00213ce2_default:
  piVar12 = *(int **)(this + 0xe8);
  (**(code **)(*piVar12 + 0x20))(piVar12,0);
  piVar12 = *(int **)(this + 0xe8);
  if ((char)piVar12[5] != '\0') {
    iVar5 = CImage::getSize((CImage *)piVar12[0x19]);
    (**(code **)(*piVar12 + 0x18))(piVar12,iVar5 >> 0x10,(int)(short)iVar5);
  }
  piVar12 = *(int **)(this + 0x120);
  pcVar14 = *(code **)(*piVar12 + 0x44);
  iVar5 = FUN_00212962(this[0x160],uVar13,*(undefined4 *)(this + 0x164));
  if (iVar5 == 0) {
    String::String((String *)aSStack_5c,(char *)(DAT_002142a4 + 0x213fae));
  }
  else {
    uVar6 = Recipe::getCookTimeSeconds(aRStack_34,(uchar)RVar1);
    StringUtil::createTimeString(aSStack_5c,uVar6,'\x02');
  }
  (*pcVar14)(piVar12,aSStack_5c);
  String::~String((String *)aSStack_5c);
  iVar5 = Recipe::getCookTimeSeconds(aRStack_34,(uchar)RVar1);
  iVar7 = Recipe::getCookTimeSeconds(aRStack_34,'\0');
  if (iVar7 < iVar5) {
    puVar11 = (undefined4 *)(*(int *)(this + 0x120) + 0x8c);
    uVar3 = DAT_002142a8;
  }
  else {
    iVar5 = Recipe::getCookTimeSeconds(aRStack_34,(uchar)RVar1);
    iVar7 = Recipe::getCookTimeSeconds(aRStack_34,'\0');
    puVar11 = (undefined4 *)(*(int *)(this + 0x120) + 0x8c);
    uVar3 = DAT_002142ac;
    if (iVar7 <= iVar5) {
      uVar3 = 0xff000000;
    }
  }
  *puVar11 = uVar3;
  piVar12 = *(int **)(this + 0x128);
  pcVar14 = *(code **)(*piVar12 + 0x44);
  iVar5 = FUN_00212962(this[0x160],uVar13,*(undefined4 *)(this + 0x164));
  if (iVar5 == 0) {
    String::String(aSStack_54,(char *)(DAT_002142b0 + 0x21403c));
  }
  else {
    Recipe::getServings(aRStack_34,(uchar)RVar1);
    String::valueOf((int)aSStack_54);
  }
  (*pcVar14)(piVar12,aSStack_54);
  String::~String(aSStack_54);
  iVar5 = Recipe::getServings(aRStack_34,(uchar)RVar1);
  iVar7 = Recipe::getServings(aRStack_34,'\0');
  if (iVar5 < iVar7) {
    puVar11 = (undefined4 *)(*(int *)(this + 0x128) + 0x8c);
    uVar3 = DAT_002142a8;
  }
  else {
    iVar5 = Recipe::getServings(aRStack_34,(uchar)RVar1);
    iVar7 = Recipe::getServings(aRStack_34,'\0');
    puVar11 = (undefined4 *)(*(int *)(this + 0x128) + 0x8c);
    uVar3 = DAT_002142ac;
    if (iVar5 <= iVar7) {
      uVar3 = 0xff000000;
    }
  }
  *puVar11 = uVar3;
  piVar12 = *(int **)(this + 0x124);
  pcVar14 = *(code **)(*piVar12 + 0x44);
  iVar5 = FUN_00212962(this[0x160],uVar13,*(undefined4 *)(this + 0x164));
  if (iVar5 == 0) {
    String::String(aSStack_4c,(char *)(DAT_002142b4 + 0x2140d8));
  }
  else {
    Recipe::getSellPrice(aRStack_34,(uchar)RVar1);
    Recipe::getServings(aRStack_34,(uchar)RVar1);
    String::valueOf((int)aSStack_4c);
  }
  (*pcVar14)(piVar12,aSStack_4c);
  String::~String(aSStack_4c);
  iVar5 = Recipe::getSellPrice(aRStack_34,(uchar)RVar1);
  iVar7 = Recipe::getServings(aRStack_34,(uchar)RVar1);
  iVar8 = Recipe::getSellPrice(aRStack_34,'\0');
  iVar9 = Recipe::getServings(aRStack_34,'\0');
  if (iVar5 * iVar7 < iVar8 * iVar9) {
    puVar11 = (undefined4 *)(*(int *)(this + 0x124) + 0x8c);
    uVar3 = DAT_002142a8;
  }
  else {
    iVar5 = Recipe::getSellPrice(aRStack_34,(uchar)RVar1);
    iVar7 = Recipe::getServings(aRStack_34,(uchar)RVar1);
    iVar8 = Recipe::getSellPrice(aRStack_34,'\0');
    iVar9 = Recipe::getServings(aRStack_34,'\0');
    puVar11 = (undefined4 *)(*(int *)(this + 0x124) + 0x8c);
    uVar3 = DAT_002142ac;
    if (iVar5 * iVar7 - iVar8 * iVar9 == 0 || iVar5 * iVar7 < iVar8 * iVar9) {
      uVar3 = 0xff000000;
    }
  }
  *puVar11 = uVar3;
  piVar12 = *(int **)(this + 300);
  pcVar14 = *(code **)(*piVar12 + 0x44);
  iVar5 = FUN_00212962(this[0x160],uVar13,*(undefined4 *)(this + 0x164));
  if (iVar5 == 0) {
    String::String(aSStack_44,(char *)(DAT_002142bc + 0x2141be));
  }
  else {
    Recipe::getXp(aRStack_34,(uchar)RVar1);
    uVar3 = __floatsisf();
    __mulsf3(uVar3,*(undefined4 *)
                    ((*(int *)(*(int *)(this + 0x60) + 0x680) + -1) * 4 +
                    **(int **)(iVar10 + DAT_002142b8)));
    __fixsfsi();
    String::valueOf((int)aSStack_44);
  }
  (*pcVar14)(piVar12,aSStack_44);
  String::~String(aSStack_44);
  iVar10 = Recipe::getXp(aRStack_34,(uchar)RVar1);
  iVar5 = Recipe::getXp(aRStack_34,'\0');
  if (iVar10 < iVar5) {
    puVar11 = (undefined4 *)(*(int *)(this + 300) + 0x8c);
    uVar3 = DAT_002142a8;
  }
  else {
    iVar10 = Recipe::getXp(aRStack_34,(uchar)RVar1);
    iVar5 = Recipe::getXp(aRStack_34,'\0');
    puVar11 = (undefined4 *)(*(int *)(this + 300) + 0x8c);
    uVar3 = DAT_002142ac;
    if (iVar10 <= iVar5) {
      uVar3 = 0xff000000;
    }
  }
  *puVar11 = uVar3;
  piVar12 = *(int **)(this + 0x108);
  pcVar14 = *(code **)(*piVar12 + 0x44);
  iVar10 = FUN_00212962(this[0x160],uVar13,*(undefined4 *)(this + 0x164));
  if (iVar10 == 0) {
    String::String(aSStack_3c,(char *)(DAT_002142c0 + 0x21424c));
  }
  else {
    Recipe::getCost(aRStack_34,(uchar)RVar1);
    String::valueOf((int)aSStack_3c);
  }
  (*pcVar14)(piVar12,aSStack_3c);
  String::~String(aSStack_3c);
  iVar10 = Recipe::getCost(aRStack_34,(uchar)RVar1);
  iVar5 = Recipe::getCost(aRStack_34,'\0');
  if (iVar5 < iVar10) {
    puVar11 = (undefined4 *)(*(int *)(this + 0x108) + 0x8c);
    uVar3 = DAT_002142a8;
  }
  else {
    iVar10 = Recipe::getCost(aRStack_34,(uchar)RVar1);
    iVar5 = Recipe::getCost(aRStack_34,'\0');
    puVar11 = (undefined4 *)(*(int *)(this + 0x108) + 0x8c);
    uVar3 = DAT_002142ac;
    if (iVar5 <= iVar10) {
      uVar3 = 0xff000000;
    }
  }
  *puVar11 = uVar3;
  pcVar14 = *(code **)(**(int **)(this + 0xf0) + 0x14);
  iVar10 = SmDev();
  iVar5 = *(int *)(this + 0xf0);
  (*pcVar14)(iVar5,*(int *)(DAT_0021439c + iVar10 * 4 + 0x2142f6) -
                   (*(int *)(*(int *)(this + 0x108) + 0xc) + *(int *)(iVar5 + 0xc)) / 2,
             *(undefined4 *)(iVar5 + 8));
  piVar12 = *(int **)(this + 0x108);
  (**(code **)(*piVar12 + 0x14))
            (piVar12,*(int *)(*(int *)(this + 0xf0) + 4) + *(int *)(*(int *)(this + 0xf0) + 0xc),
             piVar12[2]);
  String::~String((String *)aRStack_34);
  return;
}


