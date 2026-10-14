/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bee58 CCCarousel::HandleMouseDown */

/* CCCarousel::HandleMouseDown(ccCarousel*, float, unsigned int) */

void CCCarousel::HandleMouseDown(ccCarousel *param_1,float param_2,uint param_3)

{
  undefined4 in_r2;
  
  *(undefined4 *)(param_1 + 0x40) = in_r2;
  *(uint *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)param_1;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x24) = param_3;
  *(uint *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return;
}


