/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bed4c CCBitField::DebugPrint */

/* CCBitField::DebugPrint(void*) */

void CCBitField::DebugPrint(void *param_1)

{
  int iVar1;
  int iVar2;
  char *__format;
  uint uVar3;
  
  iVar1 = DAT_002bed90;
                    /* WARNING: Load size is inaccurate */
  printf((char *)(DAT_002bed8c + 0x2bed5a),*param_1);
                    /* WARNING: Load size is inaccurate */
  for (uVar3 = 0; uVar3 < *param_1; uVar3 = uVar3 + 1) {
    iVar2 = IsBitSet(param_1,uVar3);
    __format = (char *)(iVar1 + 0x2bed62);
    if (iVar2 != 0) {
      __format = (char *)(DAT_002bed94 + 0x2bed76);
    }
    printf(__format);
  }
  putchar(10);
  return;
}


