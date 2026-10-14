/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c03a4 CapcomOrderableList<CafeObject*>::deleteNode */

/* CapcomOrderableList<CafeObject*>::deleteNode(CapcomOrderableListNode<CafeObject*>*) */

undefined4 __thiscall
CapcomOrderableList<CafeObject*>::deleteNode
          (CapcomOrderableList<CafeObject*> *this,CapcomOrderableListNode *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  if (*(CapcomOrderableListNode **)(this + 0x10) == param_1) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 4);
  }
  if (*(CapcomOrderableListNode **)(this + 0xc) == param_1) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  operator_delete(param_1);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  return uVar1;
}


