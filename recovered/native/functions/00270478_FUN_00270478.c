/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00270478 FUN_00270478 */

undefined4 FUN_00270478(int param_1,byte *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int local_30;
  int local_1c [2];
  
  local_1c[0] = 0;
  if (param_2 == (byte *)0x0) {
    *param_5 = 0;
    return 0;
  }
  uVar5 = (uint)*param_2;
  if (uVar5 == 0x84) {
    uVar5 = (uint)param_2[0x23];
  }
  if (uVar5 == 0x9c) {
    uVar3 = (uint)**(byte **)(param_2 + 8);
    if ((uVar3 + 0x7f & 0xff) < 2) {
      iVar4 = DAT_00270688 + 0x2704be;
      local_30 = -1;
      param_2 = *(byte **)(param_2 + 8);
      uVar5 = uVar3;
    }
    else {
      local_30 = 1;
      iVar4 = DAT_00270690 + 0x2704d4;
    }
  }
  else {
    local_30 = 1;
    iVar4 = DAT_0027068c + 0x2704c8;
  }
  if (((uVar5 == 0x82) || (uVar5 == 0x5e)) || (uVar5 == 0x81)) {
    iVar1 = FUN_0025f066(param_1);
    local_1c[0] = iVar1;
    if (iVar1 == 0) {
LAB_0027065c:
      *(undefined1 *)(param_1 + 0x36) = 1;
      FUN_0025fbda(param_1,0);
      FUN_00263758(local_1c[0]);
      *param_5 = 0;
      return 7;
    }
    if ((int)((uint)*(ushort *)(param_2 + 2) << 0x15) < 0) {
      uVar7 = __muldi3(*(int *)(param_2 + 4),*(int *)(param_2 + 4) >> 0x1f,local_30,local_30 >> 0x1f
                      );
      FUN_00263730(iVar1);
      *(undefined2 *)(iVar1 + 0x1c) = 4;
      *(undefined8 *)(iVar1 + 0x10) = uVar7;
      *(undefined1 *)(iVar1 + 0x1e) = 1;
    }
    else {
      iVar4 = FUN_0026877c(param_1,DAT_00270694 + 0x270534,iVar4,*(undefined4 *)(param_2 + 4));
      if (iVar4 == 0) goto LAB_0027065c;
      FUN_00265900(local_1c[0],0xffffffff,iVar4,1,DAT_00270698 + 0x270548);
      if (uVar5 == 0x82) {
        *(undefined1 *)(local_1c[0] + 0x1e) = 2;
      }
    }
    if ((1 < uVar5 - 0x81) || (iVar4 = 99, param_4 != 0x62)) {
      iVar4 = param_4;
    }
    FUN_00270438(local_1c[0],iVar4,1);
    if ((*(ushort *)(local_1c[0] + 0x1c) & 0xc) != 0) {
      *(ushort *)(local_1c[0] + 0x1c) = *(ushort *)(local_1c[0] + 0x1c) & 0xfffd;
    }
    if (param_3 != 1) {
      FUN_002653a4(local_1c[0],param_3);
    }
  }
  else if (uVar5 == 0x9c) {
    iVar4 = FUN_00270478(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4,local_1c);
    if (iVar4 == 0) {
      FUN_00262450(local_1c[0]);
      iVar4 = *(int *)(local_1c[0] + 0x10);
      if ((iVar4 == 0) && (*(int *)(local_1c[0] + 0x14) == -0x80000000)) {
        *(ushort *)(local_1c[0] + 0x1c) = *(ushort *)(local_1c[0] + 0x1c) & 4 | 8;
        uVar2 = DAT_00270684;
        *(undefined4 *)(local_1c[0] + 8) = DAT_00270680;
        *(undefined4 *)(local_1c[0] + 0xc) = uVar2;
      }
      else {
        *(int *)(local_1c[0] + 0x10) = -iVar4;
        *(uint *)(local_1c[0] + 0x14) = -(uint)(iVar4 != 0) - *(int *)(local_1c[0] + 0x14);
      }
      *(int *)(local_1c[0] + 0xc) = *(int *)(local_1c[0] + 0xc) + -0x80000000;
      FUN_00270438(local_1c[0],param_4,param_3);
    }
  }
  else if (uVar5 == 0x62) {
    local_1c[0] = FUN_0025f066(param_1);
    if (local_1c[0] == 0) {
      local_1c[0] = 0;
      goto LAB_0027065c;
    }
  }
  else if (uVar5 == 0x83) {
    iVar4 = FUN_0025f066(param_1);
    local_1c[0] = iVar4;
    if (iVar4 == 0) goto LAB_0027065c;
    iVar6 = *(int *)(param_2 + 4);
    iVar1 = FUN_0025b154(iVar6 + 2);
    uVar2 = FUN_0025ee84(param_1,iVar6 + 2,iVar1 + -1);
    FUN_0026578c(iVar4,uVar2,(iVar1 + -1) / 2,0,DAT_0027069c + 0x27063c);
  }
  if (local_1c[0] != 0) {
    FUN_0025c770();
  }
  *param_5 = local_1c[0];
  return 0;
}


