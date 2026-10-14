/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fbb20 FridgeDialog::show */

/* FridgeDialog::show(bool) */

void __thiscall FridgeDialog::show(FridgeDialog *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  NoticeDialog *pNVar5;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  if (this[0x14] == (FridgeDialog)0x0) {
    setPage(this,0);
    setRecipeButton(this);
    setSelectRecipeInfo(this);
    *(undefined2 *)(this + 0xce) = **(undefined2 **)(DAT_000fbc3c + 0xfbb4a);
    this[0x14] = (FridgeDialog)0x1;
    if ((param_1) &&
       (iVar1 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0x60)), iVar1 == 0)) {
      pNVar5 = *(NoticeDialog **)(this + 0xdc);
      String::String(aSStack_20,(char *)(DAT_000fbc40 + 0xfbb6a));
      Vector<String>::elementAt((int)aSStack_18);
      NoticeDialog::show(pNVar5,aSStack_20,aSStack_18,0,0);
      String::~String(aSStack_18);
      String::~String(aSStack_20);
    }
    iVar1 = *(int *)(*(int *)(this + 200) + 4);
    piVar2 = *(int **)(this + 0x94);
    if (iVar1 < 4) {
      (**(code **)(*piVar2 + 0x20))(piVar2,0);
      piVar2 = *(int **)(this + 0x98);
      pcVar4 = *(code **)(*piVar2 + 0x20);
    }
    else {
      (**(code **)(*piVar2 + 0x20))(piVar2,1);
      piVar2 = *(int **)(this + 0x98);
      pcVar4 = *(code **)(*piVar2 + 0x20);
    }
    (*pcVar4)(piVar2,3 < iVar1);
    iVar1 = getAnalyzeCount(this);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(this + 0xf8) + 0x20))(*(int **)(this + 0xf8),0);
      piVar2 = *(int **)(this + 0xfc);
      pcVar4 = *(code **)(*piVar2 + 0x20);
      uVar3 = 0;
    }
    else {
      if (this[0xd1] != (FridgeDialog)0x0) {
        return;
      }
      (**(code **)(**(int **)(this + 0xf8) + 0x20))(*(int **)(this + 0xf8),1);
      piVar2 = *(int **)(this + 0xfc);
      uVar3 = 1;
      pcVar4 = *(code **)(*piVar2 + 0x20);
    }
    (*pcVar4)(piVar2,uVar3);
  }
  return;
}


