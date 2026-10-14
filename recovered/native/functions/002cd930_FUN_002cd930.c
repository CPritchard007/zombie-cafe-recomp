/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cd930 FUN_002cd930 */

undefined4 FUN_002cd930(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  int local_24;
  uint local_20;
  
  piVar4 = (int *)param_1[4];
  pbVar6 = (byte *)*param_1;
  iVar5 = param_1[1];
  local_24 = param_3;
  local_20 = param_2;
  if (piVar4[0x6e] == 0) {
    for (; local_24 < 0x19; local_24 = local_24 + 8) {
      if (iVar5 == 0) {
        iVar5 = (**(code **)(piVar4[6] + 0xc))(piVar4);
        if (iVar5 == 0) {
          return 0;
        }
        pbVar6 = *(byte **)piVar4[6];
        iVar5 = ((undefined4 *)piVar4[6])[1];
      }
      bVar1 = *pbVar6;
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar6 + 1;
      if (bVar1 == 0xff) {
        do {
          if (iVar5 == 0) {
            iVar5 = (**(code **)(piVar4[6] + 0xc))(piVar4);
            if (iVar5 == 0) {
              return 0;
            }
            pbVar6 = *(byte **)piVar4[6];
            iVar5 = ((undefined4 *)piVar4[6])[1];
          }
          uVar3 = (uint)*pbVar6;
          iVar5 = iVar5 + -1;
          pbVar6 = pbVar6 + 1;
        } while (uVar3 == 0xff);
        if (uVar3 != 0) {
          piVar4[0x6e] = uVar3;
          goto LAB_002cd9b2;
        }
      }
      local_20 = (uint)bVar1 | local_20 << 8;
    }
  }
  else {
LAB_002cd9b2:
    iVar2 = local_24;
    if (local_24 < param_4) {
      if (*(int *)(piVar4[0x75] + 0x28) == 0) {
        *(undefined4 *)(*piVar4 + 0x14) = 0x78;
        (**(code **)(*piVar4 + 4))(piVar4,0xffffffff);
        *(undefined4 *)(piVar4[0x75] + 0x28) = 1;
      }
      local_24 = 0x19;
      local_20 = local_20 << (0x19U - iVar2 & 0xff);
    }
  }
  *param_1 = pbVar6;
  param_1[1] = iVar5;
  param_1[2] = local_20;
  param_1[3] = local_24;
  return 1;
}


