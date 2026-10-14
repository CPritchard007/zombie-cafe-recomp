/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274c90 FUN_00274c90 */

void FUN_00274c90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  int local_14;
  
  psVar4 = (short *)(param_1 + 0x5e);
  iVar3 = (int)*psVar4;
  uVar2 = DAT_00274cec;
  local_14 = param_2;
  if (iVar3 < 0x13) {
    iVar1 = FUN_00274c54(*(undefined4 *)(param_1 + 4),param_2,&local_14,0,param_1);
    if (iVar1 != 0) {
      return;
    }
    *(int *)((iVar3 + 0x23) * 4 + param_1) = local_14;
    *(undefined2 *)((iVar3 + 0x31) * 2 + param_1) = 0;
    *psVar4 = *psVar4 + 1;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    uVar2 = DAT_00274cf0;
    if ((*(short *)(local_14 + 0x10) != 0) &&
       (*(char *)(local_14 + 2) == *(char *)(*(int *)((iVar3 + 0x22) * 4 + param_1) + 2))) {
      return;
    }
  }
  FUN_0026b4e4(uVar2);
  return;
}


