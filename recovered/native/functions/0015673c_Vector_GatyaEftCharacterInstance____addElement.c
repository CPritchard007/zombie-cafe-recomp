/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015673c Vector<GatyaEftCharacterInstance*>::addElement */

/* Vector<GatyaEftCharacterInstance*>::addElement(GatyaEftCharacterInstance*) */

void __thiscall
Vector<GatyaEftCharacterInstance*>::addElement
          (Vector<GatyaEftCharacterInstance*> *this,GatyaEftCharacterInstance *param_1)

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
  *(GatyaEftCharacterInstance **)((iVar2 + 1) * 4 + *(int *)(this + 8)) = param_1;
  return;
}


