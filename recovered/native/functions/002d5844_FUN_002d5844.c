/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d5844 FUN_002d5844 */

void FUN_002d5844(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [196];
  int local_1c;
  
  piVar6 = *(int **)(DAT_002d599c + 0x2d5852);
  local_1c = *piVar6;
  if (param_2 != 0) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | (ushort)DAT_002d59a0;
  }
  iVar1 = png_safecat(auStack_e0,0xc4,0,DAT_002d59a4 + 0x2d587c);
  uVar2 = png_safecat(auStack_e0,iVar1 + 0x4f,iVar1,param_3);
  iVar3 = png_safecat(auStack_e0,0xc4,uVar2,DAT_002d59a8 + 0x2d5898);
  uVar7 = param_4 >> 0x18;
  iVar1 = FUN_002d5814(uVar7);
  if (iVar1 != 0) {
    uVar9 = param_4 >> 0x10 & 0xff;
    iVar1 = FUN_002d5814(uVar9);
    if (iVar1 != 0) {
      uVar8 = param_4 >> 8 & 0xff;
      iVar1 = FUN_002d5814(uVar8);
      if (iVar1 != 0) {
        iVar1 = FUN_002d5814(param_4 & 0xff);
        if (iVar1 != 0) {
          auStack_e0[iVar3] = 0x27;
          uVar5 = 0x3f;
          if (uVar7 - 0x20 < 0x5f) {
            uVar5 = uVar7;
          }
          auStack_e0[iVar3 + 1] = (char)uVar5;
          uVar7 = 0x3f;
          if (uVar9 - 0x20 < 0x5f) {
            uVar7 = uVar9;
          }
          auStack_e0[iVar3 + 2] = (char)uVar7;
          uVar4 = 0x3f;
          if (uVar8 - 0x20 < 0x5f) {
            uVar4 = (undefined1)(param_4 >> 8);
          }
          auStack_e0[iVar3 + 3] = uVar4;
          uVar4 = 0x3f;
          if ((param_4 & 0xff) - 0x20 < 0x5f) {
            uVar4 = (undefined1)param_4;
          }
          auStack_e0[iVar3 + 4] = uVar4;
          auStack_e0[iVar3 + 5] = 0x27;
          auStack_e0[iVar3 + 6] = 0x3a;
          auStack_e0[iVar3 + 7] = 0x20;
          iVar3 = iVar3 + 8;
          goto LAB_002d5940;
        }
      }
    }
  }
  uVar2 = png_format_number(auStack_f8,auStack_e0,3,param_4);
  uVar2 = png_safecat(auStack_e0,0xc4,iVar3,uVar2);
  iVar3 = png_safecat(auStack_e0,0xc4,uVar2,DAT_002d59ac + 0x2d598c);
LAB_002d5940:
  png_safecat(auStack_e0,0xc4,iVar3,param_5);
  png_chunk_report(param_1,auStack_e0,2 - (uint)(param_2 == 0));
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


