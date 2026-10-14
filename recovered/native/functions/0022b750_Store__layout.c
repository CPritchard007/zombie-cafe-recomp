/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022b750 Store::layout */

/* Store::layout() */

void __thiscall Store::layout(Store *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  Store *pSVar6;
  Store *pSVar7;
  code *pcVar8;
  Store *pSVar9;
  int iVar10;
  
  iVar1 = SmDev();
  if ((iVar1 == 0) || (iVar1 = SmDev(), iVar1 == 5)) {
    iVar1 = *(int *)(this + 0x88);
    piVar4 = *(int **)(this + 0x84);
    *(int *)(this + 0xc) = piVar4[3] + (*(int *)(iVar1 + 0xc) >> 1);
    *(int *)(this + 0x10) = piVar4[4] + *(int *)(iVar1 + 0x10);
    (**(code **)(*piVar4 + 0x14))(piVar4,0);
    piVar4 = *(int **)(this + 0x88);
    iVar1 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)(this + 0x84),
                       *(int *)(*(ScreenElement **)(this + 0x84) + 0xc),0);
    sVar5 = (short)iVar1;
    pcVar8 = *(code **)(*piVar4 + 0x14);
  }
  else {
    piVar4 = *(int **)(this + 0x84);
    *(int *)(this + 0xc) = piVar4[3];
    *(int *)(this + 0x10) = piVar4[4] + *(int *)(*(int *)(this + 0x88) + 0x10);
    (**(code **)(*piVar4 + 0x14))(piVar4,0);
    piVar4 = *(int **)(this + 0x88);
    iVar1 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)(this + 0x84),
                       *(int *)(*(ScreenElement **)(this + 0x84) + 0xc) - (piVar4[3] >> 1),0);
    sVar5 = (short)iVar1;
    pcVar8 = *(code **)(*piVar4 + 0x14);
  }
  (*pcVar8)(piVar4,iVar1 >> 0x10,(int)sVar5);
  uVar2 = __floatsisf(*(int *)(*(int *)(this + 0x8c) + 0xc) >> 3);
  iVar1 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0022b924 + 0x22b7c6)));
  iVar1 = __fixsfsi();
  uVar2 = __floatsisf(*(int *)(this + 0x10) - *(int *)(*(int *)(this + 0x84) + 0x10));
  iVar3 = SmDev();
  iVar10 = 1;
  __addsf3(uVar2,*(undefined4 *)(iVar3 * 4 + *(int *)(DAT_0022b928 + 0x22b7f2)));
  uVar2 = __fixsfsi();
  piVar4 = *(int **)(this + 0x8c);
  (**(code **)(*piVar4 + 0x14))(piVar4,iVar1,uVar2);
  pSVar9 = this;
  do {
    pSVar6 = pSVar9 + 0x90;
    pSVar7 = pSVar9 + 0x8c;
    iVar10 = iVar10 + 1;
    pSVar9 = pSVar9 + 4;
    (**(code **)(**(int **)pSVar6 + 0x14))
              (*(int **)pSVar6,*(int *)(*(int *)pSVar7 + 4) + *(int *)(*(int *)pSVar7 + 0xc) + iVar1
               ,uVar2);
  } while (iVar10 != 7);
  iVar1 = SmDev();
  pSVar9 = this + 0xc0;
  uVar2 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0022b92c + 0x22b840)));
  *(undefined4 *)pSVar9 = uVar2;
  pSVar6 = this + 0xa8;
  (**(code **)(**(int **)pSVar6 + 0x14))
            (*(int **)pSVar6,uVar2,
             *(int *)(this + 0x10) - (*(int *)(*(int *)(this + 0x84) + 0x10) >> 1));
  piVar4 = *(int **)(this + 0xac);
  (**(code **)(*piVar4 + 0x14))
            (piVar4,*(int *)(*(int *)(this + 0x84) + 0xc) - *(int *)pSVar9,
             *(undefined4 *)(*(int *)pSVar6 + 8));
  piVar4 = *(int **)(this + 0xb4);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar10 = *(int *)pSVar9;
  iVar3 = *(int *)(*(int *)pSVar6 + 0xc);
  uVar2 = __floatsisf(*(undefined4 *)(this + 0x10));
  iVar1 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_0022b930 + 0x22b8ae)));
  uVar2 = __fixsfsi();
  (*pcVar8)(piVar4,iVar10 + iVar3,uVar2);
  piVar4 = *(int **)(this + 0xb4);
  iVar1 = *(int *)(this + 0xac);
  (**(code **)(*piVar4 + 0x18))
            (piVar4,(*(int *)(iVar1 + 4) - *(int *)(iVar1 + 0xc)) - piVar4[1],
             *(int *)(*(int *)(this + 0x84) + 0x10) - *(int *)pSVar9);
  return;
}


