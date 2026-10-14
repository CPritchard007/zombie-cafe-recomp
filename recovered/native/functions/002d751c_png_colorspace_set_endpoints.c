/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d751c png_colorspace_set_endpoints */

undefined4
png_colorspace_set_endpoints(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  
  iVar3 = DAT_002d76c0;
  local_60 = *param_3;
  local_5c = param_3[1];
  local_58 = param_3[2];
  local_54 = param_3[3];
  local_50 = param_3[4];
  local_4c = param_3[5];
  local_48 = param_3[6];
  local_44 = param_3[7];
  local_40 = param_3[8];
  if (((((((-1 < local_5c) && (-1 < local_50)) && (-1 < local_44)) &&
        ((-1 < local_60 && (-1 < local_54)))) &&
       (((-1 < local_48 && ((-1 < local_58 && (-1 < local_4c)))) && (-1 < local_40)))) &&
      ((local_54 <= DAT_002d76bc - local_5c && (local_48 <= DAT_002d76bc - (local_5c + local_50)))))
     && ((iVar4 = local_5c + local_50 + local_44, iVar4 == DAT_002d76c0 ||
         (((((iVar1 = png_muldiv(&local_60,local_60,DAT_002d76c0,iVar4), iVar1 != 0 &&
             (iVar1 = png_muldiv(&local_5c,local_5c,iVar3,iVar4), iVar1 != 0)) &&
            (iVar1 = png_muldiv(&local_58,local_58,iVar3,iVar4), iVar1 != 0)) &&
           (((iVar1 = png_muldiv(&local_54,local_54,iVar3,iVar4), iVar1 != 0 &&
             (iVar1 = png_muldiv(&local_50,local_50,iVar3,iVar4), iVar1 != 0)) &&
            ((iVar1 = png_muldiv(&local_4c,local_4c,iVar3,iVar4), iVar1 != 0 &&
             ((iVar1 = png_muldiv(&local_48,local_48,iVar3,iVar4), iVar1 != 0 &&
              (iVar1 = png_muldiv(&local_44,local_44,iVar3,iVar4), iVar1 != 0)))))))) &&
          (iVar3 = png_muldiv(&local_40,local_40,iVar3,iVar4), iVar3 != 0)))))) {
    iVar3 = FUN_002d7174(auStack_a0,&local_60);
    if (iVar3 == 0) {
      local_3c = local_60;
      iStack_38 = local_5c;
      iStack_34 = local_58;
      local_30 = local_54;
      iStack_2c = local_50;
      iStack_28 = local_4c;
      local_24 = local_48;
      iStack_20 = local_44;
      iStack_1c = local_40;
      iVar3 = FUN_002d72e8(&local_3c,auStack_a0,&local_3c,auStack_18);
      if ((iVar3 == 0) && (iVar3 = FUN_002d7174(auStack_80,&local_3c), iVar3 == 0)) {
        iVar3 = FUN_002d55a4(auStack_a0,auStack_80,5);
        if (iVar3 != 0) {
          uVar2 = FUN_002d5730(param_1,param_2,auStack_a0,&local_60,param_4);
          return uVar2;
        }
        goto LAB_002d767c;
      }
    }
    iVar4 = DAT_002d76cc;
    if (iVar3 != 1) {
      *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | (ushort)DAT_002d76c4;
      uVar2 = png_error(param_1,iVar4 + 0x2d76a6);
      return uVar2;
    }
  }
LAB_002d767c:
  iVar3 = DAT_002d76c8;
  *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | (ushort)DAT_002d76c4;
  png_benign_error(param_1,iVar3 + 0x2d768e);
  return 0;
}


