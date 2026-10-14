/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a63a CapcomGraphics::fillRect */

/* CapcomGraphics::fillRect(float, float, float, float, int) */

void __thiscall
CapcomGraphics::fillRect
          (CapcomGraphics *this,float param_1,float param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined8 uVar5;
  float extraout_s2;
  float extraout_s3;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  
  iVar1 = __fixsfsi(param_5);
  iVar2 = __fixsfsi(in_r3);
  uVar3 = localAnchorToGlobalX(this,iVar1,iVar2,in_stack_00000004);
  iVar1 = __fixsfsi(in_r2);
  iVar2 = __fixsfsi(in_stack_00000000);
  uVar4 = localAnchorToGlobalY(this,iVar1,iVar2,in_stack_00000004);
  __floatsisf(uVar3);
  uVar5 = __floatsisf(uVar4);
  fillRect(this,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2,extraout_s3);
  return;
}


