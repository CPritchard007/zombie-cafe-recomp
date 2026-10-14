/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bee74 CCCarousel::HandleMouseUp */

/* CCCarousel::HandleMouseUp(ccCarousel*, float) */

float CCCarousel::HandleMouseUp(ccCarousel *param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r1;
  undefined4 uVar3;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (iVar1 = __aeabi_fcmple(*(undefined4 *)(param_1 + 0x38),DAT_002beec0), param_2 = extraout_s0,
     iVar1 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = __subsf3(in_r1,uVar3);
    iVar1 = __aeabi_fcmpge(uVar2 & 0x7fffffff,*(undefined4 *)(param_1 + 0x1c));
    param_2 = extraout_s0_00;
    if (iVar1 != 0) {
      iVar1 = __aeabi_fcmpgt(in_r1,uVar3);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 8) + -1;
      }
      *(int *)(param_1 + 0x44) = iVar1;
      param_2 = extraout_s0_01;
    }
  }
  return param_2;
}


