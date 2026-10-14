/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d635c png_zstream_error */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002d636e) */
/* WARNING: Removing unreachable block (ram,0x002d636e) */

void png_zstream_error(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x15c) == 0) {
    switch(param_2) {
    default:
      iVar1 = DAT_002d63bc + 0x2d6382;
      break;
    case 1:
      iVar1 = DAT_002d63c0 + 0x2d6388;
      break;
    case 2:
      iVar1 = DAT_002d63c4 + 0x2d638e;
      break;
    case 0xfffffff9:
      iVar1 = DAT_002d63e0 + 0x2d63b8;
      break;
    case 0xfffffffa:
      iVar1 = DAT_002d63dc + 0x2d63b2;
      break;
    case 0xfffffffb:
      iVar1 = DAT_002d63d8 + 0x2d63ac;
      break;
    case 0xfffffffc:
      iVar1 = DAT_002d63d4 + 0x2d63a6;
      break;
    case 0xfffffffd:
      iVar1 = DAT_002d63d0 + 0x2d63a0;
      break;
    case 0xfffffffe:
      iVar1 = DAT_002d63cc + 0x2d639a;
      break;
    case 0xffffffff:
      iVar1 = DAT_002d63c8 + 0x2d6394;
    }
    *(int *)(param_1 + 0x15c) = iVar1;
  }
  return;
}


