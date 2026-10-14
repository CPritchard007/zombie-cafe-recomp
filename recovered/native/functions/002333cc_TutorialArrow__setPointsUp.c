/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002333cc TutorialArrow::setPointsUp */

/* TutorialArrow::setPointsUp(bool) */

void TutorialArrow::setPointsUp(bool param_1)

{
  int *piVar1;
  int in_r1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)(uint)param_1;
  *(char *)(piVar1 + 0x1a) = (char)in_r1;
  iVar3 = in_r1;
  if (in_r1 != 0) {
    iVar3 = 2;
  }
  *(char *)(piVar1[0x1b] + 0x60) = (char)iVar3;
  uVar2 = 0x14;
  if (in_r1 != 0) {
    uVar2 = 0x11;
  }
  (**(code **)(*(int *)piVar1[0x1b] + 0x1c))((int *)piVar1[0x1b],uVar2);
  uVar2 = 0x14;
  if (in_r1 != 0) {
    uVar2 = 0x11;
  }
  (**(code **)(*piVar1 + 0x1c))(piVar1,uVar2);
  return;
}


