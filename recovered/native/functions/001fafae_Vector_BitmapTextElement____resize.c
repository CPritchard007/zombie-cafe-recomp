/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fafae Vector<BitmapTextElement*>::resize */

/* Vector<BitmapTextElement*>::resize(int, int) */

undefined8 __thiscall
Vector<BitmapTextElement*>::resize(Vector<BitmapTextElement*> *this,int param_1,int param_2)

{
  undefined4 *__s;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  if (*(int *)(this + 4) < param_2) {
    param_2 = -1;
  }
  __s = (undefined4 *)operator_new__(param_1 * 4);
  memset(__s,0,param_1 * 4);
  if (param_2 == -1) {
    iVar2 = *(int *)(this + 4) + 1;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    puVar1 = __s;
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      *puVar1 = *(undefined4 *)(iVar3 * 4 + *(int *)(this + 8));
      puVar1 = puVar1 + 1;
    }
  }
  else {
    iVar2 = *(int *)(this + 4) + 1;
    if (param_1 < iVar2) {
      *(int *)(this + 4) = param_1 + -1;
      iVar2 = param_1;
    }
    puVar1 = __s;
    for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
      *puVar1 = *(undefined4 *)(iVar3 * 4 + *(int *)(this + 8));
      puVar1 = puVar1 + 1;
    }
    iVar3 = param_2 << 2;
    for (iVar4 = 0; iVar4 < iVar2 - param_2; iVar4 = iVar4 + 1) {
      *(undefined4 *)((int)__s + iVar3 + 4) = *(undefined4 *)(*(int *)(this + 8) + iVar3);
      iVar3 = iVar3 + 4;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(int *)this = param_1;
  *(undefined4 **)(this + 8) = __s;
  return CONCAT44(__s,this);
}


