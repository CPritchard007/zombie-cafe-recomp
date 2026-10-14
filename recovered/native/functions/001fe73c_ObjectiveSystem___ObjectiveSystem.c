/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe73c ObjectiveSystem::~ObjectiveSystem */

/* ObjectiveSystem::~ObjectiveSystem() */

ObjectiveSystem * __thiscall ObjectiveSystem::~ObjectiveSystem(ObjectiveSystem *this)

{
  void *pvVar1;
  
  while (-1 < *(int *)(this + 8)) {
    pvVar1 = (void *)Vector<Objective*>::removeElementAt((Vector<Objective*> *)(this + 4),0);
    operator_delete(pvVar1);
  }
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc));
  }
  return this;
}


