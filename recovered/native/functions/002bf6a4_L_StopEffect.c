/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf6a4 L_StopEffect */

/* L_StopEffect(SSoundEffect*, float) */

void L_StopEffect(SSoundEffect *param_1,float param_2)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = javaIsEffectPlaying(*(undefined4 *)(param_1 + 0x114));
  if (iVar1 != 0) {
    iVar1 = __aeabi_fcmple(in_r1,DAT_002bf6d4);
    if (iVar1 != 0) {
      javaStopEffect(*(undefined4 *)(param_1 + 0x114));
    }
    *(undefined4 *)(param_1 + 4) = in_r1;
    *(undefined4 *)(param_1 + 8) = 0x3f800000;
  }
  return;
}


