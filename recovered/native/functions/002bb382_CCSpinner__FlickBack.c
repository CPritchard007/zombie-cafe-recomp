/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb382 CCSpinner::FlickBack */

/* CCSpinner::FlickBack(void*) */

void CCSpinner::FlickBack(void *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x38) + -0x80000000;
  *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x18) + -0x80000000;
  __subsf3(*(undefined4 *)((int)param_1 + 0x20),0x3f800000);
  FUN_002bafd2();
  uVar1 = __floatsisf();
  *(undefined4 *)((int)param_1 + 0x2c) = uVar1;
  return;
}


