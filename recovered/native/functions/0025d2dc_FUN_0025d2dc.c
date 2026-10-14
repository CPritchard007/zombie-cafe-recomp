/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d2dc FUN_0025d2dc */

void FUN_0025d2dc(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int *local_24;
  undefined4 local_1c;
  
  if (param_2 != 0) {
    iVar2 = *param_1;
    if (-1 < (int)((uint)*(ushort *)(param_2 + 6) << 0x1a)) {
      local_28 = DAT_0025d350 + 0x25d2fc;
      iVar1 = DAT_0025d354 + 0x25d2fe;
      local_2c = iVar1;
      local_24 = param_1;
      FUN_0025c7ba(&local_2c);
      if ((param_1[0x11] == 0) && (*(char *)(iVar2 + 0x36) == '\0')) {
        local_2c = DAT_0025d358 + 0x25d31e;
        local_28 = DAT_0025d35c + 0x25d326;
        local_24 = param_1;
        local_1c = param_3;
        FUN_0025c7ba(&local_2c,param_2);
        if ((param_1[0x11] == 0) && (*(char *)(iVar2 + 0x36) == '\0')) {
          local_28 = DAT_0025d360 + 0x25d344;
          local_2c = iVar1;
          local_24 = param_1;
          FUN_0025c7ba(&local_2c,param_2);
        }
      }
    }
  }
  return;
}


