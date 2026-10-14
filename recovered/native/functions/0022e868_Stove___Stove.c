/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e868 Stove::~Stove */

/* Stove::~Stove() */

Stove * __thiscall Stove::~Stove(Stove *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 100);
  *(int *)this = *(int *)(DAT_0022e8c4 + 0x22e874) + 8;
  if (pvVar1 != (void *)0x0) {
    String::~String((String *)((int)pvVar1 + 0x14));
    String::~String((String *)((int)pvVar1 + 0xc));
    operator_delete(pvVar1);
  }
  if (*(int *)(this + 0x88) != 0) {
    removeStatusNote(this);
  }
  Furniture::~Furniture((Furniture *)this);
  return this;
}


