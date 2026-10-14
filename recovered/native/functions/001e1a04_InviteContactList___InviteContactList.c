/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e1a04 InviteContactList::~InviteContactList */

/* InviteContactList::~InviteContactList() */

InviteContactList * __thiscall InviteContactList::~InviteContactList(InviteContactList *this)

{
  int *piVar1;
  Vector<String> *pVVar2;
  
  *(int *)this = *(int *)(DAT_001e1bc4 + 0x1e1a10) + 8;
  while (-1 < *(int *)(this + 0xa8)) {
    piVar1 = (int *)Vector<FriendContact*>::removeElementAt
                              ((Vector<FriendContact*> *)(this + 0xa4),0);
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 4))();
    }
    if ((int *)piVar1[1] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[1] + 4))();
    }
    pVVar2 = (Vector<String> *)piVar1[8];
    if (pVVar2 != (Vector<String> *)0x0) {
      Vector<String>::~Vector(pVVar2);
      operator_delete(pVVar2);
    }
    pVVar2 = (Vector<String> *)piVar1[9];
    if (pVVar2 != (Vector<String> *)0x0) {
      Vector<String>::~Vector(pVVar2);
      operator_delete(pVVar2);
    }
    pVVar2 = (Vector<String> *)piVar1[10];
    if (pVVar2 != (Vector<String> *)0x0) {
      Vector<String>::~Vector(pVVar2);
      operator_delete(pVVar2);
    }
    pVVar2 = (Vector<String> *)piVar1[0xb];
    if (pVVar2 != (Vector<String> *)0x0) {
      Vector<String>::~Vector(pVVar2);
      operator_delete(pVVar2);
    }
    String::~String((String *)(piVar1 + 4));
    String::~String((String *)(piVar1 + 2));
    operator_delete(piVar1);
  }
  if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
  }
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x80) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x80) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x88) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x88) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x84) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x84) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x8c) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x8c) + 0x60) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  pVVar2 = *(Vector<String> **)(this + 0x60);
  if (pVVar2 != (Vector<String> *)0x0) {
    Vector<String>::~Vector(pVVar2);
    operator_delete(pVVar2);
  }
  if (*(void **)(this + 0xac) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xac));
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  return this;
}


