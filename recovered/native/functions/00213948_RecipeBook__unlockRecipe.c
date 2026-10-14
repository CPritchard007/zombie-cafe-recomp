/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00213948 RecipeBook::unlockRecipe */

/* RecipeBook::unlockRecipe(unsigned char, unsigned char) */

void __thiscall RecipeBook::unlockRecipe(RecipeBook *this,uchar param_1,uchar param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int local_6c;
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  uVar9 = (uint)param_2;
  iVar3 = FUN_00212962((uint)param_1,uVar9,*(undefined4 *)(this + 0x164));
  if (iVar3 != 0) {
    piVar8 = *(int **)(this + 0x118);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    String::String(aSStack_58,(char *)(DAT_00213b94 + 0x213972));
    uVar1 = *(undefined1 *)(*(int *)(this + 0x60) + DAT_00213b9c);
    iVar3 = FUN_00212978(uVar1,*(undefined4 *)(*(int *)(this + 0x60) + 0x1c));
    __divsi3(**(int **)(DAT_00213ba0 + 0x213998) * iVar3,uVar1);
    Vector<String>::elementAt((int)aSStack_50);
    String::operator+(aSStack_48,aSStack_58,aSStack_50);
    (*pcVar7)(piVar8,aSStack_48);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    iVar3 = 0;
    String::~String(aSStack_58);
    local_6c = 0;
    while( true ) {
      iVar10 = *(int *)(this + 0x60);
      if (*(int *)(*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150) + 0x14) <= iVar3)
      break;
      pbVar4 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get
                                 (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x150),iVar3)
      ;
      if (*(byte *)(*(int *)(iVar10 + 0x4e8) + (uint)*pbVar4 * 0x1c + 0x16) <=
          **(byte **)(DAT_00213ba4 + 0x213a06)) {
        if ((uint)*pbVar4 == (uint)param_1) {
          iVar10 = CapcomOrderableList<RecipeAndVariants*>::get
                             (*(CapcomOrderableList<RecipeAndVariants*> **)(this + 0x154),iVar3);
          if ((int)uVar9 <= *(int *)(iVar10 + 8)) {
            *(undefined1 *)(*(int *)(iVar10 + 0xc) + uVar9) = 1;
          }
          iVar10 = local_6c * 4;
          (**(code **)(**(int **)(*(int *)(this + 0x80) + iVar10) + 0x20))
                    (*(int **)(*(int *)(this + 0x80) + iVar10),0);
          (**(code **)(**(int **)(*(int *)(this + 0x8c) + iVar10) + 0x20))
                    (*(int **)(*(int *)(this + 0x8c) + iVar10),0);
          (**(code **)(**(int **)(*(int *)(this + 0x98) + iVar10) + 0x20))
                    (*(int **)(*(int *)(this + 0x98) + iVar10),1);
          *(undefined1 *)(*(int *)(*(int *)(this + 0x74) + iVar10) + 0x92) = 0;
        }
        local_6c = local_6c + 1;
      }
      iVar3 = iVar3 + 1;
    }
    piVar8 = *(int **)(this + 0x114);
    pcVar7 = *(code **)(*piVar8 + 0x44);
    FUN_00212978(*(undefined1 *)(iVar10 + DAT_00213b9c),*(undefined4 *)(iVar10 + 0x1c));
    String::valueOf((int)aSStack_40);
    String::String(aSStack_38,(char *)(DAT_00213ba8 + 0x213a96));
    String::operator+(aSStack_30,aSStack_40,aSStack_38);
    String::valueOf((int)aSStack_28);
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    (*pcVar7)(piVar8,aSStack_20);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    uVar9 = 0;
    do {
      iVar3 = *(int *)(uVar9 * 4 + *(int *)(this + 0xb0));
      uVar6 = uVar9 & 0xff;
      uVar9 = uVar9 + 1;
      uVar1 = FUN_00212962(this[0x160],uVar6,*(undefined4 *)(this + 0x164));
      *(undefined1 *)(iVar3 + 0x86) = uVar1;
      iVar3 = DAT_00213bac;
    } while (uVar9 != 10);
    piVar8 = *(int **)(this + 0xec);
    bVar2 = FUN_00212962(this[0x160],this[DAT_00213bac],*(undefined4 *)(this + 0x164));
    (**(code **)(*piVar8 + 0x20))(piVar8,bVar2 ^ 1);
    piVar8 = *(int **)(this + 0xd8);
    uVar5 = FUN_00212962(this[0x160],this[iVar3],*(undefined4 *)(this + 0x164));
    (**(code **)(*piVar8 + 0x20))(piVar8,uVar5);
  }
  return;
}


