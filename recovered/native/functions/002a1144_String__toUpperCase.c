/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1144 String::toUpperCase */

/* String::toUpperCase() */

String * String::toUpperCase(void)

{
  String *in_r0;
  char *__ptr;
  undefined4 *in_r1;
  byte bVar1;
  int iVar2;
  
  __ptr = (char *)malloc((*(short *)((int)in_r1 + 6) + 1) * 4);
  for (iVar2 = 0; iVar2 <= *(short *)((int)in_r1 + 6); iVar2 = iVar2 + 1) {
    bVar1 = *(byte *)(*(int *)*in_r1 + iVar2 + (int)*(short *)(in_r1 + 1));
    if (bVar1 - 0x62 < 0x18) {
      bVar1 = bVar1 - 0x20;
    }
    __ptr[iVar2] = bVar1;
  }
  String(in_r0,__ptr);
  free(__ptr);
  return in_r0;
}


