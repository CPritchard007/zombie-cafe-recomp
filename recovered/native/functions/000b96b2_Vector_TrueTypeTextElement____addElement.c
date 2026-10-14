/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b96b2 Vector<TrueTypeTextElement*>::addElement */

/* Vector<TrueTypeTextElement*>::addElement(TrueTypeTextElement*) */

void __thiscall
Vector<TrueTypeTextElement*>::addElement
          (Vector<TrueTypeTextElement*> *this,TrueTypeTextElement *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 4) + 2;
  if (*(int *)this < iVar2) {
    iVar1 = *(int *)this * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(this,iVar1,-1);
  }
  iVar2 = *(int *)(this + 4);
  *(int *)(this + 4) = iVar2 + 1;
  *(TrueTypeTextElement **)((iVar2 + 1) * 4 + *(int *)(this + 8)) = param_1;
  return;
}


