/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00206daa ProgressBar::setMaximumValue */

/* ProgressBar::setMaximumValue(int) */

undefined8 __thiscall ProgressBar::setMaximumValue(ProgressBar *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  
  if (param_1 < 1) {
    param_1 = 1;
  }
  piVar8 = *(int **)(this + 0x7c);
  *(int *)(this + 0x6c) = param_1;
  pcVar6 = *(code **)(*piVar8 + 0x18);
  iVar1 = CImage::getWidth((CImage *)piVar8[0x19]);
  iVar7 = piVar8[0x1a];
  uVar2 = __floatsisf(iVar1 * *(int *)(this + 100));
  uVar2 = __mulsf3(uVar2,iVar7);
  uVar3 = __floatsisf(param_1);
  __divsf3(uVar2,uVar3);
  iVar4 = __fixsfsi();
  iVar5 = 0;
  if (-1 < iVar4) {
    uVar2 = __floatsisf(iVar1);
    __mulsf3(uVar2,iVar7);
    iVar1 = __fixsfsi();
    iVar5 = iVar4;
    if (iVar1 < iVar4) {
      iVar5 = iVar1;
    }
  }
  (*pcVar6)(piVar8,iVar5,piVar8[4]);
  return CONCAT44(pcVar6,iVar7);
}


