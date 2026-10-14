/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef274 EatTask::stopImmediately */

/* EatTask::stopImmediately() */

void __thiscall EatTask::stopImmediately(EatTask *this)

{
  int *piVar1;
  Furniture *this_00;
  code *pcVar2;
  
  this[0x40] = (EatTask)0x1;
  if ((byte)this[0x2c] - 2 < 2) {
    this[5] = (EatTask)0x1;
    Task::finish((Task *)this);
    if (*(int **)(this + 0x34) != (int *)0x0) {
      piVar1 = (int *)(**(code **)(**(int **)(this + 0x34) + 0x20))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(this + 0x34);
      pcVar2 = *(code **)(*piVar1 + 0x1c);
      this_00 = (Furniture *)operator_new(100);
      Furniture::Furniture
                (this_00,*(FurnitureData **)
                          (**(int **)(DAT_000ef30c + 0xef2bc) * 4 +
                          *(int *)(*(int *)(this + 0x24) + 0x94)));
      (*pcVar2)(piVar1,this_00);
      Vector<Furniture*>::addElement
                ((Vector<Furniture*> *)(*(int *)(this + 0x24) + 0xbc),*(Furniture **)(this + 0x34));
    }
  }
  else if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 0x10))();
  }
  if (*(int *)(this + 0x30) != 0) {
    *(undefined1 *)(*(int *)(this + 0x30) + 0x2e) = 0;
    CafeObject::setVisible(*(CafeObject **)(this + 0x30),true);
  }
  return;
}


