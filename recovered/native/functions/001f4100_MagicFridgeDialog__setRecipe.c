/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f4100 MagicFridgeDialog::setRecipe */

/* MagicFridgeDialog::setRecipe(int, int, int) */

void __thiscall
MagicFridgeDialog::setRecipe(MagicFridgeDialog *this,int param_1,int param_2,int param_3)

{
  String *this_00;
  int *piVar1;
  code *pcVar2;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  *(int *)(this + 0x60) = param_1;
  *(int *)(this + 0x68) = param_3;
  *(int *)(this + 100) = param_2;
  piVar1 = *(int **)(this + 0x88);
  pcVar2 = *(code **)(*piVar1 + 0x44);
  Recipe::getFullName((uchar)aSStack_40);
  (*pcVar2)(piVar1,aSStack_40);
  String::~String(aSStack_40);
  (**(code **)(*(int *)this + 0x34))(this,*(undefined4 *)(this + 0x78));
  if (*(int **)(*(int *)(this + 0x78) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x78) + 100) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  String::String(aSStack_38);
  if (*(int *)(this + 0x68) == 0) {
    String::String(aSStack_30,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x98) + 0x4b0) + 8) +
                   **(int **)(DAT_001f420c + 0x1f4184) * 8));
    String::operator=(aSStack_38,aSStack_30);
    this_00 = aSStack_30;
  }
  else {
    String::String(aSStack_28,(char *)(DAT_001f4210 + 0x1f41a4));
    String::operator=(aSStack_38,aSStack_28);
    this_00 = aSStack_28;
  }
  String::~String(this_00);
  piVar1 = *(int **)(this + 0x80);
  pcVar2 = *(code **)(*piVar1 + 0x44);
  String::String(aSStack_20,aSStack_38);
  (*pcVar2)(piVar1,aSStack_20);
  String::~String(aSStack_20);
  setRecipeImage(this,param_1);
  String::~String(aSStack_38);
  return;
}


