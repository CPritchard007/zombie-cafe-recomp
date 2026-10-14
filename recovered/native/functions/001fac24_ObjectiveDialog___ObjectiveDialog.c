/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fac24 ObjectiveDialog::~ObjectiveDialog */

/* ObjectiveDialog::~ObjectiveDialog() */

ObjectiveDialog * __thiscall ObjectiveDialog::~ObjectiveDialog(ObjectiveDialog *this)

{
  int *piVar1;
  int iVar2;
  
  *(int *)this = *(int *)(DAT_001faeb8 + 0x1fac2e) + 8;
  if (*(int **)(*(int *)(this + 100) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 100) + 100) + 4))();
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xe0) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xe0) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xe0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xe4) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xe4) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xe4) + 4))();
  }
  if (*(int **)(this + 0xd4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd4) + 4))();
  }
  if (*(int **)(this + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xb8) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x7c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 100) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x13c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x13c) + 4))();
  }
  if (*(int **)(this + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xc4) + 4))();
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 4))();
  }
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x70) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x70) + 100) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
  }
  if (*(int **)(this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x68) + 4))();
  }
  if (*(int **)(this + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xbc) + 4))();
  }
  iVar2 = 0;
  do {
    if (*(int **)(this + iVar2 + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar2 + 0xa0) + 4))();
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0xc);
  while (-1 < *(int *)(this + 0xf8)) {
    piVar1 = (int *)Vector<BitmapTextElement*>::removeElementAt
                              ((Vector<BitmapTextElement*> *)(this + 0xf4),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x104)) {
    piVar1 = (int *)Vector<ProgressBar*>::removeElementAt((Vector<ProgressBar*> *)(this + 0x100),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x110)) {
    piVar1 = (int *)Vector<BitmapTextElement*>::removeElementAt
                              ((Vector<BitmapTextElement*> *)(this + 0x10c),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x11c)) {
    piVar1 = (int *)Vector<ImageElement*>::removeElementAt
                              ((Vector<ImageElement*> *)(this + 0x118),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x128)) {
    piVar1 = (int *)Vector<ImageElement*>::removeElementAt
                              ((Vector<ImageElement*> *)(this + 0x124),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  while (-1 < *(int *)(this + 0x134)) {
    piVar1 = (int *)Vector<ZCImageButton*>::removeElementAt
                              ((Vector<ZCImageButton*> *)(this + 0x130),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  if (*(int **)(this + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd8) + 4))();
  }
  free(*(void **)(this + 0x164));
  if (*(void **)(this + 0x138) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x138));
  }
  Vector<ImageElement*>::~Vector((Vector<ImageElement*> *)(this + 0x124));
  Vector<ImageElement*>::~Vector((Vector<ImageElement*> *)(this + 0x118));
  Vector<BitmapTextElement*>::~Vector((Vector<BitmapTextElement*> *)(this + 0x10c));
  if (*(void **)(this + 0x108) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x108));
  }
  Vector<BitmapTextElement*>::~Vector((Vector<BitmapTextElement*> *)(this + 0xf4));
  if (*(void **)(this + 0xf0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xf0));
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


