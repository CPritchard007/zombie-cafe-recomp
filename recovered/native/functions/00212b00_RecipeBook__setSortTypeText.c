/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212b00 RecipeBook::setSortTypeText */

/* RecipeBook::setSortTypeText(RECIPE_BOOK_SORTTYPE) */

void __thiscall RecipeBook::setSortTypeText(RecipeBook *this,int param_2)

{
  String *this_00;
  code *pcVar1;
  int *piVar2;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  piVar2 = *(int **)(this + 0x134);
  this_00 = aSStack_38;
  pcVar1 = *(code **)(*piVar2 + 0x44);
  if (param_2 == 1) {
    String::String(aSStack_38,(char *)(DAT_00212bb0 + 0x212b18));
    (*pcVar1)(piVar2,aSStack_38);
  }
  else if (param_2 == 2) {
    String::String(aSStack_30,(char *)(DAT_00212bb4 + 0x212b30));
    (*pcVar1)(piVar2,aSStack_30);
    this_00 = aSStack_30;
  }
  else if (param_2 == 3) {
    String::String(aSStack_28,(char *)(DAT_00212bb8 + 0x212b48));
    (*pcVar1)(piVar2,aSStack_28);
    this_00 = aSStack_28;
  }
  else if (param_2 == 4) {
    String::String(aSStack_20,(char *)(DAT_00212bbc + 0x212b60));
    (*pcVar1)(piVar2,aSStack_20);
    this_00 = aSStack_20;
  }
  else {
    String::String(aSStack_18,(char *)(DAT_00212bc0 + 0x212b74));
    (*pcVar1)(piVar2,aSStack_18);
    this_00 = aSStack_18;
  }
  String::~String(this_00);
  return;
}


