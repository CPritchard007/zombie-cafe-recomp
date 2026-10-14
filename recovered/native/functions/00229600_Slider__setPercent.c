/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00229600 Slider::setPercent */

/* Slider::setPercent(int) */

void Slider::setPercent(int param_1)

{
  undefined4 uVar1;
  int in_r1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x68);
  *(int *)(param_1 + 0x70) = in_r1;
  iVar3 = *piVar2;
  uVar1 = __divsi3(in_r1 * (*(int *)(param_1 + 0xc) - piVar2[3]),100);
  (**(code **)(iVar3 + 0x14))(piVar2,uVar1,piVar2[2]);
  return;
}


