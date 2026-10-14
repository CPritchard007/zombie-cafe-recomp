/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fae2c FridgeDialog::setRecipeButton */

/* FridgeDialog::setRecipeButton() */

void __thiscall FridgeDialog::setRecipeButton(FridgeDialog *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  ImageButton *this_00;
  FridgeDialog *pFVar10;
  uint uVar11;
  undefined8 uVar12;
  int local_34;
  
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  CapcomApp::getInstance();
  iVar2 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar2 + 0x40);
  pFVar10 = this + 0x80;
  iVar2 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar2 + 0x44);
  uVar11 = *(uint *)(this + 0xe4) & (int)~*(uint *)(this + 0xe4) >> 0x1f;
  local_34 = uVar11 << 2;
  do {
    iVar2 = DAT_000faf54;
    bVar1 = (int)uVar11 < *(int *)(*(int *)(this + 200) + 4) + 1;
    if (bVar1) {
      iVar6 = FoodStack::getRecipe(*(FoodStack **)(*(int *)(*(int *)(this + 200) + 8) + local_34));
      ImageButton::setImageAndResize
                (*(ImageButton **)pFVar10,
                 *(CImage **)(*(short *)(iVar6 + 0x14) * 4 + *(int *)(this + 0x68)));
      this_00 = *(ImageButton **)pFVar10;
      iVar2 = iVar2 + 0xfaeac;
      SmDev();
      uVar12 = SmDev();
      ImageButton::setScale(this_00,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      iVar6 = SmDev();
      uVar7 = __floatsisf(uVar11 * *(int *)(iVar2 + iVar6 * 4 + 0x18));
      uVar7 = __mulsf3(uVar7,uVar3);
      iVar6 = SmDev();
      uVar8 = __floatsisf(*(undefined4 *)(iVar2 + iVar6 * 4 + 0x18));
      uVar8 = __mulsf3(uVar8,uVar3);
      uVar8 = __mulsf3(uVar8,0x3f000000);
      __addsf3(uVar7,uVar8);
      uVar7 = __fixsfsi();
      piVar5 = *(int **)pFVar10;
      pcVar9 = *(code **)(*piVar5 + 0x14);
      iVar6 = SmDev();
      uVar8 = __floatsisf(*(undefined4 *)(iVar2 + iVar6 * 4 + 0x30));
      __mulsf3(uVar8,uVar4);
      uVar8 = __fixsfsi();
      (*pcVar9)(piVar5,uVar7,uVar8);
      piVar5 = *(int **)pFVar10;
      pcVar9 = *(code **)(*piVar5 + 0x20);
    }
    else {
      piVar5 = *(int **)pFVar10;
      pcVar9 = *(code **)(*piVar5 + 0x20);
    }
    (*pcVar9)(piVar5,bVar1);
    pFVar10 = pFVar10 + 4;
    local_34 = local_34 + 4;
    uVar11 = uVar11 + 1;
  } while (pFVar10 != this + 0x94);
  return;
}


