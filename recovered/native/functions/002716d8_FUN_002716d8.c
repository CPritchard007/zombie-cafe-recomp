/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002716d8 FUN_002716d8 */

uint FUN_002716d8(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint local_28;
  
  if (param_3 == 0) {
    uVar1 = FUN_002712f4();
    if (uVar1 == 5) {
      if (**(int **)(param_1 + 0x20) == 0) {
        return 0xffffffff;
      }
      if ((*(char *)(param_1 + 0x2b) == '\0') &&
         (uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),2,1,6),
         uVar1 != 0)) {
        if (uVar1 != 5) {
          return uVar1;
        }
        return DAT_002718d0;
      }
      if (*(char *)(param_1 + 0x2b) != '\0') {
        return 0xffffffff;
      }
      piVar2 = *(int **)(param_1 + 4);
      iVar3 = 2;
      pcVar6 = *(code **)(*piVar2 + 0x38);
      goto LAB_002718b2;
    }
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  uVar1 = 0;
  iVar5 = **(int **)(param_1 + 0x20);
  if ((param_3 == 0) && (*(int *)(iVar5 + 0x60) == *(int *)(param_1 + 0x44))) {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),3,1,6);
    }
    if (*(char *)(param_1 + 0x2b) != '\x02') {
      (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    }
    if (uVar1 == 0) {
      iVar5 = memcmp((void *)**(undefined4 **)(param_1 + 0x20),(void *)(param_1 + 0x34),0x30);
      if (iVar5 == 0) {
        *(undefined2 *)(param_1 + 0x28) = 0;
        return 0;
      }
      if (*(char *)(param_1 + 0x2b) != '\0') {
        return 0xffffffff;
      }
      piVar2 = *(int **)(param_1 + 4);
      iVar3 = 3;
      pcVar6 = *(code **)(*piVar2 + 0x38);
      goto LAB_002718b2;
    }
    if (uVar1 != 5) {
      return uVar1;
    }
  }
  iVar7 = 0;
  local_28 = 0;
  iVar3 = 1;
  do {
    uVar4 = *(uint *)(iVar5 + iVar3 * 4 + 100);
    if ((local_28 <= uVar4) && (uVar4 <= *(uint *)(param_1 + 0x44))) {
      iVar7 = iVar3;
      local_28 = uVar4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  if ((int)((uint)*(byte *)(param_1 + 0x2e) << 0x1e) < 0) {
LAB_00271834:
    if (iVar7 == 0) {
      return -(uint)(uVar1 == 5) | 0x208;
    }
  }
  else if ((iVar7 == 0) || (local_28 < *(uint *)(param_1 + 0x44))) {
    iVar3 = 1;
    do {
      if ((*(char *)(param_1 + 0x2b) != '\0') ||
         (uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                            (*(int **)(param_1 + 4),iVar3 + 3,1,10), uVar1 == 0)) {
        local_28 = *(uint *)(param_1 + 0x44);
        *(uint *)(iVar5 + iVar3 * 4 + 100) = local_28;
        FUN_00261c56(param_1,iVar3 + 3,1);
        iVar7 = iVar3;
        goto LAB_00271848;
      }
      if (uVar1 != 5) {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 5);
    uVar1 = 5;
    goto LAB_00271834;
  }
LAB_00271848:
  iVar3 = iVar7 + 3;
  if ((*(char *)(param_1 + 0x2b) == '\0') &&
     (uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),iVar3,1,6),
     uVar1 != 0)) {
    if (uVar1 == 5) {
      return 0xffffffff;
    }
    return uVar1;
  }
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
  }
  if ((*(uint *)(iVar5 + iVar7 * 4 + 100) == local_28) &&
     (iVar5 = memcmp((void *)**(undefined4 **)(param_1 + 0x20),(void *)(param_1 + 0x34),0x30),
     iVar5 == 0)) {
    *(short *)(param_1 + 0x28) = (short)iVar7;
    return 0;
  }
  if (*(char *)(param_1 + 0x2b) != '\0') {
    return 0xffffffff;
  }
  piVar2 = *(int **)(param_1 + 4);
  pcVar6 = *(code **)(*piVar2 + 0x38);
LAB_002718b2:
  (*pcVar6)(piVar2,iVar3,1,5);
  return 0xffffffff;
}


