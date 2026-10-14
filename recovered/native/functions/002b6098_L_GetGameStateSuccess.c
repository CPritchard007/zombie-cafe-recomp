/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6098 L_GetGameStateSuccess */

/* L_GetGameStateSuccess(void*, unsigned char const*, unsigned int) */

void L_GetGameStateSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  int *piVar6;
  char *pcVar7;
  char acStack_11c [256];
  int local_1c;
  
  piVar6 = *(int **)(DAT_002b6198 + 0x2b60a4);
  local_1c = *piVar6;
  pcVar7 = (char *)(DAT_002b619c + 0x2b60ae);
  L_PrintLog(pcVar7,(char *)(DAT_002b61a0 + 0x2b60b2));
  sprintf(acStack_11c,(char *)(DAT_002b61a4 + 0x2b60d4),param_1,
          *(undefined4 *)((int)param_1 + 0x324),*(undefined4 *)((int)param_1 + 0x330),
          (int)param_1 + 0x230);
  L_PrintLog((char *)(DAT_002b61a8 + 0x2b60e4),acStack_11c);
  *(undefined4 *)((int)param_1 + 0x31c) = 0;
  if (param_2 == (uchar *)0x0) {
LAB_002b6150:
    pcVar5 = *(code **)((int)param_1 + 0x32c);
    if (pcVar5 == (code *)0x0) goto LAB_002b6188;
    uVar2 = *(undefined4 *)((int)param_1 + 0x330);
    uVar3 = 1;
  }
  else {
    iVar1 = strncmp((char *)param_2,(char *)(DAT_002b61ac + 0x2b60fe),0xb);
    if (iVar1 != 0) {
      iVar1 = strncmp((char *)param_2,(char *)(DAT_002b61b4 + 0x2b612a),7);
      if (iVar1 == 0) {
        pcVar4 = (char *)(DAT_002b61b8 + 0x2b6136);
      }
      else {
        iVar1 = strncmp((char *)param_2,(char *)(DAT_002b61bc + 0x2b6140),9);
        if (iVar1 != 0) {
          if (*(int *)((int)param_1 + 0x324) != 0) {
            L_PrintLog(pcVar7,(char *)(DAT_002b61c4 + 0x2b6172));
            (**(code **)((int)param_1 + 0x324))
                      (*(undefined4 *)((int)param_1 + 0x330),(int)param_1 + 0x29c,param_2,param_3);
          }
          goto LAB_002b6188;
        }
        pcVar4 = (char *)(DAT_002b61c0 + 0x2b614c);
      }
      L_PrintLog(pcVar7,pcVar4);
      goto LAB_002b6150;
    }
    L_PrintLog(pcVar7,(char *)(DAT_002b61b0 + 0x2b610c));
    pcVar5 = *(code **)((int)param_1 + 0x32c);
    if (pcVar5 == (code *)0x0) goto LAB_002b6188;
    uVar2 = *(undefined4 *)((int)param_1 + 0x330);
    uVar3 = 3;
  }
  (*pcVar5)(uVar2,uVar3);
LAB_002b6188:
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


