/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad71a CCMat4x4::RotY */

/* CCMat4x4::RotY(ccMat4x4*, float) */

void CCMat4x4::RotY(ccMat4x4 *param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  __extendsfdf2(param_2,in_r1);
  cos((double)CONCAT44(unaff_r4,in_r3));
  uVar1 = __truncdfsf2();
  sin((double)CONCAT44(unaff_r4,in_r3));
  iVar2 = __truncdfsf2();
  *(int *)(param_1 + 8) = iVar2 + -0x80000000;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x20) = iVar2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}


