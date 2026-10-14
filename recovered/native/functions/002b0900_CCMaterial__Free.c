/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0900 CCMaterial::Free */

/* CCMaterial::Free(ccMaterial*) */

void CCMaterial::Free(ccMaterial *param_1)

{
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    free(*(void **)(param_1 + 0x40));
  }
  if (*(void **)(param_1 + 0x44) != (void *)0x0) {
    free(*(void **)(param_1 + 0x44));
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(int *)param_1 == 0xb) {
    glDeleteProgram(*(undefined4 *)(param_1 + 0x94));
  }
  return;
}


