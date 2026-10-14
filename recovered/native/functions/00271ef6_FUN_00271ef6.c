/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00271ef6 FUN_00271ef6 */

uint FUN_00271ef6(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_28;
  
  bVar1 = false;
  local_30 = 0;
  uVar4 = 0;
  local_28 = param_4;
  do {
    if ((uVar4 != 0) || (*(int *)(param_1 + 0x14) <= local_30)) {
      if ((bVar1) && (uVar4 == 0)) {
        uVar4 = 5;
      }
      return uVar4;
    }
    if ((local_30 == param_2) || (uVar4 = (uint)(param_2 == 10), (param_2 == 10) != 0)) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x10) + local_30 * 0x10 + 4);
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        piVar3 = *(int **)(iVar5 + 4);
        FUN_00261f68(iVar5);
        uVar4 = 6;
        if (*(char *)((int)piVar3 + 0x13) == '\0') {
          iVar2 = *piVar3;
          uVar4 = *(uint *)(iVar2 + 0xb8);
          if (uVar4 != 0) {
            uVar4 = FUN_002718d4(uVar4,param_3,*(undefined4 *)(iVar2 + 0x98),
                                 *(undefined4 *)(iVar2 + 0x9c),*(undefined1 *)(iVar2 + 9),
                                 *(undefined4 *)(iVar2 + 0x80),*(undefined4 *)(iVar2 + 0xb0),
                                 local_28,param_5);
          }
        }
        FUN_00262002(iVar5);
        if (uVar4 == 5) {
          uVar4 = 0;
          bVar1 = true;
          param_5 = 0;
          local_28 = 0;
          goto LAB_00271f98;
        }
      }
      param_5 = 0;
      local_28 = 0;
    }
LAB_00271f98:
    local_30 = local_30 + 1;
  } while( true );
}


