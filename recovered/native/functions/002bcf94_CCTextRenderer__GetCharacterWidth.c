/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bcf94 CCTextRenderer::GetCharacterWidth */

/* CCTextRenderer::GetCharacterWidth(void*, char const*) */

undefined4 CCTextRenderer::GetCharacterWidth(void *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)((int)param_1 + 0x120) == 0) {
    uVar3 = (uint)(byte)*param_2;
    if ((int)(uVar3 << 0x18) < 0) {
      if ((uVar3 + 0x3e & 0xff) < 0x1e) {
        uVar3 = L_GetTwoByteMultiChar(param_2);
      }
      else {
        if (0xf < (uVar3 + 0x20 & 0xff)) {
          return 0;
        }
        uVar3 = L_GetThreeByteMultiChar(param_2);
      }
    }
    iVar1 = FUN_002bb7c0(param_1,uVar3);
    if (iVar1 != -1) {
      uVar2 = __mulsf3(*(undefined4 *)(*(int *)((int)param_1 + 0x20) + iVar1 * 0x34 + 0x20),
                       *(undefined4 *)((int)param_1 + 0xfc));
      return uVar2;
    }
  }
  return 0;
}


