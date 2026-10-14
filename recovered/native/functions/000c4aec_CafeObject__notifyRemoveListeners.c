/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4aec CafeObject::notifyRemoveListeners */

/* CafeObject::notifyRemoveListeners() */

void __thiscall CafeObject::notifyRemoveListeners(CafeObject *this)

{
  undefined4 *puVar1;
  
  while (puVar1 = (undefined4 *)
                  CapcomLinkedList<CafeObject::ListenerAndData*>::remove
                            ((CapcomLinkedList<CafeObject::ListenerAndData*> *)(this + 8),0),
        puVar1 != (undefined4 *)0x0) {
    (*(code *)*puVar1)(puVar1[1],this);
    operator_delete(puVar1);
  }
  return;
}


