/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fb970 FridgeDialog::setPage */

/* FridgeDialog::setPage(int) */

void __thiscall FridgeDialog::setPage(FridgeDialog *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(this + 200) + 4);
  if (iVar1 == -1) {
    (**(code **)(**(int **)(this + 0x74) + 0x20))(*(int **)(this + 0x74),0);
    (**(code **)(**(int **)(this + 0x78) + 0x20))(*(int **)(this + 0x78),0);
    (**(code **)(**(int **)(this + 0xec) + 0x20))(*(int **)(this + 0xec),0);
    (**(code **)(**(int **)(this + 0xf0) + 0x20))(*(int **)(this + 0xf0),0);
    (**(code **)(**(int **)(this + 0xf4) + 0x20))(*(int **)(this + 0xf4),0);
    (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),0);
    (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
    (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),0);
    (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),0);
    (**(code **)(**(int **)(this + 0xb4) + 0x20))(*(int **)(this + 0xb4),0);
    (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
    (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
    (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),0);
    (**(code **)(**(int **)(this + 0xfc) + 0x20))(*(int **)(this + 0xfc),0);
    (**(code **)(**(int **)(this + 0xf8) + 0x20))(*(int **)(this + 0xf8),0);
    (**(code **)(**(int **)(this + 0xa0) + 0x18))
              (*(int **)(this + 0xa0),0,*(undefined4 *)(*(int *)(this + 0x6c) + 0x10));
  }
  else {
    if (iVar1 < param_1) {
      param_1 = iVar1;
    }
    *(int *)(this + 0xe4) = param_1;
    if (param_1 < 0) {
      *(undefined4 *)(this + 0xe4) = 0;
    }
    *(int *)(this + 0xe8) = param_1;
    if (param_1 < 0) {
      *(undefined4 *)(this + 0xe8) = 0;
    }
    iVar1 = SmDev();
    piVar5 = *(int **)(this + 0xa0);
    iVar6 = DAT_000fbb10 + 0xfbaa0;
    iVar4 = *piVar5;
    uVar3 = __floatsisf(param_1 * *(int *)(iVar6 + iVar1 * 4 + 0x18));
    __mulsf3(uVar3,uVar2);
    iVar1 = __fixsfsi();
    (**(code **)(iVar4 + 0x14))(piVar5,-iVar1,0);
    piVar5 = *(int **)(this + 0xa0);
    iVar4 = *(int *)(*(int *)(this + 200) + 4);
    pcVar7 = *(code **)(*piVar5 + 0x18);
    iVar1 = SmDev();
    uVar3 = __floatsisf((iVar4 + 1) * *(int *)(iVar6 + iVar1 * 4 + 0x18));
    __mulsf3(uVar3,uVar2);
    uVar2 = __fixsfsi();
    (*pcVar7)(piVar5,uVar2,*(undefined4 *)(*(int *)(this + 0x6c) + 0x10));
    setRecipeButton(this);
    setSelectRecipeInfo(this);
  }
  return;
}


