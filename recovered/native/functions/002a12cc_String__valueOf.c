/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a12cc String::valueOf */

/* String::valueOf(unsigned long) */

ulong String::valueOf(ulong param_1)

{
  char *__s;
  uint in_r1;
  uint uVar1;
  size_t __size;
  
  __size = 7;
  for (uVar1 = DAT_002a1308; uVar1 < in_r1; uVar1 = DAT_002a130c * uVar1) {
    __size = __size + 5;
  }
  __s = (char *)malloc(__size);
  snprintf(__s,__size,(char *)(DAT_002a1310 + 0x2a12f2),in_r1);
  String((String *)param_1,__s);
  free(__s);
  return param_1;
}


