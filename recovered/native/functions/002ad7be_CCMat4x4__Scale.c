/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad7be CCMat4x4::Scale */

/* CCMat4x4::Scale(ccMat4x4*, float, float, float) */

void CCMat4x4::Scale(ccMat4x4 *param_1,float param_2,float param_3,float param_4)

{
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  *(undefined4 *)(param_1 + 0x28) = in_r3;
  *(undefined4 *)param_1 = in_r1;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = in_r2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  return;
}


