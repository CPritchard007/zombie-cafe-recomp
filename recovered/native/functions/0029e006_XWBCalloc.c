/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e006 XWBCalloc */

/* XWBCalloc(unsigned int, unsigned int, char const*, unsigned int) */

void * XWBCalloc(uint param_1,uint param_2,char *param_3,uint param_4)

{
  void *__s;
  uint __n;
  
  __n = param_1 * 4 * ((param_2 - 1 >> 2) + 1);
  __s = (void *)XWBMalloc(__n,param_3,param_4);
  memset(__s,0,__n);
  return __s;
}


