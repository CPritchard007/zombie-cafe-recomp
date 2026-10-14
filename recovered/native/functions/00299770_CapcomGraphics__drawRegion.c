/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299770 CapcomGraphics::drawRegion */

/* CapcomGraphics::drawRegion(CImage const*, float, float, float, float, float, float, unsigned
   char, int) */

void __thiscall
CapcomGraphics::drawRegion
          (CapcomGraphics *this,CImage *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,uchar param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  iVar7 = *(int *)param_1;
  uVar1 = __fixsfsi(param_8);
  uVar2 = __fixsfsi(param_9);
  uVar3 = __fixsfsi(in_stack_00000000);
  uVar4 = __fixsfsi(in_stack_00000004);
  uVar5 = __fixsfsi(in_stack_00000008);
  uVar6 = __fixsfsi(in_stack_0000000c);
  (**(code **)(iVar7 + 0x20))
            (param_1,this,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,in_stack_00000010,in_stack_00000014);
  return;
}


