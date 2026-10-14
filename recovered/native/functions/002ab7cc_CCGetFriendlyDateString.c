/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab7cc CCGetFriendlyDateString */

/* CCGetFriendlyDateString(char*, unsigned int, int) */

void CCGetFriendlyDateString(char *param_1,uint param_2,int param_3)

{
  char *__src;
  
  __src = (char *)javaGetDateString(param_3);
  L_PrintLog((char *)(DAT_002ab7f0 + 0x2ab7e2),__src);
  strncpy(param_1,__src,param_2);
  return;
}


