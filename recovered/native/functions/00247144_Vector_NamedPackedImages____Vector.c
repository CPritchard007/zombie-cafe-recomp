/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247144 Vector<NamedPackedImages>::~Vector */

/* Vector<NamedPackedImages>::~Vector() */

Vector<NamedPackedImages> * __thiscall
Vector<NamedPackedImages>::~Vector(Vector<NamedPackedImages> *this)

{
  int iVar1;
  String *pSVar2;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    pSVar2 = (String *)(iVar1 + *(int *)(iVar1 + -4) * 0x18);
    while (pSVar2 != *(String **)(this + 8)) {
      String::~String(pSVar2 + -0x18);
      pSVar2 = pSVar2 + -0x18;
    }
    operator_delete__(pSVar2 + -8);
  }
  return this;
}


