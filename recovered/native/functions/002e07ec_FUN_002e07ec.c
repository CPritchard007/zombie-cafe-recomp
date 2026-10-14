/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e07ec FUN_002e07ec */

int FUN_002e07ec(int param_1,undefined4 param_2,uint *param_3,undefined4 param_4,int *param_5,
                int param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x140) == *(int *)(param_1 + 0x1dc)) {
    *(undefined4 *)(param_1 + 0x150) = param_4;
    *(undefined4 *)(param_1 + 0x154) = 0;
    uVar4 = 0x400;
    do {
      if (*(int *)(param_1 + 0x148) == 0) {
        uVar3 = *param_3;
        if (uVar3 < uVar4) {
          uVar4 = uVar3;
        }
        *param_3 = uVar3 - uVar4;
        if (uVar4 != 0) {
          png_crc_read(param_1,param_2,uVar4);
        }
        *(uint *)(param_1 + 0x148) = uVar4;
        *(undefined4 *)(param_1 + 0x144) = param_2;
      }
      if (*(int *)(param_1 + 0x154) == 0) {
        iVar2 = *param_5;
        *param_5 = 0;
        *(int *)(param_1 + 0x154) = iVar2;
      }
      uVar1 = 0;
      if ((*param_3 == 0) && (uVar1 = 2, param_6 != 0)) {
        uVar1 = 4;
      }
      local_24 = inflate(param_1 + 0x144,uVar1);
    } while ((local_24 == 0) && ((*param_5 != 0 || (*(int *)(param_1 + 0x154) != 0))));
    *param_5 = *param_5 + *(int *)(param_1 + 0x154);
    *(undefined4 *)(param_1 + 0x154) = 0;
    png_zstream_error(param_1,local_24);
  }
  else {
    *(int *)(param_1 + 0x15c) = DAT_002e08a0 + 0x2e0892;
    local_24 = -2;
  }
  return local_24;
}


