/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cc3e8 CapcomLinkedList<ScreenElement*>::add */

/* CapcomLinkedList<ScreenElement*>::add(ScreenElement*) */

void __thiscall
CapcomLinkedList<ScreenElement*>::add(CapcomLinkedList<ScreenElement*> *this,ScreenElement *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(8);
  puVar1[1] = 0;
  *(undefined4 **)(*(int *)(this + 8) + 4) = puVar1;
  *(undefined4 **)(this + 8) = puVar1;
  *puVar1 = param_1;
  *(undefined4 *)(*(int *)(this + 8) + 4) = 0;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  return;
}


