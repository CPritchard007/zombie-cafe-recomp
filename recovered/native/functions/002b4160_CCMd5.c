/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4160 CCMd5 */

/* CCMd5(char*, unsigned int, char const*) */

void CCMd5(char *param_1,uint param_2,char *param_3)

{
  char *__src;
  
  __src = (char *)javaMD5String(param_3);
  strncpy(param_1,__src,param_2);
  return;
}


