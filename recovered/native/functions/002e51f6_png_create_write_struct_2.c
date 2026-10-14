/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e51f6 png_create_write_struct_2 */

int png_create_write_struct_2(void)

{
  int iVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar1 = png_create_png_struct();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x180) = 0x2000;
    *(undefined4 *)(iVar1 + 0x194) = 1;
    *(undefined4 *)(iVar1 + 0x184) = 0xffffffff;
    *(undefined4 *)(iVar1 + 400) = 8;
    *(undefined4 *)(iVar1 + 0x18c) = 0xf;
    *(undefined4 *)(iVar1 + 0x188) = 8;
    *(undefined4 *)(iVar1 + 0x1a8) = 0;
    *(undefined4 *)(iVar1 + 0x198) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x1a4) = 8;
    *(undefined4 *)(iVar1 + 0x1a0) = 0xf;
    *(undefined4 *)(iVar1 + 0x19c) = 8;
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) | 0x200000;
    png_set_write_fn(iVar1,0,0,0,in_stack_00000000,in_stack_00000004,in_stack_00000008);
  }
  return iVar1;
}


