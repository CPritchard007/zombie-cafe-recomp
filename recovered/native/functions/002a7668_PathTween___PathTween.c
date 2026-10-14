/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7668 PathTween::~PathTween */

/* PathTween::~PathTween() */

PathTween * __thiscall PathTween::~PathTween(PathTween *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_002a76a4 + 0x2a7678);
  *(int *)this = *(int *)(DAT_002a76a0 + 0x2a7674) + 8;
  if (*(ccPath **)(this + 0xc) != (ccPath *)0x0) {
    CCPath::Free(*(ccPath **)(this + 0xc));
    operator_delete(*(void **)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(int *)this = iVar1 + 8;
  return this;
}


