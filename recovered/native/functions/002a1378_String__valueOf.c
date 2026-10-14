/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1378 String::valueOf */

/* String::valueOf(double) */

String * String::valueOf(double param_1)

{
  int iVar1;
  String *in_r0;
  int iVar2;
  char *__s;
  undefined4 in_r2;
  undefined4 in_r3;
  size_t __size;
  int iVar3;
  
  iVar1 = DAT_002a13d4;
  __size = 10;
  for (iVar3 = DAT_002a13d0; iVar2 = __fixdfsi(in_r2,in_r3),
      iVar3 < (iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f); iVar3 = iVar1 * iVar3) {
    __size = __size + 5;
  }
  __s = (char *)malloc(__size);
  snprintf(__s,__size,(char *)(DAT_002a13d8 + 0x2a13b2));
  String(in_r0,__s);
  free(__s);
  return in_r0;
}


