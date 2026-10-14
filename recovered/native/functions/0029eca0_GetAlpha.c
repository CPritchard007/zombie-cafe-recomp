/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029eca0 GetAlpha */

/* GetAlpha(long long) */

uint GetAlpha(longlong param_1)

{
  uint uVar1;
  int in_r1;
  int iVar2;
  
  iVar2 = -1;
  for (uVar1 = (uint)(in_r1 << 1) >> 6; uVar1 != 0; uVar1 = (int)uVar1 >> 1) {
    iVar2 = iVar2 + 1;
  }
  uVar1 = 0;
  if (iVar2 != -1) {
    uVar1 = iVar2 + 0x61U & 0xff;
  }
  return uVar1;
}


