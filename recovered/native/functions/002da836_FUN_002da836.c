/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002da836 FUN_002da836 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002da8e2) */
/* WARNING: Removing unreachable block (ram,0x002da8e2) */

undefined4 FUN_002da836(void)

{
  uint in_r3;
  int iVar1;
  int unaff_r6;
  uint in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000044;
  
  if (in_r3 < 8) {
    png_set_packing(unaff_r6);
  }
  if (8 < *(byte *)(unaff_r6 + 0x218)) {
    png_set_scale_16(unaff_r6);
  }
  iVar1 = 0x100;
  if ((0x100 < in_stack_00000024) || (*(uint *)(in_stack_00000044 + 0x18) < in_stack_00000024)) {
    FUN_002d9f42(in_stack_00000024,DAT_002da944 + 0x2da8d4);
  }
  *(uint *)(in_stack_00000044 + 0x18) = in_stack_00000024;
  if (iVar1 != 0x100) {
    FUN_002d9f42(0xffffffff,DAT_002da948 + 0x2da91e);
  }
  *(undefined4 *)(in_stack_0000002c + 0x28) = 0;
  return 1;
}


