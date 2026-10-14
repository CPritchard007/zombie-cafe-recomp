/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e1e4 CapcomLinkedList<CharacterInstance*>::add */

/* CapcomLinkedList<CharacterInstance*>::add(CharacterInstance*) */

void __thiscall
CapcomLinkedList<CharacterInstance*>::add
          (CapcomLinkedList<CharacterInstance*> *this,CharacterInstance *param_1)

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


