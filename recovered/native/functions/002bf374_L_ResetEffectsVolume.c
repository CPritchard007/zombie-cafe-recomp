/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf374 L_ResetEffectsVolume */

/* L_ResetEffectsVolume(SSoundMgr*) */

undefined8 L_ResetEffectsVolume(SSoundMgr *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_1c;
  
  local_1c = in_r1;
  for (uVar4 = 0; uVar4 < *(uint *)(param_1 + 0x1c); uVar4 = uVar4 + 1) {
    iVar1 = javaIsEffectPlaying(uVar4);
    if (iVar1 != 0) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x24) + uVar4 * 0x118);
      local_1c = __mulsf3(*(undefined4 *)(param_1 + 0x18),*puVar3);
      uVar2 = __subsf3(0x3f800000,puVar3[4]);
      uVar5 = puVar3[2];
      iVar1 = __aeabi_fcmplt(uVar5,uVar2);
      if (iVar1 != 0) {
        uVar2 = uVar5;
      }
      uVar2 = __mulsf3(local_1c,uVar2);
      javaSetEffectVolume(uVar4,uVar2);
    }
  }
  return CONCAT44(local_1c,param_1);
}


