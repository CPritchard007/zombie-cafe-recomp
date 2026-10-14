/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c97d8 Vector<CharacterData::ReplacementImageWithForm>::resize */

/* Vector<CharacterData::ReplacementImageWithForm>::resize(int, int) */

void __thiscall
Vector<CharacterData::ReplacementImageWithForm>::resize
          (Vector<CharacterData::ReplacementImageWithForm> *this,int param_1,int param_2)

{
  void *__s;
  void *pvVar1;
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
  __s = operator_new__(param_1 * 0x18);
  memset(__s,0,param_1 * 0x18);
  if (param_2 == -1) {
    iVar4 = *(int *)(this + 4) + 1;
    if (param_1 < iVar4) {
      *(int *)(this + 4) = param_1 + -1;
      iVar4 = param_1;
    }
    pvVar1 = __s;
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
      memcpy(pvVar1,(void *)(*(int *)(this + 8) + iVar2 * 0x18),0x15);
      pvVar1 = (void *)((int)pvVar1 + 0x18);
    }
  }
  else {
    iVar4 = *(int *)(this + 4) + 1;
    if (param_1 < iVar4) {
      *(int *)(this + 4) = param_1 + -1;
      iVar4 = param_1;
    }
    pvVar1 = __s;
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
      memcpy(pvVar1,(void *)(*(int *)(this + 8) + iVar2 * 0x18),0x15);
      pvVar1 = (void *)((int)pvVar1 + 0x18);
    }
    iVar2 = param_2 * 0x18;
    for (iVar3 = 0; iVar3 < iVar4 - param_2; iVar3 = iVar3 + 1) {
      memcpy((void *)((int)__s + iVar2 + 0x18),(void *)(*(int *)(this + 8) + iVar2),0x15);
      iVar2 = iVar2 + 0x18;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(int *)this = param_1;
  *(void **)(this + 8) = __s;
  return;
}


