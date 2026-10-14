/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002da94c png_create_read_struct_2 */

int png_create_read_struct_2(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar1 = png_create_png_struct();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x134) = 0x8000;
    *(undefined4 *)(iVar1 + 0x380) = 0x2000;
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) | 0x300000;
    png_set_read_fn(iVar1,0,0,iVar1 + 0xfc,in_stack_00000000,in_stack_00000004,in_stack_00000008,
                    in_r3);
  }
  return iVar1;
}


