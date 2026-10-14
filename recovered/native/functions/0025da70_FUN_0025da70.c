/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025da70 FUN_0025da70 */

int FUN_0025da70(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *local_2c;
  int local_c [3];
  
  iVar2 = DAT_0025daf0;
  iVar3 = 0;
  local_2c = local_c;
  while( true ) {
    iVar6 = *local_2c;
    uVar5 = local_2c[3];
    iVar4 = 0;
    while (iVar6 != 0) {
      bVar1 = *param_1;
      iVar6 = iVar6 + -1;
      if ((*(byte *)(iVar2 + 0x25dac2 + (uint)bVar1) & 4) == 0) {
        return iVar3;
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 * 10 + (uint)bVar1 + -0x30;
    }
    if (local_2c[2] < iVar4) {
      return iVar3;
    }
    if (iVar4 < local_2c[1]) {
      return iVar3;
    }
    if ((uVar5 != 0) && (uVar5 != *param_1)) break;
    *(int *)local_2c[4] = iVar4;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    local_2c = local_2c + 5;
    if (uVar5 == 0) {
      return iVar3;
    }
  }
  return iVar3;
}


