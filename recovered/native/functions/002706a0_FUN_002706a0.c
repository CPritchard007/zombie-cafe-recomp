/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002706a0 FUN_002706a0 */

void FUN_002706a0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_1c [2];
  
  iVar1 = *(int *)(param_2 + 0xc) + param_3 * 0x18;
  FUN_00270478(*param_1,*(undefined4 *)(iVar1 + 4),
               *(undefined1 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),
               *(undefined1 *)(iVar1 + 0x16),local_1c);
  if (local_1c[0] != 0) {
    FUN_00263832(param_1,0xffffffff,local_1c[0],0xfffffff8);
  }
  if ((-1 < param_4) && (*(char *)(*(int *)(param_2 + 0xc) + param_3 * 0x18 + 0x16) == 'e')) {
    FUN_002665da(param_1,0x16,param_4);
  }
  return;
}


