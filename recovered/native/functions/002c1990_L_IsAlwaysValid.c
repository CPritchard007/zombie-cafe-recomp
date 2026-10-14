/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1990 L_IsAlwaysValid */

bool L_IsAlwaysValid(int *param_1)

{
  return -1 < (int)(*(uint *)(*param_1 + 0x18) << 0xd) &&
         (*(uint *)(*param_1 + 0x18) & 0x80000) == 0;
}


