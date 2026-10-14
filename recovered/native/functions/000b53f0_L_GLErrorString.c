/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b53f0 L_GLErrorString */

/* L_GLErrorString(unsigned int) */

undefined * L_GLErrorString(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == *(uint *)(DAT_000b5414 + 0xb53fa + iVar1 * 8)) {
      return *(undefined **)(DAT_000b5414 + 0xb53fa + iVar1 * 8 + 4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return &UNK_000b5412 + DAT_000b5418;
}


