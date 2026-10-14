/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d134 FUN_0026d134 */

bool FUN_0026d134(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int local_1c [2];
  
  iVar9 = *param_1;
  if (((int)((uint)*(byte *)((int)param_2 + 0x22) << 0x1b) < 0) &&
     (iVar2 = FUN_0025d364(iVar9), iVar2 == 0)) {
    uVar8 = *(undefined4 *)param_2[0xf];
    uVar3 = FUN_0025b154(uVar8);
    piVar4 = (int *)FUN_0025bb3c(iVar9 + 0x124,uVar8,uVar3);
    if (piVar4 == (int *)0x0) {
      iVar9 = DAT_0026d270 + 0x26d176;
      uVar3 = *(undefined4 *)param_2[0xf];
      goto LAB_0026d1c8;
    }
    local_1c[0] = iVar2;
    iVar2 = FUN_00268908(iVar9,param_2,piVar4,*(undefined4 *)(*piVar4 + 8),local_1c);
    if (iVar2 != 0) {
      FUN_00268e48(param_1,DAT_0026d274 + 0x26d19a,local_1c[0]);
    }
    FUN_0025fbda(iVar9,local_1c[0]);
    if (iVar2 != 0) {
      return true;
    }
  }
  if ((int)((uint)*(byte *)((int)param_2 + 0x22) << 0x1b) < 0) {
    return false;
  }
  if (0 < (int)param_2[2]) {
    return false;
  }
  if (param_2[2] == 0) {
    iVar2 = FUN_002607da(iVar9,param_2[7],0);
    if (iVar2 == 0) {
      return true;
    }
    puVar6 = (undefined1 *)(iVar9 + 0xea);
    uVar1 = *puVar6;
    iVar7 = param_1[0x12];
    FUN_0025cdb0(param_1,*(undefined4 *)(iVar2 + 0x28));
    param_2[2] = 0xffffffff;
    *puVar6 = 0;
    uVar3 = *(undefined4 *)(iVar9 + 0x10c);
    *(undefined4 *)(iVar9 + 0x10c) = 0;
    iVar5 = FUN_0026d0a4(param_1,iVar2);
    *(undefined4 *)(iVar9 + 0x10c) = uVar3;
    *puVar6 = uVar1;
    param_1[0x12] = iVar7;
    if (iVar5 == 0) {
      param_2[2] = 0;
    }
    else {
      param_2[2] = *(undefined4 *)(iVar5 + 8);
      param_2[3] = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      FUN_00260e84(iVar9,iVar5);
      *(ushort *)(param_2[0x11] + 0x4e) = *(ushort *)(param_2[0x11] + 0x4e) | 2;
    }
    FUN_00261092(iVar9,iVar2);
    return iVar5 == 0;
  }
  uVar3 = *param_2;
  iVar9 = DAT_0026d278 + 0x26d1ca;
LAB_0026d1c8:
  FUN_00268e48(param_1,iVar9,uVar3);
  return true;
}


