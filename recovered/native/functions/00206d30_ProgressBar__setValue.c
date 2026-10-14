/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00206d30 ProgressBar::setValue */

/* ProgressBar::setValue(int, bool) */

undefined8 __thiscall ProgressBar::setValue(ProgressBar *this,int param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ProgressBar *local_20;
  code *local_1c;
  
  iVar6 = *(int *)(this + 0x6c);
  iVar4 = 0;
  if ((-1 < param_1) && (iVar4 = param_1, iVar6 < param_1)) {
    iVar4 = iVar6;
  }
  *(int *)(this + 0x68) = iVar4;
  local_20 = this;
  local_1c = (code *)param_1;
  if (param_2) {
    piVar5 = *(int **)(this + 0x7c);
    *(int *)(this + 100) = iVar4;
    local_1c = *(code **)(*piVar5 + 0x18);
    iVar1 = CImage::getWidth((CImage *)piVar5[0x19]);
    local_20 = (ProgressBar *)piVar5[0x1a];
    uVar2 = __floatsisf(iVar4 * iVar1);
    uVar2 = __mulsf3(uVar2,local_20);
    uVar3 = __floatsisf(iVar6);
    __divsf3(uVar2,uVar3);
    iVar6 = __fixsfsi();
    iVar4 = 0;
    if (-1 < iVar6) {
      uVar2 = __floatsisf(iVar1);
      __mulsf3(uVar2,local_20);
      iVar1 = __fixsfsi();
      iVar4 = iVar6;
      if (iVar1 < iVar6) {
        iVar4 = iVar1;
      }
    }
    (*local_1c)(piVar5,iVar4,piVar5[4]);
  }
  return CONCAT44(local_1c,local_20);
}


