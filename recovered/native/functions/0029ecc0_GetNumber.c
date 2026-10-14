/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ecc0 GetNumber */

/* GetNumber(long long) */

int GetNumber(longlong param_1)

{
  uint in_r0;
  int iVar1;
  uint uVar2;
  
  iVar1 = -1;
  for (uVar2 = in_r0 & 0x3ff; uVar2 != 0; uVar2 = (int)uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


