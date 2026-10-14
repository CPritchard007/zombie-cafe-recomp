/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029972c CapcomGraphics::drawImage */

/* CapcomGraphics::drawImage(CImage const*, float, float, unsigned char, int) */

void __thiscall
CapcomGraphics::drawImage
          (CapcomGraphics *this,CImage *param_1,float param_2,float param_3,uchar param_4,
          int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  iVar3 = *(int *)param_1;
  uVar1 = __fixsfsi(param_4);
  uVar2 = __fixsfsi(param_5);
  (**(code **)(iVar3 + 0x10))(param_1,this,uVar1,uVar2,in_stack_00000000,in_stack_00000004);
  return;
}


