/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abde4 FUN_002abde4 */

bool FUN_002abde4(char *param_1)

{
  char *pcVar1;
  bool bVar2;
  
  bVar2 = true;
  pcVar1 = strstr(param_1,(char *)(DAT_002abe7c + 0x2abdf0));
  if ((((((pcVar1 == (char *)0x0) &&
         (pcVar1 = strstr(param_1,(char *)(DAT_002abe80 + 0x2abdfe)), pcVar1 == (char *)0x0)) &&
        (pcVar1 = strstr(param_1,(char *)(DAT_002abe84 + 0x2abe0c)), pcVar1 == (char *)0x0)) &&
       ((pcVar1 = strstr(param_1,(char *)(DAT_002abe88 + 0x2abe1a)), pcVar1 == (char *)0x0 &&
        (pcVar1 = strstr(param_1,(char *)(DAT_002abe8c + 0x2abe28)), pcVar1 == (char *)0x0)))) &&
      ((pcVar1 = strstr(param_1,(char *)(DAT_002abe90 + 0x2abe36)), pcVar1 == (char *)0x0 &&
       ((pcVar1 = strstr(param_1,(char *)(DAT_002abe94 + 0x2abe44)), pcVar1 == (char *)0x0 &&
        (pcVar1 = strstr(param_1,(char *)(DAT_002abe98 + 0x2abe52)), pcVar1 == (char *)0x0)))))) &&
     (pcVar1 = strstr(param_1,(char *)(DAT_002abe9c + 0x2abe60)), pcVar1 == (char *)0x0)) {
    pcVar1 = strstr(param_1,(char *)(DAT_002abea0 + 0x2abe6e));
    bVar2 = pcVar1 != (char *)0x0;
  }
  return bVar2;
}


