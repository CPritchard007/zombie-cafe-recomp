/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264918 FUN_00264918 */

uint FUN_00264918(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  int local_30;
  uint local_2c;
  
  uVar5 = *(uint *)(*param_1 + 0x18) & 0x4000000;
  if (uVar5 != 0) {
    if (param_3 == (int *)0x0) {
      iVar1 = FUN_0025d110(param_2);
      uVar5 = 1;
      if (iVar1 == 0) {
        uVar5 = (uint)(*(int *)(param_2 + 0x24) != 0);
      }
    }
    else {
      for (iVar1 = *(int *)(param_2 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        iVar2 = iVar1;
        for (iVar3 = 0; iVar3 < *(int *)(iVar1 + 0x14); iVar3 = iVar3 + 1) {
          piVar6 = (int *)(iVar2 + 0x24);
          if ((-1 < param_3[*piVar6]) ||
             ((iVar2 = iVar2 + 8, *piVar6 == *(int *)(param_2 + 4) && (param_4 != 0)))) {
            return 1;
          }
        }
      }
      uVar5 = FUN_0025d110(param_2);
      for (; uVar5 != 0; uVar5 = *(uint *)(uVar5 + 0xc)) {
        local_2c = uVar5;
        for (local_30 = 0; local_30 < *(int *)(uVar5 + 0x14); local_30 = local_30 + 1) {
          iVar1 = *(int *)(local_2c + 0x28);
          piVar6 = param_3;
          for (iVar2 = 0; iVar2 < *(int *)(param_2 + 8); iVar2 = iVar2 + 1) {
            puVar4 = (undefined4 *)(*(int *)(param_2 + 0xc) + iVar2 * 0x18);
            if (iVar1 == 0) {
              bVar7 = *(char *)((int)puVar4 + 0x15) != '\0';
            }
            else {
              iVar3 = sqlite3_stricmp(*puVar4,iVar1);
              bVar7 = iVar3 == 0;
            }
            if (bVar7) {
              if (-1 < *piVar6) {
                return 1;
              }
              if ((iVar2 == *(int *)(param_2 + 4)) && (param_4 != 0)) {
                return 1;
              }
            }
            piVar6 = piVar6 + 1;
          }
          local_2c = local_2c + 8;
        }
      }
    }
  }
  return uVar5;
}


