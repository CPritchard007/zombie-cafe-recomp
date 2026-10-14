/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029cbbc CFTexture::FreeTextureRef */

/* CFTexture::FreeTextureRef() */

void __thiscall CFTexture::FreeTextureRef(CFTexture *this)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char acStack_114 [256];
  int local_14;
  
  iVar1 = *(int *)this;
  piVar3 = *(int **)(DAT_0029cc18 + 0x29cbc8);
  local_14 = *piVar3;
  if ((iVar1 != 0) && (puVar2 = *(undefined4 **)(iVar1 + 4), puVar2 != (undefined4 *)0x0)) {
    sprintf(acStack_114,(char *)(DAT_0029cc1c + 0x29cbe2),iVar1,puVar2,*puVar2);
    L_PrintLog((char *)(DAT_0029cc20 + 0x29cbee),acStack_114);
    CCTexture2D::Free(*(ccTexture2D **)(*(int *)this + 4));
    free(*(void **)(*(int *)this + 4));
    *(undefined4 *)(*(int *)this + 4) = 0;
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


