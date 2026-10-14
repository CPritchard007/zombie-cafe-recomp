/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b43c8 CCMd5 */

/* CCMd5(char*, unsigned int, char const*, unsigned int) */

void CCMd5(char *param_1,uint param_2,char *param_3,uint param_4)

{
  char *__src;
  
  __src = (char *)javaMD5String(param_3);
  strncpy(param_1,__src,param_2);
  return;
}


