/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001da428 L_ParseGiftData */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001da476) */
/* WARNING: Removing unreachable block (ram,0x001da476) */
/* L_ParseGiftData(SGiftManager*, char const*, SGiftDef*) */

void L_ParseGiftData(SGiftManager *param_1,char *param_2,SGiftDef *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  char *pcVar18;
  uint uVar19;
  int *piVar20;
  char local_9c [128];
  int local_1c;
  
  piVar20 = *(int **)(DAT_001da564 + 0x1da434);
  local_1c = *piVar20;
  memset(param_3,0,0x4f8);
  L_PrintLog((char *)(DAT_001da568 + 0x1da450),param_2);
  pcVar16 = local_9c;
LAB_001da548:
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    uVar17 = 1;
  }
  else {
    if (cVar1 != ':') goto LAB_001da540;
    iVar15 = atoi(local_9c);
    L_PrintLog((char *)(DAT_001da56c + 0x1da46e),local_9c);
    iVar14 = DAT_001da5a4;
    iVar13 = DAT_001da59c;
    iVar12 = DAT_001da598;
    iVar11 = DAT_001da594;
    iVar10 = DAT_001da590;
    iVar9 = DAT_001da58c;
    iVar8 = DAT_001da588;
    iVar7 = DAT_001da584;
    iVar6 = DAT_001da580;
    iVar5 = DAT_001da57c;
    iVar4 = DAT_001da578;
    iVar3 = DAT_001da574;
    iVar2 = DAT_001da570;
    switch(iVar15) {
    case 1:
      *(undefined4 *)param_3 = 1;
      L_PrintLog((char *)(iVar2 + 0x1da498),(char *)(iVar3 + 0x1da49a));
      uVar17 = L_ParseRestOfNormalGift(param_1,param_2,param_3);
      goto LAB_001da552;
    case 2:
      uVar19 = 2;
      *(undefined4 *)param_3 = 2;
      pcVar16 = (char *)(iVar4 + 0x1da4b4);
      pcVar18 = (char *)(iVar5 + 0x1da4b6);
      goto LAB_001da4c2;
    case 3:
      uVar19 = 3;
      *(undefined4 *)param_3 = 3;
      pcVar16 = (char *)(iVar6 + 0x1da4c2);
      pcVar18 = (char *)(iVar7 + 0x1da4c4);
      goto LAB_001da4c2;
    default:
      pcVar16 = (char *)(DAT_001da5a0 + 0x1da536);
      *(undefined4 *)param_3 = 0;
      L_PrintLog(pcVar16,(char *)(iVar14 + 0x1da53a));
      uVar17 = 0;
      goto LAB_001da552;
    case 9:
      uVar19 = 9;
      *(undefined4 *)param_3 = 9;
      pcVar16 = (char *)(iVar8 + 0x1da4e0);
      pcVar18 = (char *)(iVar9 + 0x1da4e2);
      goto LAB_001da4c2;
    case 10:
      uVar19 = 10;
      *(undefined4 *)param_3 = 10;
      pcVar16 = (char *)(iVar10 + 0x1da4ee);
      pcVar18 = (char *)(iVar11 + 0x1da4f0);
LAB_001da4c2:
      L_PrintLog(pcVar16,pcVar18);
      goto LAB_001da4ce;
    case 0xb:
      *(undefined4 *)param_3 = 0xb;
      L_PrintLog((char *)(iVar12 + 0x1da4fc),(char *)(iVar13 + 0x1da4fe));
      uVar17 = L_ParseRestOfUpdateNotice(param_1,param_2,param_3);
      goto LAB_001da552;
    case 0xc:
      uVar19 = 0xc;
      break;
    case 0xd:
      uVar19 = 0xd;
      break;
    case 0xe:
      uVar19 = 0xe;
      break;
    case 0xf:
      uVar19 = 0xf;
      break;
    case 0x10:
      uVar19 = 0x10;
      break;
    case 0x12:
      uVar19 = 0x12;
    }
    *(uint *)param_3 = uVar19;
LAB_001da4ce:
    uVar17 = L_ParseRestOfOrder(param_1,param_2,param_3,uVar19);
  }
LAB_001da552:
  if (local_1c != *piVar20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar17);
  }
  return;
LAB_001da540:
  *pcVar16 = cVar1;
  pcVar16[1] = '\0';
  param_2 = param_2 + 1;
  pcVar16 = pcVar16 + 1;
  goto LAB_001da548;
}


