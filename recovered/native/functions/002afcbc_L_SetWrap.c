/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afcbc L_SetWrap */

/* L_SetWrap(unsigned int, unsigned int) */

void L_SetWrap(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_002afce8;
  iVar2 = DAT_002afce4 + 0x2afcc8;
  glTexParameteri(DAT_002afce8,DAT_002afcec,*(undefined4 *)(iVar2 + param_1 * 4 + 0x2c));
  glTexParameteri(uVar1,DAT_002afcf0,*(undefined4 *)(iVar2 + param_2 * 4 + 0x2c));
  return;
}


