/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002731c8 FUN_002731c8 */

uint FUN_002731c8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int *__s;
  uint local_2c;
  uint local_20;
  
  piVar8 = *(int **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 4);
  if (piVar8[10] != 0) {
    return piVar8[10];
  }
  if (*(char *)((int)piVar8 + 0xd) != '\0') {
    return 3;
  }
  if (*(char *)((int)piVar8 + 0xf) == '\x02') {
    iVar5 = *piVar8;
    if ((piVar8[0x2e] == 0) && (*(char *)((int)piVar8 + 5) != '\x02')) {
      iVar2 = FUN_0025f3c2(piVar8[6]);
      piVar8[0xe] = iVar2;
      if (iVar2 == 0) {
        return 7;
      }
      __s = (int *)piVar8[0x10];
      if (*__s == 0) {
        if (*(char *)((int)piVar8 + 5) == '\x04') {
          memset(__s,0,0x28);
          *__s = DAT_002733b8 + 0x273284;
        }
        else {
          uVar6 = DAT_002733c0;
          if ((char)piVar8[3] != '\0') {
            uVar6 = DAT_002733bc;
          }
          uVar3 = (**(code **)(iVar5 + 0x18))(iVar5,piVar8[0x25],__s,uVar6,0);
          if (uVar3 != 0) goto LAB_0027326e;
        }
      }
      piVar8[0xb] = 0;
      piVar8[0x12] = 0;
      piVar8[0x13] = 0;
      *(undefined1 *)((int)piVar8 + 0x12) = 0;
      piVar8[0x14] = 0;
      piVar8[0x15] = 0;
      uVar3 = FUN_00273070(piVar8);
      if (uVar3 != 0) {
LAB_0027326e:
        FUN_0025f68e(piVar8[0xe]);
        piVar8[0xe] = 0;
        return uVar3;
      }
    }
    *(undefined1 *)((int)piVar8 + 0xf) = 3;
  }
  FUN_00261928(param_1);
  uVar3 = *(uint *)(param_1 + 0x14);
  iVar5 = FUN_00261810(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38),uVar3);
  local_2c = 0;
  if (iVar5 == 0) {
    if (piVar8[0x2e] == 0) {
      if (((uint)piVar8[7] < uVar3) || (*(int *)piVar8[0x10] == 0)) {
        if (*(char *)((int)piVar8 + 0xf) != '\x04') {
          *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
        }
      }
      else {
        uVar4 = piVar8[0x12];
        iVar5 = piVar8[0x13];
        iVar2 = piVar8[0x20];
        uVar7 = uVar4;
        local_20 = piVar8[0xc];
        while (iVar2 = iVar2 + -200, 0 < iVar2) {
          uVar7 = local_20 + *(byte *)(iVar1 + iVar2);
          local_20 = uVar7;
        }
        *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) | 4;
        uVar3 = FUN_0025bf4e(piVar8[0x10],uVar7,uVar4,iVar5,uVar3);
        if (uVar3 != 0) {
          return uVar3;
        }
        iVar2 = iVar5 + (uint)(0xfffffffb < uVar4);
        uVar3 = FUN_0025ace6(piVar8[0x10],iVar1,piVar8[0x20],iVar2,uVar4 + 4,iVar2);
        if (uVar3 != 0) {
          return uVar3;
        }
        uVar3 = piVar8[0x20];
        uVar3 = FUN_0025bf4e(piVar8[0x10],local_20,uVar3 + uVar4 + 4,
                             ((int)uVar3 >> 0x1f) + iVar5 + (uint)CARRY4(uVar3,uVar4) +
                             (uint)(0xfffffffb < uVar3 + uVar4),local_20);
        if (uVar3 != 0) {
          return uVar3;
        }
        uVar7 = piVar8[0x20] + 8;
        uVar3 = piVar8[0x12];
        piVar8[0x12] = uVar3 + uVar7;
        piVar8[0x13] = piVar8[0x13] + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar3,uVar7);
        piVar8[0xb] = piVar8[0xb] + 1;
        uVar3 = FUN_00260168(piVar8[0xe],*(undefined4 *)(param_1 + 0x14));
        uVar7 = FUN_0026029a(piVar8,*(undefined4 *)(param_1 + 0x14));
        if ((uVar3 | uVar7) != 0) {
          return uVar3 | uVar7;
        }
      }
    }
  }
  else {
    iVar1 = FUN_0026189c(param_1);
    if (iVar1 == 0) goto LAB_00273392;
  }
  iVar1 = FUN_0026189c(param_1);
  if (iVar1 != 0) {
    local_2c = FUN_002602cc(param_1);
  }
LAB_00273392:
  if ((uint)piVar8[6] < *(uint *)(param_1 + 0x14)) {
    piVar8[6] = *(uint *)(param_1 + 0x14);
  }
  return local_2c;
}


