/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027b298 FUN_0027b298 */

void FUN_0027b298(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,
                 int param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_54;
  int local_50;
  int local_48;
  undefined4 *local_38;
  int local_34;
  
  uVar5 = *param_1;
  uVar1 = FUN_002662b8();
  local_48 = 0;
  if (param_8 < 0) {
    local_48 = FUN_0026641e(uVar1,0x76,(char)param_5[6],0);
  }
  local_54 = 0;
  for (local_50 = 0; local_50 < param_5[5]; local_50 = local_50 + 1) {
    iVar6 = FUN_0025f1ba(uVar5,0x84,0);
    if (iVar6 != 0) {
      if (param_4 == 0) {
        *(undefined1 *)(iVar6 + 1) = 100;
        *(int *)(iVar6 + 0x18) = param_7;
      }
      else {
        iVar2 = *(int *)(local_50 * 4 + *(int *)(param_4 + 4));
        iVar3 = *(int *)(param_3 + 0xc) + iVar2 * 0x18;
        if (*(int *)(param_3 + 4) == iVar2) {
          iVar2 = -1;
        }
        *(int *)(iVar6 + 0x18) = param_7 + iVar2 + 1;
        *(undefined1 *)(iVar6 + 1) = *(undefined1 *)(iVar3 + 0x16);
        uVar4 = FUN_0026e718(param_1,*(undefined4 *)(iVar3 + 0x10));
        *(undefined4 *)(iVar6 + 0x14) = uVar4;
      }
    }
    if (param_6 == 0) {
      iVar2 = param_5[9];
    }
    else {
      iVar2 = *(int *)(param_6 + local_50 * 4);
    }
    uVar4 = FUN_0025f1ba(uVar5,0x1a,*(undefined4 *)(iVar2 * 0x18 + *(int *)(*param_5 + 0xc)));
    uVar4 = FUN_00269118(param_1,0x4c,iVar6,uVar4,0);
    local_54 = FUN_00262684(uVar5,local_54,uVar4);
  }
  iVar6 = (param_8 >> 0x1f) - param_8;
  if ((iVar6 < 0) && (param_3 == *param_5)) {
    iVar2 = FUN_0025f1ba(uVar5,0x84,0);
    iVar3 = FUN_0025f1ba(uVar5,0x98,0);
    if ((iVar3 != 0) && (iVar2 != 0)) {
      *(undefined1 *)(iVar2 + 1) = 100;
      *(int *)(iVar2 + 0x18) = param_7;
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_2 + 0x28);
      *(undefined2 *)(iVar3 + 0x1c) = 0xffff;
    }
    uVar4 = FUN_00269118(param_1,0x4b,iVar2,iVar3,0);
    local_54 = FUN_00262684(uVar5,local_54,uVar4);
  }
  memset(&local_38,0,0x20);
  local_38 = param_1;
  local_34 = param_2;
  FUN_00269020(&local_38,local_54);
  iVar2 = FUN_00279b98(param_1,param_2,local_54,0,0,0,0);
  if ((iVar6 < 0) && ((char)param_5[6] == '\0')) {
    if ((undefined4 *)param_1[0x6c] != (undefined4 *)0x0) {
      param_1 = (undefined4 *)param_1[0x6c];
    }
    *(undefined1 *)(param_1 + 6) = 1;
  }
  FUN_0026641e(uVar1,0x75,(char)param_5[6],param_8);
  if (iVar2 != 0) {
    FUN_0026663a(iVar2);
  }
  FUN_002610aa(uVar5,local_54);
  if (local_48 != 0) {
    FUN_002624c2(uVar1);
  }
  return;
}


