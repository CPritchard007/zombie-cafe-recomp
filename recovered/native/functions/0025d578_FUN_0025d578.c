/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d578 FUN_0025d578 */

void FUN_0025d578(int param_1,int *param_2)

{
  char cVar1;
  
  do {
    if (param_2 == (int *)0x0) {
      return;
    }
    if ((*(byte *)((int)param_2 + 0x12) & 4) != 0) {
      return;
    }
    if ((*(int *)(param_1 + 0x18) != 0) && ((*(ushort *)(*param_2 + 2) & 1) == 0)) {
      return;
    }
    *(byte *)((int)param_2 + 0x12) = *(byte *)((int)param_2 + 0x12) | 4;
    if (param_2[1] < 0) {
      return;
    }
    param_2 = (int *)(*(int *)(param_2[5] + 0x20) + param_2[1] * 0x28);
    cVar1 = *(char *)((int)param_2 + 0x13) + -1;
    *(char *)((int)param_2 + 0x13) = cVar1;
  } while (cVar1 == '\0');
  return;
}


