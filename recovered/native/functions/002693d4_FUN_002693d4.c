/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002693d4 FUN_002693d4 */

int * FUN_002693d4(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_3c;
  int local_38;
  int local_1c [2];
  
  if (param_3 != (int *)0x0) {
    uVar6 = *(undefined4 *)*param_2;
    uVar1 = *param_1;
    puVar8 = (undefined4 *)param_3[2];
    for (local_38 = 0; local_38 < *param_3; local_38 = local_38 + 1) {
      pcVar4 = (char *)*puVar8;
      piVar7 = (int *)*param_2;
      local_3c = 0;
      if (*pcVar4 == '\x1a') {
        local_3c = 0;
        uVar2 = *(undefined4 *)(pcVar4 + 4);
        for (; local_3c < *piVar7; local_3c = local_3c + 1) {
          iVar3 = *(int *)(piVar7[2] + local_3c * 0x14 + 4);
          if ((iVar3 != 0) && (iVar3 = sqlite3_stricmp(iVar3,uVar2), iVar3 == 0)) {
            local_3c = local_3c + 1;
            goto LAB_00269442;
          }
        }
        local_3c = 0;
      }
LAB_00269442:
      local_1c[0] = local_3c;
      if (local_3c < 1) {
        iVar3 = FUN_00262644(pcVar4,local_1c);
        if (iVar3 != 0) {
          if (local_1c[0] < 1) {
            FUN_00268e48(uVar1,DAT_002694cc + 0x269468,local_38 + 1,param_4,uVar6);
            return (int *)0x1;
          }
          goto LAB_00269470;
        }
        *(undefined2 *)((int)puVar8 + 0xe) = 0;
        iVar3 = FUN_00269020(param_1,pcVar4);
        if (iVar3 != 0) {
          return (int *)0x1;
        }
        iVar3 = 0;
        while (iVar3 < *(int *)*param_2) {
          iVar5 = iVar3 * 0x14;
          iVar3 = iVar3 + 1;
          iVar5 = FUN_0026321e(pcVar4,*(undefined4 *)(iVar5 + ((int *)*param_2)[2]));
          if (iVar5 == 0) {
            *(short *)((int)puVar8 + 0xe) = (short)iVar3;
          }
        }
      }
      else {
LAB_00269470:
        *(short *)((int)puVar8 + 0xe) = (short)local_1c[0];
      }
      puVar8 = puVar8 + 5;
    }
    param_3 = (int *)FUN_0026934c(uVar1,param_2,param_3,param_4);
  }
  return param_3;
}


