/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb030 CCSpinner::Setup */

/* CCSpinner::Setup(void*, unsigned int, float, float, unsigned int, float, unsigned int) */

void CCSpinner::Setup(void *param_1,uint param_2,float param_3,float param_4,uint param_5,
                     float param_6,uint param_7)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(uint *)((int)param_1 + 4) = param_7;
  *(uint *)param_1 = param_2;
  *(undefined4 *)((int)param_1 + 0x18) = in_stack_00000004;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 1;
  *(undefined4 *)((int)param_1 + 8) = in_stack_00000000;
  *(uint *)((int)param_1 + 0x20) = param_5;
  *(undefined4 *)((int)param_1 + 0xc) = in_stack_00000008;
  return;
}


