/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002997c6 CapcomGraphics::drawRegion */

/* CapcomGraphics::drawRegion(CImage const*, float, float, float, float, ccMat2x3&) */

void __thiscall
CapcomGraphics::drawRegion
          (CapcomGraphics *this,CImage *param_1,float param_2,float param_3,float param_4,
          float param_5,ccMat2x3 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r3;
  int iVar5;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar5 = *(int *)param_1;
  uVar1 = __fixsfsi(param_6);
  uVar2 = __fixsfsi(in_r3);
  uVar3 = __fixsfsi(in_stack_00000000);
  uVar4 = __fixsfsi(in_stack_00000004);
  (**(code **)(iVar5 + 0x24))(param_1,this,uVar1,uVar2,uVar3,uVar4,in_stack_00000008);
  return;
}


