/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3618 GatyaEftImageElement::~GatyaEftImageElement */

/* GatyaEftImageElement::~GatyaEftImageElement() */

GatyaEftImageElement * __thiscall
GatyaEftImageElement::~GatyaEftImageElement(GatyaEftImageElement *this)

{
  int iVar1;
  void *pvVar2;
  
  *(int *)this = *(int *)(DAT_002a3660 + 0x2a3622) + 8;
  iVar1 = *(int *)(this + 0x98);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 0xffffffff;
    pvVar2 = *(void **)(this + 0x98);
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((int)pvVar2 + 8) != (void *)0x0) {
        operator_delete__(*(void **)((int)pvVar2 + 8));
      }
      operator_delete(pvVar2);
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
  ImageElement::~ImageElement((ImageElement *)this);
  return this;
}


