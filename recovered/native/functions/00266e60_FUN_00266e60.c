/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266e60 FUN_00266e60 */

short * FUN_00266e60(undefined4 param_1,short *param_2,int param_3,int param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int local_28;
  
  psVar2 = param_2;
  if ((int)param_2[1] < *param_2 + param_3) {
    psVar2 = (short *)FUN_002651e0(param_1,param_2,(*param_2 + param_3) * 0x40 + 8);
    if (psVar2 == (short *)0x0) {
      return param_2;
    }
    iVar3 = FUN_0025f450(param_1,psVar2);
    psVar2[1] = (short)(iVar3 - 0x48U >> 6) + 1;
  }
  sVar1 = *psVar2;
  iVar3 = 0;
  local_28 = 0;
  iVar4 = (int)sVar1;
  while( true ) {
    iVar3 = iVar3 + -0x40;
    local_28 = local_28 + -1;
    if (local_28 + iVar4 < param_4) break;
    memcpy((void *)((int)psVar2 + iVar3 + (param_3 + iVar4) * 0x40 + 8),
           (void *)((int)psVar2 + iVar3 + iVar4 * 0x40 + 8),0x40);
  }
  iVar4 = param_4 * 0x40;
  *psVar2 = (short)param_3 + sVar1;
  memset(psVar2 + param_4 * 0x20 + 4,0,param_3 << 6);
  iVar3 = 0;
  param_3 = param_4 + param_3;
  for (; iVar3 = iVar3 + 0x40, param_4 < param_3; param_4 = param_4 + 1) {
    *(undefined4 *)((int)psVar2 + iVar3 + iVar4 + -0x18) = 0xffffffff;
  }
  return psVar2;
}


