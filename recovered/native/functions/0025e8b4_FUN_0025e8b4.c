/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e8b4 FUN_0025e8b4 */

undefined4
FUN_0025e8b4(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,uint param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_1c;
  
  iVar1 = DAT_0025e994;
  local_1c = param_6;
  local_34 = 0;
  uVar6 = param_3;
  local_30 = param_2;
  while( true ) {
    local_40 = lseek(*(int *)(param_1 + 0xc),param_5,0);
    local_3c = (int)local_40 >> 0x1f;
    if ((local_40 != param_5) || (local_3c != local_1c)) break;
    uVar3 = (**(code **)(iVar1 + 0x25e936))(*(undefined4 *)(param_1 + 0xc),local_30,uVar6);
    if (uVar3 == uVar6) {
LAB_0025e96a:
      local_3c = uVar3 + local_34;
      goto LAB_0025e96e;
    }
    if ((int)uVar3 < 0) {
      piVar4 = (int *)__errno();
      if (*piVar4 != 4) {
        puVar2 = (undefined4 *)__errno();
        local_34 = 0;
        *(undefined4 *)(param_1 + 0x14) = *puVar2;
        goto LAB_0025e96a;
      }
    }
    else {
      if (uVar3 == 0) goto LAB_0025e96a;
      uVar6 = uVar6 - uVar3;
      bVar7 = CARRY4(local_40,uVar3);
      local_40 = local_40 + uVar3;
      local_3c = local_3c + ((int)uVar3 >> 0x1f) + (uint)bVar7;
      local_34 = local_34 + uVar3;
      local_30 = local_30 + uVar3;
    }
    local_1c = local_3c;
    param_5 = local_40;
  }
  if (local_40 == 0xffffffff) {
    puVar2 = (undefined4 *)__errno();
    *(undefined4 *)(param_1 + 0x14) = *puVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0;
    local_3c = 0xffffffff;
  }
LAB_0025e96e:
  uVar5 = 0;
  if (local_3c != param_3) {
    if ((int)local_3c < 0) {
      uVar5 = 0x10a;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0;
      memset((void *)(param_2 + local_3c),0,param_3 - local_3c);
      uVar5 = DAT_0025e998;
    }
  }
  return uVar5;
}


