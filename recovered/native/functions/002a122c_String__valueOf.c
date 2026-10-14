/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a122c String::valueOf */

/* String::valueOf(int) */

int String::valueOf(int param_1)

{
  char *__s;
  int in_r1;
  int iVar1;
  size_t __size;
  
  __size = 7;
  for (iVar1 = DAT_002a1270; iVar1 < (in_r1 + (in_r1 >> 0x1f) ^ in_r1 >> 0x1f);
      iVar1 = DAT_002a1274 * iVar1) {
    __size = __size + 5;
  }
  __s = (char *)malloc(__size);
  snprintf(__s,__size,(char *)(DAT_002a1278 + 0x2a1258),in_r1);
  String((String *)param_1,__s);
  free(__s);
  return param_1;
}


