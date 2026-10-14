/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8860 CharacterInstance::~CharacterInstance */

/* CharacterInstance::~CharacterInstance() */

CharacterInstance * __thiscall CharacterInstance::~CharacterInstance(CharacterInstance *this)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  *(int *)this = *(int *)(DAT_000c8918 + 0xc886c) + 8;
  while (*(int *)(this + 0x7c) != 0) {
    piVar1 = (int *)CapcomLinkedList<Task*>::remove((CapcomLinkedList<Task*> *)(this + 0x6c),0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 4))();
    *(undefined4 *)(this + 0xcc) = 0;
  }
  if (*(int *)(this + 0x7c) != 0) {
    while (pvVar2 = *(void **)(this + 0x70), pvVar2 != (void *)0x0) {
      uVar3 = *(undefined4 *)((int)pvVar2 + 4);
      operator_delete(pvVar2);
      *(undefined4 *)(this + 0x70) = uVar3;
    }
    *(undefined4 *)(this + 0x7c) = 0;
    *(CharacterInstance **)(this + 0x74) = this + 0x6c;
    *(undefined4 *)(this + 0x78) = 0;
  }
  Vector<ToonAnimation::ReplacementImage>::~Vector
            ((Vector<ToonAnimation::ReplacementImage> *)(this + 0x5c));
  CafeObject::~CafeObject((CafeObject *)this);
  return this;
}


