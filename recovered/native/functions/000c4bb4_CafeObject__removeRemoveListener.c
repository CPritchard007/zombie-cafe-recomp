/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4bb4 CafeObject::removeRemoveListener */

/* CafeObject::removeRemoveListener(void (*)(void*, CafeObject*), void*) */

void __thiscall
CafeObject::removeRemoveListener
          (CafeObject *this,_func_void_void_ptr_CafeObject_ptr *param_1,void *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
  iVar2 = 0;
  while( true ) {
    puVar4 = *(undefined4 **)(this + 0x14);
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    puVar3 = (undefined4 *)*puVar4;
    *(undefined4 *)(this + 0x14) = puVar4[1];
    if (puVar3 == (undefined4 *)0x0) break;
    if (((_func_void_void_ptr_CafeObject_ptr *)*puVar3 == param_1) && ((void *)puVar3[1] == param_2)
       ) {
      pvVar1 = (void *)CapcomLinkedList<CafeObject::ListenerAndData*>::remove
                                 ((CapcomLinkedList<CafeObject::ListenerAndData*> *)(this + 8),iVar2
                                 );
      operator_delete(pvVar1);
      return;
    }
    iVar2 = iVar2 + 1;
  }
  return;
}


