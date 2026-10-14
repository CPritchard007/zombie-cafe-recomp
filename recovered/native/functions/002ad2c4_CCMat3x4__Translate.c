/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad2c4 CCMat3x4::Translate */

/* CCMat3x4::Translate(ccMat3x4*, ccVec3 const*) */

void CCMat3x4::Translate(ccMat3x4 *param_1,ccVec3 *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 8);
  return;
}


