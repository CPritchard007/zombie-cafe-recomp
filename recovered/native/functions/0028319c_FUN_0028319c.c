/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028319c FUN_0028319c */

/* WARNING: Function: __gnu_thumb1_case_si replaced with injection: switch32_si_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00283324) */
/* WARNING: Removing unreachable block (ram,0x00283324) */

void FUN_0028319c(int *param_1,byte param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iStack_38;
  undefined1 auStack_34 [32];
  
  uVar3 = param_3;
  if (*param_1 < 0) {
    uVar3 = 0xffffffff;
    *param_1 = 0;
    param_1[1] = -1;
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
  }
  iVar6 = iRam002832b4;
  param_1[2] = param_5;
  uVar7 = (uint)param_2;
  iVar8 = *param_1;
  uVar2 = (uint)*(ushort *)(param_1 + iVar8 * 4 + 3);
  if (uVar2 < 0x1a1) {
    uVar3 = iRam002832b8 + 0x283250;
    iVar9 = (int)*(short *)(uVar2 * 2 + uVar3);
    uVar5 = uVar7;
    do {
      uVar4 = uVar5;
      if (iVar9 == -0x46) goto LAB_00283200;
      uVar3 = iVar9 + uVar4;
      if ((uVar3 <= uRam002832c0) && (*(byte *)(iRam002832bc + 0x283200 + uVar3) == uVar4)) {
        iVar6 = iRam002832d4 + 0x28325a;
        goto LAB_00283258;
      }
      if (uVar4 == 0) goto LAB_00283248;
    } while ((uVar4 < 0x43) &&
            (uVar5 = (uint)*(byte *)(iRam002832c4 + 0x28324a + uVar4), uVar5 != 0));
    uVar3 = (uVar3 - uVar4) + 0x43;
    if (((int)uVar3 < 0) || (*(char *)(iRam002832c8 + 0x283242 + uVar3) != 'C')) {
LAB_00283248:
      piVar10 = (int *)(uint)*(ushort *)(iRam002832d0 + uVar2 * 2 + 0x283270);
    }
    else {
      iVar6 = iRam002832cc + 0x283248;
LAB_00283258:
      uVar3 = uVar3 * 2;
      piVar10 = (int *)(uint)*(ushort *)(uVar3 + iVar6 + 0x66);
    }
  }
  else {
LAB_00283200:
    piVar10 = (int *)(uint)*(ushort *)(iVar6 + uVar2 * 2 + 0x2831ea);
  }
  iVar6 = iRam002832d8;
  if ((int)piVar10 <= iRam002832d8) {
    iVar6 = iVar8 + 1;
    *param_1 = iVar6;
    if (iVar6 < 100) {
      *(short *)(param_1 + iVar6 * 4 + 3) = (short)piVar10;
      *(byte *)((int)param_1 + iVar6 * 0x10 + 0xe) = param_2;
      param_1[iVar6 * 4 + 4] = param_3;
      param_1[iVar6 * 4 + 5] = param_4;
      param_1[iVar6 * 4 + 6] = iStack_38;
    }
    else {
      uVar7 = param_1[2];
      *param_1 = iVar8;
      while (-1 < *param_1) {
        FUN_00261660(param_1);
      }
      FUN_00268e48(uVar7,iRam002832dc + 0x28328a);
      param_1[2] = uVar7;
    }
    param_1[1] = param_1[1] + -1;
    iVar6 = FUN_002856d6();
    bVar1 = *(byte *)(uVar7 + 0xb);
    *(ushort *)(bVar1 + 0x1a) = (ushort)bVar1;
    *(short *)(bVar1 + 0x18) = (short)iVar6;
    uVar3 = (int)piVar10 << 9;
    piVar10 = param_1;
  }
  if (DAT_00283318 < (int)piVar10) {
    FUN_00285678(iVar6,param_1,uVar3);
  }
  memset(auStack_34,0,0xc);
  uVar3 = (int)piVar10 + DAT_00283320;
  if (0x13e < uVar3) {
    uVar3 = FUN_002855ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00283324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00283329 + *(int *)(&UNK_00283328 + uVar3 * 4) * 4))();
  return;
}


