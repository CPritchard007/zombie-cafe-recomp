/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012c184 Vector<RecipeAndVariant>::resize */

/* Vector<RecipeAndVariant>::resize(int, int) */

undefined8 __thiscall
Vector<RecipeAndVariant>::resize(Vector<RecipeAndVariant> *this,int param_1,int param_2)

{
  void *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Vector<RecipeAndVariant> *local_20;
  int local_1c;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  local_1c = param_2;
  if (*(int *)(this + 4) < param_2) {
    local_1c = -1;
  }
  __s = operator_new__(param_1 * 2);
  memset(__s,0,param_1 * 2);
  if (local_1c == -1) {
    iVar2 = *(int *)(this + 4) + 1;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    iVar4 = 0;
    for (iVar3 = 0; local_20 = this, iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar1 = *(int *)(this + 8);
      *(undefined1 *)((int)__s + iVar4) = *(undefined1 *)(iVar1 + iVar4);
      *(undefined1 *)((int)__s + iVar4 + 1) = *(undefined1 *)(iVar1 + iVar4 + 1);
      iVar4 = iVar4 + 2;
    }
  }
  else {
    iVar2 = *(int *)(this + 4) + 1;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    local_20 = (Vector<RecipeAndVariant> *)(iVar2 - local_1c);
    iVar2 = 0;
    for (iVar4 = 0; iVar4 < local_1c; iVar4 = iVar4 + 1) {
      iVar3 = *(int *)(this + 8);
      *(undefined1 *)((int)__s + iVar2) = *(undefined1 *)(iVar3 + iVar2);
      *(undefined1 *)((int)__s + iVar2 + 1) = *(undefined1 *)(iVar3 + iVar2 + 1);
      iVar2 = iVar2 + 2;
    }
    iVar2 = local_1c << 1;
    for (iVar4 = 0; iVar4 < (int)local_20; iVar4 = iVar4 + 1) {
      iVar3 = *(int *)(this + 8);
      *(undefined1 *)((int)__s + iVar2 + 2) = *(undefined1 *)(iVar3 + iVar2);
      *(undefined1 *)((int)__s + iVar2 + 3) = *(undefined1 *)(iVar3 + iVar2 + 1);
      iVar2 = iVar2 + 2;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(void **)(this + 8) = __s;
  *(int *)this = param_1;
  return CONCAT44(local_1c,local_20);
}


