/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c800 FUN_0026c800 */

uint FUN_0026c800(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t __n;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [24];
  int local_50;
  undefined1 auStack_40 [24];
  int local_28;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar2 = *(ushort *)(param_2 + 0x1c);
  uVar3 = uVar2 | uVar1;
  if ((uVar3 & 1) != 0) {
    return (uVar2 & 1) - (uVar1 & 1);
  }
  if ((uVar3 & 0xc) == 0) {
    if ((uVar3 & 2) != 0) {
      if ((uVar1 & 2) == 0) {
        return 1;
      }
      if ((uVar2 & 2) == 0) goto LAB_0026c97c;
      if (param_3 != 0) {
        if (*(char *)(param_1 + 0x1f) == *(char *)(param_3 + 4)) {
          uVar5 = (**(code **)(param_3 + 0xc))
                            (*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_1 + 0x18),
                             *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 0x18),
                             *(undefined4 *)(param_2 + 4));
          return uVar5;
        }
        memset(auStack_68,uVar3 & 0xc,0x28);
        memset(auStack_40,uVar3 & 0xc,0x28);
        FUN_00263f10(auStack_68,param_1,0x1000);
        FUN_00263f10(auStack_40,param_2,0x1000);
        iVar8 = FUN_0026c760(auStack_68,*(undefined1 *)(param_3 + 4));
        iVar4 = iVar8;
        if (iVar8 != 0) {
          iVar4 = local_50;
        }
        iVar6 = FUN_0026c760(auStack_40,*(undefined1 *)(param_3 + 4));
        iVar9 = iVar6;
        if (iVar6 != 0) {
          iVar9 = local_28;
        }
        uVar5 = (**(code **)(param_3 + 0xc))(*(undefined4 *)(param_3 + 8),iVar4,iVar8,iVar9,iVar6);
        FUN_00263730(auStack_68);
        FUN_00263730(auStack_40);
        return uVar5;
      }
    }
    sVar7 = *(size_t *)(param_2 + 0x18);
    sVar11 = *(size_t *)(param_1 + 0x18);
    __n = sVar7;
    if ((int)sVar11 < (int)sVar7) {
      __n = sVar11;
    }
    uVar5 = memcmp(*(void **)(param_1 + 4),*(void **)(param_2 + 4),__n);
    if (uVar5 == 0) {
      uVar5 = sVar11 - sVar7;
    }
  }
  else {
    if ((uVar1 & 0xc) == 0) {
      return 1;
    }
    if ((uVar2 & 0xc) != 0) {
      if ((int)((uint)(uVar2 & uVar1) << 0x1d) < 0) {
        iVar4 = *(int *)(param_1 + 0x14);
        iVar8 = *(int *)(param_2 + 0x14);
        if ((iVar8 <= iVar4) &&
           ((iVar8 != iVar4 || (*(uint *)(param_2 + 0x10) <= *(uint *)(param_1 + 0x10))))) {
          if (iVar8 < iVar4) {
            return 1;
          }
          if ((iVar4 == iVar8) && (*(uint *)(param_2 + 0x10) < *(uint *)(param_1 + 0x10))) {
            return 1;
          }
          return 0;
        }
      }
      else {
        if ((uVar1 & 8) == 0) {
          uVar12 = __floatdidf(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
        }
        else {
          uVar12 = *(undefined8 *)(param_1 + 8);
        }
        local_6c = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_70 = (undefined4)uVar12;
        if ((uVar2 & 8) == 0) {
          uVar12 = __floatdidf(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
        }
        else {
          uVar12 = *(undefined8 *)(param_2 + 8);
        }
        uVar10 = (undefined4)((ulonglong)uVar12 >> 0x20);
        iVar4 = __aeabi_dcmplt(local_70,local_6c,(int)uVar12,uVar10);
        if (iVar4 == 0) {
          iVar4 = __aeabi_dcmpgt(local_70,local_6c,(int)uVar12,uVar10);
          return -(uint)(iVar4 != 0) & 1;
        }
      }
    }
LAB_0026c97c:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


