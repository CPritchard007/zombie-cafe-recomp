/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027350c FUN_0027350c */

/* WARNING: Removing unreachable block (ram,0x00273604) */

int FUN_0027350c(int param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  int *piVar7;
  size_t sVar8;
  int iVar9;
  size_t sVar10;
  int iVar11;
  longlong lVar12;
  undefined4 local_50;
  undefined4 local_4c;
  size_t local_2c;
  int local_1c [2];
  
  piVar7 = *(int **)(*(int *)(param_1 + 4) + 4);
  iVar9 = *piVar7;
  sVar8 = piVar7[8];
  sVar10 = *(size_t *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x20);
  local_2c = sVar8;
  if ((int)sVar10 < (int)sVar8) {
    local_2c = sVar10;
  }
  lVar12 = __muldi3(param_2,0,sVar10,(int)sVar10 >> 0x1f);
  iVar2 = DAT_00273618;
  iVar11 = 0;
  if ((sVar10 != sVar8) && (iVar11 = 8, *(char *)(iVar9 + 0xe) == '\0')) {
    iVar11 = 0;
  }
  lVar1 = lVar12 - (int)sVar10;
  while( true ) {
    local_4c = (undefined4)((ulonglong)lVar1 >> 0x20);
    local_50 = (undefined4)lVar1;
    if ((lVar12 <= lVar1) || (iVar11 != 0)) break;
    iVar11 = 0;
    local_1c[0] = 0;
    iVar3 = __aeabi_ldivmod(local_50,local_4c,sVar8,(int)sVar8 >> 0x1f);
    iVar4 = __udivsi3(*(undefined4 *)(iVar2 + 0x2735da),
                      *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20));
    if (iVar3 + 1 != iVar4 + 1) {
      iVar11 = FUN_00274878(iVar9,iVar3 + 1,local_1c,0);
      if ((iVar11 == 0) && (iVar11 = FUN_002733c4(local_1c[0]), iVar11 == 0)) {
        sVar5 = sVar8;
        __aeabi_ldivmod(local_50,local_4c,sVar8,(int)sVar8 >> 0x1f);
        iVar3 = *(int *)(local_1c[0] + 4);
        sVar6 = sVar10;
        __aeabi_ldivmod(local_50,local_4c,sVar10,(int)sVar10 >> 0x1f);
        memcpy((void *)(iVar3 + sVar5),(void *)(param_3 + sVar6),local_2c);
        **(undefined1 **)(local_1c[0] + 8) = 0;
      }
      FUN_002749b4(local_1c[0]);
    }
    lVar1 = lVar1 + (int)sVar8;
  }
  return iVar11;
}


