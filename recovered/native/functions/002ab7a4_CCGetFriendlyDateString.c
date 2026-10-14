/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab7a4 CCGetFriendlyDateString */

/* CCGetFriendlyDateString(char*, unsigned int) */

void CCGetFriendlyDateString(char *param_1,uint param_2)

{
  char *__src;
  
  __src = (char *)javaGetDateString(0);
  L_PrintLog((char *)(DAT_002ab7c8 + 0x2ab7ba),__src);
  strncpy(param_1,__src,param_2);
  return;
}


