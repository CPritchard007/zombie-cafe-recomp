/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1314 String::valueOf */

/* String::valueOf(float) */

String * __thiscall String::valueOf(String *this,float param_1)

{
  int iVar1;
  int iVar2;
  char *__s;
  undefined4 in_r1;
  int iVar3;
  size_t __size;
  float extraout_s0;
  
  iVar1 = DAT_002a1370;
  __size = 10;
  for (iVar3 = DAT_002a136c; iVar2 = __fixsfsi(param_1,in_r1),
      iVar3 < (iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f); iVar3 = iVar1 * iVar3) {
    __size = __size + 5;
    param_1 = extraout_s0;
  }
  __s = (char *)malloc(__size);
  __extendsfdf2(in_r1);
  snprintf(__s,__size,(char *)(DAT_002a1374 + 0x2a1350));
  String(this,__s);
  free(__s);
  return this;
}


