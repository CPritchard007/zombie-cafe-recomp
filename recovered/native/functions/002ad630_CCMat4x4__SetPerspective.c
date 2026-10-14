/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad630 CCMat4x4::SetPerspective */

/* CCMat4x4::SetPerspective(ccMat4x4*, float, float, float, float) */

undefined8
CCMat4x4::SetPerspective(ccMat4x4 *param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 extraout_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  ccMat4x4 *pcVar4;
  
  pcVar4 = param_1;
  __mulsf3(param_2,in_r2,0x3f000000);
  uVar1 = __extendsfdf2();
  tan((double)CONCAT44(in_r3,pcVar4));
  __divdf3(DAT_002ad6b8,DAT_002ad6bc,uVar1,extraout_r1);
  uVar1 = __truncdfsf2();
  uVar2 = __subsf3(in_r3,in_stack_00000000);
  uVar3 = __divsf3(uVar1,in_r1);
  *(undefined4 *)param_1 = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar1 = __addsf3(in_stack_00000000,in_r3);
  uVar3 = __divsf3(uVar1,uVar2);
  uVar1 = DAT_002ad6c0;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar1 = __addsf3(in_r3,in_r3);
  uVar1 = __mulsf3(uVar1,in_stack_00000000);
  uVar1 = __divsf3(uVar1,uVar2);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return CONCAT44(in_r3,pcVar4);
}


