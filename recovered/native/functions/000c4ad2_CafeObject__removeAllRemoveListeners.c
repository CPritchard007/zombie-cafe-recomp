/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4ad2 CafeObject::removeAllRemoveListeners */

/* CafeObject::removeAllRemoveListeners() */

void __thiscall CafeObject::removeAllRemoveListeners(CafeObject *this)

{
  void *pvVar1;
  
  while (pvVar1 = (void *)CapcomLinkedList<CafeObject::ListenerAndData*>::remove
                                    ((CapcomLinkedList<CafeObject::ListenerAndData*> *)(this + 8),0)
        , pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return;
}


