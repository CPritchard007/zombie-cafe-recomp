/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b9bc FUN_0026b9bc */

void FUN_0026b9bc(int param_1,int param_2,size_t param_3,int *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  char *pcVar17;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  char *pcVar21;
  int iVar22;
  uint uVar23;
  undefined2 *puVar24;
  uint local_38;
  
  puVar24 = (undefined2 *)(*(int *)(param_1 + 0x40) + param_2 * 2);
  uVar1 = *(undefined1 *)puVar24;
  iVar22 = *(int *)(param_1 + 0x38);
  uVar2 = *(undefined1 *)((int)puVar24 + 1);
  bVar3 = *(byte *)(param_1 + 5);
  uVar23 = (uint)CONCAT11(uVar1,uVar2);
  iVar18 = iVar22 + (uint)bVar3;
  if ((uVar23 < CONCAT11(*(undefined1 *)(iVar18 + 5),*(undefined1 *)(iVar18 + 6))) ||
     (*(uint *)(*(int *)(param_1 + 0x34) + 0x24) < uVar23 + param_3)) {
    iVar18 = FUN_0026b4e4(DAT_0026bbac);
  }
  else {
    if ((int)((uint)*(ushort *)(*(int *)(param_1 + 0x34) + 0x16) << 0x1d) < 0) {
      memset((void *)(iVar22 + uVar23),0,param_3);
    }
    uVar11 = (uint)*(byte *)(param_1 + 5);
    uVar16 = uVar11 + 1;
    do {
      puVar19 = (undefined1 *)(uVar16 + 1 + iVar22);
      uVar4 = *puVar19;
      uVar5 = *(undefined1 *)(iVar22 + uVar16);
      uVar20 = (uint)CONCAT11(uVar5,uVar4);
      if ((uVar23 <= uVar20) || (uVar20 == 0)) {
        uVar9 = DAT_0026bbb4;
        if ((int)uVar20 <= *(int *)(*(int *)(param_1 + 0x34) + 0x24) + -4) {
          *(undefined1 *)(iVar22 + uVar16) = uVar1;
          *puVar19 = uVar2;
          *(undefined1 *)(iVar22 + uVar23) = uVar5;
          iVar18 = iVar22 + uVar23;
          *(undefined1 *)(iVar18 + 1) = uVar4;
          *(char *)(iVar18 + 3) = (char)param_3;
          *(char *)(iVar18 + 2) = (char)(param_3 >> 8);
          *(short *)(param_1 + 0xe) = (short)param_3 + *(short *)(param_1 + 0xe);
          uVar23 = uVar11 + 1;
          goto LAB_0026bb14;
        }
        break;
      }
      uVar14 = uVar16 + 3;
      uVar9 = DAT_0026bbb0;
      uVar16 = uVar20;
    } while (uVar14 < uVar20);
LAB_0026bad0:
    iVar18 = FUN_0026b4e4(uVar9);
    if (iVar18 == 0) goto LAB_0026bb7a;
  }
  *param_4 = iVar18;
  return;
LAB_0026bb14:
  local_38 = uVar23;
  uVar23 = (uint)CONCAT11(*(undefined1 *)(iVar22 + local_38),*(undefined1 *)(iVar22 + local_38 + 1))
  ;
  if (uVar23 != 0) {
    puVar15 = (undefined1 *)(iVar22 + uVar23 + 1);
    uVar16 = (uint)CONCAT11(*(undefined1 *)(iVar22 + uVar23),*puVar15);
    puVar19 = (undefined1 *)(iVar22 + uVar23 + 2);
    puVar12 = (undefined1 *)(iVar22 + uVar23 + 3);
    iVar18 = uVar23 + CONCAT11(*puVar19,*puVar12);
    if ((uVar16 <= iVar18 + 3U) && (uVar16 != 0)) {
      iVar18 = uVar16 - iVar18;
      uVar9 = DAT_0026bbb8;
      if (iVar18 < 0) goto LAB_0026bad0;
      pbVar8 = (byte *)(iVar22 + uVar11 + 7);
      bVar6 = *pbVar8;
      if ((int)(uint)bVar6 < iVar18) goto LAB_0026bad0;
      *pbVar8 = bVar6 - (char)iVar18;
      iVar18 = iVar22 + uVar16;
      uVar1 = *(undefined1 *)(iVar18 + 1);
      *(undefined1 *)(iVar22 + uVar23) = *(undefined1 *)(iVar22 + uVar16);
      *puVar15 = uVar1;
      iVar18 = (uVar16 + CONCAT11(*(undefined1 *)(iVar18 + 2),*(undefined1 *)(iVar18 + 3))) - uVar23
      ;
      *puVar19 = (char)((uint)iVar18 >> 8);
      *puVar12 = (char)iVar18;
      uVar23 = local_38;
    }
    goto LAB_0026bb14;
  }
  pcVar17 = (char *)(iVar22 + uVar11 + 1);
  pcVar21 = (char *)(iVar22 + uVar11 + 5);
  if (*pcVar21 == *pcVar17) {
    pcVar13 = (char *)(iVar22 + uVar11 + 6);
    if (*pcVar13 == *(char *)(iVar22 + uVar11 + 2)) {
      pcVar10 = (char *)(iVar22 + (uint)CONCAT11(*pcVar21,*pcVar13));
      *pcVar17 = *pcVar10;
      pcVar17[1] = pcVar10[1];
      iVar18 = (uint)CONCAT11(*pcVar21,*pcVar13) + (uint)CONCAT11(pcVar10[2],pcVar10[3]);
      *pcVar21 = (char)((uint)iVar18 >> 8);
      *pcVar13 = (char)iVar18;
    }
  }
LAB_0026bb7a:
  uVar7 = *(ushort *)(param_1 + 0x10);
  iVar18 = *(int *)(param_1 + 0x40);
  for (; puVar24 < (undefined2 *)(iVar18 + (uVar7 - 1) * 2); puVar24 = puVar24 + 1) {
    *puVar24 = puVar24[1];
  }
  iVar18 = *(ushort *)(param_1 + 0x10) - 1;
  *(short *)(param_1 + 0x10) = (short)iVar18;
  iVar22 = iVar22 + (uint)bVar3;
  *(char *)(iVar22 + 3) = (char)((uint)iVar18 >> 8);
  *(char *)(iVar22 + 4) = (char)*(undefined2 *)(param_1 + 0x10);
  *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 2;
  return;
}


