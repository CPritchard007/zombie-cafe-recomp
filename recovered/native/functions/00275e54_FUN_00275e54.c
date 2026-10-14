/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00275e54 FUN_00275e54 */

undefined4 FUN_00275e54(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_1c [2];
  
  puVar2 = (undefined4 *)*param_1;
  uVar3 = 0;
  if ((*(int *)(puVar2[4] + 0x14) == 0) && (*(char *)(param_1 + 0x75) == '\0')) {
    iVar1 = FUN_00275720(*puVar2,0,puVar2,local_1c,0,DAT_00275ebc);
    if (iVar1 == 0) {
      *(undefined4 *)(puVar2[4] + 0x14) = local_1c[0];
      iVar1 = FUN_00262148(local_1c[0],puVar2[0xf],0xffffffff,0);
      if (iVar1 == 7) {
        uVar3 = 1;
        *(undefined1 *)((int)puVar2 + 0x36) = 1;
      }
    }
    else {
      uVar3 = 1;
      FUN_00268e48(param_1,DAT_00275ec0 + 0x275e92);
      param_1[3] = iVar1;
    }
  }
  return uVar3;
}


