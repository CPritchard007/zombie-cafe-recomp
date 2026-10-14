/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ad7e6 CCMat4x4::Translate */

/* CCMat4x4::Translate(ccMat4x4*, ccVec3 const*) */

void CCMat4x4::Translate(ccMat4x4 *param_1,ccVec3 *param_2)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 8);
  return;
}


