/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6064 TextMenuItem::clearBreaks */

/* TextMenuItem::clearBreaks() */

void __thiscall TextMenuItem::clearBreaks(TextMenuItem *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x74);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((int)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  *(undefined4 *)(this + 0x74) = 0;
  return;
}


