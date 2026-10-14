/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027fe18 FUN_0027fe18 */

void FUN_0027fe18(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0027ffa4 + 0x27fe24);
  local_1c = *piVar3;
  if (*(char *)(param_1 + 7) == '\0') {
    if ((**(int **)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 5) == '\x04')) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
    }
    else {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))();
      if ((uVar1 & 0x200) == 0) {
        memcpy(auStack_28,(void *)(DAT_0027ffa8 + 0x27feaa),8);
        FUN_0025ba48(auStack_20,*(undefined4 *)(param_1 + 0x2c));
        iVar7 = *(int *)(param_1 + 0x48);
        uVar9 = 0;
        if (iVar7 != 0 || *(int *)(param_1 + 0x4c) != 0) {
          uVar6 = *(undefined4 *)(param_1 + 0x7c);
          lVar8 = __aeabi_ldivmod(iVar7 + -1,*(int *)(param_1 + 0x4c) + -1 + (uint)(iVar7 != 0),
                                  uVar6,0);
          uVar9 = __muldi3((int)(lVar8 + 1),(int)((ulonglong)(lVar8 + 1) >> 0x20),uVar6,0);
        }
        pcVar4 = *(code **)(**(int **)(param_1 + 0x40) + 8);
        iVar7 = (*pcVar4)(*(int **)(param_1 + 0x40),auStack_30,8,pcVar4,uVar9);
        if ((iVar7 == 0) &&
           (iVar2 = memcmp(auStack_30,(void *)(DAT_0027ffac + 0x27ff14),8), iVar2 == 0)) {
          iVar7 = FUN_0025ace6(*(undefined4 *)(param_1 + 0x40),DAT_0027ffb0 + 0x27fefe,1);
        }
        if ((((iVar7 + DAT_0027ffb4 != 0) && (iVar7 != 0)) ||
            ((*(char *)(param_1 + 8) != '\0' &&
             ((-1 < (int)(uVar1 << 0x15) &&
              (iVar7 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                                 (*(int **)(param_1 + 0x40),*(undefined1 *)(param_1 + 0xb)),
              iVar7 != 0)))))) ||
           (iVar7 = FUN_0025ace6(*(undefined4 *)(param_1 + 0x40),auStack_28,0xc,
                                 *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50),
                                 *(undefined4 *)(param_1 + 0x54)), iVar7 != 0)) goto LAB_0027ff90;
      }
      if ((-1 < (int)(uVar1 << 0x15)) &&
         (iVar7 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                            (*(int **)(param_1 + 0x40),
                             (*(byte *)(param_1 + 0xb) == 3) * '\x10' | *(byte *)(param_1 + 0xb)),
         iVar7 != 0)) goto LAB_0027ff90;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
      if ((param_2 != 0) && ((uVar1 & 0x200) == 0)) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        iVar7 = FUN_00273070(param_1);
        if (iVar7 != 0) goto LAB_0027ff90;
      }
    }
  }
  piVar5 = *(int **)(param_1 + 0xb4);
  for (iVar7 = *piVar5; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x20)) {
    *(ushort *)(iVar7 + 0x18) = *(ushort *)(iVar7 + 0x18) & 0xfffb;
  }
  piVar5[2] = piVar5[1];
  *(undefined1 *)(param_1 + 0xf) = 4;
  iVar7 = 0;
LAB_0027ff90:
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}


