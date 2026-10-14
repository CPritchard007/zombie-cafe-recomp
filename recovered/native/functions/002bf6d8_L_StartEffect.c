/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf6d8 L_StartEffect */

/* L_StartEffect(SSoundMgr*, SSoundEffect*, float, float) */

undefined8 L_StartEffect(SSoundMgr *param_1,SSoundEffect *param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar3;
  
  if (*(int *)param_1 != 0) {
    *(undefined4 *)(param_2 + 8) = 0x3f800000;
    *(undefined4 *)(param_2 + 4) = 0;
    iVar1 = __aeabi_fcmpgt(in_r3,0);
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(param_2 + 0x114);
      uVar2 = __mulsf3(in_r2,*(undefined4 *)param_2);
      javaSetEffectVolume(uVar3,uVar2);
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    else {
      javaSetEffectVolume(*(undefined4 *)(param_2 + 0x114),0);
      *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
      *(undefined4 *)(param_2 + 0xc) = in_r3;
    }
    javaStartEffect(*(undefined4 *)(param_2 + 0x114));
  }
  return CONCAT44(in_r2,param_1);
}


