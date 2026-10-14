/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bcdaa CCTextRenderer::GetCharacterWidth */

/* CCTextRenderer::GetCharacterWidth(void*, int) */

undefined4 CCTextRenderer::GetCharacterWidth(void *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)((int)param_1 + 0x120) == 0) && (iVar1 = FUN_002bb7c0(), iVar1 != -1)) {
    uVar2 = __mulsf3(*(undefined4 *)(*(int *)((int)param_1 + 0x20) + iVar1 * 0x34 + 0x20),
                     *(undefined4 *)((int)param_1 + 0xfc));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


