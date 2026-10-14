/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002079ac PullMenuElement::setButtonAvailability */

/* PullMenuElement::setButtonAvailability(int, bool) */

void PullMenuElement::setButtonAvailability(int param_1,bool param_2)

{
  int *piVar1;
  int in_r2;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2) {
    piVar1 = *(int **)(param_1 + 0x78);
  }
  else {
    if (param_2 != true) {
      if (param_2 == true) {
        iVar3 = param_1 + 4;
      }
      else {
        if (param_2 == true) {
          piVar4 = (int *)(param_1 + 0x8c);
          piVar1 = (int *)*piVar4;
          if (*(char *)(*(int *)(param_1 + 100) + DAT_00207a50) == '\0') {
            (**(code **)(*piVar1 + 0x20))(piVar1,in_r2);
            piVar1 = (int *)*piVar4;
            if (in_r2 == 0) goto LAB_00207a32;
            (**(code **)(*piVar1 + 0x20))(piVar1,1);
            iVar3 = *piVar4;
            goto LAB_00207a28;
          }
          in_r2 = 0;
          pcVar2 = *(code **)(*piVar1 + 0x20);
          goto LAB_00207a4a;
        }
        if (param_2 != true) {
          if (param_2 != true) {
            return;
          }
          piVar1 = (int *)(param_1 + 0x88);
          goto LAB_00207a42;
        }
        iVar3 = param_1 + 8;
      }
      (**(code **)(**(int **)(iVar3 + 0x7c) + 0x20))(*(int **)(iVar3 + 0x7c),in_r2);
      piVar1 = *(int **)(iVar3 + 0x7c);
      if (in_r2 == 0) {
LAB_00207a32:
        piVar1[0x23] = -0x1000000;
        return;
      }
      (**(code **)(*piVar1 + 0x20))(piVar1,1);
      iVar3 = *(int *)(iVar3 + 0x7c);
LAB_00207a28:
      *(undefined4 *)(iVar3 + 0x8c) = 0xffffffff;
      return;
    }
    piVar1 = (int *)(param_1 + 0xd4);
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x20))(*(int **)(param_1 + 0x7c),in_r2);
LAB_00207a42:
    piVar1 = (int *)*piVar1;
  }
  pcVar2 = *(code **)(*piVar1 + 0x20);
LAB_00207a4a:
  (*pcVar2)(piVar1,in_r2);
  return;
}


