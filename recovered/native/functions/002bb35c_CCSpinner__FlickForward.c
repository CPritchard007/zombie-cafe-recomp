/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb35c CCSpinner::FlickForward */

/* CCSpinner::FlickForward(void*) */

void CCSpinner::FlickForward(void *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)param_1 + 0x38);
  *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)param_1 + 0x18);
  __addsf3(*(undefined4 *)((int)param_1 + 0x20),0x3f800000);
  FUN_002bafd2();
  uVar1 = __floatsisf();
  *(undefined4 *)((int)param_1 + 0x2c) = uVar1;
  return;
}


