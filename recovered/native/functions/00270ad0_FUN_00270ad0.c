/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00270ad0 FUN_00270ad0 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00270af4) */
/* WARNING: Removing unreachable block (ram,0x00270af4) */

void FUN_00270ad0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [52];
  int local_1c;
  
  piVar11 = *(int **)(DAT_00270c6c + 0x270adc);
  local_1c = *piVar11;
  iVar2 = sqlite3_value_type(*param_3);
  if (3 < iVar2 - 1U) {
    iVar9 = 4;
    puVar7 = (undefined1 *)(DAT_00270c80 + 0x270c56);
    iVar2 = 0;
    goto LAB_00270c56;
  }
  uVar5 = *param_3;
  switch(iVar2) {
  case 1:
    sqlite3_result_value(param_1);
    goto LAB_00270c5a;
  case 2:
    uVar13 = sqlite3_value_double(uVar5);
    uVar1 = (ulonglong)uVar13 >> 0x20;
    uVar5 = (undefined4)uVar13;
    sqlite3_snprintf(0x32,auStack_50,DAT_00270c70 + 0x270b0c);
    FUN_0025b268(auStack_50,&local_58,0x14,1,uVar13);
    iVar2 = __aeabi_dcmpeq(uVar5,(int)uVar1,local_58,local_54);
    if (iVar2 == 0) {
      sqlite3_snprintf(0x32,auStack_50,DAT_00270c74 + 0x270b3c);
    }
    iVar9 = -1;
    puVar7 = auStack_50;
    iVar2 = iVar9;
    break;
  case 3:
    pcVar4 = (char *)sqlite3_value_text(uVar5);
    if (pcVar4 == (char *)0x0) goto LAB_00270c5a;
    uVar6 = 0;
    iVar2 = 0;
    for (uVar3 = 0; pcVar4[uVar3] != '\0'; uVar3 = uVar3 + 1) {
      if (pcVar4[uVar3] == '\'') {
        bVar12 = 0xfffffffe < uVar6;
        uVar6 = uVar6 + 1;
        iVar2 = iVar2 + (uint)bVar12;
      }
    }
    puVar7 = (undefined1 *)
             FUN_0026599c(param_1,0,uVar3 + uVar6 + 3,
                          ((int)uVar3 >> 0x1f) + iVar2 + (uint)CARRY4(uVar3,uVar6) +
                          (uint)(0xfffffffc < uVar3 + uVar6));
    if (puVar7 == (undefined1 *)0x0) goto LAB_00270c5a;
    *puVar7 = 0x27;
    iVar2 = 1;
    while( true ) {
      iVar9 = iVar2 + 1;
      if (*pcVar4 == '\0') break;
      puVar7[iVar2] = *pcVar4;
      if (*pcVar4 == '\'') {
        puVar7[iVar9] = 0x27;
        iVar9 = iVar2 + 2;
      }
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar9;
    }
    puVar7[iVar2] = 0x27;
    iVar2 = DAT_00270c7c;
    puVar7[iVar9] = 0;
    iVar2 = *(int *)(iVar2 + 0x270c4a);
    break;
  case 4:
    iVar2 = sqlite3_value_blob(uVar5);
    uVar3 = sqlite3_value_bytes(*param_3);
    uVar6 = uVar3 + 2 >> 0x1f;
    puVar7 = (undefined1 *)
             FUN_0026599c(param_1,uVar6,(uVar3 + 2) * 2,
                          (((int)uVar3 >> 0x1f) + (uint)(0xfffffffd < uVar3)) * 2 | uVar6);
    if (puVar7 != (undefined1 *)0x0) {
      iVar9 = DAT_00270c78 + 0x270bc0;
      puVar8 = puVar7;
      for (iVar10 = 0; iVar10 < (int)uVar3; iVar10 = iVar10 + 1) {
        puVar8[2] = *(undefined1 *)(iVar9 + (uint)(*(byte *)(iVar2 + iVar10) >> 4));
        puVar8[3] = *(undefined1 *)(iVar9 + (*(byte *)(iVar2 + iVar10) & 0xf));
        puVar8 = puVar8 + 2;
      }
      puVar7[(uVar3 + 1) * 2] = 0x27;
      puVar7[uVar3 * 2 + 3] = 0;
      *puVar7 = 0x58;
      puVar7[1] = 0x27;
      sqlite3_result_text(param_1,puVar7,0xffffffff,0xffffffff);
      sqlite3_free(puVar7);
    }
    goto LAB_00270c5a;
  }
LAB_00270c56:
  sqlite3_result_text(param_1,puVar7,iVar9,iVar2);
LAB_00270c5a:
  if (local_1c != *piVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


