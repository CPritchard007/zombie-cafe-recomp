/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b81c FUN_0026b81c */

void FUN_0026b81c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined2 local_2c;
  
  uVar11 = (uint)(byte)param_1[5];
  iVar10 = *(int *)(param_1 + 0x38);
  iVar9 = *(int *)(param_1 + 0x34);
  iVar4 = FUN_0026b73c(param_1,*(undefined1 *)(iVar10 + uVar11));
  uVar6 = DAT_0026b91c;
  if (iVar4 == 0) {
    uVar6 = *(undefined4 *)(iVar9 + 0x20);
    param_1[1] = 0;
    *(short *)(param_1 + 0x12) = (short)uVar6 + -1;
    iVar4 = *(int *)(iVar9 + 0x24);
    uVar7 = uVar11 + 0xc + (uint)(byte)param_1[3] * 0xfffc;
    uVar8 = uVar7 & 0xffff;
    local_2c = (undefined2)uVar7;
    iVar12 = iVar10 + uVar11;
    *(undefined2 *)(param_1 + 0xc) = local_2c;
    *(int *)(param_1 + 0x3c) = iVar10 + iVar4;
    *(uint *)(param_1 + 0x40) = iVar10 + uVar8;
    uVar1 = *(undefined1 *)(iVar12 + 5);
    uVar2 = *(undefined1 *)(iVar12 + 6);
    uVar3 = CONCAT11(*(undefined1 *)(iVar12 + 3),*(undefined1 *)(iVar12 + 4));
    *(ushort *)(param_1 + 0x10) = uVar3;
    uVar11 = __udivsi3(*(int *)(iVar9 + 0x20) + -8,6);
    uVar6 = DAT_0026b920;
    if (uVar3 <= uVar11) {
      uVar7 = (uint)*(byte *)(iVar12 + 7);
      uVar8 = uVar8 + (uint)uVar3 * 2;
      iVar9 = (CONCAT11(uVar1,uVar2) - 1 & 0xffff) + 1;
      uVar11 = (uint)CONCAT11(*(undefined1 *)(iVar12 + 1),*(undefined1 *)(iVar12 + 2));
      while (iVar9 = iVar9 + uVar7, uVar11 != 0) {
        uVar6 = DAT_0026b924;
        if ((uVar11 < uVar8) || (iVar4 + -4 < (int)uVar11)) goto LAB_0026b896;
        uVar5 = (uint)CONCAT11(*(undefined1 *)(iVar10 + uVar11),*(undefined1 *)(iVar10 + uVar11 + 1)
                              );
        uVar7 = (uint)CONCAT11(*(undefined1 *)(iVar10 + uVar11 + 2),
                               *(undefined1 *)(iVar10 + uVar11 + 3));
        iVar12 = uVar11 + uVar7;
        uVar6 = DAT_0026b928;
        if (((uVar5 != 0) && (uVar5 <= iVar12 + 3U)) || (uVar11 = uVar5, iVar4 < iVar12))
        goto LAB_0026b896;
      }
      uVar6 = DAT_0026b92c;
      if (iVar9 <= iVar4) {
        *(short *)(param_1 + 0xe) = (short)iVar9 - (short)uVar8;
        *param_1 = 1;
        return;
      }
    }
  }
LAB_0026b896:
  FUN_0026b4e4(uVar6);
  return;
}


