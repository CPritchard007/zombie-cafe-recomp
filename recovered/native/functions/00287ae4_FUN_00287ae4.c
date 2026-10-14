/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00287ae4 FUN_00287ae4 */

void FUN_00287ae4(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int *__s1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int *local_1c;
  
  iVar8 = *param_1;
  local_30 = FUN_00268f60();
  if (local_30 < 0) {
    return;
  }
  if (param_4 != 0) {
    if ((local_30 != 1) && (*(int *)(param_3 + 4) != 0)) {
      FUN_00268e48(param_1,DAT_00287d8c + 0x287b14);
      return;
    }
    local_30 = 1;
  }
  param_1[0x82] = *local_1c;
  param_1[0x83] = local_1c[1];
  __s1 = (int *)FUN_0025f2ac(iVar8);
  if (__s1 == (int *)0x0) {
    return;
  }
  iVar1 = FUN_00268fd4(param_1,__s1);
  if (iVar1 != 0) goto LAB_00287d80;
  if (*(char *)(iVar8 + 0x7c) == '\x01') {
    param_4 = 1;
  }
  iVar1 = local_30 * 0x10;
  uVar5 = *(undefined4 *)(*(int *)(iVar8 + 0x10) + iVar1);
  if (param_4 == 1) {
    iVar4 = DAT_00287d90 + 0x287b6c;
  }
  else {
    iVar4 = DAT_00287d94 + 0x287b72;
  }
  iVar4 = FUN_00268e90(param_1,0x12,iVar4,0,uVar5);
  if (iVar4 != 0) goto LAB_00287d80;
  if (param_5 == 0) {
    uVar3 = 2;
    if (param_4 != 0) {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 8;
    if (param_4 != 0) {
      uVar3 = 6;
    }
  }
  if ((param_6 == 0) && (iVar4 = FUN_00268e90(param_1,uVar3,__s1,0,uVar5), iVar4 != 0))
  goto LAB_00287d80;
  if (*(char *)((int)param_1 + DAT_00287d98) == '\0') {
    uVar5 = *(undefined4 *)(*(int *)(iVar8 + 0x10) + iVar1);
    iVar4 = FUN_00287abc(param_1);
    if (iVar4 != 0) goto LAB_00287d80;
    iVar4 = FUN_0026460e(iVar8,__s1,uVar5);
    if (iVar4 == 0) {
      iVar4 = FUN_00264662(iVar8,__s1,uVar5);
      if (iVar4 == 0) goto LAB_00287c14;
      iVar1 = DAT_00287da0 + 0x287c10;
      local_1c = __s1;
    }
    else {
      if (param_7 != 0) {
        FUN_00275ec4(param_1,local_30);
        goto LAB_00287d80;
      }
      iVar1 = DAT_00287d9c + 0x287bee;
    }
    FUN_00268e48(param_1,iVar1,local_1c);
  }
  else {
LAB_00287c14:
    puVar2 = (undefined4 *)FUN_0025f04c(iVar8,0x4c);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = __s1;
      puVar2[1] = 0xffffffff;
      puVar2[0x11] = *(undefined4 *)(*(int *)(iVar8 + 0x10) + iVar1 + 0xc);
      *(undefined2 *)(puVar2 + 8) = 1;
      puVar2[6] = DAT_00287da4;
      param_1[0x7f] = (int)puVar2;
      if ((*(char *)((int)param_1 + 0x12) == '\0') &&
         (iVar1 = strcmp((char *)__s1,(char *)(DAT_00287da8 + 0x287c62)), iVar1 == 0)) {
        *(undefined4 **)(puVar2[0x11] + 0x48) = puVar2;
      }
      if (*(char *)(iVar8 + 0x7d) != '\0') {
        return;
      }
      iVar1 = FUN_002662b8(param_1);
      if (iVar1 == 0) {
        return;
      }
      FUN_00275f2c(param_1,0,local_30);
      if (param_6 != 0) {
        FUN_002662aa(iVar1,0x84);
      }
      iVar6 = param_1[0x13];
      iVar4 = iVar6 + 1;
      param_1[100] = iVar4;
      param_1[0x65] = iVar6 + 2;
      iVar7 = iVar6 + 3;
      param_1[0x13] = iVar7;
      FUN_00266266(iVar1,0x24,local_30,iVar7,2);
      FUN_0025c3f4(iVar1,local_30);
      uVar5 = FUN_002665da(iVar1,0x1b,iVar7);
      uVar3 = 4;
      if (*(int *)(iVar8 + 0x18) << 0xb < 0) {
        uVar3 = 1;
      }
      FUN_0026641e(iVar1,7,uVar3,iVar7);
      FUN_00266266(iVar1,0x25,local_30,2,iVar7);
      FUN_0026641e(iVar1,7,*(undefined1 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0xc) + 0x4d),iVar7);
      FUN_00266266(iVar1,0x25,local_30,5,iVar7);
      FUN_002624c2(iVar1,uVar5);
      if (param_6 == 0 && param_5 == 0) {
        uVar5 = 0x69;
        iVar8 = local_30;
      }
      else {
        uVar5 = 7;
        iVar8 = 0;
      }
      FUN_0026641e(iVar1,uVar5,iVar8,iVar6 + 2);
      FUN_00266870(param_1,local_30);
      FUN_0026641e(iVar1,0x38,0,iVar4);
      FUN_0026641e(iVar1,10,0,iVar7);
      FUN_00266266(iVar1,0x39,0,iVar7,iVar4);
      FUN_0025c3b8(iVar1,8);
      FUN_002662aa(iVar1,0x2d);
      return;
    }
    *(undefined1 *)(iVar8 + 0x36) = 1;
    param_1[3] = 7;
    param_1[0x11] = param_1[0x11] + 1;
  }
LAB_00287d80:
  FUN_0025fbda(iVar8,__s1);
  return;
}


