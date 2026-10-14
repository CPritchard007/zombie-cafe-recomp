/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e1bda InviteContactList::loadList */

/* InviteContactList::loadList(bool) */

ulonglong __thiscall InviteContactList::loadList(InviteContactList *this,bool param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  Vector<String> *pVVar3;
  
  while (-1 < *(int *)(this + 0xa8)) {
    puVar1 = (undefined4 *)
             Vector<FriendContact*>::removeElementAt((Vector<FriendContact*> *)(this + 0xa4),0);
    piVar2 = (int *)(**(code **)(**(int **)(this + 0x94) + 0x34))(*(int **)(this + 0x94),*puVar1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    piVar2 = (int *)(**(code **)(**(int **)(this + 0x94) + 0x34))(*(int **)(this + 0x94),puVar1[1]);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    pVVar3 = (Vector<String> *)puVar1[8];
    if (pVVar3 != (Vector<String> *)0x0) {
      Vector<String>::~Vector(pVVar3);
      operator_delete(pVVar3);
    }
    pVVar3 = (Vector<String> *)puVar1[9];
    if (pVVar3 != (Vector<String> *)0x0) {
      Vector<String>::~Vector(pVVar3);
      operator_delete(pVVar3);
    }
    pVVar3 = (Vector<String> *)puVar1[10];
    if (pVVar3 != (Vector<String> *)0x0) {
      Vector<String>::~Vector(pVVar3);
      operator_delete(pVVar3);
    }
    pVVar3 = (Vector<String> *)puVar1[0xb];
    if (pVVar3 != (Vector<String> *)0x0) {
      Vector<String>::~Vector(pVVar3);
      operator_delete(pVVar3);
    }
    String::~String((String *)(puVar1 + 4));
    String::~String((String *)(puVar1 + 2));
    operator_delete(puVar1);
  }
  if (*(int *)(this + 0x60) == 0) {
    pVVar3 = (Vector<String> *)operator_new(0xc);
    Vector<String>::Vector(pVVar3);
    *(Vector<String> **)(this + 0x60) = pVVar3;
  }
  else {
    *(undefined4 *)(*(int *)(this + 0x60) + 4) = 0xffffffff;
  }
  this[0x68] = (InviteContactList)param_1;
  layout(this);
  return (ulonglong)CONCAT14(param_1,this);
}


