/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fbf6 PackedImage::recreateImagesOnResume */

/* PackedImage::recreateImagesOnResume(CImage**) const */

void __thiscall PackedImage::recreateImagesOnResume(PackedImage *this,CImage **param_1)

{
  CImage *pCVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < *(short *)(this + 0x38); iVar2 = iVar2 + 1) {
    pCVar1 = *param_1;
    param_1 = param_1 + 1;
    CImage::recreateCCTexture2DForOnResume(pCVar1);
  }
  return;
}


