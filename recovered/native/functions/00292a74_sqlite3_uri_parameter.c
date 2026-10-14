/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292a74 sqlite3_uri_parameter */

char * sqlite3_uri_parameter(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    do {
      iVar2 = FUN_0025b154(param_1);
      param_1 = param_1 + iVar2 + 1;
      if (*param_1 == '\0') {
        return (char *)0x0;
      }
      iVar2 = strcmp(param_1,param_2);
      iVar1 = FUN_0025b154(param_1);
      param_1 = param_1 + iVar1 + 1;
    } while (iVar2 != 0);
  }
  return param_1;
}


