/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002baf3c CCFacebook::SetFBInfo */

/* CCFacebook::SetFBInfo(void*, char const*, char const*, char const*, char const*) */

void CCFacebook::SetFBInfo(void *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  strcpy((char *)((int)param_1 + 2),param_2);
  strcpy((char *)((int)param_1 + 0x82),param_3);
  strcpy((char *)((int)param_1 + 0x102),param_4);
  strcpy((char *)((int)param_1 + DAT_002baf78),param_5);
  L_PrintLog((char *)(DAT_002baf7c + 0x2baf72),param_5);
  return;
}


