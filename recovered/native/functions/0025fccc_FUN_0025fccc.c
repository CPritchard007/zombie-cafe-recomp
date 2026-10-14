/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025fccc FUN_0025fccc */

undefined8 FUN_0025fccc(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *param_2;
  iVar2 = param_1[10];
  *(undefined1 *)(param_1 + 0x19) = 1;
  iVar1 = DAT_0025fd8c;
  iVar9 = param_1[7];
  pbVar7 = (byte *)param_1[1];
  iVar3 = DAT_0025fd88 + 0x25fcec;
  do {
    iVar9 = iVar9 + -1;
    if (iVar9 < 0) {
      FUN_0025fbda(*param_1,param_1[10]);
      param_1[10] = 0;
      *param_2 = uVar8;
      return CONCAT44(iVar2,iVar3);
    }
    uVar4 = (uint)*pbVar7;
    pbVar7[2] = *(byte *)(iVar1 + 0x25fd3c + uVar4);
    uVar5 = uVar8;
    if ((uVar4 == 0x7b) || (uVar4 == 0x12)) {
      uVar5 = (uint)pbVar7[3];
LAB_0025fd34:
      if ((int)uVar5 <= (int)uVar8) {
        uVar5 = uVar8;
      }
    }
    else {
      if (uVar4 == 0x23) {
        if (*(int *)(pbVar7 + 8) == 0) {
LAB_0025fd3a:
          iVar6 = iVar3;
          if ((uVar4 != 0x51) && (uVar4 != 0x5f)) {
            if (uVar4 != 0x5c) goto LAB_0025fd58;
            iVar6 = DAT_0025fd90 + 0x25fd50;
          }
          *(int *)(pbVar7 + 0x10) = iVar6;
          pbVar7[1] = 0xed;
          goto LAB_0025fd58;
        }
      }
      else if (uVar4 != 0x7f) {
        if (uVar4 == 0x8c) {
          uVar5 = *(uint *)(pbVar7 + 8);
        }
        else {
          if (uVar4 != 0x88) goto LAB_0025fd3a;
          uVar5 = *(uint *)(pbVar7 + -0x10);
        }
        goto LAB_0025fd34;
      }
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
LAB_0025fd58:
    if (((int)((uint)pbVar7[2] << 0x1f) < 0) && ((int)*(uint *)(pbVar7 + 8) < 0)) {
      *(undefined4 *)(pbVar7 + 8) = *(undefined4 *)(~*(uint *)(pbVar7 + 8) * 4 + iVar2);
    }
    pbVar7 = pbVar7 + 0x14;
    uVar8 = uVar5;
  } while( true );
}


