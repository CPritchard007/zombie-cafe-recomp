/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e5bd8 png_set_filter_heuristics_fixed */

undefined8
png_set_filter_heuristics_fixed(int param_1,uint param_2,int param_3,int *param_4,int *param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  
  local_20 = param_1;
  if (param_1 != 0) {
    FUN_002e48e0();
    if (param_2 == 2) {
      iVar2 = FUN_002e4c7c(param_1,param_3);
      if (iVar2 != 0) {
        iVar2 = 0;
        for (iVar4 = 0; iVar4 < param_3; iVar4 = iVar4 + 1) {
          if (*param_4 < 1) {
            iVar3 = *(int *)(param_1 + 0x2dc);
            *(undefined2 *)(*(int *)(param_1 + 0x2d8) + iVar2) = 0x100;
            *(undefined2 *)(iVar3 + iVar2) = 0x100;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x2dc);
            uVar1 = __divsi3(*param_4 * 0x100 + DAT_002e5cb0,DAT_002e5cb4);
            *(undefined2 *)(iVar3 + iVar2) = uVar1;
            local_20 = *(int *)(param_1 + 0x2d8);
            uVar1 = __divsi3(*param_4 / 2 + DAT_002e5cb8);
            *(undefined2 *)(local_20 + iVar2) = uVar1;
          }
          iVar2 = iVar2 + 2;
          param_4 = param_4 + 1;
        }
        iVar2 = 0;
        do {
          if (DAT_002e5cbc < *param_5) {
            iVar4 = *(int *)(param_1 + 0x2e4);
            uVar1 = __udivsi3((*param_5 >> 1) + DAT_002e5cc0);
            *(undefined2 *)(iVar4 + iVar2) = uVar1;
            iVar4 = *(int *)(param_1 + 0x2e0);
            uVar1 = __udivsi3((*param_5 + DAT_002e5cc4) * 8,DAT_002e5cb4);
            *(undefined2 *)(iVar4 + iVar2) = uVar1;
          }
          iVar2 = iVar2 + 2;
          param_5 = param_5 + 1;
        } while (iVar2 != 10);
      }
    }
    else if (1 < param_2) {
      png_warning(param_1,DAT_002e5cac + 0x2e5c0e);
    }
  }
  return CONCAT44(param_3,local_20);
}


