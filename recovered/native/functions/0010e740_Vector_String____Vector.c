/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010e740 Vector<String>::~Vector */

/* Vector<String>::~Vector() */

Vector<String> * __thiscall Vector<String>::~Vector(Vector<String> *this)

{
  int iVar1;
  String *pSVar2;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    pSVar2 = (String *)(iVar1 + *(int *)(iVar1 + -4) * 8);
    while (pSVar2 != *(String **)(this + 8)) {
      String::~String(pSVar2 + -8);
      pSVar2 = pSVar2 + -8;
    }
    operator_delete__(pSVar2 + -8);
  }
  return this;
}


