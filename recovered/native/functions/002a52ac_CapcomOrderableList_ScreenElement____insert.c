/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a52ac CapcomOrderableList<ScreenElement*>::insert */

/* CapcomOrderableList<ScreenElement*>::insert(ScreenElement*,
   CapcomOrderableListNode<ScreenElement*>*) */

void __thiscall
CapcomOrderableList<ScreenElement*>::insert
          (CapcomOrderableList<ScreenElement*> *this,ScreenElement *param_1,
          CapcomOrderableListNode *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 != (CapcomOrderableListNode *)0x0) {
    iVar2 = *(int *)(param_2 + 8);
    puVar1 = (undefined4 *)operator_new(0xc);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = iVar2;
    *(undefined4 **)(param_2 + 8) = puVar1;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar1;
    }
    if (param_2 == *(CapcomOrderableListNode **)(this + 0xc)) {
      *(undefined4 **)(this + 0xc) = puVar1;
    }
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return;
}


