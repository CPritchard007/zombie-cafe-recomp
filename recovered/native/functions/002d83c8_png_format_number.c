/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d83c8 png_format_number */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002d83f2) */
/* WARNING: Removing unreachable block (ram,0x002d83f2) */

byte * png_format_number(byte *param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int local_2c;
  int local_24;
  
  iVar3 = DAT_002d84bc;
  iVar2 = DAT_002d84b8;
  pbVar6 = (byte *)(param_2 + -1);
  *pbVar6 = 0;
  bVar1 = false;
  local_2c = 1;
  local_24 = 0;
LAB_002d849e:
  do {
    if ((pbVar6 <= param_1) || ((local_2c <= local_24 && (param_4 == 0)))) {
      return pbVar6;
    }
    switch(param_3) {
    case 2:
      local_2c = 2;
    case 1:
      __aeabi_uidivmod(param_4,10);
      pbVar6 = pbVar6 + -1;
      *pbVar6 = (&BYTE_002d83fa)[iVar3 + extraout_r1_01];
      param_4 = __udivsi3(param_4,10);
      break;
    case 4:
      local_2c = 2;
    case 3:
      uVar5 = param_4 & 0xf;
      pbVar6 = pbVar6 + -1;
      param_4 = param_4 >> 4;
      *pbVar6 = (&BYTE_002d83f8)[iVar2 + uVar5];
      break;
    case 5:
      if ((bVar1) || (__aeabi_uidivmod(param_4,10), extraout_r1 != 0)) {
        pbVar6 = pbVar6 + -1;
        __aeabi_uidivmod(param_4,10);
        *pbVar6 = *(byte *)(DAT_002d84c0 + extraout_r1_00 + 0x2d8432);
        bVar1 = true;
      }
      param_4 = __udivsi3(param_4,10);
      local_2c = 5;
      break;
    default:
      param_4 = 0;
    }
    local_24 = local_24 + 1;
  } while ((param_3 != 5) || (local_24 != 5));
  if (pbVar6 <= param_1) {
    return pbVar6;
  }
  if (!bVar1) goto LAB_002d8494;
  bVar4 = 0x2e;
  goto LAB_002d849c;
LAB_002d8494:
  if (param_4 == 0) {
    bVar4 = 0x30;
LAB_002d849c:
    pbVar6 = pbVar6 + -1;
    *pbVar6 = bVar4;
  }
  goto LAB_002d849e;
}


