/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be07a CCTextRenderer::GetCharacterUVs */

/* CCTextRenderer::GetCharacterUVs(void*, char const*, int) */

undefined8 CCTextRenderer::GetCharacterUVs(void *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *local_1c;
  int iStack_18;
  
  iVar3 = -1;
  local_1c = param_2;
  iStack_18 = param_3;
  do {
    uVar2 = (uint)(byte)*param_2;
    if (uVar2 == 0) goto LAB_002be0b6;
    iVar1 = L_GetChar((STextRenderer *)param_1,param_2,(uint *)&local_1c);
    param_2 = (char *)((byte *)param_2 + iVar1);
    iVar1 = FUN_002bb7c0(param_1,local_1c);
  } while ((iVar1 == -1) || (iVar3 = iVar3 + 1, iVar3 != param_3));
  uVar2 = *(int *)((int)param_1 + 0x20) + iVar1 * 0x34;
LAB_002be0b6:
  return CONCAT44(param_1,uVar2);
}


