/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d426 FUN_0025d426 */

undefined8 FUN_0025d426(undefined4 param_1,undefined4 *param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint local_30;
  uint local_2c;
  
  local_30 = 0;
  local_2c = 0;
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[0xf]) {
    psVar1 = (short *)param_2[10];
    uVar4 = FUN_0025d53e(param_1,*param_2);
    uVar5 = FUN_0025d53e(param_1,param_2[0xc]);
    uVar6 = FUN_0025d53e(param_1,param_2[0xe]);
    uVar7 = FUN_0025d4dc(param_1,param_2[0xb]);
    uVar8 = FUN_0025d4dc(param_1,param_2[0xd]);
    local_30 = (uint)(uVar4 | uVar5) | local_30 | (uint)uVar6 | (uint)uVar7 | (uint)uVar8;
    local_2c = (uint)((uVar4 | uVar5) >> 0x20) | local_2c | (uint)((ulonglong)uVar6 >> 0x20) |
               (uint)((ulonglong)uVar7 >> 0x20) | (uint)((ulonglong)uVar8 >> 0x20);
    if (psVar1 != (short *)0x0) {
      iVar3 = 0;
      psVar2 = psVar1;
      while( true ) {
        if (*psVar1 <= iVar3) break;
        uVar4 = FUN_0025d426(param_1,*(undefined4 *)(psVar2 + 0xc));
        uVar5 = FUN_0025d4dc(param_1,*(undefined4 *)(psVar2 + 0x16));
        iVar3 = iVar3 + 1;
        local_30 = (uint)(uVar4 | uVar5) | local_30;
        local_2c = (uint)((uVar4 | uVar5) >> 0x20) | local_2c;
        psVar2 = psVar2 + 0x20;
      }
    }
  }
  return CONCAT44(local_2c,local_30);
}


