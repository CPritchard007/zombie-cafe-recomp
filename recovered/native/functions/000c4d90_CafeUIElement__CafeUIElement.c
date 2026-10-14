/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4d90 CafeUIElement::CafeUIElement */

/* CafeUIElement::CafeUIElement(CafeObject*) */

CafeUIElement * __thiscall CafeUIElement::CafeUIElement(CafeUIElement *this,CafeObject *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000c4db8;
  *(CafeObject **)(this + 4) = param_1;
  *(int *)this = *(int *)(iVar1 + 0xc4d9c) + 8;
  if (param_1 != (CafeObject *)0x0) {
    CafeObject::addRemoveListener
              (param_1,*(_func_void_void_ptr_CafeObject_ptr **)(DAT_000c4dbc + 0xc4dae),this);
  }
  return this;
}


