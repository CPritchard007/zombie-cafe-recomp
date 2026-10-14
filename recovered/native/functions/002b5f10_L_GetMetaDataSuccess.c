/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5f10 L_GetMetaDataSuccess */

/* L_GetMetaDataSuccess(void*, unsigned char const*, unsigned int) */

void L_GetMetaDataSuccess(void *param_1,uchar *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  
  iVar2 = DAT_002b6024;
  pcVar8 = (code *)0x0;
  piVar10 = (int *)(&stack0xffffffec + DAT_002b6024);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_002b6024);
  piVar12 = (int *)(&stack0xffffffec + DAT_002b6024);
  piVar13 = (int *)(&stack0xffffffec + DAT_002b6024);
  piVar14 = (int *)(&stack0xffffffec + DAT_002b6024);
  *(uchar **)(&stack0xffffffec + DAT_002b6024) = param_2;
  puVar7 = *(undefined4 **)(DAT_002b6028 + 0x2b5f24);
  *(undefined4 *)(&stack0x00000480 + DAT_002b6024) = *puVar7;
  *(undefined4 *)((int)param_1 + 0x348) = 0;
  L_PrintLog((char *)(DAT_002b6030 + 0x2b5f3a),(char *)(DAT_002b602c + 0x2b5f38));
  iVar5 = *piVar10;
  *(undefined4 **)(&stack0xfffffff8 + iVar2) = puVar7;
  if (iVar5 == 0) {
    pcVar8 = *(code **)((int)param_1 + 0x358);
    if (pcVar8 == (code *)0x0) goto LAB_002b600c;
    uVar3 = *(undefined4 *)((int)param_1 + 0x35c);
    uVar4 = 1;
  }
  else {
    iVar5 = strncmp((char *)*puVar11,(char *)(DAT_002b6034 + 0x2b5f62),0xb);
    if (iVar5 != 0) {
      iVar9 = 0;
      *(int *)(&stack0xfffffff4 + iVar2) = DAT_002b6038 + 0x2b5ff2;
      for (iVar5 = 0; cVar1 = *(char *)(*piVar14 + iVar5), cVar1 != '\0'; iVar5 = iVar5 + 1) {
        if ((cVar1 == ':') && (pcVar8 == (code *)0x0)) {
          iVar6 = *piVar12;
          *(int *)(&stack0xfffffff0 + iVar2) = iVar5 - iVar9;
          strncpy(&stack0x00000000 + iVar2,(char *)(iVar6 + iVar9),iVar5 - iVar9);
          iVar9 = iVar5 + 1;
          (&stack0x00000000 + iVar2)[*(int *)(&stack0xfffffff0 + iVar2)] = '\0';
          pcVar8 = (code *)0x1;
        }
        else if (cVar1 == '\n') {
          iVar6 = *piVar13;
          *(int *)(&stack0xfffffff0 + iVar2) = iVar5 - iVar9;
          strncpy(&stack0x00000080 + iVar2,(char *)(iVar6 + iVar9),iVar5 - iVar9);
          (&stack0x00000080)[*(int *)(&stack0xfffffff0 + iVar2) + iVar2] = 0;
          iVar9 = iVar5 + 1;
          if (pcVar8 != (code *)0x0) {
            L_PrintLog(*(char **)(&stack0xfffffff4 + iVar2),&stack0x00000000 + iVar2);
            pcVar8 = *(code **)((int)param_1 + 0x350);
            if (pcVar8 != (code *)0x0) {
              (*pcVar8)(*(undefined4 *)((int)param_1 + 0x35c),&stack0x00000000 + iVar2,
                        &stack0x00000080 + iVar2);
              pcVar8 = (code *)0x0;
            }
          }
        }
      }
      if (*(code **)((int)param_1 + 0x354) != (code *)0x0) {
        (**(code **)((int)param_1 + 0x354))(*(undefined4 *)((int)param_1 + 0x35c));
      }
      goto LAB_002b600c;
    }
    pcVar8 = *(code **)((int)param_1 + 0x358);
    if (pcVar8 == (code *)0x0) goto LAB_002b600c;
    uVar3 = *(undefined4 *)((int)param_1 + 0x35c);
    uVar4 = 3;
  }
  (*pcVar8)(uVar3,uVar4);
LAB_002b600c:
  if (*(int *)(&stack0x00000480 + iVar2) != **(int **)(&stack0xfffffff8 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


