/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002712f4 FUN_002712f4 */

void FUN_002712f4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined4 local_a8;
  int local_a4;
  int local_94;
  undefined4 local_88;
  ushort local_84;
  int local_4c;
  uint local_48;
  int local_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  int local_1c;
  
  piVar13 = *(int **)(DAT_00271654 + 0x271300);
  local_1c = *piVar13;
  iVar1 = FUN_002682b8(param_1,0,&local_4c);
  if (iVar1 != 0) goto LAB_002716ac;
  if (local_4c == 0) {
    local_a4 = 1;
LAB_00271334:
    if ((int)((uint)*(byte *)(param_1 + 0x2e) << 0x1e) < 0) {
      if ((*(char *)(param_1 + 0x2b) != '\0') ||
         (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,6),
         iVar1 == 0)) {
        if (*(char *)(param_1 + 0x2b) == '\0') {
          (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,5);
        }
        iVar1 = 0x108;
      }
      goto LAB_002716ac;
    }
    if ((*(char *)(param_1 + 0x2b) == '\0') &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,10),
       iVar1 != 0)) goto LAB_002716ac;
    *(undefined1 *)(param_1 + 0x2c) = 1;
    iVar1 = FUN_002682b8(param_1,0,&local_4c);
    if ((iVar1 == 0) && (local_a4 = FUN_0025e3e8(param_1,param_2), local_a4 != 0)) {
      iVar14 = *(byte *)(param_1 + 0x2d) + 1;
      iVar9 = 7 - (uint)*(byte *)(param_1 + 0x2d);
      if ((*(char *)(param_1 + 0x2b) != '\0') ||
         (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                            (*(int **)(param_1 + 4),iVar14,iVar9,10), iVar1 == 0)) {
        memset((void *)(param_1 + 0x34),0,0x30);
        iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&local_48);
        iVar1 = iVar2;
        if (iVar2 == 0) {
          if ((local_44 < 1) && ((local_44 != 0 || (local_48 < 0x21)))) goto LAB_002716ba;
          pcVar10 = *(code **)(**(int **)(param_1 + 8) + 8);
          iVar1 = (*pcVar10)(*(int **)(param_1 + 8),auStack_3c,0x20,pcVar10,0,0);
          if (iVar1 != 0) goto LAB_00271676;
          uVar3 = FUN_0025ba30(auStack_3c);
          uVar4 = FUN_0025ba30(auStack_34);
          if (((((uVar3 & 0xfffffffe) == DAT_00271658) && ((uVar4 - 1 & uVar4) == 0)) &&
              ((int)uVar4 < 0x10001)) && (DAT_0027165c < (int)uVar4)) {
            *(byte *)(param_1 + 0x41) = (byte)uVar3 & 1;
            *(uint *)(param_1 + 0x24) = uVar4;
            uVar5 = FUN_0025ba30(auStack_30);
            *(undefined4 *)(param_1 + 0x68) = uVar5;
            memcpy((void *)(param_1 + 0x54),auStack_2c,8);
            bVar16 = *(char *)(DAT_00271660 + 0x2714ce) == '\0';
            iVar11 = param_1 + 0x4c;
            FUN_0025c0ac((bool)*(byte *)(param_1 + 0x41) == bVar16,auStack_3c,0x18,0,iVar11);
            iVar1 = FUN_0025ba30(auStack_24);
            if ((*(int *)(param_1 + 0x4c) != iVar1) ||
               (iVar1 = FUN_0025ba30(auStack_20), *(int *)(param_1 + 0x50) != iVar1))
            goto LAB_002716ba;
            iVar1 = FUN_0025ba30(auStack_38);
            local_a8 = 0;
            local_88 = local_a8;
            if (iVar1 == DAT_00271664) {
              uVar3 = uVar4 + 0x18;
              iVar6 = sqlite3_malloc(uVar3);
              if (iVar6 == 0) {
                iVar1 = 7;
                goto LAB_00271676;
              }
              local_84 = (ushort)uVar4 & 0xff00 | (ushort)(uVar4 >> 0x10);
              local_94 = 0;
              uVar4 = 0x20;
              iVar1 = 0;
              while( true ) {
                uVar12 = uVar3 + uVar4;
                iVar15 = ((int)uVar3 >> 0x1f) + iVar1 + (uint)CARRY4(uVar3,uVar4);
                if ((local_44 < iVar15) || ((local_44 == iVar15 && (local_48 < uVar12)))) break;
                pcVar10 = *(code **)(**(int **)(param_1 + 8) + 8);
                iVar1 = (*pcVar10)(*(int **)(param_1 + 8),iVar6,uVar3,pcVar10,uVar4,iVar1);
                if (((iVar1 != 0) ||
                    (iVar7 = memcmp((void *)(param_1 + 0x54),(void *)(iVar6 + 8),8), iVar7 != 0)) ||
                   (iVar7 = FUN_0025ba30(iVar6), iVar7 == 0)) goto LAB_00271606;
                bVar17 = (bool)*(char *)(param_1 + 0x41) == bVar16;
                FUN_0025c0ac(bVar17,iVar6,8,iVar11,iVar11);
                FUN_0025c0ac(bVar17,iVar6 + 0x18,*(undefined4 *)(param_1 + 0x24),iVar11,iVar11);
                iVar8 = FUN_0025ba30(iVar6 + 0x10);
                if ((*(int *)(param_1 + 0x4c) != iVar8) ||
                   (iVar8 = FUN_0025ba30(iVar6 + 0x14), *(int *)(param_1 + 0x50) != iVar8))
                goto LAB_00271606;
                local_94 = local_94 + 1;
                iVar8 = FUN_0025ba30(iVar6 + 4);
                iVar1 = FUN_0026b504(param_1,local_94,iVar7);
                if (iVar1 != 0) goto LAB_00271606;
                uVar4 = uVar12;
                iVar1 = iVar15;
                if (iVar8 != 0) {
                  *(int *)(param_1 + 0x44) = local_94;
                  *(int *)(param_1 + 0x48) = iVar8;
                  *(ushort *)(param_1 + 0x42) = local_84;
                  local_88 = *(undefined4 *)(param_1 + 0x4c);
                  local_a8 = *(undefined4 *)(param_1 + 0x50);
                }
              }
              iVar1 = 0;
LAB_00271606:
              sqlite3_free(iVar6);
            }
            else {
              iVar1 = FUN_0026b474(DAT_00271668);
            }
            if (iVar1 != 0) goto LAB_00271676;
          }
          else {
LAB_002716ba:
            local_a8 = 0;
            local_88 = 0;
          }
          *(undefined4 *)(param_1 + 0x4c) = local_88;
          *(undefined4 *)(param_1 + 0x50) = local_a8;
          FUN_0025e130(param_1);
          iVar1 = **(int **)(param_1 + 0x20);
          *(undefined4 *)(iVar1 + 0x60) = 0;
          *(undefined4 *)(iVar1 + 100) = 0;
          *(undefined4 *)(iVar1 + 0x68) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x70) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x74) = 0xffffffff;
          if (*(int *)(param_1 + 0x44) != 0) {
            *(int *)(iVar1 + 0x68) = *(int *)(param_1 + 0x44);
          }
          iVar1 = iVar2;
          if (*(int *)(param_1 + 0x48) != 0) {
            sqlite3_log(0,DAT_0027166c + 0x27164c,*(int *)(param_1 + 0x48),
                        *(undefined4 *)(param_1 + 100));
          }
        }
LAB_00271676:
        FUN_00261c56(param_1,iVar14,iVar9);
      }
      *param_2 = 1;
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    FUN_00261c56(param_1,0,1);
    if (local_a4 != 0) goto LAB_002716ac;
  }
  else {
    local_a4 = FUN_0025e3e8(param_1,param_2);
    if (local_a4 != 0) goto LAB_00271334;
  }
  if (*(int *)(param_1 + 0x34) != DAT_002716d0) {
    iVar1 = FUN_0026b474(DAT_002716d4);
  }
LAB_002716ac:
  if (local_1c == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


