/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00278d8a FUN_00278d8a */

void FUN_00278d8a(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int local_34;
  uint local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar2 = param_1[2];
  *param_2 = 1;
  FUN_0025cb7c();
  piVar3 = *(int **)(param_2 + 0x20);
  local_34 = 0;
  for (local_1c = 0; local_1c < *(int *)(param_2 + 0x24); local_1c = local_1c + 1) {
    puVar5 = *(uint **)(*piVar3 + 0x10);
    if (puVar5 == (uint *)0x0) {
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_2c = *puVar5;
      local_28 = FUN_00262834(param_1,local_2c);
      FUN_00278300(param_1,puVar5,local_28,1);
    }
    local_24 = 0;
    if (-1 < piVar3[3]) {
      local_24 = FUN_00266020(iVar2);
      FUN_00266b9a(param_1,piVar3[3],local_24,1,local_28);
    }
    if ((int)((uint)*(byte *)(piVar3[1] + 3) << 0x1c) < 0) {
      puVar6 = (undefined4 *)puVar5[2];
      local_20 = 0;
      iVar1 = 0;
      while( true ) {
        if (((int)local_2c <= local_20) || (iVar1 != 0)) break;
        iVar1 = FUN_0026cf38(param_1,*puVar6);
        puVar6 = puVar6 + 5;
        local_20 = local_20 + 1;
      }
      if (iVar1 == 0) {
        iVar1 = *(int *)(*param_1 + 8);
      }
      if ((local_34 == 0) && (*(int *)(param_2 + 0x1c) != 0)) {
        local_34 = param_1[0x13] + 1;
        param_1[0x13] = local_34;
      }
      FUN_002662da(iVar2,0x11,local_34,0,0,iVar1,0xfffffffc);
    }
    FUN_002662da(iVar2,0x7b,0,local_28,piVar3[2],piVar3[1],0xfffffffb);
    FUN_0025c3b8(iVar2,local_2c & 0xff);
    FUN_0025cb14(param_1,local_28,local_2c);
    FUN_0025cbb8(param_1,local_28,local_2c);
    if (local_24 != 0) {
      FUN_0025c384(iVar2,local_24);
      FUN_0025cb7c(param_1);
    }
    piVar3 = piVar3 + 4;
  }
  iVar1 = local_34;
  if (local_34 != 0) {
    iVar1 = FUN_002665da(iVar2,0x1b,local_34);
  }
  FUN_0025cb7c(param_1);
  iVar4 = *(int *)(param_2 + 0x14);
  local_34 = 0;
  while( true ) {
    if (*(int *)(param_2 + 0x1c) <= local_34) break;
    FUN_002786f4(param_1,*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x10));
    iVar4 = iVar4 + 0x18;
    local_34 = local_34 + 1;
  }
  *param_2 = 0;
  FUN_0025cb7c(param_1);
  if (iVar1 != 0) {
    FUN_002624c2(iVar2,iVar1);
  }
  return;
}


