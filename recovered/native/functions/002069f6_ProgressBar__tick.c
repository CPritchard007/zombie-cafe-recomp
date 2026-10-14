/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002069f6 ProgressBar::tick */

/* ProgressBar::tick(long) */

undefined8 __thiscall ProgressBar::tick(ProgressBar *this,long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ProgressBar *local_20;
  long local_1c;
  
  iVar4 = *(int *)(this + 0x68);
  iVar3 = *(int *)(this + 100);
  if (iVar3 < iVar4) {
    *(int *)(this + 100) = iVar3 + 10;
    if (iVar4 < iVar3 + 10) {
LAB_00206a18:
      *(int *)(this + 100) = iVar4;
    }
  }
  else {
    local_20 = this;
    local_1c = param_1;
    if (iVar3 <= iVar4) goto LAB_00206a76;
    *(int *)(this + 100) = iVar3 + -10;
    if (iVar3 + -10 < iVar4) goto LAB_00206a18;
  }
  piVar5 = *(int **)(this + 0x7c);
  local_20 = *(ProgressBar **)(*piVar5 + 0x18);
  iVar4 = CImage::getWidth((CImage *)piVar5[0x19]);
  iVar6 = piVar5[0x1a];
  uVar1 = __floatsisf(iVar4 * *(int *)(this + 100));
  local_1c = __mulsf3(uVar1,iVar6);
  uVar1 = __floatsisf(*(undefined4 *)(this + 0x6c));
  __divsf3(local_1c,uVar1);
  iVar2 = __fixsfsi();
  iVar3 = 0;
  if (-1 < iVar2) {
    uVar1 = __floatsisf(iVar4);
    __mulsf3(uVar1,iVar6);
    iVar4 = __fixsfsi();
    iVar3 = iVar2;
    if (iVar4 < iVar2) {
      iVar3 = iVar4;
    }
  }
  (*(code *)local_20)(piVar5,iVar3,piVar5[4]);
LAB_00206a76:
  return CONCAT44(local_1c,local_20);
}


