/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae020 CCGFX::Init */

/* CCGFX::Init(unsigned int) */

void CCGFX::Init(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(DAT_002ae060 + 0x2ae02c);
  puVar1 = puVar2 + 0x77;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != puVar2 + 0x85);
  puVar1 = puVar2 + 0x85;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != puVar2 + 0x91);
  *puVar2 = 0;
  puVar2[0xa2] = param_1;
  return;
}


