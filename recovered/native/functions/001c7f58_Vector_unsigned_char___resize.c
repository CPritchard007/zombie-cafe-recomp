/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c7f58 Vector<unsigned_char>::resize */

/* Vector<unsigned char>::resize(int, int) */

undefined8 __thiscall
Vector<unsigned_char>::resize(Vector<unsigned_char> *this,int param_1,int param_2)

{
  void *__s;
  uint uVar1;
  int iVar2;
  uint __n;
  int local_1c;
  
  __n = param_1;
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    __n = 1;
  }
  if (*(int *)(this + 4) < param_2) {
    param_2 = -1;
  }
  __s = operator_new__(__n);
  memset(__s,0,__n);
  if (param_2 == -1) {
    uVar1 = *(int *)(this + 4) + 1;
    if ((int)__n < (int)uVar1) {
      *(uint *)(this + 4) = __n - 1;
      uVar1 = __n;
    }
    for (iVar2 = 0; local_1c = param_1, iVar2 < (int)uVar1; iVar2 = iVar2 + 1) {
      *(undefined1 *)((int)__s + iVar2) = *(undefined1 *)(*(int *)(this + 8) + iVar2);
    }
  }
  else {
    uVar1 = *(int *)(this + 4) + 1;
    if ((int)__n < (int)uVar1) {
      *(uint *)(this + 4) = __n - 1;
      uVar1 = __n;
    }
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
      *(undefined1 *)((int)__s + iVar2) = *(undefined1 *)(*(int *)(this + 8) + iVar2);
    }
    local_1c = (int)__s + param_2;
    for (iVar2 = 0; iVar2 < (int)(uVar1 - param_2); iVar2 = iVar2 + 1) {
      *(undefined1 *)(local_1c + iVar2 + 1) = *(undefined1 *)(*(int *)(this + 8) + param_2 + iVar2);
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(void **)(this + 8) = __s;
  *(uint *)this = __n;
  return CONCAT44(local_1c,this);
}


