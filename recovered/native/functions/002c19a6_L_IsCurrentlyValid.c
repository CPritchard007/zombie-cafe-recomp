/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c19a6 L_IsCurrentlyValid */

bool L_IsCurrentlyValid(int *param_1)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*(int *)(*param_1 + 0x18) << 0xc < 0) {
    uVar1 = L_IncrementViewCount(1);
    bVar2 = uVar1 <= *(uint *)(*param_1 + 0x14);
  }
  return bVar2;
}


