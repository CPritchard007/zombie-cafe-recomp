/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4b14 CafeObject::~CafeObject */

/* CafeObject::~CafeObject() */

CafeObject * __thiscall CafeObject::~CafeObject(CafeObject *this)

{
  void *pvVar1;
  undefined4 uVar2;
  
  *(int *)this = *(int *)(DAT_000c4b70 + 0xc4b1e) + 8;
  notifyRemoveListeners(this);
  if (*(int *)(this + 0x18) != 0) {
    while (pvVar1 = *(void **)(this + 0xc), pvVar1 != (void *)0x0) {
      uVar2 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0xc) = uVar2;
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(CafeObject **)(this + 0x10) = this + 8;
    *(undefined4 *)(this + 0x14) = 0;
  }
  return this;
}


