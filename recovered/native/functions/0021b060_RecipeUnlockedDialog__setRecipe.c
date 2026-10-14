/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021b060 RecipeUnlockedDialog::setRecipe */

/* RecipeUnlockedDialog::setRecipe(int, int) */

void __thiscall RecipeUnlockedDialog::setRecipe(RecipeUnlockedDialog *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  String aSStack_20 [12];
  
  *(int *)(this + 0x60) = param_1;
  *(int *)(this + 100) = param_2;
  piVar4 = *(int **)(this + 0x84);
  pcVar5 = *(code **)(*piVar4 + 0x44);
  Recipe::getFullName((char)&stack0xffffffec + 0xf4);
  (*pcVar5)(piVar4,aSStack_20);
  String::~String(aSStack_20);
  piVar4 = *(int **)(this + 0x8c);
  pcVar5 = *(code **)(*piVar4 + 0x14);
  iVar3 = *(int *)(this + 0x84);
  uVar2 = *(undefined4 *)(iVar3 + 4);
  uVar1 = __floatsisf(*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0x10) +
                      (**(int **)(DAT_0021b130 + 0x21b0c0) >> 1));
  iVar3 = SmDev();
  __addsf3(uVar1,*(undefined4 *)(iVar3 * 4 + *(int *)(DAT_0021b134 + 0x21b0da)));
  uVar1 = __fixsfsi();
  (*pcVar5)(piVar4,uVar2,uVar1);
  (**(code **)(*(int *)this + 0x34))(this,*(undefined4 *)(this + 0x74));
  if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  setRecipeImage(this,param_1);
  calculateUnlockReward(this);
  return;
}


