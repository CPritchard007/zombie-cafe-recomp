/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c07aa CCPathFinding::SetNode */

/* CCPathFinding::SetNode(void*, unsigned int, unsigned int const*, float const*, unsigned int,
   unsigned int) */

undefined4
CCPathFinding::SetNode
          (void *param_1,uint param_2,uint *param_3,float *param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)((int)param_1 + 4) + param_2 * 0x24);
  puVar1[2] = (uint)param_4;
  puVar1[1] = (uint)param_3;
  *puVar1 = param_5;
  puVar1[8] = param_6;
  return 1;
}


