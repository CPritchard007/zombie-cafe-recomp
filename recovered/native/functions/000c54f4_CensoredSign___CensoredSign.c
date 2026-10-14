/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c54f4 CensoredSign::~CensoredSign */

/* CensoredSign::~CensoredSign() */

CensoredSign * __thiscall CensoredSign::~CensoredSign(CensoredSign *this)

{
  *(int *)this = *(int *)(DAT_000c5524 + 0xc54fe) + 8;
  if (*(int **)(this + 8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 8) + 4))();
  }
  CafeUIElement::~CafeUIElement((CafeUIElement *)this);
  return this;
}


