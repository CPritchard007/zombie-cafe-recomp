/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a127c String::valueOf */

/* String::valueOf(long) */

long String::valueOf(long param_1)

{
  char *__s;
  int in_r1;
  int iVar1;
  size_t __size;
  
  __size = 7;
  for (iVar1 = DAT_002a12c0; iVar1 < (in_r1 + (in_r1 >> 0x1f) ^ in_r1 >> 0x1f);
      iVar1 = DAT_002a12c4 * iVar1) {
    __size = __size + 5;
  }
  __s = (char *)malloc(__size);
  snprintf(__s,__size,(char *)(DAT_002a12c8 + 0x2a12a8),in_r1);
  String((String *)param_1,__s);
  free(__s);
  return param_1;
}


