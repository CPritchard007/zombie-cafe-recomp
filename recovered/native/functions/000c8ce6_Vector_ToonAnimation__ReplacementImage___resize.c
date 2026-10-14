/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8ce6 Vector<ToonAnimation::ReplacementImage>::resize */

/* Vector<ToonAnimation::ReplacementImage>::resize(int, int) */

void __thiscall
Vector<ToonAnimation::ReplacementImage>::resize
          (Vector<ToonAnimation::ReplacementImage> *this,int param_1,int param_2)

{
  void *__s;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  int local_20;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  if (*(int *)(this + 4) < param_2) {
    param_2 = -1;
  }
  __s = operator_new__(param_1 * 0x14);
  memset(__s,0,param_1 * 0x14);
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
      puVar3[3] = puVar2[3];
      puVar3[4] = uVar4;
      iVar1 = iVar1 + 0x14;
    }
  }
  else {
    iVar1 = local_20;
    if (param_1 < local_20) {
      *(int *)(this + 4) = param_1 + -1;
      iVar1 = param_1;
    }
    local_2c = 0;
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
      puVar2 = (undefined4 *)(*(int *)(this + 8) + local_2c);
      puVar3 = (undefined4 *)((int)__s + local_2c);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      uVar4 = puVar2[4];
      puVar3[3] = puVar2[3];
      puVar3[4] = uVar4;
      local_2c = local_2c + 0x14;
    }
    iVar6 = param_2 * 0x14;
    for (iVar7 = 0; iVar7 < iVar1 - param_2; iVar7 = iVar7 + 1) {
      puVar2 = (undefined4 *)(*(int *)(this + 8) + iVar6);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      *(undefined4 *)((int)__s + iVar6 + 0x14) = *puVar2;
      *(undefined4 *)((int)__s + iVar6 + 0x18) = uVar4;
      *(undefined4 *)((int)__s + iVar6 + 0x1c) = uVar5;
      uVar4 = puVar2[4];
      *(undefined4 *)((int)__s + iVar6 + 0x20) = puVar2[3];
      *(undefined4 *)((int)__s + iVar6 + 0x24) = uVar4;
      iVar6 = iVar6 + 0x14;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(int *)this = param_1;
  *(void **)(this + 8) = __s;
  return;
}


