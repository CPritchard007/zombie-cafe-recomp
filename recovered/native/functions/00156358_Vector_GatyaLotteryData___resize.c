/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00156358 Vector<GatyaLotteryData>::resize */

/* Vector<GatyaLotteryData>::resize(int, int) */

undefined8 __thiscall
Vector<GatyaLotteryData>::resize(Vector<GatyaLotteryData> *this,int param_1,int param_2)

{
  void *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Vector<GatyaLotteryData> *local_20;
  int local_1c;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  local_1c = param_2;
  if (*(int *)(this + 4) < param_2) {
    local_1c = -1;
  }
  __s = operator_new__(param_1 * 8);
  memset(__s,0,param_1 * 8);
  if (local_1c == -1) {
    iVar2 = *(int *)(this + 4) + 1;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    iVar4 = 0;
    for (iVar3 = 0; local_20 = this, iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar1 = *(int *)(this + 8);
      *(undefined4 *)((int)__s + iVar4) = *(undefined4 *)(iVar1 + iVar4);
      *(undefined4 *)((int)__s + iVar4 + 4) = *(undefined4 *)(iVar1 + iVar4 + 4);
      iVar4 = iVar4 + 8;
    }
  }
  else {
    iVar2 = *(int *)(this + 4) + 1;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    local_20 = (Vector<GatyaLotteryData> *)(iVar2 - local_1c);
    iVar2 = 0;
    for (iVar4 = 0; iVar4 < local_1c; iVar4 = iVar4 + 1) {
      iVar3 = *(int *)(this + 8);
      *(undefined4 *)((int)__s + iVar2) = *(undefined4 *)(iVar3 + iVar2);
      *(undefined4 *)((int)__s + iVar2 + 4) = *(undefined4 *)(iVar3 + iVar2 + 4);
      iVar2 = iVar2 + 8;
    }
    iVar2 = local_1c << 3;
    for (iVar4 = 0; iVar4 < (int)local_20; iVar4 = iVar4 + 1) {
      iVar3 = *(int *)(this + 8);
      *(undefined4 *)((int)__s + iVar2 + 8) = *(undefined4 *)(iVar3 + iVar2);
      *(undefined4 *)((int)__s + iVar2 + 0xc) = *(undefined4 *)(iVar3 + iVar2 + 4);
      iVar2 = iVar2 + 8;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(void **)(this + 8) = __s;
  *(int *)this = param_1;
  return CONCAT44(local_1c,local_20);
}


