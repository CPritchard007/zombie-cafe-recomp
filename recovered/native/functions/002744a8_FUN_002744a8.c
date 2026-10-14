/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002744a8 FUN_002744a8 */

int FUN_002744a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int local_48;
  int local_3c;
  int local_38;
  uint local_24;
  undefined8 local_20;
  
  iVar1 = *(int *)(param_1 + 0x28);
  local_3c = iVar1;
  if ((iVar1 == 0) && (param_3 < *(int *)(param_1 + 0x60))) {
    param_3 = param_3 + (uint)(param_2 != 1);
    iVar7 = param_3 * 0x30;
    iVar8 = param_2;
    for (iVar5 = param_3; iVar5 < *(int *)(param_1 + 0x60); iVar5 = iVar5 + 1) {
      FUN_0025f68e(*(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 0x10));
      iVar7 = iVar7 + 0x30;
      iVar8 = extraout_r1;
    }
    *(int *)(param_1 + 0x60) = param_3;
    if (param_2 == 1) {
      if (param_3 == 0) {
        iVar1 = **(int **)(param_1 + 0x44);
        if (iVar1 != 0) {
          if (iVar1 == DAT_002747cc + 0x27455e) {
            local_3c = FUN_0025fb8c(*(int **)(param_1 + 0x44),iVar8,0,0);
          }
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
      }
    }
    else if ((*(int *)(param_1 + 0xb8) != 0) || (**(int **)(param_1 + 0x40) != 0)) {
      if ((param_3 == 0) ||
         (puVar9 = (undefined4 *)(*(int *)(param_1 + 0x5c) + (param_3 + -1) * 0x30),
         puVar9 == (undefined4 *)0x0)) {
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        local_38 = 0;
        puVar9 = (undefined4 *)0x0;
      }
      else {
        local_38 = FUN_0025f3c2(puVar9[5]);
        if (local_38 == 0) {
          return 7;
        }
        uVar6 = puVar9[5];
      }
      *(undefined4 *)(param_1 + 0x18) = uVar6;
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0xc);
      if ((puVar9 == (undefined4 *)0x0) && (iVar8 = *(int *)(param_1 + 0xb8), iVar8 != 0)) {
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
        if (*(char *)(iVar8 + 0x2c) != '\0') {
          uVar2 = *(uint *)(iVar8 + 0x44);
          memcpy((void *)(iVar8 + 0x34),(void *)**(undefined4 **)(iVar8 + 0x20),0x30);
          local_48 = (*(uint *)(iVar8 + 0x44) + 0x22) * 4;
          uVar3 = *(uint *)(iVar8 + 0x44);
          while ((uVar10 = uVar3 + 1, uVar10 <= uVar2 && (local_3c == 0))) {
            uVar3 = uVar3 + 0x22 >> 0xc;
            if (uVar3 == 0) {
              puVar9 = (undefined4 *)(**(int **)(iVar8 + 0x20) + local_48);
            }
            else {
              puVar9 = (undefined4 *)
                       ((*(int **)(iVar8 + 0x20))[uVar3] +
                       ((uVar10 + DAT_002747d0) * 0x100000 >> 0x12));
            }
            local_3c = FUN_002749d4(param_1,*puVar9);
            local_48 = local_48 + 4;
            uVar3 = uVar10;
          }
          FUN_00268392(iVar8);
        }
        piVar4 = *(int **)(param_1 + 0xb4);
        iVar1 = *piVar4;
        while (iVar1 != 0) {
          *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0x20);
          iVar1 = *(int *)(iVar1 + 0x20);
        }
        iVar1 = FUN_0025de82(*piVar4);
        while ((local_3c == 0 && (iVar1 != 0))) {
          iVar8 = *(int *)(iVar1 + 0xc);
          local_3c = FUN_002749d4(param_1,*(undefined4 *)(iVar1 + 0x14));
          iVar1 = iVar8;
        }
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x48);
        iVar8 = *(int *)(param_1 + 0x4c);
        if ((puVar9 == (undefined4 *)0x0) || (*(int *)(param_1 + 0xb8) != 0)) {
          *(undefined4 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x4c) = 0;
LAB_00274680:
          local_3c = 0;
          while ((*(int *)(param_1 + 0x4c) < iVar8 ||
                 ((*(int *)(param_1 + 0x4c) == iVar8 && (*(uint *)(param_1 + 0x48) < uVar3))))) {
            local_24 = 0;
            local_3c = FUN_00263fd8(param_1,0,uVar3,iVar8,&local_24,&local_20);
            if (local_24 == 0) {
              uVar2 = *(uint *)(param_1 + 0x7c) + *(uint *)(param_1 + 0x50);
              iVar5 = *(int *)(param_1 + 0x54) +
                      (uint)CARRY4(*(uint *)(param_1 + 0x7c),*(uint *)(param_1 + 0x50));
              if ((*(uint *)(param_1 + 0x48) == uVar2) && (*(int *)(param_1 + 0x4c) == iVar5)) {
                iVar7 = *(int *)(param_1 + 0x80) + 8;
                local_24 = __aeabi_ldivmod(uVar3 - uVar2,(iVar8 - iVar5) - (uint)(uVar3 < uVar2),
                                           iVar7,iVar7 >> 0x1f);
              }
            }
            uVar2 = 0;
            while( true ) {
              if (local_3c != 0) goto LAB_00274736;
              if ((local_24 <= uVar2) ||
                 ((iVar8 <= *(int *)(param_1 + 0x4c) &&
                  ((*(int *)(param_1 + 0x4c) != iVar8 || (uVar3 <= *(uint *)(param_1 + 0x48)))))))
              break;
              local_3c = FUN_00273ae0(param_1,param_1 + 0x48,local_38,1,1);
              uVar2 = uVar2 + 1;
            }
          }
        }
        else {
          uVar2 = puVar9[2];
          iVar5 = puVar9[3];
          if (puVar9[2] == 0 && puVar9[3] == 0) {
            uVar2 = uVar3;
            iVar5 = iVar8;
          }
          uVar6 = puVar9[1];
          *(undefined4 *)(param_1 + 0x48) = *puVar9;
          *(undefined4 *)(param_1 + 0x4c) = uVar6;
          do {
            if ((iVar5 <= *(int *)(param_1 + 0x4c)) &&
               ((*(int *)(param_1 + 0x4c) != iVar5 || (uVar2 <= *(uint *)(param_1 + 0x48)))))
            goto LAB_00274680;
            local_3c = FUN_00273ae0(param_1,param_1 + 0x48,local_38,1,1);
          } while (local_3c == 0);
        }
LAB_00274736:
        if (puVar9 != (undefined4 *)0x0) {
          iVar5 = *(int *)(param_1 + 0x80) + 4;
          local_20 = __muldi3(puVar9[6],0,iVar5,iVar5 >> 0x1f);
          iVar5 = *(int *)(param_1 + 0xb8);
          if (iVar5 != 0) {
            if (puVar9[10] != *(int *)(iVar5 + 0x68)) {
              puVar9[7] = 0;
              puVar9[10] = *(undefined4 *)(iVar5 + 0x68);
            }
            local_3c = iVar1;
            if ((uint)puVar9[7] < *(uint *)(iVar5 + 0x44)) {
              *(undefined4 *)(iVar5 + 0x44) = puVar9[7];
              *(undefined4 *)(iVar5 + 0x4c) = puVar9[8];
              *(undefined4 *)(iVar5 + 0x50) = puVar9[9];
              FUN_00268392();
            }
          }
          for (uVar2 = puVar9[6]; (local_3c == 0 && (uVar2 < *(uint *)(param_1 + 0x34)));
              uVar2 = uVar2 + 1) {
            local_3c = FUN_00273ae0(param_1,&local_20,local_38,0,1);
          }
        }
        FUN_0025f68e(local_38);
        if (local_3c == 0) {
          *(uint *)(param_1 + 0x48) = uVar3;
          *(int *)(param_1 + 0x4c) = iVar8;
        }
      }
    }
  }
  return local_3c;
}


