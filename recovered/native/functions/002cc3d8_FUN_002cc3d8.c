/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cc3d8 FUN_002cc3d8 */

char FUN_002cc3d8(int param_1,int *param_2)

{
  int extraout_r1;
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  uint local_34;
  int local_2c;
  int local_28;
  int *local_24;
  
  local_40 = *(int *)(param_1 + 0x1c4);
  iVar1 = *(int *)(param_1 + 0x14c);
  while ((*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x98) ||
         ((*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0x98) &&
          (*(uint *)(param_1 + 0x94) <= *(uint *)(param_1 + 0x9c)))))) {
    iVar6 = (*(code *)**(undefined4 **)(param_1 + 0x1cc))(param_1);
    if (iVar6 == 0) {
      return '\0';
    }
  }
  iVar6 = *(int *)(param_1 + 0xd8);
  local_44 = 0;
  local_24 = param_2;
  do {
    if (*(int *)(param_1 + 0x24) <= local_44) {
      uVar3 = *(uint *)(param_1 + 0x9c) + 1;
      *(uint *)(param_1 + 0x9c) = uVar3;
      return (*(uint *)(param_1 + 0x14c) <= uVar3) + '\x03';
    }
    if (*(int *)(iVar6 + 0x34) != 0) {
      local_38 = (int *)(**(code **)(*(int *)(param_1 + 4) + 0x20))
                                  (param_1,*(undefined4 *)(local_40 + 0x48),
                                   *(int *)(iVar6 + 0xc) * *(uint *)(param_1 + 0x9c),
                                   *(int *)(iVar6 + 0xc),0);
      if (*(uint *)(param_1 + 0x9c) < iVar1 - 1U) {
        iVar4 = *(int *)(iVar6 + 0xc);
LAB_002cc474:
        local_3c = iVar4;
      }
      else {
        iVar4 = *(int *)(iVar6 + 0xc);
        __aeabi_uidivmod(*(undefined4 *)(iVar6 + 0x20),iVar4);
        local_3c = extraout_r1;
        if (extraout_r1 == 0) goto LAB_002cc474;
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0x1d8) + local_44 * 4 + 4);
      local_28 = *local_24;
      for (iVar4 = 0; iVar4 < local_3c; iVar4 = iVar4 + 1) {
        local_2c = *local_38;
        local_38 = local_38 + 1;
        iVar5 = 0;
        for (local_34 = 0; local_34 < *(uint *)(iVar6 + 0x1c); local_34 = local_34 + 1) {
          (*pcVar2)(param_1,iVar6,local_2c,local_28,iVar5);
          local_2c = local_2c + 0x80;
          iVar5 = iVar5 + *(int *)(iVar6 + 0x24);
        }
        local_28 = local_28 + *(int *)(iVar6 + 0x28) * 4;
      }
    }
    iVar6 = iVar6 + 0x58;
    local_44 = local_44 + 1;
    local_24 = local_24 + 1;
    local_40 = local_40 + 4;
  } while( true );
}


