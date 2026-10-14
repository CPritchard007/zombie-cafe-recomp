/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf428 L_TickEffect */

/* L_TickEffect(SSoundEffect*, float, float) */

undefined8 L_TickEffect(SSoundEffect *param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar1 = __aeabi_fcmpgt(uVar3,0);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    iVar1 = __aeabi_fcmpgt(uVar3,0);
    if (iVar1 == 0) goto LAB_002bf4f4;
    uVar3 = __divsf3(in_r1,uVar3);
    uVar3 = __subsf3(*(undefined4 *)(param_1 + 0x10),uVar3);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    iVar1 = __aeabi_fcmple(uVar3,0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      uVar4 = *(undefined4 *)(param_1 + 0x114);
      uVar2 = *(undefined4 *)param_1;
      uVar3 = in_r2;
      goto LAB_002bf4c4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x114);
    uVar2 = __mulsf3(in_r2,*(undefined4 *)param_1);
    uVar3 = __subsf3(0x3f800000,uVar3);
    uVar3 = __mulsf3(uVar2,uVar3);
  }
  else {
    uVar3 = __divsf3(in_r1,uVar3);
    uVar2 = __subsf3(*(undefined4 *)(param_1 + 8),uVar3);
    *(undefined4 *)(param_1 + 8) = uVar2;
    iVar1 = __aeabi_fcmple(uVar2,0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0x3f800000;
      *(undefined4 *)(param_1 + 4) = 0;
      iVar1 = javaIsEffectPlaying(*(undefined4 *)(param_1 + 0x114));
      if (iVar1 != 0) {
        javaStopEffect(*(undefined4 *)(param_1 + 0x114));
      }
      goto LAB_002bf4f4;
    }
    uVar3 = __mulsf3(in_r2,*(undefined4 *)param_1);
    uVar4 = *(undefined4 *)(param_1 + 0x114);
LAB_002bf4c4:
    uVar3 = __mulsf3(uVar3,uVar2);
  }
  javaSetEffectVolume(uVar4,uVar3);
LAB_002bf4f4:
  return CONCAT44(in_r2,param_1);
}


