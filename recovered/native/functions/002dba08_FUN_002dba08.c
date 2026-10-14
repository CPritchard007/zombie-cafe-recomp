/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dba08 FUN_002dba08 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002dba4e) */
/* WARNING: Removing unreachable block (ram,0x002dba4e) */

undefined4 FUN_002dba08(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_1c;
  
  piVar5 = (int *)*param_1;
  iVar6 = *(int *)*piVar5;
  iVar7 = ((int *)*piVar5)[1];
  png_set_keep_unknown_chunks(iVar6,1,0,0xffffffff);
  png_set_keep_unknown_chunks(iVar6,0,DAT_002dbb54 + 0x2dba2a,6);
  local_24 = 0;
  if (param_1[10] == 0) {
    local_24 = png_set_interlace_handling(iVar6);
  }
  png_read_update_info(iVar6,iVar7);
  switch(param_1[10]) {
  case 0:
    if (((*(char *)(iVar7 + 0x19) == '\0') || (*(char *)(iVar7 + 0x19) == '\x03')) &&
       (*(char *)(iVar7 + 0x18) == '\b')) goto LAB_002dbad0;
    break;
  case 1:
  case 2:
    if (((*(short *)(iVar7 + 0x18) == 0x408) && (*(int *)(iVar6 + 0x24c) == DAT_002dbb58)) &&
       (piVar5[6] == 0x100)) goto LAB_002dbad0;
    break;
  case 3:
    if (((*(short *)(iVar7 + 0x18) == 0x208) && (*(int *)(iVar6 + 0x24c) == DAT_002dbb58)) &&
       (piVar5[6] == 0xd8)) goto LAB_002dbad0;
    break;
  case 4:
    if (((*(short *)(iVar7 + 0x18) == 0x608) && (*(int *)(iVar6 + 0x24c) == DAT_002dbb58)) &&
       (piVar5[6] == 0xf4)) goto LAB_002dbad0;
  }
  png_error(iVar6,DAT_002dbb5c + 0x2dbace);
LAB_002dbad0:
  iVar3 = param_1[2];
  iVar4 = param_1[1];
  if (iVar3 < 0) {
    iVar4 = iVar4 + iVar3 * (1 - piVar5[3]);
  }
  param_1[6] = iVar4;
  param_1[7] = iVar3;
  if (local_24 == 0) {
    uVar1 = png_get_rowbytes(iVar6,iVar7);
    uVar2 = png_malloc(iVar6,uVar1);
    iVar7 = DAT_002dbb60;
    param_1[5] = uVar2;
    uVar1 = png_safe_execute(piVar5,iVar7 + 0x2dbb0c,param_1);
    param_1[5] = 0;
    png_free(iVar6,uVar2);
  }
  else {
    while (local_24 = local_24 + -1, -1 < local_24) {
      local_1c = param_1[6];
      for (iVar7 = piVar5[3]; iVar7 != 0; iVar7 = iVar7 + -1) {
        png_read_row(iVar6,local_1c,0);
        local_1c = local_1c + iVar3;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


