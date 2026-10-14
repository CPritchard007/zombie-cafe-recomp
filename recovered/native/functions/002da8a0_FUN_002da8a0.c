/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002da8a0 FUN_002da8a0 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002da8e2) */
/* WARNING: Removing unreachable block (ram,0x002da8e2) */

undefined4 FUN_002da8a0(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000044;
  
  png_set_alpha_mode_fixed(unaff_r6,0,DAT_002da940);
  if (8 < *(byte *)(unaff_r6 + 0x218)) {
    png_set_scale_16(unaff_r6);
  }
  iVar1 = 0x100;
  if ((0x100 < in_stack_00000024) || (*(uint *)(in_stack_00000044 + 0x18) < in_stack_00000024)) {
    FUN_002d9f42(in_stack_00000024,DAT_002da944 + 0x2da8d4);
  }
  *(uint *)(in_stack_00000044 + 0x18) = in_stack_00000024;
  switch(unaff_r4) {
  case 1:
    if (unaff_r5 == 0xe7) goto LAB_002da920;
    break;
  case 2:
    if ((unaff_r5 == 0xfe) && (0xfe < in_stack_00000024)) goto LAB_002da920;
    break;
  case 3:
    goto joined_r0x002da8ec;
  case 4:
    if (unaff_r5 == 0xd8) goto LAB_002da920;
    break;
  default:
joined_r0x002da8ec:
    if (unaff_r5 == iVar1) goto LAB_002da920;
  }
  FUN_002d9f42(unaff_r4 + -1,DAT_002da948 + 0x2da91e);
LAB_002da920:
  *(int *)(in_stack_0000002c + 0x28) = unaff_r4;
  return 1;
}


