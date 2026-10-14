/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002be9bc CCToon::Free */

/* CCToon::Free(ccToon*) */

void CCToon::Free(ccToon *param_1)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 8); uVar1 = uVar1 + 1) {
    if (*(int *)(param_1 + 0x20) != 0) {
      free(*(void **)(*(int *)(param_1 + 0x20) + uVar1 * 8 + 4));
    }
  }
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x10); uVar1 = uVar1 + 1) {
    if (*(int *)(param_1 + 0x18) != 0) {
      free(*(void **)(*(int *)(param_1 + 0x18) + uVar1 * 8 + 4));
    }
  }
  free(*(void **)(param_1 + 0xc));
  free(*(void **)(param_1 + 0x18));
  free(*(void **)(param_1 + 0x20));
  free(*(void **)(param_1 + 0x28));
  return;
}


