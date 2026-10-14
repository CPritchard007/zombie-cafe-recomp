/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002beec4 CCCarousel::HandleMouseMove */

/* CCCarousel::HandleMouseMove(ccCarousel*, float) */

float CCCarousel::HandleMouseMove(ccCarousel *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x24) = in_r1;
    uVar5 = *(uint *)(param_1 + 0x38);
    uVar1 = __subsf3(*(undefined4 *)(param_1 + 0x28));
    iVar2 = __aeabi_fcmpgt(uVar5,uVar1 & 0x7fffffff);
    uVar4 = uVar1 & 0x7fffffff;
    if (iVar2 != 0) {
      uVar4 = uVar5;
    }
    *(uint *)(param_1 + 0x38) = uVar4;
    uVar3 = __mulsf3(uVar1,*(undefined4 *)(param_1 + 0x14));
    uVar3 = __subsf3(*(undefined4 *)(param_1 + 0x20),uVar3);
    param_2 = (float)FUN_002bed98(param_1,uVar3);
  }
  return param_2;
}


