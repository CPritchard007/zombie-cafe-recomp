/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7260 FrameAnimation::draw */

/* FrameAnimation::draw(CapcomGraphics*, int, int) */

undefined8 FrameAnimation::draw(CapcomGraphics *param_1,int param_2,int param_3)

{
  CapcomGraphics CVar1;
  int *piVar2;
  
  CVar1 = param_1[7];
  piVar2 = *(int **)((uint)(byte)param_1[9] * 4 + *(int *)(param_1 + 0x20));
  (**(code **)(*piVar2 + 0x10))(piVar2);
  return CONCAT44(9,(uint)(byte)CVar1);
}


