/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4d0e CapcomOrderableList<ScreenElement*>::deleteNode */

/* CapcomOrderableList<ScreenElement*>::deleteNode(int) */

undefined4 __thiscall
CapcomOrderableList<ScreenElement*>::deleteNode
          (CapcomOrderableList<ScreenElement*> *this,int param_1)

{
  CapcomOrderableList<ScreenElement*> *pCVar1;
  undefined4 uVar2;
  
  pCVar1 = this;
  for (; -1 < param_1; param_1 = param_1 + -1) {
    pCVar1 = *(CapcomOrderableList<ScreenElement*> **)(pCVar1 + 8);
  }
  uVar2 = *(undefined4 *)pCVar1;
  if (*(CapcomOrderableList<ScreenElement*> **)(this + 0x10) == pCVar1) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(pCVar1 + 4);
  }
  if (*(CapcomOrderableList<ScreenElement*> **)(this + 0xc) == pCVar1) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(pCVar1 + 4);
  }
  else {
    *(undefined4 *)(*(int *)(pCVar1 + 8) + 4) = *(undefined4 *)(pCVar1 + 4);
  }
  *(undefined4 *)(*(int *)(pCVar1 + 4) + 8) = *(undefined4 *)(pCVar1 + 8);
  operator_delete(pCVar1);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  return uVar2;
}


