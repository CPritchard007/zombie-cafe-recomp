/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002133c4 RecipeBook::onBaitCook */

/* RecipeBook::onBaitCook(RecipeBook*) */

void RecipeBook::onBaitCook(RecipeBook *param_1)

{
  int iVar1;
  GameStateCafe *this;
  NoticeDialog *pNVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  this = *(GameStateCafe **)(*(int *)(param_1 + 0x60) + 8);
  iVar1 = GameStateCafe::getCookBaidCount(this);
  if (iVar1 < 3) {
    GameStateCafe::setflowerPlantCookTime(this);
    iVar1 = GameStateCafe::checkFlowerPlantTimeCheet(this);
    if (iVar1 != 0) {
      *(short *)(*(int *)(param_1 + 0x60) + 0x36c) =
           *(short *)(*(int *)(param_1 + 0x60) + 0x36c) + 1;
    }
    *(undefined2 *)(param_1 + 0x172) = 1;
    hide(SUB41(param_1,0));
  }
  else {
    pNVar2 = *(NoticeDialog **)(param_1 + 0x144);
    String::String(aSStack_20,(char *)(DAT_00213468 + 0x2133e2));
    Vector<String>::elementAt((int)aSStack_18);
    NoticeDialog::show(pNVar2,aSStack_20,aSStack_18,0,0);
    String::~String(aSStack_18);
    String::~String(aSStack_20);
    *(undefined1 *)(*(int *)(param_1 + 0x60) + DAT_00213470) = 1;
  }
  return;
}


