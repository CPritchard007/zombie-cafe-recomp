/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bbdf8 L_GetThreeByteMultiChar */

/* L_GetThreeByteMultiChar(char const*) */

int L_GetThreeByteMultiChar(char *param_1)

{
  int iVar1;
  
  if ((((byte)param_1[1] - 0x80 & 0xff) < 0x40) && (((byte)param_1[2] - 0x80 & 0xff) < 0x40)) {
    iVar1 = (((uint)(byte)*param_1 << 0x1c) >> 0x10) + ((byte)param_1[1] & 0x3f) * 0x40 +
            ((byte)param_1[2] & 0x3f);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


