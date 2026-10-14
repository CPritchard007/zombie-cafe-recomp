/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f174 PackagedData::getElementSize */

/* PackagedData::getElementSize(int) const */

int __thiscall PackagedData::getElementSize(PackagedData *this,int param_1)

{
  int iVar1;
  
  if (((*(int *)(this + 4) == 0) || (param_1 < 0)) || (*(int *)(this + 8) <= param_1)) {
    iVar1 = -1;
  }
  else {
    if (param_1 < *(int *)(this + 8) + -1) {
      iVar1 = param_1 * 4 + 6;
    }
    else {
      iVar1 = *(int *)(*(int *)this + 0x18);
    }
    iVar1 = iVar1 - (param_1 * 4 + 2);
  }
  return iVar1;
}


