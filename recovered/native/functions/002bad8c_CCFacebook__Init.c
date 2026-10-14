/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bad8c CCFacebook::Init */

/* CCFacebook::Init(char const*, char const*, char const*, unsigned int) */

undefined1 * CCFacebook::Init(char *param_1,char *param_2,char *param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  char *__src;
  
  L_PrintLog((char *)(DAT_002badf8 + 0x2bad9a),(char *)(DAT_002badfc + 0x2bad9c));
  puVar2 = (undefined1 *)malloc(DAT_002bae00);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0xffffffff;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = 0;
    iVar1 = DAT_002bae08;
    strcpy(puVar2 + DAT_002bae04,param_2);
    __src = (char *)(iVar1 + 0x2badc0);
    strcpy(puVar2 + DAT_002bae0c,param_3);
    strcpy(puVar2 + 2,__src);
    strcpy(puVar2 + 0x82,__src);
    strcpy(puVar2 + 0x102,__src);
    strcpy(puVar2 + DAT_002bae10,__src);
  }
  return puVar2;
}


