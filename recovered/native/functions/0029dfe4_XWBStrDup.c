/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dfe4 XWBStrDup */

/* XWBStrDup(char const*, char const*, unsigned int) */

char * XWBStrDup(char *param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (char *)XWBMalloc(sVar1 + 1,param_2,param_3);
  strcpy(__dest,param_1);
  return __dest;
}


