/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e68f8 FUN_002e68f8 */

uint FUN_002e68f8(undefined4 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  byte *local_128;
  undefined1 auStack_118 [260];
  
  if (param_2 == (byte *)0x0) {
    *param_3 = 0;
    return 0;
  }
  bVar2 = true;
  uVar3 = 0;
  local_128 = param_2;
  bVar4 = 0;
LAB_002e695e:
  do {
    while( true ) {
      bVar1 = *local_128;
      if ((bVar1 == 0) || (0x4e < uVar3)) {
        if ((bVar2) && (uVar3 != 0)) {
          uVar3 = uVar3 - 1;
          param_3 = param_3 + -1;
          if (bVar4 == 0) {
            bVar4 = 0x20;
          }
        }
        *param_3 = 0;
        if (uVar3 == 0) {
          return 0;
        }
        if (*local_128 != 0) {
          png_warning(param_1,DAT_002e69c8 + 0x2e6998);
          return uVar3;
        }
        if (bVar4 == 0) {
          return uVar3;
        }
        png_warning_parameter(auStack_118,1,param_2);
        png_warning_parameter_signed(auStack_118,2,4,bVar4);
        png_formatted_warning(param_1,auStack_118,DAT_002e69cc + 0x2e69c0);
        return uVar3;
      }
      local_128 = local_128 + 1;
      if ((0x5d < (byte)(bVar1 - 0x21)) && (bVar1 < 0xa1)) break;
      *param_3 = bVar1;
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 1;
      bVar2 = false;
    }
    if (bVar2) goto LAB_002e6948;
    *param_3 = 0x20;
    uVar3 = uVar3 + 1;
    param_3 = param_3 + 1;
    bVar2 = true;
  } while (bVar1 == 0x20);
  goto LAB_002e694e;
LAB_002e6948:
  bVar2 = true;
  if (bVar4 == 0) {
LAB_002e694e:
    bVar2 = true;
    bVar4 = bVar1;
  }
  goto LAB_002e695e;
}


