/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ddebc Vector<HudElement::NewIndicator>::resize */

/* Vector<HudElement::NewIndicator>::resize(int, int) */

undefined8 __thiscall
Vector<HudElement::NewIndicator>::resize
          (Vector<HudElement::NewIndicator> *this,int param_1,int param_2)

{
  undefined4 *__s;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_1c;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  if (*(int *)(this + 4) < param_2) {
    param_2 = -1;
  }
  __s = (undefined4 *)operator_new__(param_1 * 0xc);
  iVar2 = 0;
  puVar1 = __s;
  do {
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
  } while (iVar2 != param_1);
  memset(__s,0,param_1 * 0xc);
  if (param_2 == -1) {
    local_1c = *(int *)(this + 4) + 1;
    if (param_1 < local_1c) {
      *(int *)(this + 4) = param_1 + -1;
      local_1c = param_1;
    }
    iVar4 = 0;
    for (iVar2 = 0; iVar2 < local_1c; iVar2 = iVar2 + 1) {
      puVar3 = (undefined4 *)((int)__s + iVar4);
      puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar4);
      iVar4 = iVar4 + 0xc;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
    }
  }
  else {
    local_1c = *(int *)(this + 4) + 1;
    if (param_1 < local_1c) {
      *(int *)(this + 4) = param_1 + -1;
      local_1c = param_1;
    }
    local_1c = local_1c - param_2;
    iVar4 = 0;
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
      puVar3 = (undefined4 *)((int)__s + iVar4);
      puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar4);
      iVar4 = iVar4 + 0xc;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
    }
    iVar2 = param_2 * 0xc;
    for (iVar4 = 0; iVar4 < local_1c; iVar4 = iVar4 + 1) {
      puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2);
      *(undefined4 *)((int)__s + iVar2 + 0xc) = *puVar1;
      *(undefined4 *)((int)__s + iVar2 + 0x10) = puVar1[1];
      *(undefined4 *)((int)__s + iVar2 + 0x14) = puVar1[2];
      iVar2 = iVar2 + 0xc;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(undefined4 **)(this + 8) = __s;
  *(int *)this = param_1;
  return CONCAT44(local_1c,this);
}


