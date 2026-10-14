/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000faf58 FridgeDialog::recipeTopCheck */

/* FridgeDialog::recipeTopCheck() */

void __thiscall FridgeDialog::recipeTopCheck(FridgeDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  FridgeDialog *pFVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar6 = *(undefined4 *)(iVar1 + 0x40);
  CapcomApp::getInstance();
  pFVar3 = this + 0xe4;
  iVar1 = *(int *)(*(int *)(this + 200) + 4) + -3;
  if (iVar1 <= *(int *)pFVar3) {
    *(int *)pFVar3 = iVar1;
  }
  if (*(int *)pFVar3 < 0) {
    *(undefined4 *)pFVar3 = 0;
  }
  iVar5 = *(int *)(this + 0xe4);
  iVar1 = SmDev();
  piVar4 = *(int **)(this + 0xa0);
  uVar2 = __floatsisf(iVar5 * *(int *)(DAT_000fafc0 + iVar1 * 4 + 0xfafb6));
  __mulsf3(uVar2,uVar6);
  iVar1 = __fixsfsi();
  (**(code **)(*piVar4 + 0x14))(piVar4,-iVar1,0);
  return;
}


