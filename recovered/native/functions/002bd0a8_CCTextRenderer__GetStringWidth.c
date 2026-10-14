/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bd0a8 CCTextRenderer::GetStringWidth */

/* CCTextRenderer::GetStringWidth(void*, char const*) */

undefined4 CCTextRenderer::GetStringWidth(void *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (param_2 != (char *)0x0) {
    for (; *param_2 != '\0'; param_2 = param_2 + 1) {
      if (*param_2 == '\n') {
        iVar2 = __aeabi_fcmpgt(uVar4,uVar3);
        uVar1 = uVar3;
        if (iVar2 != 0) {
          uVar1 = uVar4;
        }
        uVar3 = 0;
        uVar4 = uVar1;
      }
      else {
        uVar1 = GetCharacterWidth(param_1,param_2);
        uVar3 = __addsf3(uVar3,uVar1);
      }
    }
    iVar2 = __aeabi_fcmpgt(uVar4,uVar3);
    if (iVar2 == 0) {
      uVar4 = uVar3;
    }
  }
  return uVar4;
}


