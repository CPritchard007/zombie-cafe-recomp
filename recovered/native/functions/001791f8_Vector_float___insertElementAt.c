/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001791f8 Vector<float>::insertElementAt */

/* Vector<float>::insertElementAt(float, int) */

float __thiscall Vector<float>::insertElementAt(Vector<float> *this,float param_1,int param_2)

{
  int iVar1;
  int in_r2;
  
  if (-1 < in_r2) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 + 1 < *(int *)this) {
      if (in_r2 <= iVar1) {
        param_1 = (float)FUN_00177eec(this,in_r2,1);
      }
    }
    else {
      param_1 = (float)resize(this,iVar1 << 1,in_r2);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    *(int *)(in_r2 * 4 + *(int *)(this + 8)) = param_2;
  }
  return param_1;
}


