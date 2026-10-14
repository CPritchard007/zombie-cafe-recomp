/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad254 CCMat3x4::RotZ */

/* CCMat3x4::RotZ(ccMat3x4*, float, ccVec3 const*) */

double CCMat3x4::RotZ(ccMat3x4 *param_1,float param_2,ccVec3 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_r2;
  double __x;
  
  __x = (double)__extendsfdf2(param_2,param_3);
  cos(__x);
  uVar1 = __truncdfsf2();
  sin(__x);
  iVar2 = __truncdfsf2();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 4) = iVar2;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(int *)(param_1 + 0xc) = iVar2 + -0x80000000;
  *(undefined4 *)(param_1 + 0x24) = *in_r2;
  *(undefined4 *)(param_1 + 0x28) = in_r2[1];
  *(undefined4 *)(param_1 + 0x2c) = in_r2[2];
  return __x;
}


