/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dcedc png_set_alpha_mode_fixed */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002dcf1a) */
/* WARNING: Removing unreachable block (ram,0x002dcf1a) */

void png_set_alpha_mode_fixed(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_002dcbd0(param_1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_002dccd8(param_1,param_3,1);
  uVar3 = iVar1 + DAT_002dcfd8;
  if (DAT_002dcfdc < uVar3) {
    iVar2 = DAT_002dcfe0 + 0x2dcf0a;
    uVar4 = DAT_002dcfdc;
    goto LAB_002dcf78;
  }
  uVar4 = png_reciprocal();
  iVar2 = DAT_002dcfec;
  switch(param_2) {
  case 0:
    *(uint *)(param_1 + 0x13c) = DAT_002dcfe4 & *(uint *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x138) = DAT_002dcfe8 & *(uint *)(param_1 + 0x138);
    uVar3 = 0;
    goto LAB_002dcf7e;
  case 1:
    *(uint *)(param_1 + 0x13c) = DAT_002dcfe4 & *(uint *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x138) = DAT_002dcfe8 & *(uint *)(param_1 + 0x138);
    uVar3 = 1;
    iVar1 = iVar2;
    goto LAB_002dcf7e;
  case 2:
    *(uint *)(param_1 + 0x13c) = DAT_002dcfe4 & *(uint *)(param_1 + 0x13c);
    uVar3 = *(uint *)(param_1 + 0x138) | 0x2000;
    break;
  case 3:
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x800000;
    uVar3 = DAT_002dcfe8 & *(uint *)(param_1 + 0x138);
    break;
  default:
    iVar2 = DAT_002dcff0 + 0x2dcf7a;
    goto LAB_002dcf78;
  }
  *(uint *)(param_1 + 0x138) = uVar3;
  uVar3 = 1;
LAB_002dcf7e:
  while( true ) {
    if (*(int *)(param_1 + 0x39c) == 0) {
      *(uint *)(param_1 + 0x39c) = uVar4;
      *(ushort *)(param_1 + DAT_002dcff4) = *(ushort *)(param_1 + DAT_002dcff4) | 1;
    }
    *(int *)(param_1 + 0x24c) = iVar1;
    if (uVar3 == 0) break;
    memset((void *)(param_1 + 0x228),0,10);
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x39c);
    *(undefined1 *)(param_1 + DAT_002dcff8) = 2;
    uVar4 = param_1 + 0xfc;
    uVar3 = DAT_002dcffc & *(uint *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x13c) = uVar3;
    if ((uVar3 & 0x80) == 0) {
      *(uint *)(param_1 + 0x13c) = uVar3 | 0x80;
      return;
    }
    iVar2 = DAT_002dd000 + 0x2dcfd2;
LAB_002dcf78:
    png_error(param_1,iVar2);
  }
  return;
}


