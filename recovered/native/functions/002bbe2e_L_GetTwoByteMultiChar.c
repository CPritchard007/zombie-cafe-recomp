/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbe2e L_GetTwoByteMultiChar */

/* L_GetTwoByteMultiChar(char const*) */

int L_GetTwoByteMultiChar(char *param_1)

{
  int iVar1;
  
  if (((byte)param_1[1] - 0x80 & 0xff) < 0x40) {
    iVar1 = ((byte)*param_1 & 0x1f) * 0x40 + ((byte)param_1[1] & 0x3f);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


