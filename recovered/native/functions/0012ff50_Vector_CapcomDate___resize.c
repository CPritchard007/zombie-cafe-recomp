/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012ff50 Vector<CapcomDate>::resize */

/* Vector<CapcomDate>::resize(int, int) */

void __thiscall Vector<CapcomDate>::resize(Vector<CapcomDate> *this,int param_1,int param_2)

{
  void *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_24;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  if (*(int *)(this + 4) < param_2) {
    param_2 = -1;
  }
  __s = operator_new__(param_1 * 8);
  memset(__s,0,param_1 * 8);
  local_24 = __s;
  if (param_2 == -1) {
    iVar3 = *(int *)(this + 4) + 1;
    if (param_1 < iVar3) {
      *(int *)(this + 4) = param_1 + -1;
      iVar3 = param_1;
    }
    for (iVar1 = 0; iVar1 < iVar3; iVar1 = iVar1 + 1) {
      memcpy(local_24,(void *)(*(int *)(this + 8) + iVar1 * 8),7);
      local_24 = (void *)((int)local_24 + 8);
    }
  }
  else {
    iVar3 = *(int *)(this + 4) + 1;
    if (param_1 < iVar3) {
      *(int *)(this + 4) = param_1 + -1;
      iVar3 = param_1;
    }
    for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
      memcpy(local_24,(void *)(*(int *)(this + 8) + iVar1 * 8),7);
      local_24 = (void *)((int)local_24 + 8);
    }
    iVar1 = param_2 << 3;
    for (iVar2 = 0; iVar2 < iVar3 - param_2; iVar2 = iVar2 + 1) {
      memcpy((void *)((int)__s + iVar1 + 8),(void *)(*(int *)(this + 8) + iVar1),7);
      iVar1 = iVar1 + 8;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(int *)this = param_1;
  *(void **)(this + 8) = __s;
  return;
}


