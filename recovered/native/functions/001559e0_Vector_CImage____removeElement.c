/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001559e0 Vector<CImage*>::removeElement */

/* Vector<CImage*>::removeElement(CImage*) */

CImage * __thiscall Vector<CImage*>::removeElement(Vector<CImage*> *this,CImage *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  CImage *pCVar3;
  
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 4) < iVar2) {
      return (CImage *)0x0;
    }
    puVar1 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 4);
    pCVar3 = (CImage *)*puVar1;
    if (pCVar3 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  if (-1 < iVar2) {
    *puVar1 = 0;
    move(this,iVar2 + 1,-1);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    return pCVar3;
  }
  return (CImage *)0x0;
}


