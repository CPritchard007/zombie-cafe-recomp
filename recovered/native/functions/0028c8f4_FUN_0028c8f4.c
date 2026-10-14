/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028c8f4 FUN_0028c8f4 */

void FUN_0028c8f4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_2c;
  
  iVar6 = *param_1;
  if ((*(char *)(iVar6 + 0x36) == '\0') && (iVar1 = FUN_00287abc(), iVar1 == 0)) {
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    iVar1 = *(int *)(param_2 + 8);
    uVar2 = FUN_0025b154(uVar4);
    for (uVar5 = 0; (int)uVar5 < *(int *)(iVar6 + 0x14); uVar5 = uVar5 + 1) {
      local_2c = uVar5;
      if ((int)uVar5 < 2) {
        local_2c = uVar5 ^ 1;
      }
      if (((iVar1 == 0) ||
          (iVar3 = sqlite3_stricmp(*(undefined4 *)(local_2c * 0x10 + *(int *)(iVar6 + 0x10)),iVar1),
          iVar3 == 0)) &&
         (iVar3 = FUN_0025bb3c(*(int *)(*(int *)(iVar6 + 0x10) + local_2c * 0x10 + 0xc) + 0x28,uVar4
                               ,uVar2), iVar3 != 0)) {
        FUN_00275f5c(param_1);
        goto LAB_0028c98e;
      }
    }
    if (param_3 == 0) {
      FUN_00268e48(param_1,DAT_0028c9a4 + 0x28c97c,param_2,0);
    }
    else {
      FUN_002760de(param_1,iVar1);
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
LAB_0028c98e:
  FUN_00260fde(iVar6,param_2);
  return;
}


