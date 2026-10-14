/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a5854 TextElement::clearBreaks */

/* TextElement::clearBreaks() */

void __thiscall TextElement::clearBreaks(TextElement *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((int)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar1 + 8));
    }
    operator_delete(pvVar1);
    *(undefined4 *)(this + 0x70) = 0;
  }
  pvVar1 = *(void **)(this + 0x74);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((int)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar1 + 8));
    }
    operator_delete(pvVar1);
    *(undefined4 *)(this + 0x74) = 0;
  }
  pvVar1 = *(void **)(this + 0x78);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((int)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar1 + 8));
    }
    operator_delete(pvVar1);
    *(undefined4 *)(this + 0x78) = 0;
  }
  return;
}


