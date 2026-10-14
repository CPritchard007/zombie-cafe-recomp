/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ee64 ZombieCafe::pause */

/* ZombieCafe::pause() */

void ZombieCafe::pause(void)

{
  ZombieCafe *in_r0;
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  ZombieCafe *unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(unaff_r7,unaff_r6);
  if (*(int **)(in_r0 + 8) == (int *)0x0) {
    FUN_002e8c20();
  }
  else {
    unaff_r4 = in_r0 + 0xf8;
    pcVar3 = *(char **)(*(int *)(**(int **)(in_r0 + 8) + -4) + 4);
    __android_log_print(4,DAT_0023ef20 + 0x23ee8e,DAT_0023ef24 + 0x23ee90,pcVar3 + (*pcVar3 == '*'))
    ;
    sendPlaySecLog(in_r0);
    uVar5 = Platform::getAppTime();
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    CapcomGame::pause((CapcomGame *)in_r0);
    uVar1 = __fixdfsi((int)uVar5,uVar4);
    *(undefined4 *)(in_r0 + 0x880) = uVar1;
    iVar2 = __aeabi_dcmplt(*(undefined4 *)(in_r0 + 0x138),*(undefined4 *)(in_r0 + 0x13c),(int)uVar5,
                           uVar4);
    if (iVar2 == 0) goto LAB_0023eece;
  }
  *(undefined8 *)(unaff_r4 + 0x40) = uVar5;
LAB_0023eece:
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar1 = (undefined4)uVar5;
  iVar2 = __aeabi_dcmplt(*(undefined4 *)(in_r0 + 0x1e0),*(undefined4 *)(in_r0 + 0x1e4),uVar1,uVar4);
  if (iVar2 != 0) {
    *(undefined8 *)(in_r0 + 0x1e0) = uVar5;
  }
  iVar2 = __aeabi_dcmplt(*(undefined4 *)(in_r0 + 0x318),*(undefined4 *)(in_r0 + 0x31c),uVar1,uVar4);
  if (iVar2 != 0) {
    *(undefined8 *)(in_r0 + 0x318) = uVar5;
  }
  iVar2 = __aeabi_dcmplt(*(undefined4 *)(in_r0 + 0x330),*(undefined4 *)(in_r0 + 0x334),uVar1,uVar4);
  if (iVar2 != 0) {
    *(undefined8 *)(in_r0 + 0x330) = uVar5;
  }
  return;
}


