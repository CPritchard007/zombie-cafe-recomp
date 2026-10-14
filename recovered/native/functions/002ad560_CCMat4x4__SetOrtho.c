/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad560 CCMat4x4::SetOrtho */

/* CCMat4x4::SetOrtho(ccMat4x4*, float, float, float, float, float, float) */

void CCMat4x4::SetOrtho(ccMat4x4 *param_1,float param_2,float param_3,float param_4,float param_5,
                       float param_6,float param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  uVar1 = __subsf3(in_r2);
  uVar1 = __divsf3(0x3f800000,uVar1);
  uVar2 = __subsf3(in_stack_00000000,in_r3);
  uVar2 = __divsf3(0x3f800000,uVar2);
  uVar3 = __subsf3(in_stack_00000008,in_stack_00000004);
  uVar3 = __divsf3(0x3f800000,uVar3);
  uVar4 = __addsf3(uVar1,uVar1);
  *(undefined4 *)param_1 = uVar4;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar4 = __addsf3(uVar2,uVar2);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar4 = __addsf3(uVar3,uVar3);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar4 = __addsf3(in_r2,in_r1);
  uVar4 = __subsf3(0,uVar4);
  uVar1 = __mulsf3(uVar4,uVar1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = __addsf3(in_stack_00000000,in_r3);
  uVar1 = __subsf3(0,uVar1);
  uVar1 = __mulsf3(uVar1,uVar2);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = __addsf3(in_stack_00000008,in_stack_00000004);
  uVar1 = __subsf3(0,uVar1);
  uVar1 = __mulsf3(uVar1,uVar3);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}


