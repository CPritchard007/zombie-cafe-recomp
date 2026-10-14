/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299fda Vector<float>::copyInto */

/* Vector<float>::copyInto(float const*, int) */

void __thiscall Vector<float>::copyInto(Vector<float> *this,float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  iVar1 = *(int *)(this + 4) + 1 + param_2;
  if (iVar2 < iVar1) {
    if (iVar1 + iVar2 * -2 < 0 != SBORROW4(iVar1,iVar2 * 2)) {
      iVar1 = iVar2 * 2;
    }
    resize(this,iVar1,-1);
  }
  memcpy((void *)(*(int *)(this + 8) + (*(int *)(this + 4) + 1) * 4),param_1,param_2 << 2);
  *(int *)(this + 4) = *(int *)(this + 4) + param_2;
  return;
}


