/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6e70 png_ascii_from_fixed */

void png_ascii_from_fixed(undefined4 param_1,char *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_2c;
  char acStack_28 [12];
  int local_1c;
  
  local_2c = *(int **)(DAT_002d6f3c + 0x2d6e7c);
  local_1c = **(int **)(DAT_002d6f3c + 0x2d6e7c);
  if (param_3 < 0xd) {
LAB_002d6f2c:
    png_error(param_1,DAT_002d6f40 + 0x2d6f32);
  }
  else {
    uVar2 = param_4;
    if ((int)param_4 < 0) {
      *param_2 = '-';
      uVar2 = -param_4;
      if (0x7fffffff < uVar2 && param_4 != 0x80000000) goto LAB_002d6f2c;
      param_2 = param_2 + 1;
    }
    uVar3 = 0;
    uVar5 = 0x10;
    while (uVar2 != 0) {
      uVar1 = __udivsi3(uVar2,10);
      iVar4 = uVar2 + uVar1 * -10;
      acStack_28[uVar3] = (char)iVar4 + '0';
      uVar3 = uVar3 + 1;
      uVar2 = uVar1;
      if ((iVar4 != 0) && (uVar5 == 0x10)) {
        uVar5 = uVar3;
      }
    }
    if (uVar3 == 0) {
      *param_2 = '0';
      param_2 = param_2 + 1;
    }
    else {
      for (; 5 < uVar3; uVar3 = uVar3 - 1) {
        *param_2 = acStack_28[uVar3 - 1];
        param_2 = param_2 + 1;
      }
      if (uVar5 < 6) {
        *param_2 = '.';
        for (uVar2 = 5; param_2 = param_2 + 1, uVar3 < uVar2; uVar2 = uVar2 - 1) {
          *param_2 = '0';
        }
        for (; uVar5 <= uVar3; uVar3 = uVar3 - 1) {
          *param_2 = acStack_28[uVar3 - 1];
          param_2 = param_2 + 1;
        }
      }
    }
    *param_2 = '\0';
    if (local_1c == *local_2c) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


