/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025daf8 FUN_0025daf8 */

bool FUN_0025daf8(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c [2];
  
  puVar12 = &local_28;
  uVar8 = 2;
  uVar9 = 0;
  uVar10 = 0x3b;
  uVar11 = 0;
  iVar2 = FUN_0025da70(param_1,2,0,0x18,0x3a,&local_2c,2,0,0x3b,0,puVar12);
  uVar6 = CONCAT44(DAT_0025dcbc,DAT_0025dcb8);
  if (iVar2 != 2) {
    return true;
  }
  if (*(char *)(param_1 + 5) == ':') {
    iVar3 = FUN_0025da70(param_1 + 6,2,0,0x3b,0,&local_24,uVar8,uVar9,uVar10,uVar11,puVar12);
    iVar2 = DAT_0025dcd0;
    uVar6 = CONCAT44(DAT_0025dcbc,DAT_0025dcb8);
    if (iVar3 != 1) {
      return true;
    }
    pbVar5 = (byte *)(param_1 + 8);
    if ((*(char *)(param_1 + 8) == '.') &&
       ((*(byte *)(DAT_0025dcd0 + 0x25db9c + (uint)*(byte *)(param_1 + 9)) & 4) != 0)) {
      pbVar5 = (byte *)(param_1 + 9);
      uVar7 = CONCAT44(DAT_0025dcb4,DAT_0025dcb0);
      while( true ) {
        local_3c = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_40 = (undefined4)uVar7;
        uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
        bVar1 = *pbVar5;
        if ((*(byte *)(iVar2 + 0x25db9c + (uint)bVar1) & 4) == 0) break;
        uVar6 = __muldf3((int)uVar6,uVar8,DAT_0025dcc0,DAT_0025dcc4);
        uVar7 = __floatsidf((uint)bVar1);
        uVar6 = __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar7,
                         (int)((ulonglong)uVar7 >> 0x20));
        uVar6 = __subdf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_0025dcc8,DAT_0025dccc);
        uVar7 = __muldf3(local_40,local_3c,DAT_0025dcc0,DAT_0025dcc4);
        pbVar5 = pbVar5 + 1;
      }
      uVar6 = __divdf3((int)uVar6,uVar8,local_40,local_3c);
    }
  }
  else {
    pbVar5 = (byte *)(param_1 + 5);
    local_24 = 0;
  }
  *(undefined1 *)(param_2 + 0x2a) = 0;
  *(undefined1 *)(param_2 + 0x29) = 1;
  *(undefined4 *)(param_2 + 0x14) = local_2c;
  *(undefined4 *)(param_2 + 0x18) = local_28;
  uVar7 = __floatsidf(local_24);
  uVar6 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                   (int)((ulonglong)uVar6 >> 0x20));
  iVar2 = DAT_0025dcd4;
  *(undefined8 *)(param_2 + 0x20) = uVar6;
  while (bVar1 = *(byte *)(iVar2 + 0x25dc4c + (uint)*pbVar5), (bVar1 & 1) != 0) {
    pbVar5 = pbVar5 + 1;
  }
  *(uint *)(param_2 + 0x1c) = bVar1 & 1;
  uVar4 = (uint)*pbVar5;
  if (uVar4 == 0x2d) {
    iVar2 = -1;
LAB_0025dc3c:
    iVar3 = FUN_0025da70(pbVar5 + 1,2,0,0xe,0x3a,&local_20,2,0,0x3b,0,local_1c);
    if (iVar3 != 2) {
      return true;
    }
    pbVar5 = pbVar5 + 6;
    *(int *)(param_2 + 0x1c) = (local_20 * 0x3c + local_1c[0]) * iVar2;
  }
  else {
    if (uVar4 == 0x2b) {
      iVar2 = 1;
      goto LAB_0025dc3c;
    }
    if ((uVar4 != 0x7a) && (uVar4 != 0x5a)) goto LAB_0025dc8e;
    pbVar5 = pbVar5 + 1;
  }
  while (uVar4 = (uint)*pbVar5, (*(byte *)((int)&DAT_0025dcc4 + uVar4 + DAT_0025dcd8) & 1) != 0) {
    pbVar5 = pbVar5 + 1;
  }
LAB_0025dc8e:
  if (uVar4 == 0) {
    *(char *)(param_2 + 0x2b) = '\x01' - (*(int *)(param_2 + 0x1c) == 0);
  }
  return uVar4 != 0;
}


