/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2e56 CCTexture2D::Free */

/* CCTexture2D::Free(ccTexture2D*) */

void CCTexture2D::Free(ccTexture2D *param_1)

{
  int iVar1;
  
  if (param_1 != (ccTexture2D *)0x0) {
    if ((int)*(void **)(param_1 + 0x1c) - 1U < 0xfffffffe) {
      CCUrlConnection::Free(*(void **)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    }
    if (*(void **)(param_1 + 0x28) != (void *)0xffffffff) {
      CCTextureLocator::Free(*(void **)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    }
    iVar1 = glIsTexture(*(undefined4 *)param_1);
    if (iVar1 != 0) {
      glDeleteTextures(1,param_1);
    }
  }
  return;
}


