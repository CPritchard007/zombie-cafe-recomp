/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a1a54 Vector<float>::addElement */

/* Vector<float>::addElement(float) */

float __thiscall Vector<float>::addElement(Vector<float> *this,float param_1)

{
  undefined4 in_r1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 4) + 2;
  if (*(int *)this < iVar2) {
    iVar1 = *(int *)this * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    param_1 = (float)resize(this,iVar1,-1);
  }
  iVar2 = *(int *)(this + 4);
  *(int *)(this + 4) = iVar2 + 1;
  *(undefined4 *)((iVar2 + 1) * 4 + *(int *)(this + 8)) = in_r1;
  return param_1;
}


