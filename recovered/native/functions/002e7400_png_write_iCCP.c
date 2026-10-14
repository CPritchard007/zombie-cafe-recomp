/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7400 png_write_iCCP */

void png_write_iCCP(int param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint unaff_r7;
  int *piVar5;
  undefined8 uVar8;
  int *piVar6;
  int *piVar7;
  
  iVar1 = DAT_002e74e0;
  uVar8 = CONCAT44(param_2,param_1);
  piVar4 = *(int **)(DAT_002e74dc + 0x2e740c);
  piVar5 = (int *)(&stack0xffffffec + DAT_002e74e0);
  piVar6 = (int *)(&stack0xffffffec + DAT_002e74e0);
  piVar7 = (int *)(&stack0xffffffec + DAT_002e74e0);
  *(int *)(&stack0x00000458 + DAT_002e74e0) = *piVar4;
  if (param_3 == (byte *)0x0) {
    iVar2 = DAT_002e74e4 + 0x2e7422;
  }
  else {
    unaff_r7 = (uint)*param_3 * 0x1000000 + (uint)param_3[1] * 0x10000 + (uint)param_3[3] +
               (uint)param_3[2] * 0x100;
    if (0x83 < unaff_r7) goto LAB_002e7444;
    iVar2 = DAT_002e74e8 + 0x2e7440;
  }
  do {
    while( true ) {
      while( true ) {
        uVar8 = png_error(param_1,iVar2);
LAB_002e7444:
        *(uint *)(&stack0xfffffff0 + iVar1) = unaff_r7 & 3;
        if ((unaff_r7 & 3) == 0) break;
        iVar2 = DAT_002e74ec + 0x2e7452;
      }
      iVar2 = FUN_002e68f8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),&stack0xfffffff8 + iVar1);
      *piVar5 = iVar2;
      if (iVar2 != 0) break;
      iVar2 = DAT_002e74f0 + 0x2e7464;
    }
    iVar2 = *piVar6;
    uVar3 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
    *(byte **)(&stack0x0000004c + iVar1) = param_3;
    (&stack0xfffffff9)[iVar2 + iVar1] = (&stack0xfffffff0)[iVar1];
    *(undefined4 *)(&stack0x00000054 + iVar1) = uVar3;
    *(uint *)(&stack0x00000050 + iVar1) = unaff_r7;
    iVar2 = FUN_002e69d0(param_1,DAT_002e74f4,unaff_r7);
    if (iVar2 == 0) {
      param_3 = (byte *)(*piVar7 + 2);
      iVar2 = FUN_002e6c14(param_1,&stack0x0000004c + iVar1,param_3);
      if (iVar2 == 0) {
        FUN_002e6d18(param_1,DAT_002e74f4,param_3 + *(int *)(&stack0x00000054 + iVar1));
        png_write_chunk_data(param_1,&stack0xfffffff8 + iVar1,param_3);
        FUN_002e6e30(param_1,&stack0x0000004c + iVar1);
        png_write_chunk_end(param_1);
        if (*(int *)(&stack0x00000458 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    iVar2 = *(int *)(param_1 + 0x15c);
  } while( true );
}


