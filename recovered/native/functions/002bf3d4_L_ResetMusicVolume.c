/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf3d4 L_ResetMusicVolume */

/* L_ResetMusicVolume(SSoundMgr*) */

void L_ResetMusicVolume(SSoundMgr *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  L_PrintLog((char *)(DAT_002bf424 + 0x2bf3e2),(char *)(DAT_002bf420 + 0x2bf3e0));
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 0x14),*puVar4);
  uVar2 = __subsf3(0x3f800000,puVar4[4]);
  uVar5 = puVar4[2];
  iVar3 = __aeabi_fcmplt(uVar5,uVar2);
  if (iVar3 != 0) {
    uVar2 = uVar5;
  }
  uVar2 = __mulsf3(uVar1,uVar2);
  javaSetMusicVolume(0,uVar2);
  return;
}


