/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261660 FUN_00261660 */

undefined1 FUN_00261660(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = 0;
  if (-1 < iVar2) {
    uVar1 = *(undefined1 *)((int)param_1 + iVar2 * 0x10 + 0xe);
    FUN_002615ac(param_1,uVar1,param_1 + iVar2 * 4 + 4,param_4,param_4);
    *param_1 = *param_1 + -1;
  }
  return uVar1;
}


