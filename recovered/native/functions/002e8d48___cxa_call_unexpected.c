/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e8d48 __cxa_call_unexpected */

void __cxa_call_unexpected(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int local_30;
  int local_2c [2];
  
  iVar6 = DAT_002e8e40 + 0x2e8d5e;
  piVar1 = param_1;
  if (*param_1 == DAT_002e8e44) goto LAB_002e8d6e;
  do {
    FUN_002e9254(param_1);
    piVar1 = (int *)FUN_002ea18c();
LAB_002e8d6e:
  } while (piVar1[1] != DAT_002e8e48);
  iVar5 = piVar1[10];
  piVar4 = param_1 + -0xe;
  uVar8 = piVar1[0xc];
  iVar7 = piVar1[0xd];
  FUN_002e9254();
  (*(code *)param_1[-0xb])();
  FUN_002ea13c();
  FUN_002e9254();
  FUN_002ea13c();
  FUN_002e9254();
  iVar9 = 0;
  bVar10 = false;
  do {
    if (iVar9 == iVar5) {
LAB_002e8df8:
      if (bVar10) {
        FUN_002e92c4();
        FUN_002e92c4();
        piVar4 = (int *)FUN_002e9164(4);
        FUN_002e9710();
        FUN_002e91e0(piVar4,*(undefined4 *)(iVar6 + DAT_002e8e4c),
                     *(undefined4 *)(iVar6 + DAT_002e8e50));
        FUN_002e92c4();
        __cxa_end_cleanup();
      }
      (*(code *)piVar4[4])();
                    /* WARNING: Subroutine does not return */
      abort();
    }
    piVar1 = (int *)FUN_002e9798(iVar7);
    piVar2 = (int *)FUN_002e9020();
    local_30 = *piVar2 + 0x90;
    iVar3 = __cxa_type_match(*piVar2 + 0x38,piVar1,0,&local_30);
    if (iVar3 != 0) {
      FUN_002e9210();
      FUN_002e92c4();
      __cxa_end_cleanup();
      goto LAB_002e8df8;
    }
    local_2c[0] = iVar3;
    iVar3 = (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(iVar6 + DAT_002e8e4c),local_2c);
    if (iVar3 != 0) {
      bVar10 = true;
    }
    iVar9 = iVar9 + 1;
    iVar7 = iVar7 + (uVar8 & 0xfffffffc);
  } while( true );
}


