/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024846c Vector<ZombieCafe::ZombieDlcEntry>::resize */

/* Vector<ZombieCafe::ZombieDlcEntry>::resize(int, int) */

void __thiscall
Vector<ZombieCafe::ZombieDlcEntry>::resize
          (Vector<ZombieCafe::ZombieDlcEntry> *this,int param_1,int param_2)

{
  void *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  if (*(int *)(this + 4) < param_2) {
    param_2 = -1;
  }
  __s = operator_new__(param_1 * 0x5d8);
  memset(__s,0,param_1 * 0x5d8);
  if (param_2 == -1) {
    iVar2 = *(int *)(this + 4) + 1;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    iVar1 = 0;
    for (local_24 = 0; local_24 < iVar2; local_24 = local_24 + 1) {
      memcpy((void *)((int)__s + iVar1),(void *)(*(int *)(this + 8) + iVar1),0x5d8);
      iVar1 = iVar1 + 0x5d8;
    }
  }
  else {
    iVar2 = *(int *)(this + 4) + 1;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    iVar1 = 0;
    for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
      memcpy((void *)((int)__s + iVar1),(void *)(*(int *)(this + 8) + iVar1),0x5d8);
      iVar1 = iVar1 + 0x5d8;
    }
    iVar3 = param_2 * 0x5d8;
    for (iVar1 = 0; iVar1 < iVar2 - param_2; iVar1 = iVar1 + 1) {
      memcpy((void *)((int)__s + iVar3 + 0x5d8),(void *)(*(int *)(this + 8) + iVar3),0x5d8);
      iVar3 = iVar3 + 0x5d8;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(int *)this = param_1;
  *(void **)(this + 8) = __s;
  return;
}


