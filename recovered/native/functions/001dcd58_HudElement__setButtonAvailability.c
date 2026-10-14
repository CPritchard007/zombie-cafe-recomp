/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dcd58 HudElement::setButtonAvailability */

/* HudElement::setButtonAvailability(int, bool) */

void HudElement::setButtonAvailability(int param_1,bool param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int in_r2;
  code *pcVar5;
  int *piVar6;
  
  uVar3 = (uint)param_2;
  if (uVar3 == 0x13) {
    piVar6 = (int *)(param_1 + 0xa4);
LAB_001dce34:
    piVar6 = (int *)*piVar6;
  }
  else {
    if (uVar3 == 0x1a) {
      (**(code **)(**(int **)(param_1 + 0xa0) + 0x20))(*(int **)(param_1 + 0xa0),in_r2);
      setGatyaButtonImage((HudElement *)param_1);
      return;
    }
    if (uVar3 == 0x1b) {
      piVar6 = (int *)(param_1 + 0xa8);
      goto LAB_001dce34;
    }
    if (uVar3 == 0x1c) {
      return;
    }
    if (uVar3 == 0x19) {
      if ((**(char **)(DAT_001dce8c + 0x1dcd98) == '\0') || (iVar1 = javaIsConnected(), iVar1 == 0))
      {
        L_PrintLog((char *)(DAT_001dcea8 + 0x1dce7c),(char *)(DAT_001dceac + 0x1dce7e));
        piVar6 = *(int **)(param_1 + 0xb0);
        in_r2 = 0;
        pcVar5 = *(code **)(*piVar6 + 0x20);
        goto LAB_001dce88;
      }
      piVar6 = (int *)(param_1 + 0xb0);
      L_PrintLog((char *)(DAT_001dce90 + 0x1dcdb0),(char *)(DAT_001dce94 + 0x1dcdb2));
      goto LAB_001dce34;
    }
    if (uVar3 != 0x16) {
      if (uVar3 == 0x10) {
        piVar6 = (int *)(param_1 + 0xd8);
        (**(code **)(**(int **)(param_1 + 0x90) + 0x20))(*(int **)(param_1 + 0x90),in_r2);
      }
      else if (uVar3 == 0x11) {
        piVar6 = (int *)(param_1 + 0xdc);
        (**(code **)(**(int **)(param_1 + 0x94) + 0x20))(*(int **)(param_1 + 0x94),in_r2);
      }
      else if (uVar3 == 0x17) {
        piVar6 = (int *)(param_1 + 0xe0);
        (**(code **)(**(int **)(param_1 + 0xec) + 0x20))(*(int **)(param_1 + 0xec),in_r2);
      }
      else if (uVar3 == 0x18) {
        if (in_r2 == 0) {
          pcVar2 = (char *)(DAT_001dcea0 + 0x1dce20);
          pcVar4 = (char *)(DAT_001dcea4 + 0x1dce22);
        }
        else {
          pcVar2 = (char *)(DAT_001dce98 + 0x1dce16);
          pcVar4 = (char *)(DAT_001dce9c + 0x1dce18);
        }
        L_PrintLog(pcVar2,pcVar4);
        piVar6 = (int *)(param_1 + 0xf4);
        (**(code **)(**(int **)(param_1 + 0xf0) + 0x20))(*(int **)(param_1 + 0xf0),in_r2);
      }
      else {
        if (uVar3 != 0x12) {
          if ((int)uVar3 < *(int *)(param_1 + 0x70) + 1) {
            piVar6 = *(int **)(uVar3 * 4 + *(int *)(param_1 + 0x74));
            (**(code **)(*piVar6 + 0x20))(piVar6,in_r2);
          }
          layout((HudElement *)param_1);
          return;
        }
        piVar6 = (int *)(param_1 + 0x98);
        (**(code **)(**(int **)(param_1 + 0xe4) + 0x20))(*(int **)(param_1 + 0xe4),in_r2);
      }
      goto LAB_001dce34;
    }
    piVar6 = *(int **)(param_1 + 0xe8);
    if (piVar6 == (int *)0x0) {
      return;
    }
  }
  pcVar5 = *(code **)(*piVar6 + 0x20);
LAB_001dce88:
  (*pcVar5)(piVar6,in_r2);
  return;
}


