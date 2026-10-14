/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bcb4e CCTextRenderer::GetStringNumLines */

/* CCTextRenderer::GetStringNumLines(void*, char const*, float, unsigned int) */

int CCTextRenderer::GetStringNumLines(void *param_1,char *param_2,float param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_38;
  undefined4 local_34;
  uint local_1c [2];
  
  iVar8 = 0;
  if (*(int *)((int)param_1 + 0x120) == 0) {
    local_34 = 0;
    local_38 = 0;
    uVar9 = 0;
    iVar8 = 1;
    for (iVar7 = 0; param_2[iVar7] != '\0'; iVar7 = iVar7 + 1) {
      iVar2 = L_GetChar((STextRenderer *)param_1,param_2 + iVar7,local_1c);
      uVar1 = local_1c[0];
      iVar3 = FUN_002bb7c0(param_1,local_1c[0]);
      if (iVar3 == -1) {
        if (uVar1 == 10) goto LAB_002bcb9e;
      }
      else {
        if (uVar1 == 0x20) {
          local_34 = *(undefined4 *)((int)param_1 + 4);
          local_38 = iVar7;
        }
LAB_002bcb9e:
        if (uVar1 != 10) {
          iVar3 = *(int *)((int)param_1 + 0x20) + iVar3 * 0x34;
          uVar6 = *(undefined4 *)((int)param_1 + 0xfc);
          uVar4 = __mulsf3(uVar6,*(undefined4 *)(iVar3 + 0x24));
          uVar4 = __addsf3(uVar9,uVar4);
          iVar5 = __aeabi_fcmpgt(uVar4,param_4);
          if (iVar5 == 0) {
            uVar4 = __mulsf3(uVar6,*(undefined4 *)(iVar3 + 0x20));
            uVar9 = __addsf3(uVar9,uVar4);
            iVar7 = iVar7 + -1 + iVar2;
            goto LAB_002bcbfc;
          }
          *(undefined4 *)((int)param_1 + 4) = local_34;
          iVar7 = local_38;
        }
        iVar8 = iVar8 + 1;
        uVar9 = 0;
      }
LAB_002bcbfc:
    }
  }
  return iVar8;
}


