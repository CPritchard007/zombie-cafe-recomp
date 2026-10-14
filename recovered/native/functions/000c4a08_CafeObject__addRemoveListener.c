/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4a08 CafeObject::addRemoveListener */

/* CafeObject::addRemoveListener(void (*)(void*, CafeObject*), void*) */

void __thiscall
CafeObject::addRemoveListener
          (CafeObject *this,_func_void_void_ptr_CafeObject_ptr *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)operator_new(8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar2 = (undefined4 *)operator_new(8);
  puVar2[1] = 0;
  *(undefined4 **)(*(int *)(this + 0x10) + 4) = puVar2;
  *(undefined4 **)(this + 0x10) = puVar2;
  *puVar2 = puVar1;
  *(undefined4 *)(*(int *)(this + 0x10) + 4) = 0;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return;
}


