/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afcf4 L_SetTextureFilter */

/* L_SetTextureFilter(unsigned int) */

void L_SetTextureFilter(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_002afd20;
  uVar2 = *(undefined4 *)(DAT_002afd1c + param_1 * 4 + 0x2afd34);
  glTexParameteri(DAT_002afd20,DAT_002afd24,uVar2);
  glTexParameteri(uVar1,0x2800,uVar2);
  return;
}


