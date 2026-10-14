/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001561c0 Vector<EftKeyData>::resize */

/* Vector<EftKeyData>::resize(int, int) */

void __thiscall Vector<EftKeyData>::resize(Vector<EftKeyData> *this,int param_1,int param_2)

{
  void *__s;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_20;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  if (*(int *)(this + 4) < param_2) {
    param_2 = -1;
  }
  __s = operator_new__(param_1 * 0x28);
  memset(__s,0,param_1 * 0x28);
  local_20 = *(int *)(this + 4) + 1;
  if (param_2 == -1) {
    if (param_1 < local_20) {
      *(int *)(this + 4) = param_1 + -1;
      local_20 = param_1;
    }
    iVar1 = 0;
    for (iVar6 = 0; iVar6 < local_20; iVar6 = iVar6 + 1) {
      puVar2 = (undefined4 *)(*(int *)(this + 8) + iVar1);
      puVar3 = (undefined4 *)((int)__s + iVar1);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      uVar4 = puVar2[4];
      uVar5 = puVar2[5];
      puVar3[3] = puVar2[3];
      puVar3[4] = uVar4;
      puVar3[5] = uVar5;
      uVar4 = puVar2[7];
      uVar5 = puVar2[8];
      puVar3[6] = puVar2[6];
      puVar3[7] = uVar4;
      puVar3[8] = uVar5;
      puVar3[9] = puVar2[9];
      iVar1 = iVar1 + 0x28;
    }
  }
  else {
    iVar1 = local_20;
    if (param_1 < local_20) {
      *(int *)(this + 4) = param_1 + -1;
      iVar1 = param_1;
    }
    iVar6 = 0;
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
      puVar2 = (undefined4 *)(*(int *)(this + 8) + iVar6);
      puVar3 = (undefined4 *)((int)__s + iVar6);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      uVar4 = puVar2[4];
      uVar5 = puVar2[5];
      puVar3[3] = puVar2[3];
      puVar3[4] = uVar4;
      puVar3[5] = uVar5;
      uVar4 = puVar2[7];
      uVar5 = puVar2[8];
      puVar3[6] = puVar2[6];
      puVar3[7] = uVar4;
      puVar3[8] = uVar5;
      puVar3[9] = puVar2[9];
      iVar6 = iVar6 + 0x28;
    }
    iVar6 = param_2 * 0x28;
    for (iVar7 = 0; iVar7 < iVar1 - param_2; iVar7 = iVar7 + 1) {
      puVar2 = (undefined4 *)(*(int *)(this + 8) + iVar6);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      *(undefined4 *)((int)__s + iVar6 + 0x28) = *puVar2;
      *(undefined4 *)((int)__s + iVar6 + 0x2c) = uVar4;
      *(undefined4 *)((int)__s + iVar6 + 0x30) = uVar5;
      uVar4 = puVar2[4];
      uVar5 = puVar2[5];
      *(undefined4 *)((int)__s + iVar6 + 0x34) = puVar2[3];
      *(undefined4 *)((int)__s + iVar6 + 0x38) = uVar4;
      *(undefined4 *)((int)__s + iVar6 + 0x3c) = uVar5;
      uVar4 = puVar2[7];
      uVar5 = puVar2[8];
      *(undefined4 *)((int)__s + iVar6 + 0x40) = puVar2[6];
      *(undefined4 *)((int)__s + iVar6 + 0x44) = uVar4;
      *(undefined4 *)((int)__s + iVar6 + 0x48) = uVar5;
      *(undefined4 *)((int)__s + iVar6 + 0x4c) = puVar2[9];
      iVar6 = iVar6 + 0x28;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(int *)this = param_1;
  *(void **)(this + 8) = __s;
  return;
}


