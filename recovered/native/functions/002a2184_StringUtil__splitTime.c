/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a2184 StringUtil::splitTime */

/* StringUtil::splitTime(unsigned long&, unsigned long&, unsigned long) */

bool StringUtil::splitTime(ulong *param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (param_3 <= uVar1) {
    uVar2 = __udivsi3(uVar1,param_3);
    *param_2 = uVar2;
    *param_1 = *param_1 - uVar2 * param_3;
  }
  return param_3 <= uVar1;
}


