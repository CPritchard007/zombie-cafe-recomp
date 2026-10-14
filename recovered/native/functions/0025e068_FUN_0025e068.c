/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e068 FUN_0025e068 */

void FUN_0025e068(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  int local_1c;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  piVar3 = *(int **)(DAT_0025e128 + 0x25e074);
  iVar2 = *param_1;
  local_1c = *piVar3;
  FUN_0025ba48(auStack_34,*(undefined4 *)(param_2 + 0x14));
  FUN_0025ba48(auStack_30,param_3);
  memcpy(auStack_2c,(void *)(iVar2 + 0x54),8);
  iVar4 = iVar2 + 0x4c;
  bVar5 = (bool)*(char *)(iVar2 + 0x41) == (*(char *)(DAT_0025e12c + 0x25e0ec) == '\0');
  FUN_0025c0ac(bVar5,auStack_34,8,iVar4,iVar4);
  FUN_0025c0ac(bVar5,uVar1,*(undefined4 *)(iVar2 + 0x24),iVar4,iVar4);
  FUN_0025ba48(auStack_24,*(undefined4 *)(iVar2 + 0x4c));
  FUN_0025ba48(auStack_20,*(undefined4 *)(iVar2 + 0x50));
  iVar2 = FUN_0025c172(param_1,auStack_34,0x18);
  if (iVar2 == 0) {
    param_6 = param_6 + (uint)(0xffffffe7 < param_5);
    FUN_0025c172(param_1,uVar1,param_1[5],param_6,param_5 + 0x18,param_6);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


