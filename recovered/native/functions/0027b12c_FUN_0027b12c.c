/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027b12c FUN_0027b12c */

void FUN_0027b12c(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  undefined8 uVar3;
  int in_stack_00000020;
  int in_stack_00000028;
  uint in_stack_00000040;
  uint in_stack_00000044;
  int in_stack_0000004c;
  int in_stack_00000050;
  int in_stack_0000007c;
  undefined4 in_stack_00000080;
  int in_stack_0000009c;
  
  *param_4 = param_3;
  uVar3 = FUN_0025d3f8(*(undefined4 *)(in_stack_00000050 + 4),in_stack_00000028);
  in_stack_00000040 = in_stack_00000040 & ~(uint)uVar3;
  in_stack_00000044 = in_stack_00000044 & ~(uint)((ulonglong)uVar3 >> 0x20);
  piVar1 = *(int **)(in_stack_00000050 + 0x20);
  for (in_stack_00000028 = *(int *)(in_stack_00000050 + 0x18); 0 < in_stack_00000028;
      in_stack_00000028 = in_stack_00000028 + -1) {
    if ((*(byte *)((int)piVar1 + 0x12) & 6) == 0) {
      if ((piVar1[9] & in_stack_00000044) == 0 && (piVar1[8] & in_stack_00000040) == 0) {
        if ((*(int *)(unaff_r7 + 0x18) == 0) || ((int)((uint)*(ushort *)(*piVar1 + 2) << 0x1f) < 0))
        {
          FUN_00278ac2(unaff_r6,*piVar1,in_stack_00000080,8);
          *(byte *)((int)piVar1 + 0x12) = *(byte *)((int)piVar1 + 0x12) | 4;
        }
      }
      else {
        *(undefined1 *)(in_stack_0000004c + 7) = 1;
      }
    }
    piVar1 = piVar1 + 10;
  }
  if (*(int *)(unaff_r7 + 0x18) != 0) {
    *(undefined4 *)(unaff_r7 + 0x30) = *(undefined4 *)(in_stack_00000020 + 0x1c);
    FUN_0026641e(in_stack_00000020,7,1);
    FUN_0025cb7c(unaff_r6);
    puVar2 = *(undefined4 **)(in_stack_00000050 + 0x20);
    in_stack_00000020 = 0;
    while( true ) {
      if (*(int *)(in_stack_00000050 + 0x18) <= in_stack_00000020) break;
      if (((*(byte *)((int)puVar2 + 0x12) & 6) == 0) &&
         ((puVar2[9] & in_stack_00000044) == 0 && (puVar2[8] & in_stack_00000040) == 0)) {
        FUN_00278ac2(unaff_r6,*puVar2,in_stack_00000080,8);
        *(byte *)((int)puVar2 + 0x12) = *(byte *)((int)puVar2 + 0x12) | 4;
      }
      puVar2 = puVar2 + 10;
      in_stack_00000020 = in_stack_00000020 + 1;
    }
  }
  FUN_002627fe(unaff_r6,unaff_r5);
  *(undefined4 *)(in_stack_0000004c + 0x14) = *(undefined4 *)(unaff_r7 + 0x2c);
  if (in_stack_0000007c + 1 < in_stack_0000009c) {
    FUN_0027a65e();
  }
  FUN_0027b244();
  return;
}


