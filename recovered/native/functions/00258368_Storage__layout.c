/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00258368 Storage::layout */

/* Storage::layout() */

void __thiscall Storage::layout(Storage *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  code *pcVar7;
  Storage *pSVar8;
  Storage *pSVar9;
  Storage *pSVar10;
  int iVar11;
  
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  pSVar10 = this + 0x90;
  iVar1 = SmDev();
  piVar3 = *(int **)pSVar10;
  if (iVar1 == 0) {
    *(int *)(this + 0xc) = piVar3[3] + (*(int *)(*(int *)(this + 0x94) + 0xc) >> 1);
    *(int *)(this + 0x10) = piVar3[4] + *(int *)(*(int *)(this + 0x98) + 0x10);
    (**(code **)(*piVar3 + 0x14))(piVar3,0);
    piVar3 = *(int **)(this + 0x94);
    iVar1 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)pSVar10,*(int *)(*(ScreenElement **)pSVar10 + 0xc),0);
    sVar6 = (short)iVar1;
    pcVar7 = *(code **)(*piVar3 + 0x14);
  }
  else {
    *(int *)(this + 0xc) = piVar3[3];
    *(int *)(this + 0x10) = piVar3[4] + *(int *)(*(int *)(this + 0x98) + 0x10);
    (**(code **)(*piVar3 + 0x14))(piVar3,0);
    piVar3 = *(int **)(this + 0x94);
    iVar1 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)pSVar10,
                       *(int *)(*(ScreenElement **)pSVar10 + 0xc) - (piVar3[3] >> 1),0);
    sVar6 = (short)iVar1;
    pcVar7 = *(code **)(*piVar3 + 0x14);
  }
  (*pcVar7)(piVar3,iVar1 >> 0x10,(int)sVar6);
  uVar4 = __floatsisf(*(int *)(*(int *)(this + 0x98) + 0xc) >> 3);
  iVar1 = SmDev();
  __addsf3(uVar4,*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_00258558 + 0x258424)));
  iVar1 = __fixsfsi();
  uVar4 = __floatsisf(*(int *)(this + 0x10) - *(int *)(*(int *)(this + 0x90) + 0x10));
  iVar5 = SmDev();
  iVar11 = 1;
  __addsf3(uVar4,*(undefined4 *)(iVar5 * 4 + *(int *)(DAT_0025855c + 0x258450)));
  uVar4 = __fixsfsi();
  piVar3 = *(int **)(this + 0x98);
  (**(code **)(*piVar3 + 0x14))(piVar3,iVar1,uVar4);
  pSVar10 = this;
  do {
    pSVar8 = pSVar10 + 0x9c;
    pSVar9 = pSVar10 + 0x98;
    iVar11 = iVar11 + 1;
    pSVar10 = pSVar10 + 4;
    (**(code **)(**(int **)pSVar8 + 0x14))
              (*(int **)pSVar8,*(int *)(*(int *)pSVar9 + 4) + *(int *)(*(int *)pSVar9 + 0xc) + iVar1
               ,uVar4);
  } while (iVar11 != 7);
  iVar1 = SmDev();
  pSVar10 = this + 0xd4;
  uVar4 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_00258560 + 0x25849e)));
  pSVar9 = this + 0x90;
  *(undefined4 *)pSVar10 = uVar4;
  pSVar8 = this + 0xb4;
  (**(code **)(**(int **)pSVar8 + 0x14))
            (*(int **)pSVar8,uVar4,*(int *)(this + 0x10) - (*(int *)(*(int *)pSVar9 + 0x10) >> 1));
  piVar3 = *(int **)(this + 0xb8);
  (**(code **)(*piVar3 + 0x14))
            (piVar3,*(int *)(*(int *)pSVar9 + 0xc) - *(int *)pSVar10,
             *(undefined4 *)(*(int *)pSVar8 + 8));
  piVar3 = *(int **)(this + 200);
  pcVar7 = *(code **)(*piVar3 + 0x14);
  iVar11 = *(int *)pSVar10;
  iVar5 = *(int *)(*(int *)pSVar8 + 0xc);
  uVar4 = __floatsisf(*(undefined4 *)(this + 0x10));
  iVar1 = SmDev();
  uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_00258564 + 0x25850c)));
  uVar2 = __mulsf3(uVar2,0x41800000);
  __addsf3(uVar4,uVar2);
  uVar2 = __fixsfsi();
  (*pcVar7)(piVar3,iVar11 + iVar5,uVar2);
  piVar3 = *(int **)(this + 200);
  iVar1 = *(int *)(this + 0xb8);
  (**(code **)(*piVar3 + 0x18))
            (piVar3,(*(int *)(iVar1 + 4) - *(int *)(iVar1 + 0xc)) - piVar3[1],
             *(int *)(*(int *)pSVar9 + 0x10) - *(int *)pSVar10);
  return;
}


