/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8008 ToonAnimation::setSpeedMultiplier */

/* ToonAnimation::setSpeedMultiplier(float) */

float ToonAnimation::setSpeedMultiplier(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  float extraout_s0;
  
  if (*(int **)(in_r0 + 0x20) != (int *)0x0) {
    __udivsi3(1000,*(undefined4 *)(**(int **)(in_r0 + 0x20) + 4));
    uVar1 = __floatsisf();
    __divsf3(uVar1,in_r1);
    uVar1 = __fixsfsi();
    *(undefined4 *)(in_r0 + 0xc) = uVar1;
    param_1 = extraout_s0;
  }
  return param_1;
}


