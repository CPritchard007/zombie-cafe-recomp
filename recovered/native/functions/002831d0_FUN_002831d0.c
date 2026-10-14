/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002831d0 FUN_002831d0 */

/* WARNING: Function: __gnu_thumb1_case_si replaced with injection: switch32_si_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00283324) */
/* WARNING: Removing unreachable block (ram,0x00283324) */

void FUN_002831d0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *in_stack_00000020;
  int in_stack_00000030;
  byte in_stack_00000038;
  int in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  
  uVar5 = (uint)in_stack_00000038;
  iVar6 = *in_stack_00000020;
  uVar2 = (uint)*(ushort *)(in_stack_00000020 + iVar6 * 4 + 3);
  if (uVar2 < 0x1a1) {
    param_3 = iRam002832b8 + 0x283250;
    iVar7 = (int)*(short *)(uVar2 * 2 + param_3);
    uVar4 = uVar5;
    do {
      uVar3 = uVar4;
      if (iVar7 == -0x46) goto LAB_00283200;
      param_3 = iVar7 + uVar3;
      if ((param_3 <= uRam002832c0) && (*(byte *)(iRam002832bc + 0x283200 + param_3) == uVar3)) {
        iVar7 = iRam002832d4 + 0x28325a;
        goto LAB_00283258;
      }
      if (uVar3 == 0) goto LAB_00283248;
    } while ((uVar3 < 0x43) &&
            (uVar4 = (uint)*(byte *)(iRam002832c4 + 0x28324a + uVar3), uVar4 != 0));
    param_3 = (param_3 - uVar3) + 0x43;
    if (((int)param_3 < 0) || (*(char *)(iRam002832c8 + 0x283242 + param_3) != 'C')) {
LAB_00283248:
      piVar8 = (int *)(uint)*(ushort *)(iRam002832d0 + uVar2 * 2 + 0x283270);
    }
    else {
      iVar7 = iRam002832cc + 0x283248;
LAB_00283258:
      param_3 = param_3 * 2;
      piVar8 = (int *)(uint)*(ushort *)(param_3 + iVar7 + 0x66);
    }
  }
  else {
LAB_00283200:
    piVar8 = (int *)(uint)*(ushort *)(in_stack_00000030 + uVar2 * 2 + 0x20);
  }
  iVar7 = iRam002832d8;
  if ((int)piVar8 <= iRam002832d8) {
    iVar7 = iVar6 + 1;
    *in_stack_00000020 = iVar7;
    if (iVar7 < 100) {
      *(short *)(in_stack_00000020 + iVar7 * 4 + 3) = (short)piVar8;
      *(byte *)((int)in_stack_00000020 + iVar7 * 0x10 + 0xe) = in_stack_00000038;
      in_stack_00000020[iVar7 * 4 + 4] = in_stack_00000058;
      in_stack_00000020[iVar7 * 4 + 5] = in_stack_0000005c;
      in_stack_00000020[iVar7 * 4 + 6] = in_stack_00000060;
    }
    else {
      uVar5 = in_stack_00000020[2];
      *in_stack_00000020 = iVar6;
      while (-1 < *in_stack_00000020) {
        FUN_00261660(in_stack_00000020);
      }
      FUN_00268e48(uVar5,iRam002832dc + 0x28328a);
      in_stack_00000020[2] = uVar5;
    }
    in_stack_00000020[1] = in_stack_00000020[1] + -1;
    iVar7 = FUN_002856d6();
    bVar1 = *(byte *)(uVar5 + 0xb);
    *(ushort *)(bVar1 + 0x1a) = (ushort)bVar1;
    *(short *)(bVar1 + 0x18) = (short)iVar7;
    param_3 = (int)piVar8 << 9;
    piVar8 = in_stack_00000020;
  }
  if (DAT_00283318 < (int)piVar8) {
    FUN_00285678(iVar7,in_stack_00000020,param_3);
  }
  memset(&stack0x00000064,0,0xc);
  uVar2 = (int)piVar8 + DAT_00283320;
  if (0x13e < uVar2) {
    uVar2 = FUN_002855ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00283324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00283329 + *(int *)(&UNK_00283328 + uVar2 * 4) * 4))();
  return;
}


