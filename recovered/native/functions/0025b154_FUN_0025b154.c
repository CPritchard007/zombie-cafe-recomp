/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b154 FUN_0025b154 */

uint FUN_0025b154(char *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    for (; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
    }
    uVar1 = (int)pcVar2 - (int)param_1 & 0x3fffffff;
  }
  return uVar1;
}


