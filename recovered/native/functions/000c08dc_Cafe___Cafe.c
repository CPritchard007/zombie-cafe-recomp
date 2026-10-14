/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c08dc Cafe::~Cafe */

/* Cafe::~Cafe() */

Cafe * __thiscall Cafe::~Cafe(Cafe *this)

{
  CharacterInstance *this_00;
  void *pvVar1;
  CapcomOrderableList<CafeObject*> *this_01;
  Cafe *pCVar2;
  CapcomOrderableListNode *pCVar3;
  CFPathFinder *this_02;
  int *piVar4;
  undefined4 uVar5;
  CapcomOrderableListNode *pCVar6;
  int *piVar7;
  int iVar8;
  int local_24;
  
  this_01 = (CapcomOrderableList<CafeObject*> *)(this + 0x20);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
  while (this_00 = (CharacterInstance *)CapcomOrderableList<CafeObject*>::nextItem(this_01),
        this_00 != (CharacterInstance *)0x0) {
    iVar8 = (**(code **)(*(int *)this_00 + 0x14))(this_00);
    if (iVar8 == 3) {
      CharacterInstance::deleteTasks(this_00);
    }
  }
  if (*(int **)(this + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x58) + 4))();
  }
  for (local_24 = 0; local_24 < *(int *)(this + 0x90); local_24 = local_24 + 1) {
    pvVar1 = *(void **)(local_24 * 4 + *(int *)(this + 0x94));
    if (pvVar1 != (void *)0x0) {
      String::~String((String *)((int)pvVar1 + 100));
      String::~String((String *)((int)pvVar1 + 0x2c));
      operator_delete(pvVar1);
    }
  }
  pvVar1 = *(void **)(this + 0x94);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  CapcomApp::getInstance();
  this_02 = *(CFPathFinder **)(this + 0x5c);
  if (this_02 != (CFPathFinder *)0x0) {
    CFPathFinder::~CFPathFinder(this_02);
    operator_delete(this_02);
  }
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc));
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  if (*(void **)(this + 0x14) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x14));
  }
  piVar4 = *(int **)(DAT_000c0b44 + 0xc09b8);
  piVar7 = *(int **)(DAT_000c0b48 + 0xc09ba);
  for (iVar8 = 0; pvVar1 = *(void **)this, iVar8 < *piVar7 * *piVar4; iVar8 = iVar8 + 1) {
    operator_delete(*(void **)((int)pvVar1 + iVar8 * 4));
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
  while (0 < *(int *)(this + 0x34)) {
    pCVar2 = this + 0x20;
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 1;
      pCVar2 = *(Cafe **)(pCVar2 + 8);
    } while (iVar8 != *(int *)(this + 0x34));
    piVar4 = (int *)CapcomOrderableList<CafeObject*>::deleteNode
                              (this_01,(CapcomOrderableListNode *)pCVar2);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
  }
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x6c);
  while (0 < *(int *)(this + 0x78)) {
    piVar4 = (int *)CapcomLinkedList<CafeUIElement*>::remove
                              ((CapcomLinkedList<CafeUIElement*> *)(this + 0x68),
                               *(int *)(this + 0x78) + -1);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
  }
  if (*(void **)(this + 0x104) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x104));
  }
  if (*(void **)(this + 0xd4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd4));
  }
  if (*(void **)(this + 0xc4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc4));
  }
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xb0));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0xa4));
  if (*(int *)(this + 0x78) != 0) {
    while (pvVar1 = *(void **)(this + 0x6c), pvVar1 != (void *)0x0) {
      uVar5 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0x6c) = uVar5;
    }
    *(undefined4 *)(this + 0x78) = 0;
    *(Cafe **)(this + 0x70) = this + 0x68;
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  if (*(int *)(this + 0x34) != 0) {
    pCVar3 = *(CapcomOrderableListNode **)(this + 0x28);
    while (pCVar3 != (CapcomOrderableListNode *)0x0) {
      pCVar6 = *(CapcomOrderableListNode **)(pCVar3 + 8);
      CapcomOrderableList<CafeObject*>::deleteNode(this_01,pCVar3);
      pCVar3 = pCVar6;
    }
    *(Cafe **)(this + 0x2c) = this + 0x20;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
  }
  return this;
}


