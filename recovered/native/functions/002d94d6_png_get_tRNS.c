/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d94d6 png_get_tRNS */

int * png_get_tRNS(int param_1,int param_2,int *param_3,uint *param_4,int *param_5)

{
  int *piVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(*(uint *)(param_2 + 8) & 0x10);
    if (piVar1 != (int *)0x0) {
      if (*(char *)(param_2 + 0x19) == '\x03') {
        if (param_3 != (int *)0x0) {
          *param_3 = *(int *)(param_2 + 0x9c);
          param_3 = (int *)0x10;
        }
        piVar1 = param_3;
        if (param_5 != (int *)0x0) {
          *param_5 = param_2 + 0xa0;
        }
      }
      else {
        if (param_5 != (int *)0x0) {
          *param_5 = param_2 + 0xa0;
          param_5 = (int *)0x10;
        }
        piVar1 = param_5;
        if (param_3 != (int *)0x0) {
          *param_3 = 0;
        }
      }
      if (param_4 != (uint *)0x0) {
        piVar1 = (int *)0x10;
        *param_4 = (uint)*(ushort *)(param_2 + 0x16);
      }
    }
  }
  return piVar1;
}


