/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c71aa FUN_002c71aa */

undefined8 FUN_002c71aa(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  
  puVar5 = (undefined4 *)param_1[6];
  pbVar8 = (byte *)*puVar5;
  iVar6 = puVar5[1];
  do {
    if (iVar6 == 0) {
      iVar6 = (*(code *)puVar5[3])(param_1);
      uVar7 = 0;
      if (iVar6 == 0) goto LAB_002c7258;
      pbVar8 = (byte *)*puVar5;
      iVar6 = puVar5[1];
    }
    bVar1 = *pbVar8;
    iVar6 = iVar6 + -1;
    pbVar8 = pbVar8 + 1;
    if (bVar1 == 0xff) {
      do {
        if (iVar6 == 0) {
          iVar6 = (*(code *)puVar5[3])(param_1);
          uVar7 = 0;
          if (iVar6 == 0) goto LAB_002c7258;
          pbVar8 = (byte *)*puVar5;
          iVar6 = puVar5[1];
        }
        uVar2 = (uint)*pbVar8;
        iVar6 = iVar6 + -1;
        pbVar8 = pbVar8 + 1;
      } while (uVar2 == 0xff);
      if (uVar2 != 0) {
        if (*(int *)(param_1[0x74] + 0x18) != 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x77;
          *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x74] + 0x18);
          *(uint *)(*param_1 + 0x1c) = uVar2;
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          *(undefined4 *)(param_1[0x74] + 0x18) = 0;
        }
        param_1[0x6e] = uVar2;
        puVar5[1] = iVar6;
        *puVar5 = pbVar8;
        uVar7 = 1;
LAB_002c7258:
        return CONCAT44(param_1,uVar7);
      }
      iVar4 = param_1[0x74];
      iVar3 = *(int *)(iVar4 + 0x18) + 2;
    }
    else {
      iVar4 = param_1[0x74];
      iVar3 = *(int *)(iVar4 + 0x18) + 1;
    }
    *(int *)(iVar4 + 0x18) = iVar3;
    *puVar5 = pbVar8;
    puVar5[1] = iVar6;
  } while( true );
}


