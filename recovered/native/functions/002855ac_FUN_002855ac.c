/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002855ac FUN_002855ac */

void FUN_002855ac(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r5;
  ushort *puVar5;
  int iVar6;
  int *in_stack_00000020;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  
  iVar6 = DAT_002856e0;
  bVar1 = *(byte *)(in_stack_0000003c * 2 + DAT_002856dc + 0x2855d4);
  uVar3 = (uint)*(byte *)(DAT_002856dc + 0x2855d4 + in_stack_0000003c * 2 + 1);
  iVar4 = *in_stack_00000020 - uVar3;
  *in_stack_00000020 = iVar4;
  uVar2 = *(ushort *)
           (((int)*(short *)(iVar6 + (uint)*(ushort *)(uVar3 * -0x10 + unaff_r5) * 2 + 0x2855fe) +
            (uint)bVar1) * 2 + DAT_002856e4 + 0x285646);
  if (DAT_002856e8 < (int)(uint)uVar2) {
    iVar6 = in_stack_00000020[2];
    while (-1 < *in_stack_00000020) {
      FUN_00261660(in_stack_00000020);
    }
  }
  else {
    iVar6 = iVar4 + 1;
    if (uVar3 != 0) {
      puVar5 = (ushort *)(unaff_r5 + uVar3 * -0x10 + 0x10);
      *in_stack_00000020 = iVar6;
      *puVar5 = uVar2;
      *(byte *)(puVar5 + 1) = bVar1;
      *(int *)(puVar5 + 2) = in_stack_00000064;
      *(int *)(puVar5 + 4) = in_stack_00000068;
      *(int *)(puVar5 + 6) = in_stack_0000006c;
      goto LAB_002856a0;
    }
    *in_stack_00000020 = iVar6;
    if (iVar6 < 100) {
      *(ushort *)(in_stack_00000020 + iVar6 * 4 + 3) = uVar2;
      *(byte *)((int)in_stack_00000020 + iVar6 * 0x10 + 0xe) = bVar1;
      in_stack_00000020[iVar6 * 4 + 4] = in_stack_00000064;
      in_stack_00000020[iVar6 * 4 + 5] = in_stack_00000068;
      in_stack_00000020[iVar6 * 4 + 6] = in_stack_0000006c;
      goto LAB_002856a0;
    }
    iVar6 = in_stack_00000020[2];
    *in_stack_00000020 = iVar4;
    while (-1 < *in_stack_00000020) {
      FUN_00261660(in_stack_00000020);
    }
    FUN_00268e48(iVar6,DAT_002856ec + 0x285636);
  }
  in_stack_00000020[2] = iVar6;
LAB_002856a0:
  if (in_stack_00000038 == 0xfb) {
    return;
  }
  if (-1 < *in_stack_00000020) {
    FUN_002831d0();
  }
  FUN_002856d6();
  return;
}


