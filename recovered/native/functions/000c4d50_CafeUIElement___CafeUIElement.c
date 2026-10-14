/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4d50 CafeUIElement::~CafeUIElement */

/* CafeUIElement::~CafeUIElement() */

CafeUIElement * __thiscall CafeUIElement::~CafeUIElement(CafeUIElement *this)

{
  *(int *)this = *(int *)(DAT_000c4d74 + 0xc4d5a) + 8;
  if (*(CafeObject **)(this + 4) != (CafeObject *)0x0) {
    CafeObject::removeRemoveListener
              (*(CafeObject **)(this + 4),
               *(_func_void_void_ptr_CafeObject_ptr **)(DAT_000c4d78 + 0xc4d6c),this);
  }
  return this;
}


