/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00287dac FUN_00287dac */

void FUN_00287dac(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  local_34 = 0;
  iVar3 = *param_1;
  if (param_1[0x73] < 1) {
    FUN_00287ae4(param_1,param_3,param_4,param_6,1,0,param_7);
    iVar4 = param_1[0x7f];
    if ((iVar4 != 0) && (param_1[0x11] == 0)) {
      FUN_00268f60(param_1,param_3,param_4,&local_34);
      iVar1 = FUN_0025d12c(iVar3,*(undefined4 *)(iVar4 + 0x44));
      if ((iVar1 != 1) && (-1 < iVar1)) {
        local_24 = *(undefined4 *)(iVar1 * 0x10 + *(int *)(*param_1 + 0x10));
        local_1c = local_34;
        local_20 = DAT_00287ed8 + 0x287e2e;
        local_28 = param_1;
        iVar1 = FUN_0026a458(&local_28,param_5);
        if (iVar1 != 0) goto LAB_00287e36;
      }
      uVar2 = FUN_002607da(iVar3,param_5,1);
      *(undefined4 *)(iVar4 + 0x1c) = uVar2;
      FUN_00261092(iVar3,param_5);
      if (*(char *)(iVar3 + 0x36) != '\0') {
        return;
      }
      if (*(char *)(iVar3 + 0x7d) == '\0') {
        FUN_0026d134(param_1,iVar4);
      }
      local_30 = (char *)param_1[0x84];
      if ((*local_30 != ';') && (*local_30 != '\0')) {
        local_30 = local_30 + param_1[0x85];
      }
      iVar3 = *param_2;
      iVar4 = (int)local_30 - iVar3;
      while ((0 < iVar4 &&
             (((byte)FUN_00287ee0[(uint)*(byte *)(iVar3 + iVar4 + -1) + DAT_00287edc] & 1) != 0))) {
        iVar4 = iVar4 + -1;
      }
      local_30 = (char *)(iVar3 + iVar4 + -1);
      local_2c = 1;
      FUN_00285b88(param_1,0,&local_30,0);
      return;
    }
  }
  else {
    FUN_00268e48(param_1,DAT_00287ed4 + 0x287dd0);
  }
LAB_00287e36:
  FUN_00261092(iVar3,param_5);
  return;
}


