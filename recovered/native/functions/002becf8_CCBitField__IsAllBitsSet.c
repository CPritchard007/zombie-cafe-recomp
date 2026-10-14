/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002becf8 CCBitField::IsAllBitsSet */

/* CCBitField::IsAllBitsSet(void*) */

undefined4 CCBitField::IsAllBitsSet(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < *(int *)((int)param_1 + 4) - 1U; uVar2 = uVar2 + 1) {
    if (*(int *)(uVar2 * 4 + *(int *)((int)param_1 + 8)) != -1) {
      return 0;
    }
  }
  uVar2 = (*(int *)((int)param_1 + 4) + DAT_002bed38) * 0x20;
  while( true ) {
                    /* WARNING: Load size is inaccurate */
    if (*param_1 <= uVar2) {
      return 1;
    }
    iVar1 = IsBitSet(param_1,uVar2);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
  }
  return 0;
}


