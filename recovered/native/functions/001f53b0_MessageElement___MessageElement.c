/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f53b0 MessageElement::~MessageElement */

/* MessageElement::~MessageElement() */

void __thiscall MessageElement::~MessageElement(MessageElement *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char acStack_114 [256];
  int local_14;
  
  piVar3 = *(int **)(DAT_001f54c0 + 0x1f53bc);
  local_14 = *piVar3;
  *(int *)this = *(int *)(DAT_001f54c4 + 0x1f53c6) + 8;
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  iVar1 = SmDev();
  if ((iVar1 != 2) && (*(int **)(*(int *)(this + 100) + 100) != (int *)0x0)) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 100) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int *)(this + 0x60) != 0) {
    L_PrintLog((char *)(DAT_001f54c8 + 0x1f5438),(char *)(DAT_001f54cc + 0x1f543a));
    piVar2 = *(int **)(DAT_001f54d0 + 0x1f5444);
    Vector<CImage*>::removeElement
              ((Vector<CImage*> *)*piVar2,*(CImage **)(*(int *)(this + 0x60) + 100));
    if (*(int **)(*(int *)(this + 0x60) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x60) + 100) + 4))();
    }
    if (*(int **)(this + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x60) + 4))();
    }
    *(undefined4 *)(this + 0x60) = 0;
    sprintf(acStack_114,(char *)(DAT_001f54d4 + 0x1f5476),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_001f54d8 + 0x1f5482),acStack_114);
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


