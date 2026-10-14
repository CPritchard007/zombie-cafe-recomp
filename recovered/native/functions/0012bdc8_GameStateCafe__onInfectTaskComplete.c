/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012bdc8 GameStateCafe::onInfectTaskComplete */

/* GameStateCafe::onInfectTaskComplete(GameStateCafe*, InfectTask*) */

void GameStateCafe::onInfectTaskComplete(GameStateCafe *param_1,InfectTask *param_2)

{
  String *this;
  ConfirmDialog *pCVar1;
  int iVar2;
  int iVar3;
  int local_6c;
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
  
  iVar3 = DAT_0012bfa4 + 0x12bdd4;
  if (param_2 == (InfectTask *)0x0) {
    local_6c = *(int *)(param_1 + 0x54);
  }
  else {
    local_6c = *(int *)(param_2 + 0x24);
    if (param_2[5] == (InfectTask)0x0) {
      return;
    }
  }
  *(undefined4 *)(local_6c + 0xac) = **(undefined4 **)(iVar3 + DAT_0012bfa8);
  iVar2 = **(int **)(local_6c + 0x8c);
  if (*(char *)(iVar2 + DAT_0012bfac) == '\0') {
    if (*(int *)(iVar2 + 0xb20) <= *(int *)(*(ZombieCafe **)(param_1 + 0xc) + DAT_0012bfd0)) {
      *(int *)(param_1 + 100) = local_6c;
      completeInfectPurchase(param_1,(GameStateCafe *)0xb20);
    }
  }
  else {
    iVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(param_1 + 0xc));
    if (iVar2 < *(int *)(**(int **)(local_6c + 0x8c) + 0xb20)) {
      pCVar1 = *(ConfirmDialog **)(param_1 + 0x80);
      Vector<String>::elementAt((int)aSStack_30);
      Vector<String>::elementAt((int)aSStack_28);
      Vector<String>::elementAt((int)aSStack_20);
      ConfirmDialog::show(pCVar1,aSStack_30,aSStack_28,aSStack_20,
                          *(undefined4 *)(iVar3 + DAT_0012bfcc),param_1);
      String::~String(aSStack_20);
      String::~String(aSStack_28);
      this = aSStack_30;
    }
    else {
      *(int *)(param_1 + 100) = local_6c;
      pCVar1 = *(ConfirmDialog **)(param_1 + 0x80);
      Vector<String>::elementAt((int)aSStack_68);
      String::valueOf((int)aSStack_60);
      String::operator+(aSStack_58,aSStack_68,aSStack_60);
      Vector<String>::elementAt((int)aSStack_50);
      String::operator+(aSStack_48,aSStack_58,aSStack_50);
      Vector<String>::elementAt((int)aSStack_40);
      Vector<String>::elementAt((int)aSStack_38);
      ConfirmDialog::show(pCVar1,aSStack_48,aSStack_40,aSStack_38,
                          *(undefined4 *)(iVar3 + DAT_0012bfc0),param_1);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
      String::~String(aSStack_48);
      String::~String(aSStack_50);
      String::~String(aSStack_58);
      String::~String(aSStack_60);
      this = aSStack_68;
    }
    String::~String(this);
  }
  return;
}


