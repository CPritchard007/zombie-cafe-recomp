/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029968c CapcomGraphics::isWithinClipBounds */

/* CapcomGraphics::isWithinClipBounds(_cfRectangleBig) const */

undefined8
CapcomGraphics::isWithinClipBounds(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x10);
  uVar1 = 1;
  if (piVar3 != (int *)0x0) {
    param_3 = param_3 + *(int *)(param_1 + 8);
    piVar2 = (int *)((int)param_2 + *(int *)(param_1 + 0xc));
    uVar1 = 0;
    param_2 = piVar2;
    if ((((*piVar3 <= (int)piVar2) && ((int)piVar2 < *piVar3 + piVar3[2])) && (piVar3[1] <= param_3)
        ) && (param_3 < piVar3[1] + piVar3[3])) {
      piVar4 = (int *)(param_3 + param_5);
      param_2 = piVar3 + 3;
      if (((*piVar3 <= param_4 + (int)piVar2) && (param_4 + (int)piVar2 < *piVar3 + piVar3[2])) &&
         (param_2 = piVar4, piVar3[1] <= (int)piVar4)) {
        uVar1 = (uint)((int)piVar4 < piVar3[1] + piVar3[3]);
      }
    }
  }
  return CONCAT44(param_2,uVar1);
}


