/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e2b30 png_read_filter_row */

void png_read_filter_row(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        int param_5)

{
  byte bVar1;
  int iVar2;
  
  if (param_5 - 1U < 4) {
    if (*(int *)(param_1 + 0x38c) == 0) {
      bVar1 = *(byte *)(param_1 + DAT_002e2b8c);
      *(int *)(param_1 + 0x38c) = DAT_002e2b90 + 0x2e2b50;
      *(int *)(param_1 + 0x390) = DAT_002e2b94 + 0x2e2b5a;
      *(int *)(param_1 + 0x394) = DAT_002e2b98 + 0x2e2b64;
      if ((int)(bVar1 + 7) >> 3 == 1) {
        iVar2 = DAT_002e2b9c + 0x2e2b74;
      }
      else {
        iVar2 = DAT_002e2ba0 + 0x2e2b7a;
      }
      *(int *)(param_1 + 0x398) = iVar2;
    }
    (**(code **)(param_1 + (param_5 + 0xe1) * 4 + 4))(param_2,param_3,param_4,param_4,param_4);
  }
  return;
}


