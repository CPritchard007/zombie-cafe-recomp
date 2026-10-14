/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf764 L_StartMusic */

/* L_StartMusic(SSoundMgr*, SSoundEffect*, float, float) */

undefined8 L_StartMusic(SSoundMgr *param_1,SSoundEffect *param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  char *pcVar3;
  undefined4 uVar4;
  
  if (*(int *)param_1 != 0) {
    *(undefined4 *)(param_2 + 8) = 0x3f800000;
    *(undefined4 *)(param_2 + 4) = 0;
    iVar1 = __aeabi_fcmpgt(in_r3,0);
    if (iVar1 == 0) {
      L_PrintLog((char *)(DAT_002bf7f8 + 0x2bf7ae),(char *)(DAT_002bf7fc + 0x2bf7b0));
      uVar4 = *(undefined4 *)(param_2 + 0x114);
      uVar2 = __mulsf3(in_r2,*(undefined4 *)param_2);
      javaSetMusicVolume(uVar4,uVar2);
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    else {
      L_PrintLog((char *)(DAT_002bf7f0 + 0x2bf790),(char *)(DAT_002bf7f4 + 0x2bf792));
      javaSetMusicVolume(*(undefined4 *)(param_2 + 0x114),0);
      *(undefined4 *)(param_2 + 0x10) = 0x3f800000;
      *(undefined4 *)(param_2 + 0xc) = in_r3;
    }
    pcVar3 = (char *)(DAT_002bf800 + 0x2bf7d6);
    L_PrintLog(pcVar3,(char *)(DAT_002bf804 + 0x2bf7d8));
    javaStartMusic(*(undefined4 *)(param_2 + 0x114));
    L_PrintLog(pcVar3,(char *)(DAT_002bf808 + 0x2bf7ea));
  }
  return CONCAT44(in_r2,param_1);
}


