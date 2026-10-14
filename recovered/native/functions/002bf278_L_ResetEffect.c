/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf278 L_ResetEffect */

/* L_ResetEffect(SSoundEffect*) */

void L_ResetEffect(SSoundEffect *param_1)

{
  int iVar1;
  
  iVar1 = DAT_002bf2a0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  strcpy((char *)(param_1 + 0x14),(char *)(iVar1 + 0x2bf292));
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}


