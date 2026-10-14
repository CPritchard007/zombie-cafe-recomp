/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fbc8 PackedImage::destroyImages */

/* PackedImage::destroyImages(CImage**) const */

void __thiscall PackedImage::destroyImages(PackedImage *this,CImage **param_1)

{
  CImage *pCVar1;
  CImage **ppCVar2;
  int iVar3;
  
  ppCVar2 = param_1;
  for (iVar3 = 0; iVar3 < *(short *)(this + 0x38); iVar3 = iVar3 + 1) {
    pCVar1 = *ppCVar2;
    ppCVar2 = ppCVar2 + 1;
    if (pCVar1 != (CImage *)0x0) {
      (**(code **)(*(int *)pCVar1 + 4))();
    }
  }
  if (param_1 != (CImage **)0x0) {
    operator_delete__(param_1);
  }
  return;
}


