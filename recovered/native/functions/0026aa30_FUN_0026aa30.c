/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026aa30 FUN_0026aa30 */

void FUN_0026aa30(undefined4 *param_1,int param_2,uint *param_3,undefined4 param_4,
                 undefined4 param_5,ushort param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  uint local_60;
  int local_5c;
  int *local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  
  uVar13 = *param_1;
  uVar4 = param_1[2];
  uVar6 = *param_3;
  uVar7 = param_1[0x79];
  if ((int)(uVar6 << 3) < 0) {
    return;
  }
  if ((int)((uint)param_6 << 0x19) < 0) {
    return;
  }
  if (param_3[1] == 0) {
    if ((uVar6 & 0x300000) == 0) {
      if ((param_6 & 3) == 0) {
        iVar5 = DAT_0026ad08 + 0x26aa98;
      }
      else {
        iVar5 = DAT_0026acfc + 0x26aa86;
      }
    }
    else {
      iVar5 = DAT_0026ad04 + 0x26aa92;
    }
  }
  else {
    iVar5 = DAT_0026ad00 + 0x26aa8c;
  }
  param_2 = param_2 + (uint)(byte)param_3[0xd] * 0x40 + 8;
  uVar1 = FUN_0026877c(uVar13,DAT_0026ad0c + 0x26aaa4,iVar5);
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar2 = *(uint *)(param_2 + 4);
    iVar5 = DAT_0026ad14 + 0x26aabe;
  }
  else {
    uVar2 = (uint)*(byte *)(param_2 + 0x1f);
    iVar5 = DAT_0026ad10 + 0x26aab6;
  }
  uVar1 = FUN_0026a950(uVar13,uVar1,iVar5,uVar1,uVar2);
  uVar8 = *(uint *)(param_2 + 8);
  if (uVar8 != 0) {
    uVar1 = FUN_0026a950(uVar13,uVar1,DAT_0026ad18 + 0x26aada,uVar1,uVar8);
    uVar2 = uVar8;
  }
  if ((uVar6 & 0xf0000) == 0) {
    if ((uVar6 & 0x3000) == 0) {
      if ((int)(uVar6 << 4) < 0) {
        uVar1 = FUN_0026a950(uVar13,uVar1,DAT_0026ad68 + 0x26aca0,uVar1,
                             *(undefined4 *)(param_3[4] + 0x14),*(undefined4 *)(param_3[4] + 0x18));
      }
    }
    else {
      uVar1 = FUN_0026a950(uVar13,uVar1,DAT_0026ad54 + 0x26ac48,uVar1,uVar2);
      if ((int)(uVar6 << 0x13) < 0) {
        iVar5 = DAT_0026ad58 + 0x26ac5a;
      }
      else if ((uVar6 & 0x300000) == 0x300000) {
        iVar5 = DAT_0026ad5c + 0x26ac6c;
      }
      else if ((int)(uVar6 << 10) < 0) {
        iVar5 = DAT_0026ad60 + 0x26ac78;
      }
      else {
        if (-1 < (int)(uVar6 << 0xb)) goto LAB_0026acae;
        iVar5 = DAT_0026ad64 + 0x26ac84;
      }
      uVar1 = FUN_0026a950(uVar13,uVar1,iVar5,uVar1,uVar2);
    }
  }
  else {
    uVar8 = param_3[1];
    uVar2 = param_3[4];
    piVar3 = *(int **)(uVar2 + 4);
    iVar5 = *(int *)(*(int *)(param_2 + 0xc) + 0xc);
    if ((uVar8 != 0) || (uVar11 = *param_3 & 0x300000, uVar11 != 0)) {
      local_20 = DAT_0026ad1c;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_1b = 1;
      local_1a = 0;
      local_1c = 0;
      local_34 = uVar13;
      FUN_002674ce(&local_34,DAT_0026ad20 + 0x26ab2c,2);
      iVar12 = DAT_0026ad24 + 0x26ab3e;
      local_48 = piVar3;
      for (local_5c = 0; local_5c < (int)uVar8; local_5c = local_5c + 1) {
        iVar10 = *local_48;
        local_48 = local_48 + 1;
        FUN_002681c0(&local_34,local_5c,*(undefined4 *)(iVar10 * 0x18 + iVar5),iVar12);
      }
      uVar8 = (int)~uVar8 >> 0x1f & uVar8;
      local_60 = uVar8;
      if ((int)(*param_3 << 10) < 0) {
        if (uVar8 == *(uint *)(uVar2 + 0x24)) {
          iVar12 = DAT_0026ad28 + 0x26ab90;
        }
        else {
          iVar12 = *(int *)(piVar3[uVar8] * 0x18 + iVar5);
        }
        local_60 = uVar8 + 1;
        FUN_002681c0(&local_34,uVar8,iVar12,DAT_0026ad2c + 0x26ab9c);
      }
      if ((int)(*param_3 << 0xb) < 0) {
        if (uVar8 == *(uint *)(uVar2 + 0x24)) {
          iVar5 = DAT_0026ad30 + 0x26abc2;
        }
        else {
          iVar5 = *(int *)(piVar3[uVar8] * 0x18 + iVar5);
        }
        FUN_002681c0(&local_34,local_60,iVar5,DAT_0026ad34 + 0x26abca);
      }
      FUN_002674ce(&local_34,DAT_0026ad38 + 0x26abd6,1);
      uVar11 = FUN_002684c4(&local_34);
    }
    if ((uVar6 & 0x20000000) == 0) {
      iVar5 = DAT_0026ad40 + 0x26abf6;
    }
    else {
      iVar5 = DAT_0026ad3c + 0x26abf0;
    }
    if ((int)(uVar6 << 8) < 0) {
      iVar12 = DAT_0026ad44 + 0x26ac00;
    }
    else {
      iVar12 = DAT_0026ad48 + 0x26ac06;
    }
    if ((uVar6 & 0x20000000) == 0) {
      iVar10 = *(int *)param_3[4];
      iVar9 = DAT_0026ad70 + 0x26acf8;
    }
    else {
      iVar9 = DAT_0026ad4c + 0x26ac0e;
      iVar10 = iVar9;
    }
    uVar1 = FUN_0026a950(uVar13,uVar1,DAT_0026ad50 + 0x26ac22,uVar1,iVar5,iVar12,iVar9,iVar10,uVar11
                        );
    FUN_0025fbda(uVar13,uVar11);
  }
LAB_0026acae:
  uVar14 = 1;
  if ((param_6 & 3) == 0) {
    uVar14 = __fixdfdi(param_3[2],param_3[3]);
  }
  uVar13 = FUN_0026a950(uVar13,uVar1,DAT_0026ad6c + 0x26acce,uVar1,uVar14);
  FUN_002662da(uVar4,0x96,uVar7,param_4,param_5,uVar13,0xffffffff);
  return;
}


