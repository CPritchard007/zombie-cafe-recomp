/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d55a4 FUN_002d55a4 */

int FUN_002d55a4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0;
  if ((param_2[6] - param_3 <= param_1[6]) && (param_1[6] <= param_2[6] + param_3)) {
    if ((param_2[7] - param_3 <= param_1[7]) && (param_1[7] <= param_2[7] + param_3)) {
      if ((*param_2 - param_3 <= *param_1) && (*param_1 <= *param_2 + param_3)) {
        if ((param_2[1] - param_3 <= param_1[1]) && (param_1[1] <= param_2[1] + param_3)) {
          if ((param_2[2] - param_3 <= param_1[2]) && (param_1[2] <= param_2[2] + param_3)) {
            if ((param_2[3] - param_3 <= param_1[3]) && (param_1[3] <= param_2[3] + param_3)) {
              if ((param_2[4] - param_3 <= param_1[4]) && (param_1[4] <= param_2[4] + param_3)) {
                uVar3 = param_1[5];
                if (param_2[5] - param_3 <= (int)uVar3) {
                  uVar2 = param_2[5] + param_3;
                  iVar1 = (((int)uVar2 >> 0x1f) - ((int)uVar3 >> 0x1f)) + (uint)(uVar3 <= uVar2);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


