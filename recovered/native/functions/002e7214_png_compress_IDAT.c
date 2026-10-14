/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7214 png_compress_IDAT */

void png_compress_IDAT(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_20;
  
  if (*(int *)(param_1 + 0x140) != DAT_002e7390) {
    iVar5 = *(int *)(param_1 + 0x17c);
    if (iVar5 == 0) {
      puVar1 = (undefined4 *)png_malloc(param_1,*(int *)(param_1 + 0x180) + 4);
      *(undefined4 **)(param_1 + 0x17c) = puVar1;
      *puVar1 = 0;
    }
    else {
      png_free_buffer_list(param_1,iVar5);
    }
    uVar2 = FUN_002e67f8(param_1);
    iVar3 = FUN_002e69d0(param_1,DAT_002e7390,uVar2);
    if (iVar3 != 0) goto LAB_002e7386;
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x17c) + 4;
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x180);
  }
  *(undefined4 *)(param_1 + 0x144) = param_2;
  local_20 = param_3;
LAB_002e7282:
  do {
    *(int *)(param_1 + 0x148) = local_20;
    iVar5 = deflate(param_1 + 0x144,param_4);
    local_20 = *(int *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x148) = 0;
    if (*(int *)(param_1 + 0x154) == 0) {
      iVar3 = *(int *)(param_1 + 0x17c) + 4;
      uVar2 = *(undefined4 *)(param_1 + 0x180);
      if (((-1 < *(int *)(param_1 + 0x134) << 0x1d) && (*(char *)(param_1 + 0x34c) == '\0')) &&
         (uVar4 = FUN_002e67f8(param_1), uVar4 < 0x4001)) {
        FUN_002e6bc4(iVar3,uVar4);
      }
      FUN_002e6ea0(param_1,DAT_002e7390,iVar3,uVar2);
      *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 4;
      *(int *)(param_1 + 0x150) = iVar3;
      *(undefined4 *)(param_1 + 0x154) = uVar2;
      if ((iVar5 == 0) && (param_4 != 0)) goto LAB_002e7282;
    }
    if (iVar5 != 0) goto LAB_002e7316;
    if (local_20 == 0) {
      if (param_4 == 4) {
        iVar3 = DAT_002e7394 + 0x2e7312;
        while( true ) {
          png_error(param_1,iVar3);
LAB_002e7316:
          if ((iVar5 == 1) && (param_4 == 4)) break;
          png_zstream_error(param_1,iVar5);
LAB_002e7386:
          iVar3 = *(int *)(param_1 + 0x15c);
        }
        iVar6 = *(int *)(param_1 + 0x180);
        iVar5 = *(int *)(param_1 + 0x154);
        iVar3 = *(int *)(param_1 + 0x17c) + 4;
        if ((-1 < *(int *)(param_1 + 0x134) << 0x1d) &&
           ((*(char *)(param_1 + 0x34c) == '\0' && (uVar4 = FUN_002e67f8(param_1), uVar4 < 0x4001)))
           ) {
          FUN_002e6bc4(iVar3,uVar4);
        }
        FUN_002e6ea0(param_1,DAT_002e7390,iVar3,iVar6 - iVar5);
        *(undefined4 *)(param_1 + 0x154) = 0;
        *(undefined4 *)(param_1 + 0x150) = 0;
        *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0xc;
        *(undefined4 *)(param_1 + 0x140) = 0;
      }
      return;
    }
  } while( true );
}


