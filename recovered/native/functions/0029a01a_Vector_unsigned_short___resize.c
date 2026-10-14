/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a01a Vector<unsigned_short>::resize */

/* Vector<unsigned short>::resize(int, int) */

undefined8 __thiscall
Vector<unsigned_short>::resize(Vector<unsigned_short> *this,int param_1,int param_2)

{
  void *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  if (*(int *)(this + 4) < param_2) {
    param_2 = -1;
  }
  __s = operator_new__(param_1 * 2);
  memset(__s,0,param_1 * 2);
  if (param_2 == -1) {
    iVar1 = *(int *)(this + 4) + 1;
    if (param_1 < iVar1) {
      *(int *)(this + 4) = param_1 + -1;
      iVar1 = param_1;
    }
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      *(undefined2 *)((int)__s + iVar3) = *(undefined2 *)(*(int *)(this + 8) + iVar3);
      iVar3 = iVar3 + 2;
    }
  }
  else {
    iVar1 = *(int *)(this + 4) + 1;
    if (param_1 < iVar1) {
      *(int *)(this + 4) = param_1 + -1;
      iVar1 = param_1;
    }
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
      *(undefined2 *)((int)__s + iVar3) = *(undefined2 *)(*(int *)(this + 8) + iVar3);
      iVar3 = iVar3 + 2;
    }
    iVar2 = param_2 << 1;
    for (iVar3 = 0; iVar3 < iVar1 - param_2; iVar3 = iVar3 + 1) {
      *(undefined2 *)((int)__s + iVar2 + 2) = *(undefined2 *)(*(int *)(this + 8) + iVar2);
      iVar2 = iVar2 + 2;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(int *)this = param_1;
  *(void **)(this + 8) = __s;
  return CONCAT44(__s,this);
}


