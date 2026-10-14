/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001301d8 Vector<String>::addElement */

/* Vector<String>::addElement(String) */

undefined8 __thiscall Vector<String>::addElement(Vector<String> *this,String *param_2)

{
  int iVar1;
  int iVar2;
  Vector<String> *pVStack_18;
  String *pSStack_14;
  
  iVar2 = *(int *)(this + 4) + 2;
  pVStack_18 = this;
  pSStack_14 = param_2;
  if (*(int *)this < iVar2) {
    iVar1 = *(int *)this * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(this,iVar1,-1);
  }
  iVar1 = *(int *)(this + 4);
  iVar2 = *(int *)(this + 8);
  *(int *)(this + 4) = iVar1 + 1;
  String::String((String *)&pVStack_18,param_2);
  String::operator=((String *)(iVar2 + (iVar1 + 1) * 8),(String *)&pVStack_18);
  String::~String((String *)&pVStack_18);
  return CONCAT44(pSStack_14,pVStack_18);
}


