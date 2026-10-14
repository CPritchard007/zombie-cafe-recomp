/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a82d4 L_AttachCurrentThread */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* L_AttachCurrentThread() */

undefined4 L_AttachCurrentThread(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(DAT_002a82f4 + 0x2a82de);
  piVar1 = (int *)*puVar2;
  iVar3 = DAT_002a82f4 + 0x2a82e2;
  (**(code **)(*piVar1 + 0x18))(piVar1,iVar3,DAT_002a82f8);
  FUN_002a8162(*puVar2,iVar3);
  return 1;
}


