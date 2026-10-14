/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262898 FUN_00262898 */

undefined2 *
FUN_00262898(int param_1,byte *param_2,size_t param_3,undefined4 param_4,undefined1 param_5,
            char param_6)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 local_28;
  
  uVar4 = 0;
  puVar3 = (undefined2 *)0x0;
  __aeabi_idivmod(*(byte *)(DAT_002629b4 + 0x2628fc + (uint)*param_2) + param_3,0x17);
  for (puVar1 = (undefined2 *)FUN_0025cdfc(param_1 + 0x140,extraout_r1,param_2,param_3);
      puVar1 != (undefined2 *)0x0; puVar1 = *(undefined2 **)(puVar1 + 4)) {
    uVar2 = FUN_00262854(puVar1,param_4,param_5);
    if ((int)uVar4 < (int)uVar2) {
      puVar3 = puVar1;
      uVar4 = uVar2;
    }
  }
  if ((param_6 == '\0') && ((puVar3 == (undefined2 *)0x0 || (*(int *)(param_1 + 0x18) << 3 < 0)))) {
    puVar1 = (undefined2 *)FUN_0025cdfc(DAT_002629b8 + 0x262972,extraout_r1,param_2,param_3);
    uVar4 = 0;
    for (; puVar1 != (undefined2 *)0x0; puVar1 = *(undefined2 **)(puVar1 + 4)) {
      uVar2 = FUN_00262854(puVar1,param_4,param_5);
      if ((int)uVar4 < (int)uVar2) {
        puVar3 = puVar1;
        uVar4 = uVar2;
      }
    }
  }
  if (((uint)(uVar4 < 6) == (int)uVar4 >> 0x1f) || (param_6 == '\0')) {
    if (puVar3 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
  }
  else {
    puVar3 = (undefined2 *)FUN_0025f04c(param_1,param_3 + 0x25);
    if (puVar3 == (undefined2 *)0x0) {
      return (undefined2 *)0x0;
    }
    local_28 = (undefined2)param_4;
    *puVar3 = local_28;
    *(undefined1 *)(puVar3 + 1) = param_5;
    *(undefined2 **)(puVar3 + 0xc) = puVar3 + 0x12;
    memcpy(puVar3 + 0x12,param_2,param_3);
    *(undefined1 *)(*(int *)(puVar3 + 0xc) + param_3) = 0;
    FUN_0025ce28(param_1 + 0x140,puVar3);
  }
  if ((*(int *)(puVar3 + 8) == 0) && (param_6 == '\0')) {
    puVar3 = (undefined2 *)((uint)puVar3 & -(uint)(*(int *)(puVar3 + 6) != 0));
  }
  return puVar3;
}


