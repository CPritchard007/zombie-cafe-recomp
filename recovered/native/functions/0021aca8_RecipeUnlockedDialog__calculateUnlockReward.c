/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021aca8 RecipeUnlockedDialog::calculateUnlockReward */

/* RecipeUnlockedDialog::calculateUnlockReward() */

void __thiscall RecipeUnlockedDialog::calculateUnlockReward(RecipeUnlockedDialog *this)

{
  int iVar1;
  int *piVar2;
  String *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int local_cc;
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
  String aSStack_20 [12];
  
  String::String(aSStack_c0);
  iVar5 = *(int *)(this + 0x98);
  iVar7 = DAT_0021b014 + 0x21acc6;
  iVar4 = 0;
  iVar1 = 0;
  for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)(iVar5 + DAT_0021b010); iVar9 = iVar9 + 1) {
    iVar3 = 0;
    do {
      iVar6 = iVar3 + iVar4;
      iVar10 = iVar6 >> 3;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + ((int)(uint)*(byte *)(*(int *)(iVar5 + 0x1c) + iVar10) >>
                       (iVar6 + iVar10 * -8 & 0xffU) & 1U);
    } while (iVar3 != 10);
    iVar4 = iVar4 + 10;
  }
  iVar1 = iVar1 + ~*(uint *)(iVar5 + 0x680);
  local_cc = -1;
  piVar2 = (int *)**(int **)(iVar7 + DAT_0021b01c);
  iVar4 = -1;
  for (iVar9 = 0; iVar9 < **(int **)(iVar7 + DAT_0021b018); iVar9 = iVar9 + 1) {
    iVar6 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar3 = iVar4;
    if ((((iVar6 <= *(int *)(iVar5 + 0x990)) || (iVar10 = iVar9, iVar1 < iVar6)) &&
        (iVar10 = local_cc, iVar4 == -1)) && (iVar3 = iVar9, iVar6 <= iVar1)) {
      iVar3 = iVar4;
    }
    local_cc = iVar10;
    iVar4 = iVar3;
  }
  if (*(int *)(iVar5 + 0x990) < iVar1) {
    *(int *)(iVar5 + 0x990) = iVar1;
  }
  String::operator=(aSStack_c0,(char *)(DAT_0021b020 + 0x21ad6c));
  if ((local_cc == -1) ||
     ((int)(uint)**(byte **)(iVar7 + DAT_0021b024) <= *(int *)(*(int *)(this + 0x98) + 0x680))) {
    if ((iVar4 == -1) ||
       ((int)(uint)**(byte **)(iVar7 + DAT_0021b024) <= *(int *)(*(int *)(this + 0x98) + 0x680)))
    goto LAB_0021af74;
    Vector<String>::elementAt((int)aSStack_68);
    String::valueOf((long)aSStack_60);
    String::operator+(aSStack_58,aSStack_68,aSStack_60);
    Vector<String>::elementAt((int)aSStack_50);
    String::operator+(aSStack_48,aSStack_58,aSStack_50);
    String::valueOf((long)aSStack_40);
    String::operator+(aSStack_38,aSStack_48,aSStack_40);
    Vector<String>::elementAt((int)aSStack_30);
    String::operator+(aSStack_28,aSStack_38,aSStack_30);
    String::operator=(aSStack_c0,aSStack_28);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    String::~String(aSStack_60);
    String::~String(aSStack_68);
    piVar2 = *(int **)(this + 0x8c);
    pcVar8 = *(code **)(*piVar2 + 0x44);
    String::String(aSStack_20,aSStack_c0);
    (*pcVar8)(piVar2,aSStack_20);
    this_00 = aSStack_20;
  }
  else {
    Vector<String>::elementAt((int)aSStack_b8);
    piVar2 = *(int **)(iVar7 + DAT_0021b02c);
    String::valueOf((long)aSStack_b0);
    String::operator+(aSStack_a8,aSStack_b8,aSStack_b0);
    Vector<String>::elementAt((int)aSStack_a0);
    String::operator+(aSStack_98,aSStack_a8,aSStack_a0);
    String::valueOf((long)aSStack_90);
    String::operator+(aSStack_88,aSStack_98,aSStack_90);
    Vector<String>::elementAt((int)aSStack_80);
    String::operator+(aSStack_78,aSStack_88,aSStack_80);
    String::operator=(aSStack_c0,aSStack_78);
    String::~String(aSStack_78);
    String::~String(aSStack_80);
    String::~String(aSStack_88);
    String::~String(aSStack_90);
    String::~String(aSStack_98);
    String::~String(aSStack_a0);
    String::~String(aSStack_a8);
    String::~String(aSStack_b0);
    String::~String(aSStack_b8);
    ZombieCafe::addXp(*(ZombieCafe **)(this + 0x98),*(int *)(*piVar2 + local_cc * 4));
    piVar2 = *(int **)(this + 0x8c);
    pcVar8 = *(code **)(*piVar2 + 0x44);
    String::String(aSStack_70,aSStack_c0);
    (*pcVar8)(piVar2,aSStack_70);
    this_00 = aSStack_70;
  }
  String::~String(this_00);
LAB_0021af74:
  String::~String(aSStack_c0);
  return;
}


