/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00285af0 FUN_00285af0 */

void FUN_00285af0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *__src;
  undefined4 uVar3;
  undefined4 local_8c;
  undefined1 auStack_88 [100];
  int local_24;
  
  piVar2 = *(int **)(DAT_00285b84 + 0x285afe);
  uVar3 = *param_1;
  local_24 = *piVar2;
  local_8c = 0;
  if (param_1[0x11] == 0) {
    iVar1 = FUN_00268514(uVar3,param_2);
    if (iVar1 != 0) {
      *(char *)((int)param_1 + 0x12) = *(char *)((int)param_1 + 0x12) + '\x01';
      __src = param_1 + 0x73;
      memcpy(auStack_88,__src,100);
      memset(__src,0,100);
      FUN_002856f4(param_1,iVar1,&local_8c);
      FUN_0025fbda(uVar3,local_8c);
      FUN_0025fbda(uVar3,iVar1);
      memcpy(__src,auStack_88,100);
      *(char *)((int)param_1 + 0x12) = *(char *)((int)param_1 + 0x12) + -1;
    }
  }
  if (local_24 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


